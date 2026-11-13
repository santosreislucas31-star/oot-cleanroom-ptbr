"""English words for text-bearing textures (the decomp's names + the game's text).

label(path) -> list of lines, or None. Lines split with "|".
"""
import re

FIX = {
    # do-action labels
    "Num1DoAction": "1", "Num2DoAction": "2", "Num3DoAction": "3", "Num4DoAction": "4",
    "Num5DoAction": "5", "Num6DoAction": "6", "Num7DoAction": "7", "Num8DoAction": "8",
    "PutAwayDoAction": "Guardar", "UnusedNaviDoAction": "Navi",
    # place title cards
    "GERudoTrainingGroundTitleCard": "Campo de Treinamento Gerudo",
    "GERudoValleyTitleCard": "Vale Gerudo", "GERudosFortressTitleCard": "Fortaleza Gerudo",
    "JabuJabuTitleCard": "Dentro da Barriga de Jabu-Jabu", "DodongosCavernTitleCard": "Caverna dos Dodongos",
    "InsideGanonsCastleTitleCard": "Dentro do Castelo de Ganon", "DekuTreeTitleCard": "Dentro da Árvore Deku",
    "GreatFairysFountainTitleCard": "Fonte da Grande Fada", "ChamberOfTheSagesTitleCard": "Câmara dos Sábios",
    "TempleOfTimeTitleCard": "Templo do Tempo", "HouseOfSkulltulaTitleCard": "Casa das Skulltulas",
    "GravekeepersHutTitleCard": "Cabana do Coveiro", "ZorasRiverTitleCard": "Rio dos Zoras",
    "ZorasDomainTitleCard": "Domínio dos Zoras", "ZorasFountainTitleCard": "Fonte dos Zoras",
    "GanonsCastleTitleCard": "Castelo de Ganon", "RoyalFamilysTombTitleCard": "Túmulo da Família Real",
    "FairysFountainTitleCard": "Fonte das Fadas", "BombchuBowlingAlleyCard": "Boliche de Bombchus",
    "LonLonRanchTitleCard": "Fazenda Lon Lon", "HappyMaskShopTitleCard": "Loja de Máscaras Felizes",
    "TreasureBoxShopTitleCard": "Loja dos Baús de Tesouro", "BottomOfTheWellTitleCard": "Fundo do Poço",
    "QuestionMarkTitleCard": "???", "ThievesHideoutTitleCard": "Esconderijo dos Ladrões",
    "LakesideLaboratoryTitleCard": "Laboratório à Beira do Lago",
    # boss title cards (name | subtitle)
    "BarinadeTitleCard": "Anêmona Bioelétrica|Barinade", "VolvagiaBossTitleCard": "Dragão de Lava Subterrâneo|Volvagia",
    "PhantomGanonTitleCard": "Espírito Maligno do Além|Phantom Ganon", "GanondorfTitleCard": "Grande Rei do Mal|Ganondorf",
    "GanonTitleCard": "Ganon", "GohmaTitleCard": "Aracnídeo Blindado Parasita|Gohma",
    "KingDodongoTitleCard": "Dinossauro Infernal|Rei Dodongo", "MorphaTitleCard": "Ameba Aquática Gigante|Morpha",
    "BongoTitleCard": "Fera das Sombras Fantasmagórica|Bongo Bongo", "TwinrovaTitleCard": "Irmãs Feiticeiras|Twinrova",
    # item names
    "BiggoronsSwordItemName": "Espada de Biggoron", "BombBag20ItemName": "Bolsa de Bombas", "BombBag30ItemName": "Bolsa Grande de Bombas",
    "BombBag40ItemName": "Maior Bolsa de Bombas", "BombItemName": "Bomba", "BombchuItemName": "Bombchu",
    "BottledFairyItemName": "Fada", "BrokenGiantsKnifeItemName": "Faca dos Gigantes (Quebrada)",
    "BrokenGoronsSwordItemName": "Espada dos Gorons Quebrada", "BulletBag30ItemName": "Bolsa de Sementes",
    "BulletBag40ItemName": "Bolsa Maior de Sementes", "BulletBag50ItemName": "Maior Bolsa de Sementes",
    "DekuNutItemName": "Nozes Deku", "DekuStickItemName": "Graveto Deku", "DinsFireItemName": "Fogo de Din",
    "DungeonMapItemName": "Mapa", "EponasSongItemName": "Canção de Epona", "EyeBallFrogItemName": "Sapo-Olho",
    "FaroresWindItemName": "Vento de Farore", "FireArrowItemName": "Flecha de Fogo", "FullMilkItemName": "Leite Lon Lon",
    "GerudosCardItemName": "Cartão Gerudo", "GiantsKnifeItemName": "Faca dos Gigantes",
    "GoldSkulltulaItemName": "Ficha da Skulltula Dourada", "GoronsBraceletItemName": "Pulseira dos Gorons",
    "GoronsRubyItemName": "Rubi dos Gorons", "HalfMilkItemName": "Leite Lon Lon (Metade)",
    "IceArrowItemName": "Flecha de Gelo", "LensItemName": "Lente da Verdade", "LightArrowItemName": "Flecha de Luz",
    "MaskofTruthItemName": "Máscara da Verdade", "MinuetOfForestItemName": "Minueto da Floresta",
    "NayrusLoveItemName": "Amor de Nayru", "NocturneOfShadowItemName": "Noturno das Sombras",
    "OcarinaOfTimeItemName": "Ocarina do Tempo", "PieceOfHeartItemName": "Pedaço de Coração",
    "PreludeOfLightItemName": "Prelúdio da Luz", "Quiver30ItemName": "Aljava",
    "Quiver40ItemName": "Aljava Grande", "Quiver50ItemName": "Maior Aljava",
    "RequiemOfSpiritItemName": "Réquiem do Espírito", "RutosLetterItemName": "Carta de Ruto",
    "SOLDOUTItemName": "ESGOTADO", "SariasSongItemName": "Canção de Saria",
    "SerenadeOfWaterItemName": "Serenata da Água", "SongOfStormsItemName": "Canção das Tempestades",
    "SongOfTimeItemName": "Canção do Tempo", "StoneofAgonyItemName": "Pedra da Agonia",
    "SunsSongItemName": "Canção do Sol", "UnusedBigKeyItemName": "Chave do Chefe",
    "ZeldasLetterItemName": "Carta de Zelda", "ZeldasLullabyItemName": "Canção de Ninar de Zelda",
    "ZorasSapphireItemName": "Safira dos Zoras", "EmptyBottleItemName": "Garrafa",
    "EyeDropsItemName": "Colírio", "PoachersSawItemName": "Serrote do Caçador",
    "BoleroOfFireItemName": "Bolero do Fogo", "FairyBowItemName": "Arco das Fadas",
    "FairyOcarinaItemName": "Ocarina das Fadas", "FairySlingshotItemName": "Estilingue das Fadas",
    "GerudoMaskItemName": "Máscara Gerudo", "KeatonMaskItemName": "Máscara Keaton",
    # additional inventory and equipment labels
    "DekuShieldItemName": "Escudo Deku", "HylianShieldItemName": "Escudo Hylian",
    "MirrorShieldItemName": "Escudo Espelhado", "KokiriSwordItemName": "Espada Kokiri",
    "MasterSwordItemName": "Espada Mestra", "BiggoronSwordItemName": "Espada de Biggoron",
    "HookshotItemName": "Gancho", "LongshotItemName": "Gancho Longo",
    "MegatonHammerItemName": "Martelo Megaton", "GoronTunicItemName": "Túnica Goron",
    "ZoraTunicItemName": "Túnica Zora", "IronBootsItemName": "Botas de Ferro",
    "HoverBootsItemName": "Botas Flutuantes", "SilverGauntletsItemName": "Manoplas de Prata",
    "GoldenGauntletsItemName": "Manoplas Douradas", "SilverScaleItemName": "Escama de Prata",
    "GoldenScaleItemName": "Escama Dourada", "MagicBeanItemName": "Feijão Mágico",
    "MagicJarSmallItemName": "Pote de Magia Pequeno", "MagicJarLargeItemName": "Pote de Magia Grande",
    "RecoveryHeartItemName": "Coração de Recuperação", "HeartContainerItemName": "Recipiente de Coração",
    "BossKeyItemName": "Chave do Chefe", "SmallKeyItemName": "Chave Pequena",
    "CompassItemName": "Bússola", "GerudoMembershipCardItemName": "Cartão de Associado Gerudo",
    "OddMushroomItemName": "Cogumelo Estranho", "OddPotionItemName": "Poção Estranha",
    "CojiroItemName": "Cojiro", "CuccosItemName": "Cuccos", "PocketEggItemName": "Ovo de Bolso",
    "PocketCuccoItemName": "Cucco de Bolso", "ZoraEggItemName": "Ovo de Zora",
    "WeirdEggItemName": "Ovo Esquisito", "ClaimCheckItemName": "Comprovante",
    "PrescriptionItemName": "Receita Médica", "EyeballFrogItemName": "Sapo-Olho",
    "EyedropsItemName": "Colírio", "SawItemName": "Serrote",
    "BrokenGiantsKnifeItemName": "Faca dos Gigantes Quebrada",
    "SkullMaskItemName": "Máscara de Caveira", "SpookyMaskItemName": "Máscara Assustadora",
    "BunnyHoodItemName": "Máscara de Coelho", "GoronMaskItemName": "Máscara Goron",
    "ZoraMaskItemName": "Máscara Zora", "GerudoMaskItemName": "Máscara Gerudo",
    "KeatonMaskItemName": "Máscara Keaton", "MaskOfTruthItemName": "Máscara da Verdade",
    "KokiriEmeraldItemName": "Esmeralda Kokiri", "GoronRubyItemName": "Rubi dos Gorons",
    "ZoraSapphireItemName": "Safira dos Zoras", "LightMedallionItemName": "Medalhão da Luz",
    "ForestMedallionItemName": "Medalhão da Floresta", "FireMedallionItemName": "Medalhão do Fogo",
    "WaterMedallionItemName": "Medalhão da Água", "ShadowMedallionItemName": "Medalhão das Sombras",
    "SpiritMedallionItemName": "Medalhão do Espírito",
    # pause map names (Point = world map cursor, Position = current position)
    "DeathMountainCraterPositionName": "Montanha da Morte|Cratera", "DeathMountainTrailPositionName": "Montanha da Morte|Trilha",
    "GerudosFortressPointName": "Fortaleza Gerudo", "GerudosFortressPositionName": "Fortaleza|Gerudo",
    "HauntedWastelandPositionName": "Deserto|Assombrado", "HyliaLakesidePointName": "Lago Hylia",
    "KakarikoVillagePositionName": "Vila|Kakariko", "LonLonRanchPositionName": "Fazenda|Lon Lon",
    "LonLonRanchPointName": "Fazenda Lon Lon", "SacredForestMeadowPositionName": "Prado da|Floresta Sagrada",
    "ZorasDomainPointName": "Domínio dos Zoras", "ZorasDomainPositionName": "Domínio dos|Zoras",
    "ZorasFountainPositionName": "Fonte dos|Zoras", "ZorasRiverPositionName": "Rio dos|Zoras",
    "GanonsCastlePositionName": "Castelo de|Ganon", "HyruleCastlePositionName": "Castelo de|Hyrule",
    "DesertColossusPositionName": "Colosso do|Deserto", "HyruleFieldPositionName": "Campo de|Hyrule",
    "KokiriForestPositionName": "Floresta|Kokiri", "LostWoodsPositionName": "Bosque|Perdido",
    "LakeHyliaPositionName": "Lago|Hylia", "GoronCityPositionName": "Cidade dos|Gorons",
    "GerudoValleyPositionName": "Vale|Gerudo", "QuestionMarkPositionName": "?", "QuestionMarkPointName": "?",
    # pause strings
    "PauseBotWTitle": "Fundo do Poço", "PauseDekuTitle": "Dentro da Árvore Deku",
    "PauseDodongoTitle": "Caverna dos Dodongos", "PauseFireTitle": "Templo do Fogo", "PauseForestTitle": "Templo da Floresta",
    "PauseIceCavernTitle": "Caverna de Gelo", "PauseJabuTitle": "Barriga de Jabu-Jabu", "PauseShadowTitle": "Templo das Sombras",
    "PauseSpiritTitle": "Templo do Espírito", "PauseWaterTitle": "Templo da Água",
    "PauseCurrentPosition": "Posição atual", "PauseNo": "Não", "PauseYes": "Sim",
    "PauseSaveConfirmation": "Jogo salvo.", "PauseSavePrompt": "Deseja salvar?",
    "PauseToDecide": "para Confirmar", "PauseToEquip": "para Equipar", "PauseToEquipment": "para Equipamento",
    "PauseToMap": "para o Mapa", "PauseToPlayMelody": "para tocar melodia", "PauseToQuestStatus": "para o Status da Missão",
    "PauseToSelectItem": "para Selecionar Item", "ContinuePlaying": "Continuar jogando?",
    "NaviCUp": "Navi",
    # file select
    "FileSelAreYouSure2": "Tem certeza?", "FileSelAreYouSure": "Tem certeza?",
    "FileSelCheckBrightnessENGNTSC": "Ajuste o brilho até|o símbolo ficar quase invisível",
    "FileSelControls": "A - Confirmar  •  B - Cancelar", "FileSelCopyButton": "Copiar",
    "FileSelCopyToWhichFile": "Copiar para qual arquivo?", "FileSelCopyWhichFile": "Qual arquivo copiar?",
    "FileSelENDButton": "FIM", "FileSelEraseButton": "Apagar", "FileSelEraseWhichFile": "Qual arquivo apagar?",
    "FileSelFile1Button": "Arquivo 1", "FileSelFile2Button": "Arquivo 2", "FileSelFile3Button": "Arquivo 3",
    "FileSelFileCopied": "Arquivo copiado.", "FileSelFileEmpty": "Arquivo vazio.", "FileSelFileErased": "Arquivo apagado.",
    "FileSelFileInUse": "Arquivo em uso.", "FileSelHeadset": "FONE", "FileSelHold": "SEGURAR",
    "FileSelLTargeting": "MIRA L", "FileSelMono": "MONO", "FileSelName": "Nome?",
    "FileSelNoEmptyFile": "Nenhum arquivo vazio.", "FileSelNoFileToCopy": "Nenhum arquivo para copiar.",
    "FileSelNoFileToErase": "Nenhum arquivo para apagar.", "FileSelOpenThisFile": "Abrir este arquivo?",
    "FileSelOptionsButton": "Opções", "FileSelOptions": "OPÇÕES", "FileSelPleaseSelectAFile": "Selecione um arquivo.",
    "FileSelQuitButton": "Sair", "FileSelSOUND": "SOM", "FileSelSaveX": "SALVAR",
    "FileSelStereo": "ESTÉREO", "FileSelSurround": "SURROUND", "FileSelSwitch": "ALTERNAR",
    "FileSelYesButton": "Sim", "FileSelDISKButton": "DISCO", "FileSelBackspaceButton": "←",
    # end credits / title
    "sOcarinaOfTime": "Ocarina do Tempo", "sPresentedBy": "apresentado por", "sTheEnd": "Fim",
    "sTheLegendOfZelda": "A Lenda de Zelda", "gTitleCopyright1998": "© 1998 Nintendo",
    "gTitleOcarinaOfTimeTMText": "OCARINA DO TEMPO™", "gTitleTheLegendOfText": "A LENDA DE",
    "gTitleDisk": "DISCO",
}


