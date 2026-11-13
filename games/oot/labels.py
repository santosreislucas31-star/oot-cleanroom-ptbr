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
    "BarinadeTitleCard": "Bio-Electric Anemone|Barinade", "VolvagiaBossTitleCard": "Subterranean Lava Dragon|Volvagia",
    "PhantomGanonTitleCard": "Evil Spirit from Beyond|Phantom Ganon", "GanondorfTitleCard": "Great King of Evil|Ganondorf",
    "GanonTitleCard": "Ganon", "GohmaTitleCard": "Parasitic Armored Arachnid|Gohma",
    "KingDodongoTitleCard": "Infernal Dinosaur|King Dodongo", "MorphaTitleCard": "Giant Aquatic Amoeba|Morpha",
    "BongoTitleCard": "Phantom Shadow Beast|Bongo Bongo", "TwinrovaTitleCard": "Sorceress Sisters|Twinrova",
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
            return [_split(k[:-len(suf)])]
    return None