def _split(name):
    s = re.sub(r"(?<=[a-z])(?=[A-Z0-9])|(?<=[A-Z])(?=[A-Z][a-z])", " ", name)
    s = re.sub(r"\bOf\b", "of", s)
    s = re.sub(r"\bThe\b(?!^)", "the", s)
    return s[0].upper() + s[1:] if s else s


# Conservative Portuguese vocabulary for ENG texture labels without a FIX entry.
_PT_PHRASES = {
    "death mountain": "Montanha da Morte",
    "lost woods": "Bosque Perdido",
    "forest temple": "Templo da Floresta",
    "fire temple": "Templo do Fogo",
    "water temple": "Templo da Água",
    "shadow temple": "Templo das Sombras",
    "spirit temple": "Templo do Espírito",
    "temple of time": "Templo do Tempo",
    "hyrule field": "Campo de Hyrule",
    "kakariko village": "Vila Kakariko",
    "gerudo valley": "Vale Gerudo",
    "bottom of the well": "Fundo do Poço",
    "haunted wasteland": "Deserto Assombrado",
    "desert colossus": "Colosso do Deserto",
    "lon lon ranch": "Fazenda Lon Lon",
    "royal familys tomb": "Túmulo da Família Real",
    "ganons castle": "Castelo de Ganon",
    "inside ganons castle": "Dentro do Castelo de Ganon",
    "gerudos fortress": "Fortaleza Gerudo",
    "zoras domain": "Domínio dos Zoras",
    "zoras fountain": "Fonte dos Zoras",
    "zoras river": "Rio dos Zoras",
    "deku tree": "Árvore Deku",
    "inside deku tree": "Dentro da Árvore Deku",
    "great fairys fountain": "Fonte da Grande Fada",
    "chamber of the sages": "Câmara dos Sábios",
    "house of skulltula": "Casa das Skulltulas",
    "gravekeepers hut": "Cabana do Coveiro",
    "treasure box shop": "Loja dos Baús de Tesouro",
    "happy mask shop": "Loja de Máscaras Felizes",
    "thieves hideout": "Esconderijo dos Ladrões",
    "lakeside laboratory": "Laboratório à Beira do Lago",
}

_PT_WORDS = {
    "inside": "Dentro", "temple": "Templo", "forest": "Floresta",
    "fire": "Fogo", "water": "Água", "shadow": "Sombras",
    "spirit": "Espírito", "ice": "Gelo", "cavern": "Caverna",
    "cave": "Caverna", "village": "Vila", "town": "Cidade",
    "shop": "Loja", "house": "Casa", "lake": "Lago",
    "mountain": "Montanha", "river": "Rio", "field": "Campo",
    "desert": "Deserto", "castle": "Castelo", "fountain": "Fonte",
    "valley": "Vale", "tomb": "Túmulo", "graveyard": "Cemitério",
    "ranch": "Fazenda", "island": "Ilha", "bridge": "Ponte",
    "market": "Mercado", "entrance": "Entrada", "exit": "Saída",
    "room": "Sala", "boss": "Chefe", "key": "Chave", "map": "Mapa",
    "compass": "Bússola", "heart": "Coração", "piece": "Pedaço",
    "bottle": "Garrafa", "mask": "Máscara", "sword": "Espada",
    "shield": "Escudo", "boots": "Botas", "tunic": "Túnica",
    "arrow": "Flecha", "bomb": "Bomba", "song": "Canção",
    "letter": "Carta", "egg": "Ovo", "potion": "Poção",
    "mushroom": "Cogumelo", "fairy": "Fada", "giant": "Gigante",
    "great": "Grande", "small": "Pequeno", "hidden": "Escondido",
    "secret": "Secreto", "training": "Treinamento", "alley": "Beco",
    "bowling": "Boliche", "laboratory": "Laboratório",
    "fortress": "Fortaleza", "hideout": "Esconderijo", "well": "Poço",
    "chamber": "Câmara", "sages": "Sábios", "thieves": "Ladrões",
    "treasure": "Tesouro", "box": "Baú", "pond": "Lago",
    "domain": "Domínio", "woods": "Bosque", "lost": "Perdido",
    "haunted": "Assombrado", "gerudo": "Gerudo", "zora": "Zora",
    "goron": "Goron", "hyrule": "Hyrule", "kokiri": "Kokiri",
    "deku": "Deku", "time": "Tempo", "light": "Luz", "death": "Morte",
    "sacred": "Sagrado", "royal": "Real", "family": "Família",
    "king": "Rei", "dragon": "Dragão", "select": "Selecionar",
    "save": "Salvar", "quit": "Sair", "open": "Abrir",
    "speak": "Falar", "check": "Verificar", "enter": "Entrar",
    "attack": "Atacar", "grab": "Pegar", "throw": "Arremessar",
    "climb": "Escalar", "dive": "Mergulhar", "jump": "Pular",
}


def _translate_fallback(text):
    phrase = _PT_PHRASES.get(text.casefold())
    if phrase:
        return phrase
    return re.sub(
        r"[A-Za-zÀ-ÿ]+",
        lambda m: _PT_WORDS.get(m.group(0).casefold(), m.group(0)),
        text,
    )


def key(path):
    base = path.rsplit("/", 1)[1]
    k = re.sub(r"(ENGNTSC|ENG)?Tex$", "", base)
    k = k[1:] if k.startswith("g") and k[1:2].isupper() else k
    return base, k


def label(path):
    base, k = key(path)
    if "JPN" in base:
        return None
    for cand in (k, "g" + k, base.replace("Tex", "")):
        if cand in FIX:
            return FIX[cand].split("|")
    if "ENG" not in base:
        return None
    for suf in ("DoAction", "TitleCard", "ItemName", "PositionName", "PointName"):
        if k.endswith(suf):
            return [_translate_fallback(_split(k[:-len(suf)]))]
    return None
