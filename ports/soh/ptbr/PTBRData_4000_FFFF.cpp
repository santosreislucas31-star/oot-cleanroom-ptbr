#include "PTBRDataChunks.h"

const PTBRMessageData kPTBRMessages_4000_FFFF[] = {
    {
        0x4000,
        R"PTBR(<UNSKIPPABLE>Esses olhos são uma delícia!<NEWLINE>Hoje vou fazer olhos fritos<NEWLINE>pela primeira vez em muito tempo!<NEWLINE>Ho, ho, ho, ho!<BOX_BREAK><UNSKIPPABLE>Que maravilha! Agradeça<NEWLINE>ao Rei Zora por mim!<NEWLINE>Hã? O quê?<EVENT><END>)PTBR",
        0x01
    },
    {
        0x4001,
        R"PTBR(<UNSKIPPABLE>São para fazer o <COLOR:RED>colírio<NEWLINE>de Biggoron<COLOR:DEFAULT>? Ah, que decepção!<NEWLINE>Devia ter dito isso<NEWLINE>logo de início!<EVENT><END>)PTBR",
        0x01
    },
    {
        0x4002,
        R"PTBR(<UNSKIPPABLE><NAME>!<NEWLINE>Por aqui! Hu, hu!<BOX_BREAK_DELAYED:0x28><UNSKIPPABLE>O que será que <COLOR:RED>Saria<COLOR:DEFAULT> está fazendo?<NEWLINE>Que tal voltar à floresta<NEWLINE>qualquer hora?<END>)PTBR",
        0x03
    },
    {
        0x4003,
        R"PTBR(<UNSKIPPABLE>O que faz por aqui? Você veio<NEWLINE>de longe para chegar até aqui...<BOX_BREAK_DELAYED:0x28><UNSKIPPABLE>Consulte a <COLOR:RED>tela do<NEWLINE>Mapa<COLOR:DEFAULT> de vez em quando.<BOX_BREAK><UNSKIPPABLE><NAME>, este belo lago<NEWLINE>tem águas puras e cristalinas.<BOX_BREAK><UNSKIPPABLE>No fundo do lago, fica o<NEWLINE><COLOR:BLUE>Templo da Água<COLOR:DEFAULT>, dedicado aos<NEWLINE>espíritos da água. Os <COLOR:BLUE>Zoras<COLOR:DEFAULT><NEWLINE>são seus guardiões. Hu, hu!<BOX_BREAK><UNSKIPPABLE>Os Zoras vêm do Domínio Zora,<NEWLINE>no nordeste de Hyrule. Esse povo<NEWLINE>aquático é aliado da Família Real<NEWLINE>de Hyrule há muito tempo.<BOX_BREAK><UNSKIPPABLE>Ouvi dizer que só a Família Real<NEWLINE>pode entrar no Domínio Zora...<NEWLINE>Hu, hu!<BOX_BREAK><UNSKIPPABLE>Estou voltando para o <COLOR:RED>castelo<COLOR:DEFAULT>.<NEWLINE>Se quiser vir comigo,<NEWLINE>segure minhas garras!<END>)PTBR",
        0x03
    },
    {
        0x4004,
        R"PTBR(Estou voltando para o <COLOR:RED>castelo<COLOR:DEFAULT>.<NEWLINE>Se quiser vir comigo,<NEWLINE>segure minhas garras!<END>)PTBR",
        0x00
    },
    {
        0x4005,
        R"PTBR(<UNSKIPPABLE>...Hã?<BOX_BREAK><UNSKIPPABLE>Parece que já há algo<NEWLINE>dentro deste frasco.<NEWLINE>É uma <COLOR:RED>carta<COLOR:DEFAULT>:<BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x0C>"<COLOR:PURPLE>Socorro.<NEWLINE><COLOR:DEFAULT><SHIFT:0x0C><COLOR:PURPLE>Estou esperando na barriga do<NEWLINE><COLOR:DEFAULT><SHIFT:0x0C><COLOR:YELLOW>Lorde Jabu-Jabu<COLOR:PURPLE>.<NEWLINE><COLOR:DEFAULT><SHIFT:0x18>--<COLOR:YELLOW>Ruto<COLOR:DEFAULT><QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x0C><COLOR:PURPLE>PS: Não conte ao meu pai!<COLOR:DEFAULT>"<QUICKTEXT_DISABLE><END>)PTBR",
        0x20
    },
    {
        0x4006,
        R"PTBR(<UNSKIPPABLE>Quem é você?<BOX_BREAK><UNSKIPPABLE>Somos os <COLOR:BLUE>Zoras<COLOR:DEFAULT>,<NEWLINE>um orgulhoso povo aquático!<BOX_BREAK><UNSKIPPABLE>Então... Diz que tem<NEWLINE>alguma ligação com a<NEWLINE>Família Real de Hyrule...<NEWLINE>Bem, o que deseja de nós?<END>)PTBR",
        0x00
    },
    {
        0x4007,
        R"PTBR(Somos ótimos mergulhadores!<NEWLINE>E você?<BOX_BREAK>Para dominar o mergulho,<NEWLINE>tente o <COLOR:RED>jogo de mergulho<COLOR:DEFAULT><NEWLINE>no alto da cachoeira!<NEWLINE>Já experimentou?<END>)PTBR",
        0x00
    },
    {
        0x4008,
        R"PTBR(<UNSKIPPABLE>A Fonte Zora é a<NEWLINE>nascente do rio.<NEWLINE>O <COLOR:RED>Lorde Jabu-Jabu<COLOR:DEFAULT> vive<NEWLINE>nessa fonte.<TEXTID:0x40,0x09>)PTBR",
        0x00
    },
    {
        0x4009,
        R"PTBR(O Lorde Jabu-Jabu é o deus protetor<NEWLINE>dos Zoras. A <COLOR:RED>Princesa Ruto<COLOR:DEFAULT><NEWLINE>prepara as refeições dele,<NEWLINE>de manhã e à noite.<END>)PTBR",
        0x00
    },
    {
        0x400A,
        R"PTBR(Todos nós, Zoras, servimos<NEWLINE>ao grande <COLOR:RED>Rei Zora<COLOR:DEFAULT>.<END>)PTBR",
        0x00
    },
    {
        0x400B,
        R"PTBR(O grande Rei Zora deve estar<NEWLINE>na <COLOR:RED>Câmara Real<COLOR:DEFAULT>.<END>)PTBR",
        0x00
    },
    {
        0x400C,
        R"PTBR(Você viu o Lorde Jabu-Jabu?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x400D,
        R"PTBR(Segundo a "Lenda Zora",<NEWLINE>oferecer um <COLOR:RED>peixe<COLOR:DEFAULT> ao Lorde<NEWLINE>Jabu-Jabu traz felicidade.<END>)PTBR",
        0x00
    },
    {
        0x400E,
        R"PTBR(Ah, que pena.<BOX_BREAK>Quem vem aqui deveria<NEWLINE>ver o <COLOR:RED>Lorde Jabu-Jabu<COLOR:DEFAULT><NEWLINE>pelo menos uma vez!<BOX_BREAK>A Fonte Zora fica atrás do trono<NEWLINE>do Rei Zora. É lá que o<NEWLINE>Lorde Jabu-Jabu nada. Mas...<BOX_BREAK>Você só pode entrar<NEWLINE>na Fonte Zora com<NEWLINE>a permissão do Rei Zora.<END>)PTBR",
        0x00
    },
    {
        0x400F,
        R"PTBR(<UNSKIPPABLE>Não encontramos a <COLOR:RED>Princesa Ruto<NEWLINE><COLOR:DEFAULT>nem mesmo procurando<NEWLINE>até o <COLOR:BLUE>Lago Hylia<COLOR:DEFAULT>...<END>)PTBR",
        0x00
    },
    {
        0x4010,
        R"PTBR(Se encontrar pistas sobre onde<NEWLINE>está a <COLOR:RED>Princesa Ruto<COLOR:DEFAULT>,<NEWLINE>pode mostrá-las ao Rei Zora?<END>)PTBR",
        0x00
    },
    {
        0x4011,
        R"PTBR(Toda a água de Hyrule vem<NEWLINE>da <COLOR:BLUE>Fonte Zora<COLOR:DEFAULT>.<BOX_BREAK>Ela passa pelo Rio Zora<NEWLINE>e chega até o<NEWLINE><COLOR:BLUE>Lago Hylia<COLOR:DEFAULT>, ao sul.<END>)PTBR",
        0x00
    },
    {
        0x4012,
        R"PTBR(<UNSKIPPABLE>Ah... Voltei à vida!<BOX_BREAK><UNSKIPPABLE>Foi você quem me salvou?<NEWLINE>Não fique nervoso!<BOX_BREAK><UNSKIPPABLE>Parece que você tem dificuldade<NEWLINE>para respirar debaixo d'água.<BOX_BREAK><UNSKIPPABLE>Como agradecimento,<NEWLINE>dou a você esta <COLOR:RED>túnica<COLOR:DEFAULT>. Com ela,<NEWLINE>não ficará sem ar debaixo d'água.<END>)PTBR",
        0x03
    },
    {
        0x4013,
        R"PTBR(A Princesa Ruto foi ao Lago<NEWLINE>Hylia e ainda não voltou...<NEWLINE>Estou tão preocupado... De novo!<END>)PTBR",
        0x03
    },
    {
        0x4014,
        R"PTBR(<UNSKIPPABLE>Ah...<NEWLINE>Isto é... Bem... Humm...<NEWLINE>Humm... <COLOR:RED>Colírio<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Podemos dizer que temos,<NEWLINE>mas também que não temos...<NEWLINE>Temos os ingredientes.<BOX_BREAK><UNSKIPPABLE>Leve os <COLOR:RED>ingredientes<COLOR:DEFAULT> ao doutor<NEWLINE>do laboratório do lago.<NEWLINE>Ele pode preparar o colírio.<BOX_BREAK><UNSKIPPABLE>Mas precisam chegar lá<NEWLINE>ainda frescos...<TEXTID:0x40,0x15>)PTBR",
        0x03
    },
    {
        0x4015,
        R"PTBR(Consegue chegar <COLOR:RED>antes que<NEWLINE>estraguem<COLOR:DEFAULT>?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4016,
        R"PTBR(Acha que vão estragar<NEWLINE>antes de você chegar lá?<NEWLINE>Não é tão longe se fizer<NEWLINE>parte do caminho a cavalo...<END>)PTBR",
        0x00
    },
    {
        0x4017,
        R"PTBR(<UNSKIPPABLE>Hu, hu!<BOX_BREAK_DELAYED:0x28><UNSKIPPABLE><NAME>, parece que<NEWLINE>você está se acostumando<NEWLINE>à vida de aventureiro.<BOX_BREAK><UNSKIPPABLE>Acho que a Princesa Zelda<NEWLINE>está esperando outra visita sua.<BOX_BREAK><UNSKIPPABLE>Você já tem o <COLOR:RED>Rubi Goron<COLOR:DEFAULT>,<COLOR:RED><NEWLINE><COLOR:DEFAULT>não tem?<END>)PTBR",
        0x03
    },
    {
        0x4018,
        R"PTBR(Olá, rapaz. Pesquiso a produção<NEWLINE>de remédios misturando a<NEWLINE>água do Lago Hylia com<NEWLINE>várias substâncias incomuns.<BOX_BREAK>Talvez conheça a senhora<NEWLINE>da Loja de Poções... Ela é<NEWLINE>quase uma aluna minha...<NEWLINE>Ho, ho, ho!<END>)PTBR",
        0x00
    },
    {
        0x4019,
        R"PTBR(<QUICKTEXT_ENABLE>Ah, nossa!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Não via um <COLOR:RED>Sapo Olhudo<COLOR:DEFAULT><NEWLINE>como este desde que o<NEWLINE>Domínio Zora congelou!<EVENT><END>)PTBR",
        0x01
    },
    {
        0x401A,
        R"PTBR(Ah, minha doce <COLOR:RED>Princesa Ruto<COLOR:DEFAULT>...<NEWLINE>Para onde ela foi?<NEWLINE>Estou tão preocupado...<END>)PTBR",
        0x03
    },
    {
        0x401B,
        R"PTBR(<UNSKIPPABLE>Ah, esta carta!<NEWLINE>É da <COLOR:RED>Princesa Ruto<COLOR:DEFAULT>!!<BOX_BREAK><UNSKIPPABLE>Humm... Vejamos...<NEWLINE>Dentro do Lorde Jabu-Jabu?<NEWLINE>Não é possível!<BOX_BREAK><UNSKIPPABLE>Nosso protetor, o <COLOR:RED>Lorde Jabu-Jabu<COLOR:DEFAULT>,<NEWLINE>jamais comeria minha querida<NEWLINE>Princesa Ruto!<BOX_BREAK><UNSKIPPABLE>Mas, desde que <COLOR:RED>Ganondorf<COLOR:DEFAULT>,<NEWLINE>aquele estranho, esteve aqui,<NEWLINE>o Lorde Jabu-Jabu parece<NEWLINE>um pouco adoentado...<BOX_BREAK><UNSKIPPABLE>As provas são claras.<NEWLINE>Você irá procurar Ruto, é claro.<NEWLINE>Pode passar por aqui para chegar<NEWLINE>ao altar do Lorde Jabu-Jabu.<BOX_BREAK><UNSKIPPABLE>Fico com a carta. Pode levar o<NEWLINE><COLOR:RED>frasco<COLOR:DEFAULT> em que ela estava.<NEWLINE>Aceite-o com o devido respeito!<TEXTID:0x40,0x1C>)PTBR",
        0x03
    },
    {
        0x401C,
        R"PTBR(Encontre já minha <COLOR:RED>Princesa Ruto<COLOR:DEFAULT>,<NEWLINE>por favor... Zora!<END>)PTBR",
        0x03
    },
    {
        0x401D,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:LIGHTBLUE>Você não respira debaixo d'água!<NEWLINE>Se começar a ficar sem ar,<NEWLINE>tire essas <COLOR:DEFAULT>botas<COLOR:LIGHTBLUE>!<COLOR:DEFAULT><QUICKTEXT_DISABLE><FADE:0x3C><END>)PTBR",
        0x23
    },
    {
        0x401E,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x36>Ah, nããão!<QUICKTEXT_DISABLE><END>)PTBR",
        0x03
    },
    {
        0x401F,
        R"PTBR(<UNSKIPPABLE>Ahhh, voltei à vida...<NEWLINE>Foi você quem me salvou?<NEWLINE>Não fique tão nervoso!<BOX_BREAK><UNSKIPPABLE>Vou lhe dar uma <COLOR:BLUE>Túnica Zora<COLOR:DEFAULT><NEWLINE>como agradecimento. Com ela,<NEWLINE>você pode... O quê?!<BOX_BREAK><UNSKIPPABLE>Já tem uma? Você está<NEWLINE>preparado para tudo, não é?!<BOX_BREAK><UNSKIPPABLE>Para agradecer de coração...<NEWLINE>Que tal um BEIJO?! O quê?<NEWLINE>Não quer?! Ah, bem...<BOX_BREAK><UNSKIPPABLE>Já que não quer uma recompensa,<NEWLINE>pode ouvir meus problemas...<TEXTID:0x40,0x13>)PTBR",
        0x03
    },
    {
        0x4020,
        R"PTBR(Sou um <COLOR:BLUE>Zora<COLOR:DEFAULT>. Você viu uma<NEWLINE>bela garota Zora por aqui?<END>)PTBR",
        0x00
    },
    {
        0x4021,
        R"PTBR(Sou um <COLOR:BLUE>Zora<COLOR:DEFAULT>. Você viu<NEWLINE>algo estranho no lago?<NEWLINE>O rio traz muitas coisas<NEWLINE>para este lago!<END>)PTBR",
        0x00
    },
    {
        0x4022,
        R"PTBR(<UNSKIPPABLE>Você... <QUICKTEXT_ENABLE>Está atrasado!<QUICKTEXT_DISABLE><NEWLINE><QUICKTEXT_ENABLE>Por que demorou tanto?<QUICKTEXT_DISABLE><NEWLINE>Seu <QUICKTEXT_ENABLE>inútil!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Só me senti sozinha, nada mais...<NEWLINE>Só um pouquinho!!<END>)PTBR",
        0x00
    },
    {
        0x4023,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>Eu estava com medo...<QUICKTEXT_DISABLE><NEWLINE><QUICKTEXT_ENABLE>Um pouco!<QUICKTEXT_DISABLE> Só um pouquinho!!<END>)PTBR",
        0x00
    },
    {
        0x4024,
        R"PTBR(<UNSKIPPABLE><NAME>!<NEWLINE><NAME>!<END>)PTBR",
        0x52
    },
    {
        0x4025,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>Você!<QUICKTEXT_DISABLE><NEWLINE>Até que foi impressionante...<NEWLINE>Mais do que eu esperava...<NEWLINE><QUICKTEXT_ENABLE>Só um pouco!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Enfim, você me salvou,<NEWLINE>então merece uma recompensa.<BOX_BREAK><UNSKIPPABLE>O que deseja? É só dizer...<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Quero a Pedra Espiritual.<NEWLINE>Não quero nada...<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4026,
        R"PTBR(<UNSKIPPABLE>Você quer a Pedra Espiritual<NEWLINE>da Água, a <COLOR:BLUE>Safira Zora<COLOR:DEFAULT>, não é?<TEXTID:0x40,0x27>)PTBR",
        0x00
    },
    {
        0x4027,
        R"PTBR(<UNSKIPPABLE>Minha mãe me deu esta pedra e<NEWLINE>disse que só devo entregá-la<NEWLINE>ao meu futuro marido. É como<NEWLINE>um anel de noivado dos Zoras!<BOX_BREAK><UNSKIPPABLE><SHIFT:0x45><QUICKTEXT_ENABLE>Muito bem!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Vou lhe dar meu bem<NEWLINE>mais precioso:<NEWLINE>a Safira Zora!<END>)PTBR",
        0x00
    },
    {
        0x4028,
        R"PTBR(Não conte ao meu pai...<END>)PTBR",
        0x02
    },
    {
        0x4029,
        R"PTBR(<UNSKIPPABLE>Hi, hi, hi... Não seja tímido.<BOX_BREAK><UNSKIPPABLE>Sei o que está pensando...<TEXTID:0x40,0x27>)PTBR",
        0x00
    },
    {
        0x402A,
        R"PTBR(Quero comprar um peixe,<NEWLINE>mas estão caros demais...<BOX_BREAK>Só me resta pegar um<NEWLINE>dos peixes que nadam<NEWLINE>ali fora.<END>)PTBR",
        0x00
    },
    {
        0x402B,
        R"PTBR(Ah, <NAME>!<NEWLINE>Você salvou a princesa, hein?<NEWLINE>Muito obrigado!<END>)PTBR",
        0x03
    },
    {
        0x402C,
        R"PTBR(Meu bem mais precioso ajudou<NEWLINE>na sua jornada? Hi, hi!<END>)PTBR",
        0x00
    },
    {
        0x402D,
        R"PTBR(Olá, <NAME>!<NEWLINE>A Princesa Ruto só fala<NEWLINE>de você ultimamente!<END>)PTBR",
        0x00
    },
    {
        0x402E,
        R"PTBR(Ah, é você, <NAME>!<NEWLINE>Graças a você, o Lorde Jabu-Jabu<NEWLINE>voltou ao normal!<END>)PTBR",
        0x00
    },
    {
        0x402F,
        R"PTBR(<UNSKIPPABLE>Todos nós, Zoras, respeitamos<NEWLINE>o grande Rei Zora! Ele tem<NEWLINE>a dignidade de um rei. Ah, tem!<BOX_BREAK><UNSKIPPABLE>O grande Rei Zora tem uma<NEWLINE>filha, a Princesa <COLOR:RED>Ruto<COLOR:DEFAULT>.<NEWLINE>Ela é filha única.<BOX_BREAK><UNSKIPPABLE>Ela é uma menina levada<NEWLINE>e parece estar sempre<NEWLINE>dando trabalho ao rei!<TEXTID:0x40,0x0B>)PTBR",
        0x00
    },
    {
        0x4030,
        R"PTBR(<UNSKIPPABLE>Aqui está.<BOX_BREAK><UNSKIPPABLE>Este remédio não tem<NEWLINE>conservantes, então <COLOR:RED>não vai<NEWLINE>durar muito<COLOR:DEFAULT> nesta temperatura.<BOX_BREAK><UNSKIPPABLE>Corra para a Montanha da Morte<NEWLINE>o mais rápido que puder.<NEWLINE>Você é jovem, vai conseguir!<END>)PTBR",
        0x01
    },
    {
        0x4031,
        R"PTBR(<UNSKIPPABLE>Hu, hu! Parece que você já<NEWLINE>cresceu e ficou mais forte,<NEWLINE><NAME>!<BOX_BREAK><UNSKIPPABLE>Logo adiante fica o <COLOR:BLUE>Domínio Zora<COLOR:DEFAULT>.<NEWLINE>Os Zoras servem à Família Real<NEWLINE>de Hyrule protegendo<NEWLINE>esta nascente.<BOX_BREAK><UNSKIPPABLE>A entrada só se abre<NEWLINE>para quem tem<NEWLINE>alguma ligação com<NEWLINE>a Família Real.<BOX_BREAK><UNSKIPPABLE>Toque a <COLOR:RED>melodia da<NEWLINE>Família Real<COLOR:DEFAULT> para eles!<NEWLINE>Hu, hu, huuu!<END>)PTBR",
        0x03
    },
    {
        0x4032,
        R"PTBR(Quando voltar,<NEWLINE>não se esqueça de trazer<NEWLINE>uma lembrancinha para mim!<END>)PTBR",
        0x00
    },
    {
        0x4033,
        R"PTBR(<UNSKIPPABLE>Você encontrou a Princesa Ruto!<NEWLINE>Agora o Rei Zora vai lhe dar a<NEWLINE><COLOR:BLUE>Pedra Espiritual da Água<COLOR:DEFAULT>...<NEWLINE>Bem, talvez.<BOX_BREAK><UNSKIPPABLE>Hã?<END>)PTBR",
        0x20
    },
    {
        0x4034,
        R"PTBR(<UNSKIPPABLE>O bem mais precioso dela?<NEWLINE>Você não sabe do que ela está<NEWLINE>falando, mas já tem duas<NEWLINE>Pedras Espirituais! Só falta uma!<END>)PTBR",
        0x23
    },
    {
        0x4035,
        R"PTBR(<UNSKIPPABLE>O bem mais precioso dela?<NEWLINE>Você não sabe do que ela está<NEWLINE>falando, mas finalmente tem<NEWLINE>as três Pedras Espirituais!!<BOX_BREAK><UNSKIPPABLE>Volte para ver a Princesa Zelda!<END>)PTBR",
        0x23
    },
    {
        0x4036,
        R"PTBR(<UNSKIPPABLE>Nos revemos, <NAME>...<END>)PTBR",
        0x03
    },
    {
        0x4037,
        R"PTBR(<UNSKIPPABLE>Este gelo vem de uma maldição...<NEWLINE>O monstro do <COLOR:BLUE>Templo da<NEWLINE>Água<COLOR:DEFAULT> é a origem dela.<BOX_BREAK><UNSKIPPABLE>Enquanto ele não for derrotado,<NEWLINE>o gelo nunca vai derreter...<BOX_BREAK><UNSKIPPABLE>Se tiver coragem para<NEWLINE>enfrentar o perigo e salvar<NEWLINE>os Zoras, vou lhe ensinar<NEWLINE>a melodia que leva ao templo.<END>)PTBR",
        0x03
    },
    {
        0x4038,
        R"PTBR(<UNSKIPPABLE>O tempo passa, as pessoas mudam...<NEWLINE>Como um rio, esse fluxo não cessa...<BOX_BREAK><UNSKIPPABLE>A mente infantil dá lugar a<NEWLINE>ambições nobres... O amor jovem<NEWLINE>vira afeto profundo... A água<NEWLINE>cristalina reflete a maturidade...<BOX_BREAK><UNSKIPPABLE>Ouça agora a <COLOR:BLUE>Serenata da<NEWLINE>Água<COLOR:DEFAULT> e reflita sobre si mesmo...<END>)PTBR",
        0x03
    },
    {
        0x4039,
        R"PTBR(<UNSKIPPABLE>Se veio encontrar os Zoras,<NEWLINE>perdeu seu tempo...<NEWLINE>Isto é tudo o que restou...<BOX_BREAK><UNSKIPPABLE>Com uma única exceção, os Zoras<NEWLINE>estão presos sob esta<NEWLINE>espessa camada de gelo...<BOX_BREAK><UNSKIPPABLE>Consegui tirar a princesa Zora<NEWLINE>de debaixo do gelo, mas...<NEWLINE>Ela partiu para o <COLOR:BLUE>Templo da<NEWLINE>Água<COLOR:DEFAULT>...<END>)PTBR",
        0x03
    },
    {
        0x403A,
        R"PTBR(Para comprar peixe, precisa de<NEWLINE>um recipiente onde guardá-lo.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x403B,
        R"PTBR(Quer comprar uma <COLOR:BLUE>Túnica<NEWLINE>Zora<COLOR:DEFAULT>? Ela é feita com<NEWLINE>o melhor material e, por isso,<NEWLINE>custa muito caro!<BOX_BREAK>Na verdade, acho que só aquela<COLOR:RED><NEWLINE>família rica da Vila Kakariko<COLOR:DEFAULT><NEWLINE>pode pagar por essa bela roupa...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x403C,
        R"PTBR(403C<END>)PTBR",
        0x00
    },
    {
        0x403D,
        R"PTBR(403D<END>)PTBR",
        0x00
    },
    {
        0x403E,
        R"PTBR(<UNSKIPPABLE>Ah... Você... Se não me engano...<NEWLINE><NAME>?!<BOX_BREAK><UNSKIPPABLE>Você é <NAME>, não<NEWLINE>é?<BOX_BREAK><UNSKIPPABLE>Esta <BYTE:0x96> sua noiva, <COLOR:BLUE>Ruto<COLOR:DEFAULT>!<NEWLINE>A Princesa dos Zoras!<BOX_BREAK><UNSKIPPABLE>Nunca esqueci os votos<NEWLINE>que fizemos um ao outro<NEWLINE>há sete anos!<BOX_BREAK><UNSKIPPABLE>Como pôde me deixar<NEWLINE>esperando por sete longos anos?<NEWLINE>Você é terrível...<BOX_BREAK><UNSKIPPABLE>Mas agora não é hora<NEWLINE>de falar de amor...<BOX_BREAK><UNSKIPPABLE>Você deve ter visto!<NEWLINE>O Domínio Zora está congelado!<BOX_BREAK><UNSKIPPABLE>Um jovem chamado <COLOR:RED>Sheik<COLOR:DEFAULT><NEWLINE>me tirou de debaixo do gelo...<BOX_BREAK><UNSKIPPABLE>Mas meu pai e os outros Zoras<NEWLINE>não foram salvos<TEXT_SPEED:0x02>... ainda...<TEXT_SPEED:0x00><BOX_BREAK><UNSKIPPABLE>Quero salvar todos eles!<NEWLINE>Quero salvar o Domínio Zora!<BOX_BREAK><UNSKIPPABLE>Você! Precisa me ajudar!<NEWLINE>É um pedido meu,<NEWLINE>da mulher que vai ser<NEWLINE>sua esposa!<BOX_BREAK><UNSKIPPABLE><NAME>, ajude-me<NEWLINE>a destruir o monstro maligno<NEWLINE>do templo, está bem?!<BOX_BREAK><UNSKIPPABLE>No Templo da Água, há<NEWLINE><COLOR:RED>três lugares<COLOR:DEFAULT> onde você pode<NEWLINE>mudar o nível da água.<BOX_BREAK><UNSKIPPABLE>Vou mostrar o caminho.<NEWLINE>Siga-me, rápido!!<END>)PTBR",
        0x03
    },
    {
        0x403F,
        R"PTBR(<UNSKIPPABLE><NAME>! Cuidado!<NEWLINE>Aquela água ali<NEWLINE>não é normal!<END>)PTBR",
        0x02
    },
    {
        0x4040,
        R"PTBR(4040<END>)PTBR",
        0x00
    },
    {
        0x4041,
        R"PTBR(<UNSKIPPABLE><NAME>...<BOX_BREAK><UNSKIPPABLE>Eu não esperava menos<NEWLINE>do homem que escolhi<NEWLINE>para ser meu marido.<BOX_BREAK><UNSKIPPABLE>Com o tempo, o Domínio Zora<NEWLINE>e seu povo voltarão<NEWLINE>ao normal.<END>)PTBR",
        0x03
    },
    {
        0x4042,
        R"PTBR(<UNSKIPPABLE>Se vir Sheik,<NEWLINE>agradeça a ele por mim, está bem?<FADE:0x5A><END>)PTBR",
        0x52
    },
    {
        0x4043,
        R"PTBR(<UNSKIPPABLE>Ruto queria me agradecer?<BOX_BREAK><UNSKIPPABLE>Entendo...<BOX_BREAK><UNSKIPPABLE>Precisamos devolver a paz<NEWLINE>a Hyrule por ela também,<NEWLINE>não é?<END>)PTBR",
        0x03
    },
    {
        0x4044,
        R"PTBR(4044<END>)PTBR",
        0x00
    },
    {
        0x4045,
        R"PTBR(Ah, entendo...<NEWLINE>A Princesa Ruto foi<NEWLINE>ao Templo da Água...<END>)PTBR",
        0x03
    },
    {
        0x4046,
        R"PTBR(<UNSKIPPABLE>Como recompensa...<NEWLINE>Dou a você meu amor eterno.<BOX_BREAK><UNSKIPPABLE>Bem, era o que eu queria dizer,<NEWLINE>mas acho que não posso<NEWLINE>oferecer isso agora.<END>)PTBR",
        0x03
    },
    {
        0x4047,
        R"PTBR(<UNSKIPPABLE>A Princesa Zelda está viva...<NEWLINE>Posso sentir. Não desanime.<END>)PTBR",
        0x03
    },
    {
        0x4048,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x3F>Aaaah!<NEWLINE><SHIFT:0x0F>O que é isso?! Um polvo?!<QUICKTEXT_DISABLE><FADE:0x3C><END>)PTBR",
        0x02
    },
    {
        0x4049,
        R"PTBR(<UNSKIPPABLE>Preciso proteger o Templo<NEWLINE>da Água como a <COLOR:BLUE>Sábia da Água<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>E você... Está procurando<NEWLINE>a Princesa <COLOR:RED>Zelda<COLOR:DEFAULT>?<BOX_BREAK><UNSKIPPABLE>Ha!<NEWLINE>Não pode esconder nada de mim!<END>)PTBR",
        0x03
    },
    {
        0x404A,
        R"PTBR(<UNSKIPPABLE>Sei que nada vai impedir<NEWLINE>sua busca por justiça<NEWLINE>e paz... Leve este<NEWLINE><COLOR:BLUE>Medalhão<COLOR:DEFAULT>... Aceite-o com respeito!<END>)PTBR",
        0x03
    },
    {
        0x404B,
        R"PTBR(<UNSKIPPABLE>Você! Quem é você?!<BOX_BREAK><UNSKIPPABLE>Sou <COLOR:RED>Ruto<COLOR:DEFAULT>, Princesa dos Zoras.<BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE>O quê?!<QUICKTEXT_DISABLE><NEWLINE>Está dizendo que meu pai<NEWLINE>pediu que viesse me salvar?<BOX_BREAK><UNSKIPPABLE>Eu <QUICKTEXT_ENABLE>nunca<QUICKTEXT_DISABLE> pediria uma coisa<NEWLINE>dessas a ninguém!<BOX_BREAK><UNSKIPPABLE>"Carta num frasco"? Não tenho<NEWLINE><QUICKTEXT_ENABLE>ideia<QUICKTEXT_DISABLE> do que está falando!<BOX_BREAK><UNSKIPPABLE>Meu pai está preocupado comigo?<BOX_BREAK><UNSKIPPABLE>Não <QUICKTEXT_ENABLE>me importo!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Não posso voltar para casa agora.<NEWLINE>E você... <QUICKTEXT_ENABLE>Saia daqui!<QUICKTEXT_DISABLE><NEWLINE><QUICKTEXT_ENABLE>Entendeu?!<QUICKTEXT_DISABLE><END>)PTBR",
        0x03
    },
    {
        0x404C,
        R"PTBR(<UNSKIPPABLE>Ainda está aqui?<NEWLINE>Eu mandei você ir embora!<BOX_BREAK><UNSKIPPABLE>Estou bem. Entro na barriga<NEWLINE>do Lorde Jabu-Jabu desde<NEWLINE>pequena, mas...<BOX_BREAK><UNSKIPPABLE>O Lorde Jabu-Jabu está<NEWLINE>muito estranho hoje...<BOX_BREAK><UNSKIPPABLE>Há águas-vivas elétricas<NEWLINE>e buracos estranhos por aí...<BOX_BREAK><UNSKIPPABLE>E ainda por cima,<NEWLINE>minha pedra preciosa... Mas...<NEWLINE><QUICKTEXT_ENABLE>Isso não é da sua conta!<QUICKTEXT_DISABLE><NEWLINE>Enfim...<BOX_BREAK><UNSKIPPABLE>Você! <QUICKTEXT_ENABLE>Vá para casa agora!<QUICKTEXT_DISABLE><NEWLINE><QUICKTEXT_ENABLE>Entendeu?!<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x00
    },
    {
        0x404D,
        R"PTBR(<UNSKIPPABLE>Está tão preocupado comigo?<BOX_BREAK><UNSKIPPABLE>Então terá a honra<NEWLINE>de me carregar!<BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE>Mas<QUICKTEXT_DISABLE> não vou sair daqui<NEWLINE>até encontrar o que procuro.<NEWLINE>Pode acreditar!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x404E,
        R"PTBR(<QUICKTEXT_ENABLE>Que falta de consideração!<QUICKTEXT_DISABLE><NEWLINE>Como pôde me deixar para trás? <NEWLINE>Se você é um homem, aja como um! <NEWLINE>Assuma a responsabilidade!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x404F,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>Ali!<QUICKTEXT_DISABLE><NEWLINE>É o que eu estava procurando!<NEWLINE>Jogue-me lá em cima,<NEWLINE>na plataforma!<END>)PTBR",
        0x03
    },
    {
        0x4050,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>A Princesa Ruto pegou a<NEWLINE><COLOR:BLUE>Pedra Espiritual<COLOR:DEFAULT>!<QUICKTEXT_DISABLE><NEWLINE><TEXT_SPEED:0x02>Mas<TEXT_SPEED:0x00> por que a Princesa Ruto?<END>)PTBR",
        0x23
    },
    {
        0x4051,
        R"PTBR(<UNSKIPPABLE>Minha nossa!<NEWLINE>Finalmente encontrei...<NEWLINE>A pedra da minha mãe...<BOX_BREAK><UNSKIPPABLE>Fiquei tão chateada quando<NEWLINE>o Lorde Jabu-Jabu a engoliu...<BOX_BREAK><UNSKIPPABLE>Eu estava dando comida a ele<NEWLINE>quando me engoliu de repente!<NEWLINE>Levei um susto e a deixei cair...<BOX_BREAK><UNSKIPPABLE>Mas agora que a encontrei,<NEWLINE>não preciso mais<NEWLINE>ficar aqui!<END>)PTBR",
        0x03
    },
    {
        0x4052,
        R"PTBR(Então, me leve para casa, agora!<END>)PTBR",
        0x03
    },
    {
        0x4053,
        R"PTBR(Jogo de Mergulho: 20 Rupias<NEWLINE>Quer jogar?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4054,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x3F>CERTO!<QUICKTEXT_DISABLE><BOX_BREAK>Pegue todas as Rupias que eu<NEWLINE>jogar daqui. Você terá<NEWLINE>um tempo limitado!<BOX_BREAK>Quando pegar todas,<NEWLINE>volte aqui! Vou lhe dar<NEWLINE>algo muito bom!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x4055,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>Ei! Parabéns!<QUICKTEXT_DISABLE><NEWLINE>Tenho algo<NEWLINE>muito bom para você!<NEWLINE>Venha buscar!<EVENT><END>)PTBR",
        0x02
    },
    {
        0x4056,
        R"PTBR(<UNSKIPPABLE>Que belo mergulho!<NEWLINE>Agora, aceite isto!<BOX_BREAK><UNSKIPPABLE>É uma "<COLOR:RED>escama<COLOR:DEFAULT>" do nosso povo.<NEWLINE>Com ela, poderá mergulhar<NEWLINE>muito mais fundo.<EVENT><END>)PTBR",
        0x00
    },
    {
        0x4057,
        R"PTBR(<UNSKIPPABLE>À medida que a água sobe,<NEWLINE>o mal desaparece do lago...<NEWLINE><NAME>, você conseguiu!<END>)PTBR",
        0x03
    },
    {
        0x4058,
        R"PTBR(<UNSKIPPABLE>Eu... Acredito que você<NEWLINE>vai salvar este mundo...<END>)PTBR",
        0x03
    },
    {
        0x4059,
        R"PTBR(<UNSKIPPABLE>Veja, <NAME>...<BOX_BREAK><UNSKIPPABLE>Você e a Princesa Ruto<NEWLINE>destruíram o monstro maligno!<BOX_BREAK><UNSKIPPABLE>O lago está cheio de água pura<NEWLINE>de novo. Tudo voltou ao normal.<END>)PTBR",
        0x03
    },
    {
        0x405A,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x51><COLOR:RED>VALENDO!<COLOR:DEFAULT><QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x00
    },
    {
        0x405B,
        R"PTBR(Pule a cachoeira para cortar caminho.<EVENT><END>)PTBR",
        0x00
    },
    {
        0x405C,
        R"PTBR(Pegue quanto quiser por<NEWLINE>20 Rupias. Quer jogar?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x405D,
        R"PTBR(<QUICKTEXT_ENABLE>Ei! Parabéns!!<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x00
    },
    {
        0x405E,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Que tal uns <COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>?<NEWLINE>Não estão vendendo muito bem...<BOX_BREAK>Que tal...<NEWLINE><COLOR:RED>10 Rupias<COLOR:DEFAULT> por um feijão?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x405F,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Que tal uns <COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>?<NEWLINE>Ainda não são muito populares.<BOX_BREAK>Que tal...<NEWLINE><COLOR:RED>20 Rupias<COLOR:DEFAULT> por um feijão?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4060,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Que tal uns <COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>?<NEWLINE>Estão ficando bem<NEWLINE>populares...<BOX_BREAK><COLOR:RED>30 Rupias<COLOR:DEFAULT> por um feijão.<NEWLINE>O que acha?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4061,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Que tal uns <COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>?<NEWLINE>São a sensação do momento!<BOX_BREAK><COLOR:RED>40 Rupias<COLOR:DEFAULT> por um feijão.<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4062,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Temos os famosos <COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>!<NEWLINE>Vai se arrepender se não<NEWLINE>comprar agora!<BOX_BREAK><COLOR:RED>50 Rupias<COLOR:DEFAULT> por um feijão.<NEWLINE>(Só por enquanto.)<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4063,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Estes são os famosíssimos<NEWLINE><COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>! E já aviso:<NEWLINE>logo estarão esgotados!<BOX_BREAK>Superpreço!<NEWLINE><COLOR:RED>60 Rupias<COLOR:DEFAULT> por um feijão!<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4064,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Temos os raríssimos<NEWLINE><COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>! Pode ser<NEWLINE>a sua última chance!<BOX_BREAK>Preço especial!<NEWLINE><COLOR:RED>70 Rupias<COLOR:DEFAULT> por um feijão!<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4065,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Temos os lendários<NEWLINE><COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>! Vou vender<NEWLINE>só para você!<BOX_BREAK>Superpreço!<NEWLINE><COLOR:RED>80 Rupias<COLOR:DEFAULT> por um feijão!<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4066,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Você quer... <COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>?!<NEWLINE>Não são baratos...<NEWLINE>Ainda quer comprar?<BOX_BREAK>Não vendo por menos de<NEWLINE><COLOR:RED>90 Rupias<COLOR:DEFAULT> cada!<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4067,
        R"PTBR(<UNSKIPPABLE>Nhac, nhac, nhac...<NEWLINE>Temos... <COLOR:RED>Feijões Mágicos<COLOR:DEFAULT>!<NEWLINE>Você quer? Hein? Hein?<BOX_BREAK><COLOR:RED>100 Rupias<COLOR:DEFAULT> por um feijão!<NEWLINE>Ha, ha, ha!<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x4068,
        R"PTBR(Ah, bem...<NEWLINE>Nhac, nhac...<END>)PTBR",
        0x00
    },
    {
        0x4069,
        R"PTBR(Você não tem dinheiro suficiente.<NEWLINE>Não posso vender para você.<NEWLINE>Nhac, nhac...<END>)PTBR",
        0x00
    },
    {
        0x406A,
        R"PTBR(Equipe um feijão em <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT> e use-o<NEWLINE>neste pedaço de terra aqui.<END>)PTBR",
        0x00
    },
    {
        0x406B,
        R"PTBR(Que pena! Esgotaram!<NEWLINE>Nhac, nhac... O quê?<NEWLINE>Ah, estes aqui não estão à venda!<END>)PTBR",
        0x00
    },
    {
        0x406C,
        R"PTBR(Se quiser plantar feijões,<NEWLINE>procure lugares com terra macia.<NEWLINE>Nhac, nhac, nhac.<END>)PTBR",
        0x00
    },
    {
        0x406D,
        R"PTBR(Talvez não tenha notado,<NEWLINE>mas eu estava olhando. Mergulhou<NEWLINE><COLOR:RED>1 metro<COLOR:DEFAULT> agora. Não chamaria<NEWLINE>isso de um mergulho de verdade.<END>)PTBR",
        0x00
    },
    {
        0x406E,
        R"PTBR(Talvez não tenha notado,<NEWLINE>mas eu estava olhando. Mergulhou<NEWLINE><COLOR:RED>2 metros<COLOR:DEFAULT> agora. Não chamaria<NEWLINE>isso de um mergulho de verdade.<END>)PTBR",
        0x00
    },
    {
        0x406F,
        R"PTBR(Talvez não tenha notado,<NEWLINE>mas eu estava olhando. Mergulhou<NEWLINE><COLOR:RED>3 metros<COLOR:DEFAULT> agora. Não chamaria<NEWLINE>isso de um mergulho de verdade.<END>)PTBR",
        0x00
    },
    {
        0x4070,
        R"PTBR(Talvez não tenha notado,<NEWLINE>mas eu estava olhando. Mergulhou<NEWLINE><COLOR:RED>4 metros<COLOR:DEFAULT> agora. Ainda não<NEWLINE>foi fundo o bastante!<END>)PTBR",
        0x00
    },
    {
        0x4071,
        R"PTBR(Talvez não tenha notado,<NEWLINE>mas eu estava olhando. Mergulhou<NEWLINE><COLOR:RED>5 metros<COLOR:DEFAULT> agora. Ainda não<NEWLINE>foi fundo o bastante!<END>)PTBR",
        0x00
    },
    {
        0x4072,
        R"PTBR(Talvez não tenha notado,<NEWLINE>mas eu estava olhando. Mergulhou<NEWLINE><COLOR:RED>6 metros<COLOR:DEFAULT> agora. Você consegue<NEWLINE>ir mais fundo!<END>)PTBR",
        0x00
    },
    {
        0x4073,
        R"PTBR(Talvez não tenha notado,<NEWLINE>mas eu estava olhando. Mergulhou<NEWLINE><COLOR:RED>7 metros<COLOR:DEFAULT> agora. Você consegue<NEWLINE>ir mais fundo!<END>)PTBR",
        0x00
    },
    {
        0x4074,
        R"PTBR(<UNSKIPPABLE>Talvez não tenha notado, mas<NEWLINE>eu estava olhando. Você <COLOR:RED>tocou<NEWLINE>o fundo<COLOR:DEFAULT> agora! Fantástico!<NEWLINE>Aceite isto!<END>)PTBR",
        0x00
    },
    {
        0x4075,
        R"PTBR(Você é o melhor mergulhador<NEWLINE>do mundo! Que tal mergulhar<NEWLINE>até o fundo do Lago Hylia?<END>)PTBR",
        0x00
    },
    {
        0x4076,
        R"PTBR(Sou <COLOR:RED>Pierre<COLOR:DEFAULT>, o espantalho viajante.<NEWLINE>Na verdade, queria viajar em busca<NEWLINE>de sons que tocassem a alma,<NEWLINE>mas estou meio preso aqui.<END>)PTBR",
        0x03
    },
    {
        0x4077,
        R"PTBR(Que música fantástica!<NEWLINE>Ela toca meu coração!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x4078,
        R"PTBR(Se inventar uma bela canção,<NEWLINE>volte e toque para mim!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x4079,
        R"PTBR(A canção que você tocou<NEWLINE>continua no meu coração.<NEWLINE>Vamos ouvi-la de novo!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x407A,
        R"PTBR(A canção que você tocou<NEWLINE>continua no meu coração!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x407B,
        R"PTBR(Então, quer pescar<NEWLINE>por <COLOR:RED>20 Rupias<COLOR:DEFAULT>?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x407C,
        R"PTBR(Ah, não! Você não tem um <COLOR:RED>Rumble<NEWLINE>Pak<COLOR:DEFAULT>! Com ele, dá para<NEWLINE>sentir as vibrações de um peixe<NEWLINE>preso no anzol.<BOX_BREAK>Desta vez, vai ser sem vibração!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x407D,
        R"PTBR(Uau! Você tem um <COLOR:RED>Rumble Pak<COLOR:DEFAULT>!<NEWLINE>Hoje você vai sentir<NEWLINE>a vibração, rapaz!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x407E,
        R"PTBR(Que pena! Você não tem<NEWLINE>dinheiro suficiente.<END>)PTBR",
        0x03
    },
    {
        0x407F,
        R"PTBR(Certo, preste atenção!<BOX_BREAK>Vá até a beira da água e<NEWLINE>aperte <COLOR:LIGHTBLUE><BYTE:0xA4><COLOR:DEFAULT> para olhar um peixe.<BOX_BREAK>Enquanto olha para um peixe,<NEWLINE>lance a linha com <COLOR:ADJUSTABLE><BYTE:0xA0><COLOR:DEFAULT>. Aperte <COLOR:BLUE><BYTE:0x9F><NEWLINE><COLOR:DEFAULT>para frear a linha.<BOX_BREAK>Quando a isca cair<NEWLINE>na água, mova-a com <COLOR:LIGHTBLUE><BYTE:0xAA><COLOR:DEFAULT>.<NEWLINE>Se for iniciante, também<NEWLINE>pode usar <COLOR:ADJUSTABLE><BYTE:0xA0><COLOR:DEFAULT>.<BOX_BREAK>Recolha a isca com <COLOR:BLUE><BYTE:0x9F><COLOR:DEFAULT>. Segure<NEWLINE><COLOR:BLUE><BYTE:0x9F><COLOR:DEFAULT> e <COLOR:LIGHTBLUE><BYTE:0xA3><COLOR:DEFAULT> para recolhê-la<NEWLINE>mais rápido.<BOX_BREAK>Quando o peixe morder, aperte <COLOR:BLUE><BYTE:0x9F><COLOR:ADJUSTABLE> <COLOR:DEFAULT>e<NEWLINE><COLOR:LIGHTBLUE><BYTE:0xAA> para baixo<COLOR:DEFAULT> para fisgá-lo.<NEWLINE>Depois, recolha a linha com <COLOR:BLUE><BYTE:0x9F><COLOR:DEFAULT>.<BOX_BREAK>Entendeu?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4080,
        R"PTBR(Sou generoso: pode pescar<NEWLINE>pelo tempo que quiser. Mas só<NEWLINE>pode guardar um peixe.<BOX_BREAK>O maior peixe já pescado aqui<NEWLINE>pesava <COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>.<BOX_BREAK>Depois de lançar a linha, mude<NEWLINE>o ângulo de visão com <COLOR:LIGHTBLUE><BYTE:0xA4><COLOR:DEFAULT>.<BOX_BREAK><SHIFT:0x41>Vamos pescar!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x4081,
        R"PTBR(Ha, ha, ha!<NEWLINE>Você tentou fisgar apertando<NEWLINE><COLOR:BLUE><BYTE:0x9F><COLOR:DEFAULT> e <COLOR:LIGHTBLUE><BYTE:0xAA> para baixo<COLOR:DEFAULT>?<END>)PTBR",
        0x03
    },
    {
        0x4082,
        R"PTBR(Ei, o que aconteceu?<NEWLINE>O peixe escapou!<FADE:0x3C><END>)PTBR",
        0x03
    },
    {
        0x4083,
        R"PTBR(Vejamos... Pesa umas <COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>.<NEWLINE>Quer ficar com ele?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4084,
        R"PTBR(O que deseja?<NEWLINE><THREE_CHOICE><COLOR:ADJUSTABLE>Pesar meu peixe.<NEWLINE>Conversar um pouco.<NEWLINE>Parar de pescar.<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4085,
        R"PTBR(Só entusiasmo não basta para<NEWLINE>pescar muito. Estou falando sério!<END>)PTBR",
        0x03
    },
    {
        0x4086,
        R"PTBR(<SHIFT:0x4B>UAU!<BOX_BREAK>Este peixe é enorme! Parece<NEWLINE>um novo recorde! Pesa pelo menos<NEWLINE><COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>! É sério!<NEWLINE>Aqui está seu prêmio!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x4087,
        R"PTBR(O quê?<NEWLINE>O que está fazendo comigo?!<FADE:0x3C><END>)PTBR",
        0x03
    },
    {
        0x4088,
        R"PTBR(Ei, rapaz! Você não tem<NEWLINE>nada importante que<NEWLINE>deveria estar fazendo?<BOX_BREAK>O quê? Está dizendo que<NEWLINE>é mais divertido ficar aqui?<BOX_BREAK>Já vi muita gente arruinar<NEWLINE>a vida com esse tipo de atitude.<NEWLINE>Estou falando sério!<NEWLINE>Ah, bem...<END>)PTBR",
        0x03
    },
    {
        0x4089,
        R"PTBR(<QUICKTEXT_ENABLE>O maior peixe já pescado<NEWLINE>neste lago pesava <FISH_INFO> libras.<NEWLINE>Pescador: <NAME><QUICKTEXT_DISABLE><END>)PTBR",
        0x20
    },
    {
        0x408A,
        R"PTBR(Quer continuar pescando?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x408B,
        R"PTBR(Bem, pesa <COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>...<NEWLINE>Nada mal, mas há peixes<NEWLINE>maiores lá dentro!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x408C,
        R"PTBR(Ora essa! Você não tem peixe!<NEWLINE>Que coisa!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x408D,
        R"PTBR(Quer experimentar outra isca?<NEWLINE>Do que está falando?<NEWLINE>Não seja tão exigente!<BOX_BREAK>Não conhece o ditado?<NEWLINE>"Bom pescador não<NEWLINE>fica escolhendo isca."<END>)PTBR",
        0x03
    },
    {
        0x408E,
        R"PTBR(Quer saber os segredos da pesca?<NEWLINE>Não posso contar nenhum.<NEWLINE>São segredos profissionais.<NEWLINE>É sério!<END>)PTBR",
        0x03
    },
    {
        0x408F,
        R"PTBR(O quê? Quer saber se sou<NEWLINE>um bom pescador?<BOX_BREAK>Claro! Sou um profissional veterano!<NEWLINE>Sabe o que é um profissional?<NEWLINE>Estou falando a verdade!<END>)PTBR",
        0x03
    },
    {
        0x4090,
        R"PTBR(<QUICKTEXT_ENABLE>Regras e Regulamentos<QUICKTEXT_DISABLE><NEWLINE><QUICKTEXT_ENABLE>1. Não use iscas de fundo.<NEWLINE>2. Não jogue lixo.<NEWLINE>3. Caminhe sem fazer barulho.<QUICKTEXT_DISABLE><BOX_BREAK><QUICKTEXT_ENABLE>4. Não lance a linha nas pessoas.<QUICKTEXT_DISABLE><END>)PTBR",
        0x10
    },
    {
        0x4091,
        R"PTBR(Uau! Que peixão!<NEWLINE>Vejamos... Ele pesa<NEWLINE><COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>!<BOX_BREAK>Quer ficar com ele?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4092,
        R"PTBR(Volte quando crescer!<NEWLINE>Os peixes também estarão maiores...<NEWLINE>Bem, talvez.<END>)PTBR",
        0x03
    },
    {
        0x4093,
        R"PTBR(<UNSKIPPABLE>Ei, rapaz! Lembro de você!<NEWLINE>Quanto tempo!<BOX_BREAK><UNSKIPPABLE>Quantos anos faz?<NEWLINE>Sete anos?! O que andou<NEWLINE>fazendo esse tempo todo?!<BOX_BREAK><UNSKIPPABLE>Você é meu único cliente.<NEWLINE>Estou quase falindo! É sério!<NEWLINE>E, para piorar, meu cabelo...<BOX_BREAK><UNSKIPPABLE>Ah, quero dizer... Deixe pra lá...<BOX_BREAK><UNSKIPPABLE>Então, quer pescar?<NEWLINE>Custa só <COLOR:RED>20 Rupias<COLOR:DEFAULT>!<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4094,
        R"PTBR(O quê?<BOX_BREAK>Quer ir pescar<NEWLINE>em outro lago?!<NEWLINE>Do que está falando?<BOX_BREAK>Vou falir se você<NEWLINE>for para outro lugar!<NEWLINE>Estou falando sério!<END>)PTBR",
        0x03
    },
    {
        0x4095,
        R"PTBR(O quê?<BOX_BREAK>Quer saber por que<NEWLINE>fico me coçando sem parar?<NEWLINE>Do que está falando?<BOX_BREAK>Na verdade, não faço ideia.<NEWLINE>Estou falando sério!<END>)PTBR",
        0x03
    },
    {
        0x4096,
        R"PTBR(O quê?<BOX_BREAK>Está dizendo que não<NEWLINE>consegue ver os peixes<NEWLINE>porque a água está turva?<BOX_BREAK>Do que está falando?<NEWLINE>Esta é a melhor hora<NEWLINE>do dia para pescar!<BOX_BREAK>Você pode fisgar um peixe<NEWLINE>de repente, sem esperar.<NEWLINE>Essa é a emoção da pesca!<BOX_BREAK>Estou falando sério. Sério mesmo!<END>)PTBR",
        0x03
    },
    {
        0x4097,
        R"PTBR(O que está fazendo?<NEWLINE>Eu disse para não fazer isso!<NEWLINE>Você é terrível!<NEWLINE>Sério!<BOX_BREAK>Devolva meu chapéu!<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Está bem<NEWLINE>De jeito nenhum<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4098,
        R"PTBR(O quê? Hã? Ah?<NEWLINE>Acho que o peixe que você<NEWLINE>já guardou era maior que este...<BOX_BREAK>Ainda quer ficar com ele?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Não, não quero.<NEWLINE>Sim, quero mesmo assim.<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x4099,
        R"PTBR(Nossa! Que peixe estranho<NEWLINE>você pegou! E ainda<NEWLINE>pesa <COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>!<BOX_BREAK>O que quer fazer com ele?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Ficar com ele mesmo assim.<NEWLINE>Não quero ficar com ele.<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x409A,
        R"PTBR(Uau!<BOX_BREAK>É o que estou pensando?<NEWLINE>Incrível!<NEWLINE>Você achou uma <COLOR:RED>isca de fundo<COLOR:DEFAULT>!<BOX_BREAK>O que quer fazer com ela?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Usar agora.<NEWLINE>Descartar.<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x409B,
        R"PTBR(Ora, ora...<BOX_BREAK>UAU! Que peixe raro!<NEWLINE>É um <COLOR:RED>Peixe-cobra de Hyrule<COLOR:DEFAULT>!<BOX_BREAK>Para esse peixe, o tamanho<NEWLINE>não importa. Vou lhe dar<NEWLINE>este prêmio!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x409C,
        R"PTBR(A quantidade desses peixes<NEWLINE>caiu muito ultimamente,<NEWLINE>então vou soltar este.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x409D,
        R"PTBR(<QUICKTEXT_ENABLE>Regras e Regulamentos<NEWLINE>1. Não use iscas de fundo.<NEWLINE>2. Não jogue lixo.<NEWLINE>3. Caminhe sem fazer barulho.<QUICKTEXT_DISABLE><END>)PTBR",
        0x10
    },
    {
        0x409E,
        R"PTBR(Ei! Ei!<NEWLINE>Não pode levar a vara<NEWLINE>para fora daqui!<BOX_BREAK>Quando parar de pescar,<NEWLINE>devolva a vara no balcão.<NEWLINE>Estou falando sério!<END>)PTBR",
        0x00
    },
    {
        0x409F,
        R"PTBR(Minha nossa!<NEWLINE>Este peixe é gigantesco!!<BOX_BREAK>Um peixe desse tamanho nem<NEWLINE>cabe na tela! Não consigo<NEWLINE>pesá-lo direito, mas parece<NEWLINE>ter umas <COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>!!<BOX_BREAK>Vai querer ficar com ele,<NEWLINE>não é?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Ficar com ele.<NEWLINE>Não ficar com ele.<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x40A0,
        R"PTBR(Ei, meu chapa!<NEWLINE>Sou <COLOR:RED>Bonooru<COLOR:DEFAULT>, o espantalho!<NEWLINE>Já deve ter ouvido falar<NEWLINE>da minha memória fantástica!<BOX_BREAK>Se tiver uma música nova,<NEWLINE>mande ver!<BOX_BREAK>Esta é a canção que tocou<NEWLINE>da última vez, meu chapa!<BOX_BREAK>Solta o som!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x40A1,
        R"PTBR(Sou <COLOR:RED>Bonooru<COLOR:DEFAULT>, o espantalho<NEWLINE>gênio da música!<NEWLINE>Ouço uma canção uma única vez<NEWLINE>e nunca mais esqueço, meu chapa!<END>)PTBR",
        0x03
    },
    {
        0x40A2,
        R"PTBR(Toque aquela canção para<NEWLINE>chamar Pierre!<NEWLINE>Se estiver por perto,<NEWLINE>ele virá ajudar, meu chapa!<END>)PTBR",
        0x03
    },
    {
        0x40A3,
        R"PTBR(Ei! Não é o amigo da fada<NEWLINE>que conheci há muito tempo?<NEWLINE>Como você cresceu, cara!<BOX_BREAK>Bem, aqui está sua canção...<BOX_BREAK>O quê?<BOX_BREAK>Não, eu nunca esqueço!<NEWLINE>Você é que esqueceu... Não é?<NEWLINE>Se tiver uma ocarina,<NEWLINE>toque aquela canção, meu chapa!<END>)PTBR",
        0x03
    },
    {
        0x40A4,
        R"PTBR(Uau! Você tem uma ocarina!<NEWLINE>Que tal tocar uma música<NEWLINE>para mim, meu chapa?!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x40A5,
        R"PTBR(Bem... Nada mal!<NEWLINE>Vou guardar essa canção<NEWLINE>na memória para você!<BOX_BREAK>Não é que eu só consiga lembrar<NEWLINE>de oito notas, mas vamos parar<NEWLINE>por aqui por enquanto, meu chapa!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x40A6,
        R"PTBR(Tocando assim, você nunca<NEWLINE>vai comover este espantalho,<NEWLINE>meu chapa!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x40A7,
        R"PTBR(ISSOOO!!<NEWLINE>É essa! É essa a canção!!<NEWLINE>Você arrasa!! Fiquei sem palavras!<BOX_BREAK>Ah, não, não! Não esqueci<NEWLINE>a canção... Nunca esqueço nada!<NEWLINE>Só fiquei com vontade<NEWLINE>de recompensá-lo, meu chapa!<BOX_BREAK>........<NEWLINE>Tive uma boa ideia!<BOX_BREAK>Meu amigo Pierre anda<NEWLINE>viajando por aí. Toque essa<NEWLINE>canção quando quiser chamá-lo!<BOX_BREAK>Vou pedir que o ajude se estiver<NEWLINE>perto e ouvir a canção, meu chapa!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x40A8,
        R"PTBR(Ei, é a ocarina!<NEWLINE>Toque aquela canção,<NEWLINE>meu chapa!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x40A9,
        R"PTBR(<SFX:0x28,0xE4>Rapaz, você toca bem a ocarina...<NEWLINE>Hummm! Que melodia bonita...<NEWLINE>Coax! Todos nós deveríamos<NEWLINE>ensaiá-la, coax!<BOX_BREAK>Leve estas Rupias de lembrança!<NEWLINE>Se aprender outra bela melodia,<NEWLINE>passe aqui e toque para nós...<NEWLINE>Coax, coax!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x40AA,
        R"PTBR(<SFX:0x28,0xE3>Uau, que melodia legal!<NEWLINE>Coax!<BOX_BREAK>Cantaaando na chuuuva,<NEWLINE>ah, que sensação!<NEWLINE>Coaaax!!<BOX_BREAK>Aceite isto como sinal<NEWLINE>da nossa gratidão de sapo, coax!<NEWLINE>Até a próxima, coax!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x40AB,
        R"PTBR(<SFX:0x28,0xE4>Veja só! Ficamos enormes!!<NEWLINE>Somos os famosos<NEWLINE>Cinco Fabulosos Sapos Tenores!!<NEWLINE>Coaaax!!<BOX_BREAK>Faça a gente pular para comer<NEWLINE>os insetos lá em cima, coax!<BOX_BREAK>Tudo pronto?<NEWLINE>Então... Preparar, apontar, já!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x40AC,
        R"PTBR(<SFX:0x28,0xE3>Rapaz, você foi óóótimo!<NEWLINE>Perfeeito!<NEWLINE>Estamos de barriga cheia, coax!<BOX_BREAK>Aceita esta demonstração<NEWLINE>da nossa gratidão?<EVENT><END>)PTBR",
        0x00
    },
    {
        0x40AD,
        R"PTBR(Bem, não me lembro<NEWLINE>dessa canção, meu chapa.<NEWLINE>Por quê? Não sei dizer!<NEWLINE>Ora essa!<END>)PTBR",
        0x03
    },
    {
        0x40AE,
        R"PTBR(<QUICKTEXT_ENABLE>O maior peixe já pescado<NEWLINE>neste lago pesava <FISH_INFO> libras.<NEWLINE>Pescador: o dono do lago<QUICKTEXT_DISABLE><END>)PTBR",
        0x20
    },
    {
        0x40AF,
        R"PTBR(O quê?<NEWLINE>Quer pescar com<NEWLINE>uma isca diferente?<NEWLINE>...Ei, o que é isso?<BOX_BREAK>Como? Você acabou de achar?<NEWLINE>Normalmente, as regras proíbem<NEWLINE>esse tipo de isca. Normalmente.<NEWLINE>Mas, quer saber? Deixe pra lá...<END>)PTBR",
        0x00
    },
    {
        0x40B0,
        R"PTBR(IUUUPIII!<NEWLINE>É ENORME!! Um novo recorde!!<NEWLINE>Isto... Isto pesa nada menos que...<NEWLINE><COLOR:RED><FISH_INFO> libras<COLOR:DEFAULT>!!<BOX_BREAK>Maaaas! Essa isca de fundo<NEWLINE>é proibida pelas regras!<NEWLINE>Então, nada de prêmio para você.<NEWLINE>Ha, ha, ha, ha, ha, ha!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x40B1,
        R"PTBR(<QUICKTEXT_ENABLE>O maior peixe já pescado<NEWLINE>neste lago pesava <FISH_INFO> libras.<NEWLINE>Pescador: <NAME><NEWLINE>(OBS.: Usou isca de fundo ilegal.)<QUICKTEXT_DISABLE><END>)PTBR",
        0x20
    },
    {
        0x40B2,
        R"PTBR(Você é um garoto de bom coração!<NEWLINE>Mas não conte isso a ninguém.<NEWLINE>É sério!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x40B3,
        R"PTBR(O QUÊÊÊ?!?<BOX_BREAK>Por que está fazendo isso comigo?<NEWLINE>O que tem na cabeça?<BOX_BREAK>Não vai escapar<NEWLINE>tão fácil! Vai pagar<NEWLINE><COLOR:RED>50 Rupias<COLOR:DEFAULT> de multa!<NEWLINE>Estou falando sério!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x5000,
        R"PTBR(<QUICKTEXT_ENABLE>AAAAH!<QUICKTEXT_DISABLE><NEWLINE><TEXT_SPEED:0x02><QUICKTEXT_ENABLE>Você<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>me<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>matou!!<QUICKTEXT_DISABLE><TEXT_SPEED:0x00><NEWLINE>Hã? Ah, é você.<BOX_BREAK>Já tentou tocar a<NEWLINE><COLOR:YELLOW>Canção do Sol<COLOR:DEFAULT>?<BOX_BREAK>Como eu disse antes,<NEWLINE>com essa canção, você pode<NEWLINE>trocar o dia pela noite<NEWLINE>ou a noite pelo dia quando quiser.<BOX_BREAK>Se estiver na escuridão,<NEWLINE>ela trará a luz do sol<NEWLINE>até você. Experimente.<END>)PTBR",
        0x00
    },
    {
        0x5001,
        R"PTBR(<QUICKTEXT_ENABLE>Ao cavar um buraco, achei um<NEWLINE>tesouro que estica... Boing!<NEWLINE>E encolhe... Boing! É tão legal<NEWLINE>que nunca vou dar a ninguém!<QUICKTEXT_DISABLE><END>)PTBR",
        0x21
    },
    {
        0x5002,
        R"PTBR(Aqui está o <COLOR:RED>diário do coveiro<COLOR:DEFAULT>.<NEWLINE>Quer ler?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x21
    },
    {
        0x5003,
        R"PTBR(<QUICKTEXT_ENABLE>A quem ler isto: entre no meu<NEWLINE>túmulo. Darei a você minha<NEWLINE><COLOR:RED>lembrança<COLOR:DEFAULT> que estica e encolhe.<QUICKTEXT_DISABLE><BOX_BREAK><QUICKTEXT_ENABLE>Estou esperando por você.<NEWLINE>--Damp<BYTE:0x96><QUICKTEXT_DISABLE><END>)PTBR",
        0x21
    },
    {
        0x5004,
        R"PTBR(<QUICKTEXT_ENABLE>Você decide não ler...<QUICKTEXT_DISABLE><END>)PTBR",
        0x22
    },
    {
        0x5005,
        R"PTBR(Você derrotou um Poe, o fantasma!<BOX_BREAK>Quer capturá-lo<NEWLINE>em um frasco?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x20
    },
    {
        0x5006,
        R"PTBR(Você quer capturá-lo,<NEWLINE>mas não tem um frasco vazio.<END>)PTBR",
        0x20
    },
    {
        0x5007,
        R"PTBR(Você o deixa ir por enquanto.<END>)PTBR",
        0x20
    },
    {
        0x5008,
        R"PTBR(Você pegou um Poe!<END>)PTBR",
        0x20
    },
    {
        0x5009,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x04>O sol que nasce um dia se põe,<NEWLINE><SHIFT:0x19>A vida que nasce um dia se vai.<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x05>Do sol à lua, da lua ao sol...<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x25>Conceda o descanso<NEWLINE><SHIFT:0x37>aos mortos-vivos.<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Que poema interessante...<NEWLINE>Hã?<END>)PTBR",
        0x20
    },
    {
        0x500A,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x24>Almas inquietas vagam<NEWLINE><SHIFT:0x1E>onde não é seu lugar.<NEWLINE><SHIFT:0x27>Acalme-as com a<NEWLINE><SHIFT:0x36><COLOR:YELLOW>Canção do Sol<COLOR:DEFAULT>.<QUICKTEXT_DISABLE><END>)PTBR",
        0x20
    },
    {
        0x500B,
        R"PTBR(<UNSKIPPABLE>Há algo escrito<NEWLINE>na lápide...<BOX_BREAK><UNSKIPPABLE>É a <COLOR:YELLOW>melodia secreta<COLOR:DEFAULT><NEWLINE>dos Irmãos Compositores!<END>)PTBR",
        0x23
    },
    {
        0x500C,
        R"PTBR(A melhor das poções! Que tal<NEWLINE><COLOR:RED>100 Rupias<COLOR:DEFAULT>?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Comprar<NEWLINE>Não comprar<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x500D,
        R"PTBR(Se mudar de ideia,<NEWLINE>volte para me visitar...<NEWLINE>Hi, hi, hi!<END>)PTBR",
        0x03
    },
    {
        0x500E,
        R"PTBR(Você não tem Rupias suficientes!<NEWLINE>Hi, hi, hi!<END>)PTBR",
        0x00
    },
    {
        0x500F,
        R"PTBR(<UNSKIPPABLE>AAAAH!<NEWLINE><TEXT_SPEED:0x02><QUICKTEXT_ENABLE>VOCÊ<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>ME<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>MATOU...<QUICKTEXT_DISABLE><TEXT_SPEED:0x00> <QUICKTEXT_ENABLE>Inacreditável!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Ah, o quê?<NEWLINE>Você não é um dos homens<NEWLINE>de Ganondorf, é?<BOX_BREAK><UNSKIPPABLE>Como fantasma, eu precisava<NEWLINE>agir assim. Peço desculpas.<BOX_BREAK><UNSKIPPABLE>Agora, deixe-me apresentar.<NEWLINE>Aham...<TEXTID:0x50,0x10>)PTBR",
        0x00
    },
    {
        0x5010,
        R"PTBR(Sou um dos irmãos compositores<NEWLINE>fantasmas da Vila Kakariko.<BOX_BREAK>Todos nesta vila nascem<NEWLINE>para servir à Família Real<NEWLINE>de Hyrule.<BOX_BREAK>Nós também servíamos à<NEWLINE>Família Real. Nossa missão<NEWLINE>era estudar seus poderes<NEWLINE>místicos hereditários.<BOX_BREAK>Nunca conseguimos desvendar<NEWLINE>o poder da Triforce, mas...<BOX_BREAK>Quase concluímos nosso<NEWLINE><COLOR:RED>estudo sobre controlar o tempo<COLOR:DEFAULT><NEWLINE>com o som de ocarinas.<BOX_BREAK>Ah, quero dizer...<BOX_BREAK>Na verdade, concluímos<NEWLINE>esse estudo!<BOX_BREAK>Teríamos ficado famosos se<NEWLINE>o odioso Ganondorf não tivesse<NEWLINE>tentado roubar nossos resultados.<BOX_BREAK>Jamais permitiríamos que ele<NEWLINE>se aproveitasse da nossa pesquisa!<BOX_BREAK>Por isso, demos a vida<NEWLINE>para proteger o segredo.<TEXTID:0x50,0x11>)PTBR",
        0x00
    },
    {
        0x5011,
        R"PTBR(Quer ouvir o que<NEWLINE>eu disse de novo?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x5012,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>AAAAH!<QUICKTEXT_DISABLE><NEWLINE><TEXT_SPEED:0x02><QUICKTEXT_ENABLE>MORRI<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>DE<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>NO<QUICKTEXT_DISABLE><QUICKTEXT_ENABLE>VO!<QUICKTEXT_DISABLE><TEXT_SPEED:0x00><NEWLINE>O quê? Você de novo?<BOX_BREAK><UNSKIPPABLE>De algum modo, você me lembra...<NEWLINE>A Princesa Zelda...<BOX_BREAK><UNSKIPPABLE>Humm... Talvez você tenha<NEWLINE>alguma ligação com a Família Real.<NEWLINE>Vou lhe contar mais um pouco<NEWLINE>da nossa história.<BOX_BREAK><UNSKIPPABLE>Éramos considerados grandes<NEWLINE>compositores pelas muitas<NEWLINE>obras-primas que criamos.<BOX_BREAK><UNSKIPPABLE>Mas nós, irmãos, não éramos<NEWLINE>apenas compositores.<BOX_BREAK><UNSKIPPABLE>Nossa missão era analisar<NEWLINE>os poderes misteriosos<NEWLINE>da Família Real de Hyrule.<BOX_BREAK><UNSKIPPABLE>Nossos nomes entrariam para<NEWLINE>a história de Hyrule se<NEWLINE>concluíssemos a pesquisa!<BOX_BREAK><UNSKIPPABLE>Mantivemos o estudo em absoluto<NEWLINE>segredo até sua conclusão.<TEXTID:0x50,0x14>)PTBR",
        0x00
    },
    {
        0x5013,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>AAAAH!<QUICKTEXT_DISABLE><NEWLINE><TEXT_SPEED:0x02><QUICKTEXT_ENABLE>MORRI<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>DE<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>NO<QUICKTEXT_DISABLE><QUICKTEXT_ENABLE>VO!<QUICKTEXT_DISABLE><TEXT_SPEED:0x00><NEWLINE>O quê? Você de novo?<BOX_BREAK><UNSKIPPABLE>De algum modo, você me lembra<NEWLINE>a Princesa Zelda.<BOX_BREAK><UNSKIPPABLE>Parece que você tem<NEWLINE>alguma ligação com a Família Real.<NEWLINE>Vou lhe contar mais um pouco<NEWLINE>da nossa história.<TEXTID:0x50,0x14>)PTBR",
        0x00
    },
    {
        0x5014,
        R"PTBR(Na verdade, cada um de nós<NEWLINE>estudava uma canção: uma<NEWLINE>para <COLOR:RED>invocar o sol<COLOR:DEFAULT> e outra<NEWLINE>para <COLOR:RED>invocar a lua<COLOR:DEFAULT>.<BOX_BREAK>Se você realmente foi enviado<NEWLINE>por alguém da Família Real,<NEWLINE>vou lhe revelar o resultado<NEWLINE>dos nossos estudos.<BOX_BREAK>Nós o gravamos na <COLOR:RED>lápide<NEWLINE>real<COLOR:DEFAULT>.<BOX_BREAK>Como mensageiro da<NEWLINE>Família Real, demonstre<NEWLINE>sua ligação com ela sobre<NEWLINE>a marca da Triforce...<TEXTID:0x50,0x11>)PTBR",
        0x00
    },
    {
        0x5015,
        R"PTBR(Z Z Z...<BOX_BREAK>Malon... Está bem...<NEWLINE>Humm... Humm...<NEWLINE>Desculpe por preocupá-la...<END>)PTBR",
        0x00
    },
    {
        0x5016,
        R"PTBR(Ingo tomou o Rancho Lon Lon.<NEWLINE>Agora se chama <COLOR:RED>Rancho Ingo<COLOR:DEFAULT>.<BOX_BREAK>Fui expulso de lá. Veja meu estado!<NEWLINE>Minha filha, Malon,<NEWLINE>ainda trabalha no rancho...<BOX_BREAK>Estou preocupado com ela...<END>)PTBR",
        0x00
    },
    {
        0x5017,
        R"PTBR(Você salvou a Malon? Obrigado!<NEWLINE>Então vou voltar para o rancho!<NEWLINE>Iu-huu!<END>)PTBR",
        0x00
    },
    {
        0x5018,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>Ei, garoto!<QUICKTEXT_DISABLE><NEWLINE>Não mexa nas<NEWLINE>sepulturas!<BOX_BREAK><UNSKIPPABLE>Sou <COLOR:RED>Damp<BYTE:0x96>, o coveiro<COLOR:DEFAULT>!<NEWLINE>Posso ter uma cara assustadora,<NEWLINE>mas não sou uma má pessoa...<BOX_BREAK><UNSKIPPABLE>Deixe eu fazer propaganda<NEWLINE>do meu outro negócio...<BOX_BREAK><UNSKIPPABLE><COLOR:RED>Damp<BYTE:0x96>, o coveiro<COLOR:DEFAULT>, apresenta:<NEWLINE><COLOR:LIGHTBLUE>Passeio de Escavação<COLOR:DEFAULT> de Arrepiar!<BOX_BREAK><UNSKIPPABLE>O que será que vai aparecer?!<NEWLINE>O que será que vai aparecer?!<NEWLINE>Quando eu começar a cavar,<NEWLINE>vamos descobrir!<TEXTID:0x50,0x19>)PTBR",
        0x00
    },
    {
        0x5019,
        R"PTBR(Quer que eu cave aqui?<NEWLINE><COLOR:RED>10 Rupias<COLOR:DEFAULT> por buraco.<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x501A,
        R"PTBR(<COLOR:RED>Não tem nada aqui!<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x501B,
        R"PTBR(<UNSKIPPABLE>Para trás, <NAME>!<END>)PTBR",
        0x03
    },
    {
        0x501C,
        R"PTBR(<UNSKIPPABLE><NAME>...<NEWLINE>Algo terrível aconteceu!<NEWLINE>O <COLOR:RED>espírito maligno das sombras<COLOR:DEFAULT><NEWLINE>foi libertado!<BOX_BREAK><UNSKIPPABLE><COLOR:RED>Impa<COLOR:DEFAULT>, a líder da Vila Kakariko,<NEWLINE>havia selado esse espírito<NEWLINE>no fundo do poço...<BOX_BREAK><UNSKIPPABLE>Mas o espírito ficou<NEWLINE>tão poderoso que rompeu<NEWLINE>o selo do poço e escapou<NEWLINE>para o mundo!!<END>)PTBR",
        0x03
    },
    {
        0x501D,
        R"PTBR(<UNSKIPPABLE>Deixe que eu cuide da vila!<NEWLINE>Conto com você,<NEWLINE><NAME>!<END>)PTBR",
        0x03
    },
    {
        0x501E,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x23>Compositores Reais<NEWLINE><SHIFT:0x37>Sharp, o mais velho<NEWLINE><SHIFT:0x50>Descanse em paz<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x20
    },
    {
        0x501F,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x23>Compositores Reais<NEWLINE><SHIFT:0x33>Flat, o mais novo<NEWLINE><SHIFT:0x50>Descanse em paz<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x20
    },
    {
        0x5020,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x28>Túmulo da Família Real<QUICKTEXT_DISABLE><END>)PTBR",
        0x20
    },
    {
        0x5021,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x1A>Este poema é dedicado<NEWLINE>à memória dos queridos falecidos<NEWLINE><SHIFT:0x10>membros da Família Real.<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x00
    },
    {
        0x5022,
        R"PTBR(<UNSKIPPABLE>O garoto com a ocarina<NEWLINE>da nobre Zelda... Como eu<NEWLINE>esperava, você veio.<BOX_BREAK><UNSKIPPABLE>Sou <COLOR:RED>Impa<COLOR:DEFAULT>, uma Sheikah.<NEWLINE>Sou a protetora da Princesa Zelda<NEWLINE>e a Sábia que guarda<NEWLINE>o Templo das Sombras.<END>)PTBR",
        0x03
    },
    {
        0x5023,
        R"PTBR(<UNSKIPPABLE>Por favor, cuide da princesa!<FADE:0x32><END>)PTBR",
        0x52
    },
    {
        0x5024,
        R"PTBR(<UNSKIPPABLE><NAME>, o herói!<BOX_BREAK><UNSKIPPABLE>Finalmente, nós, os <COLOR:RED>seis Sábios<COLOR:DEFAULT>,<NEWLINE>despertamos!<NEWLINE>Chegou a hora do confronto<NEWLINE>final com o Rei do Mal!<BOX_BREAK><UNSKIPPABLE>Mas, antes, você precisa<NEWLINE>encontrar quem está<NEWLINE>à sua espera...<BOX_BREAK><UNSKIPPABLE>Quem está esperando por você<NEWLINE>no <COLOR:LIGHTBLUE>Templo do Tempo<COLOR:DEFAULT>...<END>)PTBR",
        0x00
    },
    {
        0x5025,
        R"PTBR(<UNSKIPPABLE>Nós, Sheikah, servimos<NEWLINE>à realeza de Hyrule<NEWLINE>há muitas gerações.<NEWLINE>Porém...<BOX_BREAK><UNSKIPPABLE>Naquele dia, há sete anos,<NEWLINE>Ganondorf atacou de surpresa...<NEWLINE>E o Castelo de Hyrule<NEWLINE>logo se rendeu.<BOX_BREAK><UNSKIPPABLE>Ele queria uma das chaves<NEWLINE>do Reino Sagrado...<NEWLINE>O tesouro secreto da Família<NEWLINE>Real... A Ocarina do Tempo!<BOX_BREAK><UNSKIPPABLE>Meu dever era manter Zelda<NEWLINE>fora do alcance de Ganondorf.<BOX_BREAK><UNSKIPPABLE>Quando nos vimos pela última vez,<NEWLINE>na nossa fuga do castelo,<NEWLINE>você era só um menino...<BOX_BREAK><UNSKIPPABLE>Agora vejo que se tornou<NEWLINE>um grande herói...<END>)PTBR",
        0x03
    },
    {
        0x5026,
        R"PTBR(<UNSKIPPABLE>Preciso ficar aqui... Vá até<NEWLINE>a Princesa Zelda e a proteja<NEWLINE>por mim.<BOX_BREAK><UNSKIPPABLE>Para ajudá-lo, coloco agora<NEWLINE>meu poder neste<NEWLINE><COLOR:BLUE>Medalhão<COLOR:DEFAULT>!<END>)PTBR",
        0x03
    },
    {
        0x5027,
        R"PTBR(Seu Cucco está bem e feliz?<NEWLINE>Quer que eu dê uma olhada nele?<END>)PTBR",
        0x00
    },
    {
        0x5028,
        R"PTBR(<UNSKIPPABLE><SFX:0x68,0x55>Sou o <COLOR:RED>chefe dos carpinteiros<NEWLINE><COLOR:DEFAULT>que Impa contratou para melhorar<NEWLINE>esta vila e transformá-la<NEWLINE>numa cidade de verdade!<BOX_BREAK><UNSKIPPABLE>Mas os jovens de hoje<NEWLINE>não têm ambição...<NEWLINE>Entende o que digo, garoto?<BOX_BREAK><UNSKIPPABLE>Meus funcionários ficam<NEWLINE>correndo sem rumo pela vila,<NEWLINE>e o trabalho não avança<NEWLINE>nem um pouco...<BOX_BREAK><UNSKIPPABLE>Até meu próprio filho<NEWLINE>vive sem trabalhar,<NEWLINE>vagando por aí o dia todo!<TEXTID:0x50,0x29>)PTBR",
        0x00
    },
    {
        0x5029,
        R"PTBR(<UNSKIPPABLE>É tudo um bando de inúteis!!<END>)PTBR",
        0x00
    },
    {
        0x502A,
        R"PTBR(Veja aquela pobre garota ali.<NEWLINE>Ela se esforça tanto para cuidar<NEWLINE>dos Cuccos, mesmo ficando toda<NEWLINE>arrepiada ao tocar neles...<BOX_BREAK>Como é dedicada! Queria muito<NEWLINE>ajudá-la! Tenho sentido tanta<NEWLINE>vontade de ajudar os outros...<NEWLINE>Você não se sente assim também?<END>)PTBR",
        0x00
    },
    {
        0x502B,
        R"PTBR(<UNSKIPPABLE>Não há com o que se preocupar...<NEWLINE>A princesa está segura agora.<END>)PTBR",
        0x03
    },
    {
        0x502C,
        R"PTBR(<UNSKIPPABLE>Logo você verá a Princesa Zelda<NEWLINE>pessoalmente, e ela<NEWLINE>explicará tudo...<BOX_BREAK><UNSKIPPABLE>Então nós, os seis Sábios,<NEWLINE>selaremos o Rei do Mal<NEWLINE>e devolveremos a paz a Hyrule.<END>)PTBR",
        0x03
    },
    {
        0x502D,
        R"PTBR(<UNSKIPPABLE>He, he, he, rapaz...<NEWLINE>Você foi muito rápido<NEWLINE>para me acompanhar! He, he!<BOX_BREAK><UNSKIPPABLE>Como recompensa, vou lhe dar<NEWLINE>meu tesouro. Ele se chama<NEWLINE><COLOR:RED>Gancho<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>Sua corrente com mola puxa você<NEWLINE>até o lugar onde o gancho<NEWLINE>se prender. Não é legal?<NEWLINE>Vai ajudar muito!<BOX_BREAK><UNSKIPPABLE>Agora moro aqui, então<NEWLINE>volte qualquer hora.<NEWLINE>Vou lhe dar algo legal!<BOX_BREAK><UNSKIPPABLE>Mais uma coisa! Tome cuidado<NEWLINE>no caminho de volta!<NEWLINE>He, he, he...<END>)PTBR",
        0x00
    },
    {
        0x502E,
        R"PTBR(Você voltou, rapaz...<NEWLINE>O presente que dei a você<NEWLINE>foi divertido e útil?<END>)PTBR",
        0x00
    },
    {
        0x502F,
        R"PTBR(<SHIFT:0x19>O tempo desta corrida foi<NEWLINE><SHIFT:0x4B><RACE_TIME>!!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x5030,
        R"PTBR(<UNSKIPPABLE>Parece que está voltando a si...<END>)PTBR",
        0x03
    },
    {
        0x5031,
        R"PTBR(<UNSKIPPABLE>Acho que Impa foi ao<NEWLINE><COLOR:PURPLE>Templo das Sombras<COLOR:DEFAULT> para selá-lo<NEWLINE>de novo... Mas, sem ajuda,<NEWLINE>ela corre perigo!<BOX_BREAK><UNSKIPPABLE><NAME>!<NEWLINE>Impa faz parte dos seis Sábios.<NEWLINE>Destrua o espírito maligno<NEWLINE>das sombras e salve Impa!<BOX_BREAK><UNSKIPPABLE>Há uma entrada para o<NEWLINE>Templo das Sombras sob<NEWLINE>o cemitério atrás da vila.<BOX_BREAK><UNSKIPPABLE>Só posso ajudar ensinando<NEWLINE>a melodia que leva<NEWLINE>ao Templo das Sombras...<BOX_BREAK><UNSKIPPABLE>Essa melodia o levará<NEWLINE>à escuridão infinita<NEWLINE>que absorve até o tempo...<NEWLINE>Ouça o <COLOR:PURPLE>Noturno das Sombras<COLOR:DEFAULT>!!<END>)PTBR",
        0x03
    },
    {
        0x5032,
        R"PTBR(Gira, gira, gira<NEWLINE>sem parar! Que divertido!<NEWLINE>Estou tão feliz!<BOX_BREAK>Sou um músico que adora<NEWLINE>girar sem parar!<NEWLINE>Gira, gira, gira!!!<BOX_BREAK>Estou tentando compor<NEWLINE>uma música inspirada<NEWLINE>neste moinho... Girando,<NEWLINE>girando, girando!!!<END>)PTBR",
        0x00
    },
    {
        0x5033,
        R"PTBR(Gira, gira, gira...<NEWLINE>O quê? Está rápido demais!<END>)PTBR",
        0x00
    },
    {
        0x5034,
        R"PTBR(Grrrrr!<BOX_BREAK>Nunca vou esquecer o que aconteceu<NEWLINE>naquele dia, há sete anos!<NEWLINE>Grrrrr!<BOX_BREAK>A culpa é daquele garoto da ocarina!<NEWLINE>Da próxima vez que aparecer,<NEWLINE>vou acabar com ele!<END>)PTBR",
        0x00
    },
    {
        0x5035,
        R"PTBR(<UNSKIPPABLE>O quê?! Você tem uma ocarina!!<BOX_BREAK><UNSKIPPABLE>Mas que coisa!<BOX_BREAK><UNSKIPPABLE>Isso me lembra do que aconteceu<NEWLINE>há sete anos!<BOX_BREAK><UNSKIPPABLE>Um garoto malvado veio aqui<NEWLINE>e tocou uma <COLOR:PURPLE>canção estranha<COLOR:DEFAULT>.<NEWLINE>Ela descontrolou este moinho!<END>)PTBR",
        0x03
    },
    {
        0x5036,
        R"PTBR(O que vou fazer?!<NEWLINE>Meus <COLOR:RED>Cuccos<COLOR:DEFAULT> fugiram todos!<BOX_BREAK>Você, garoto! Por favor!<NEWLINE>Ajude a trazê-los de volta<NEWLINE>para este cercado!<END>)PTBR",
        0x00
    },
    {
        0x5037,
        R"PTBR(Meus Cuccos fugiram!<NEWLINE>Ajude a trazer os outros quatro<NEWLINE>para o cercado! Por favor!<END>)PTBR",
        0x00
    },
    {
        0x5038,
        R"PTBR(Meus Cuccos fugiram!<NEWLINE>Ajude a trazer os outros três<NEWLINE>para o cercado! Por favor!<END>)PTBR",
        0x00
    },
    {
        0x5039,
        R"PTBR(Meus Cuccos fugiram!<NEWLINE>Ajude a trazer os outros dois<NEWLINE>para o cercado! Por favor!<END>)PTBR",
        0x00
    },
    {
        0x503A,
        R"PTBR(Meus Cuccos fugiram!<NEWLINE>Ajude a trazer o último<NEWLINE>para o cercado! Por favor!<END>)PTBR",
        0x00
    },
    {
        0x503B,
        R"PTBR(<UNSKIPPABLE>Obrigada por achar meus Cuccos.<NEWLINE>Tenho alergia e fico toda<NEWLINE>arrepiada quando toco neles.<BOX_BREAK><UNSKIPPABLE>Para agradecer, vou lhe dar isto.<NEWLINE>É feito de vidro fino e deve<NEWLINE>ser útil. Por favor,<NEWLINE>cuide bem dele!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x503C,
        R"PTBR(Ei, o que está fazendo?!<NEWLINE>Vá buscá-los de volta<NEWLINE>ou pague por eles!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x503D,
        R"PTBR(Por favor, não provoque meus Cuccos!<END>)PTBR",
        0x00
    },
    {
        0x503E,
        R"PTBR(<UNSKIPPABLE>Criei um novo tipo de Cucco<NEWLINE>em miniatura! É o <COLOR:RED>Cucco de<NEWLINE>Bolso<COLOR:DEFAULT>! Este pequenino<NEWLINE>não me causa alergia.<BOX_BREAK><UNSKIPPABLE>Os <COLOR:RED>Cuccos<COLOR:DEFAULT> são ótimos<NEWLINE>para acordar os preguiçosos.<NEWLINE>Você nunca ouviu<NEWLINE>falar disso?<BOX_BREAK><UNSKIPPABLE>Eles ficam felizes ao cantar:<NEWLINE><QUICKTEXT_ENABLE><SHIFT:0x38><COLOR:RED>COCORICÓ<COLOR:DEFAULT>!<QUICKTEXT_DISABLE><NEWLINE>Ainda mais quando acordam<NEWLINE>alguém com sono pesado!<BOX_BREAK><UNSKIPPABLE>Mas meu Cucco não está<NEWLINE>muito feliz no momento...<BOX_BREAK><UNSKIPPABLE>Você...<NEWLINE>Parece que leva jeito<NEWLINE>para cuidar de Cuccos.<BOX_BREAK><UNSKIPPABLE>Aqui, pegue este ovo.<NEWLINE>Depois que ele chocar,<NEWLINE>traga o Cucco de volta<NEWLINE>para eu ver se está feliz.<TEXTID:0x50,0x3F>)PTBR",
        0x00
    },
    {
        0x503F,
        R"PTBR(O que acha?<NEWLINE>Quer tentar?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x5040,
        R"PTBR(Ah, que pena... Algum Cucco<NEWLINE>bicou você quando era pequeno?<EVENT><END>)PTBR",
        0x00
    },
    {
        0x5041,
        R"PTBR(He, he, he, rapaz!<NEWLINE>Você corre bem?<BOX_BREAK>Pode não parecer,<NEWLINE>mas confio na minha velocidade!<NEWLINE>Vamos apostar uma corrida!<NEWLINE>Siga-me se tiver coragem!<END>)PTBR",
        0x00
    },
    {
        0x5042,
        R"PTBR(Faça meu Cucco ficar feliz,<NEWLINE>está bem?<END>)PTBR",
        0x00
    },
    {
        0x5043,
        R"PTBR(<UNSKIPPABLE>Ah, seu Cucco parece bem feliz!<NEWLINE>Deve ter acordado alguém<NEWLINE>muito preguiçoso!<BOX_BREAK><UNSKIPPABLE>Você cuida bem dos Cuccos!<NEWLINE>Posso lhe dar um bem raro<NEWLINE>e valioso, se quiser...<BOX_BREAK><UNSKIPPABLE>Ele se chama <COLOR:RED>Cojiro<COLOR:DEFAULT><COLOR:RED> <COLOR:DEFAULT>e era<NEWLINE>do meu irmão. Suas penas<NEWLINE>azuis são tão charmosas!<NEWLINE>É uma gracinha!<BOX_BREAK><UNSKIPPABLE>É estranho, mas, desde que<NEWLINE>meu irmão foi embora,<NEWLINE>Cojiro parou de cantar.<TEXTID:0x50,0x44>)PTBR",
        0x00
    },
    {
        0x5044,
        R"PTBR(Quer ficar com <COLOR:RED>Cojiro<COLOR:DEFAULT>?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x5045,
        R"PTBR(Parece que gosta mesmo<NEWLINE>do outro Cucco. Tudo bem,<NEWLINE>pode ficar com ele por um tempo.<EVENT><END>)PTBR",
        0x00
    },
    {
        0x5046,
        R"PTBR(Uma velha bruxa tem uma Loja<NEWLINE>de Poções atrás desta aqui.<NEWLINE>Para chegar lá, passe pela porta<NEWLINE>à esquerda do balcão.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x5047,
        R"PTBR(Meu irmão deve ter se sentido<NEWLINE>muito sozinho...<END>)PTBR",
        0x00
    },
    {
        0x5048,
        R"PTBR(Dizem que os <COLOR:ADJUSTABLE>Bosques Perdidos<COLOR:DEFAULT>,<NEWLINE>onde vivem as fadas, são estranhos<NEWLINE>e cheios de aromas misteriosos.<BOX_BREAK>Queria, só uma vez, fazer<NEWLINE>um remédio com as coisas<NEWLINE>estranhas que existem lá...<BOX_BREAK>Talvez eu já não enxergue<NEWLINE>muito bem, mas meu nariz<NEWLINE>funciona direitinho! Hi, hi!<END>)PTBR",
        0x00
    },
    {
        0x5049,
        R"PTBR(Snif, snif, snif...<BOX_BREAK>Que cheiro misterioso...<BOX_BREAK>Você deve ter algo aí!<END>)PTBR",
        0x00
    },
    {
        0x504A,
        R"PTBR(Aquele vadio! Tinha que ir<NEWLINE>para a floresta...<NEWLINE><TEXT_SPEED:0x01>.....<TEXT_SPEED:0x00>Entendo.<TEXTID:0x50,0x4B>)PTBR",
        0x00
    },
    {
        0x504B,
        R"PTBR(Ei, entregue isso agora!<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x504C,
        R"PTBR(Que pena... Só preciso de um pouco...<END>)PTBR",
        0x00
    },
    {
        0x504D,
        R"PTBR(<UNSKIPPABLE>Se vir aquele tolo, entregue isto<NEWLINE>a ele. É o remédio mais forte<NEWLINE>que já preparei.<BOX_BREAK><UNSKIPPABLE>Mas esta poção não<NEWLINE>funciona em monstros...<EVENT><END>)PTBR",
        0x00
    },
    {
        0x504E,
        R"PTBR(Ei, garoto! Para levar remédio,<NEWLINE>você precisa de um recipiente<NEWLINE>onde guardá-lo!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x504F,
        R"PTBR(Dizem que nenhum remédio<NEWLINE>pode curar um tolo...<NEWLINE>Acho que é verdade...<END>)PTBR",
        0x00
    },
    {
        0x5050,
        R"PTBR(Não consigo descer. Só me resta<NEWLINE>olhar a <COLOR:RED>Montanha da Morte<COLOR:DEFAULT>.<END>)PTBR",
        0x00
    },
    {
        0x5051,
        R"PTBR(Não consigo descer. Só me resta<NEWLINE>olhar as estrelas.<END>)PTBR",
        0x00
    },
    {
        0x5052,
        R"PTBR(Dá para ver daí?<NEWLINE>Algo acontece na <COLOR:RED>Montanha<NEWLINE>da Morte<COLOR:DEFAULT>!<END>)PTBR",
        0x00
    },
    {
        0x5053,
        R"PTBR(Dá para ver daí?<NEWLINE>A <COLOR:RED>Montanha da Morte<COLOR:DEFAULT> está normal!<END>)PTBR",
        0x00
    },
    {
        0x5054,
        R"PTBR(Não quero descer nunca!<NEWLINE>Aconteça o que acontecer,<NEWLINE>vou continuar observando<NEWLINE>a Montanha da Morte daqui.<END>)PTBR",
        0x00
    },
    {
        0x5055,
        R"PTBR(<UNSKIPPABLE>Ei! Que bom ver você de novo!<NEWLINE>Tome isto de lembrança.<END>)PTBR",
        0x00
    },
    {
        0x5056,
        R"PTBR(Para apreciar a vista, use <COLOR:YELLOW><BYTE:0xA5><COLOR:DEFAULT><NEWLINE>e olhe ao redor com <COLOR:LIGHTBLUE><BYTE:0xAA><COLOR:DEFAULT>.<END>)PTBR",
        0x00
    },
    {
        0x5057,
        R"PTBR(<UNSKIPPABLE>Ei, garoto! Sempre entra<NEWLINE>na casa dos outros sem pedir?<NEWLINE>Seus pais não ensinaram<NEWLINE>boas maneiras?<BOX_BREAK><UNSKIPPABLE><SHIFT:0x42>Ah, bem.<BOX_BREAK><UNSKIPPABLE>Viu a moça atrás<NEWLINE>desta casa? Ela está<NEWLINE>passando por dificuldades.<BOX_BREAK><UNSKIPPABLE><SHIFT:0x42>Ah, bem.<TEXTID:0x50,0x58>)PTBR",
        0x03
    },
    {
        0x5058,
        R"PTBR(Se aquela moça falar dos Cuccos,<NEWLINE>é melhor ouvi-la.<END>)PTBR",
        0x03
    },
    {
        0x5059,
        R"PTBR(<UNSKIPPABLE>Acha divertido visitar<NEWLINE>a casa dos outros tão tarde?<NEWLINE>Pelo visto, não lhe deram<NEWLINE>uma boa educação.<BOX_BREAK><UNSKIPPABLE><SHIFT:0x42>Ah, bem.<TEXTID:0x50,0x5A>)PTBR",
        0x03
    },
    {
        0x505A,
        R"PTBR(Aquela moça cuida de Cuccos,<NEWLINE>mas, na verdade, tem<NEWLINE>alergia a eles.<BOX_BREAK><SHIFT:0x42>Ah, bem.<END>)PTBR",
        0x03
    },
    {
        0x505B,
        R"PTBR(<UNSKIPPABLE>Ei, rapaz! Desse tamanho<NEWLINE>e entrando sem permissão<NEWLINE>na casa dos outros?! Quero<NEWLINE>falar com seus pais!<BOX_BREAK><UNSKIPPABLE><SHIFT:0x42>Ah, bem.<BOX_BREAK><UNSKIPPABLE>A casa nem é minha.<NEWLINE>É da <COLOR:RED>grande Impa<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>A grande Impa foi ao<NEWLINE><COLOR:RED>cemitério<COLOR:DEFAULT> para selar<NEWLINE>a criatura gigantesca de lá.<BOX_BREAK><UNSKIPPABLE>Desde que Ganondorf apareceu,<NEWLINE>muitos monstros têm sido<NEWLINE>vistos por aqui.<BOX_BREAK><UNSKIPPABLE>Só a grande Impa manteve<NEWLINE>a paz na nossa vila.<NEWLINE>Lembre-se disso, rapaz!<BOX_BREAK><UNSKIPPABLE><SHIFT:0x42>Ah, bem.<BOX_BREAK><UNSKIPPABLE>Falando nela, a grande Impa<NEWLINE>ainda não voltou. O que será<NEWLINE>que aconteceu com ela?<TEXTID:0x50,0x5C>)PTBR",
        0x03
    },
    {
        0x505C,
        R"PTBR(Ouvi dizer que o <COLOR:RED>fantasma do<NEWLINE>coveiro<COLOR:DEFAULT> costuma aparecer<NEWLINE>no cemitério atrás da vila...<BOX_BREAK><SHIFT:0x34>Mas não é nada demais.<END>)PTBR",
        0x03
    },
    {
        0x505D,
        R"PTBR(<UNSKIPPABLE>Olá, garoto! É a primeira vez<NEWLINE>que visita esta vila?<BOX_BREAK><UNSKIPPABLE><COLOR:RED>Impa<COLOR:DEFAULT>, uma grande mulher, abriu<NEWLINE>esta vila para nós, gente humilde.<TEXTID:0x50,0x5E>)PTBR",
        0x03
    },
    {
        0x505E,
        R"PTBR(Bem, fique à vontade.<NEWLINE>A comida ainda não está pronta.<END>)PTBR",
        0x03
    },
    {
        0x505F,
        R"PTBR(A grande Impa não está aqui.<NEWLINE>Será que aconteceu algo com ela?<END>)PTBR",
        0x03
    },
    {
        0x5060,
        R"PTBR(<UNSKIPPABLE>Todos têm momentos difíceis<NEWLINE>no passado que preferem<NEWLINE>não revelar a ninguém.<TEXTID:0x50,0x61>)PTBR",
        0x03
    },
    {
        0x5061,
        R"PTBR(Veja o homem barbudo dormindo<NEWLINE>ali. Aposto que até alguém<NEWLINE>como ele já passou<NEWLINE>por dificuldades na vida...<END>)PTBR",
        0x03
    },
    {
        0x5062,
        R"PTBR(Aquele barbudo voltou para<NEWLINE>o rancho. Parecia tão feliz!<END>)PTBR",
        0x03
    },
    {
        0x5063,
        R"PTBR(<UNSKIPPABLE>Dlim, dlom! Dlim, dlom!<NEWLINE>Sou o soldado-relógio de Kakariko!<NEWLINE>Agora são <TIME>.<BOX_BREAK><UNSKIPPABLE>Olá, rapaz.<NEWLINE>A grande <COLOR:RED>Impa<COLOR:DEFAULT>, protetora de Zelda,<NEWLINE>abriu esta vila para<NEWLINE>as pessoas comuns.<BOX_BREAK><UNSKIPPABLE>Ainda temos poucos moradores,<NEWLINE>mas um dia isto aqui será<NEWLINE>tão animado quanto a Cidade<NEWLINE>do Castelo de Hyrule! Será, sim!<BOX_BREAK><UNSKIPPABLE>Suba as <COLOR:RED>escadas ao norte<NEWLINE><COLOR:DEFAULT>da vila para encontrar a trilha<NEWLINE>que leva à Montanha da Morte.<BOX_BREAK><UNSKIPPABLE>Mas só pode subir a montanha<NEWLINE>com a permissão do rei.<END>)PTBR",
        0x00
    },
    {
        0x5064,
        R"PTBR(Dlim, dlom! Dlim, dlom!<NEWLINE>Agora são <TIME>.<END>)PTBR",
        0x00
    },
    {
        0x5065,
        R"PTBR(Dlim, dlom! Dlim, dlom!<NEWLINE>Agora são <TIME>.<NEWLINE>A propósito, sabe o que<NEWLINE>aconteceu no castelo?<END>)PTBR",
        0x00
    },
    {
        0x5066,
        R"PTBR(<UNSKIPPABLE>Ei, rapaz, o que faz<NEWLINE>vagando por aí<NEWLINE>a esta hora da noite?<BOX_BREAK><UNSKIPPABLE>Ah, entendi. Está testando<NEWLINE>sua coragem, não é? Deve<NEWLINE>querer ir ao... cemitério!<BOX_BREAK><UNSKIPPABLE>Espere! Por que estou<NEWLINE>conversando com uma criança?<NEWLINE>Preciso trabalhar! Trabalhar!<TEXTID:0x50,0x67>)PTBR",
        0x00
    },
    {
        0x5067,
        R"PTBR(Dlim, dlom! Dlim, dlom!<NEWLINE>Agora são <TIME>.<BOX_BREAK>A leste, fica um<NEWLINE><COLOR:RED>cemitério<COLOR:DEFAULT>. Dizem que é possível<NEWLINE>acalmar as almas dos mortos com<NEWLINE>uma <COLOR:BLUE>antiga canção da Família Real<COLOR:DEFAULT>.<END>)PTBR",
        0x00
    },
    {
        0x5068,
        R"PTBR(Há um sujeito estranho morando<NEWLINE>no moinho. Já o conheceu,<NEWLINE>Sr. Herói?<END>)PTBR",
        0x00
    },
    {
        0x5069,
        R"PTBR(As pessoas são nojentas.<NEWLINE>Meu pai e minha mãe<NEWLINE>também são.<NEWLINE>Você deve ser nojento também!<END>)PTBR",
        0x00
    },
    {
        0x506A,
        R"PTBR(Passamos o dia trabalhando<NEWLINE>em várias obras da vila.<NEWLINE>Ainda vai demorar um pouco<NEWLINE>para terminarmos tudo.<BOX_BREAK>Nosso chefe exige muito da gente!<END>)PTBR",
        0x00
    },
    {
        0x506B,
        R"PTBR(Estou morrendo de fome!<NEWLINE>Vamos jantar agora!<END>)PTBR",
        0x03
    },
    {
        0x506C,
        R"PTBR(Esses caras trabalham pela metade,<NEWLINE>mas, na hora de comer,<NEWLINE>querem uma porção inteira!<NEWLINE>É um bando de folgados!<END>)PTBR",
        0x03
    },
    {
        0x506D,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Poe: 30 Rupias<NEWLINE><COLOR:DEFAULT>Um espírito preso em um frasco.<NEWLINE>Venda a alguém que goste<NEWLINE>desse tipo de coisa estranha.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x506E,
        R"PTBR(<QUICKTEXT_ENABLE>Poe: 30 Rupias<QUICKTEXT_DISABLE><NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Comprar<NEWLINE>Não comprar<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x506F,
        R"PTBR(506f<END>)PTBR",
        0x00
    },
    {
        0x5070,
        R"PTBR(Meus Cuccos fugiram!<NEWLINE>Pegue mais seis, por favor!<END>)PTBR",
        0x00
    },
    {
        0x5071,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:LIGHTBLUE><NAME>!<NEWLINE>O navio está afundando!<NEWLINE>Saia dele!<NEWLINE>Pule para uma plataforma segura!<COLOR:DEFAULT><QUICKTEXT_DISABLE><FADE:0x3C><END>)PTBR",
        0x00
    },
    {
        0x5072,
        R"PTBR(Ainda faltam alguns Cuccos!<NEWLINE>Traga mais cinco, por favor!<END>)PTBR",
        0x00
    },
    {
        0x5073,
        R"PTBR(<QUICKTEXT_ENABLE>Não faça bagunça!<NEWLINE>Vou contar ao Damp<BYTE:0x96>!<QUICKTEXT_DISABLE><FADE:0x3C><END>)PTBR",
        0x02
    },
    {
        0x5074,
        R"PTBR(Veja, garoto! Minhas mãos<NEWLINE>bonitas e macias ficaram<NEWLINE>ásperas de tanto trabalhar. Snif...<END>)PTBR",
        0x03
    },
    {
        0x5075,
        R"PTBR(Um trabalho que dê muito<NEWLINE>dinheiro sem grande esforço...<NEWLINE>Só consigo pensar em roubar...<NEWLINE>Será que é uma má ideia?<END>)PTBR",
        0x00
    },
    {
        0x5076,
        R"PTBR(Soube que nosso chefe mora<NEWLINE>bem atrás desta casa. Mas ele<NEWLINE>não quer que a gente saiba.<END>)PTBR",
        0x03
    },
    {
        0x5077,
        R"PTBR(Já viu o <COLOR:RED>Sr. Damp<BYTE:0x96><COLOR:DEFAULT>, que mora<NEWLINE>no cemitério logo adiante?<BOX_BREAK>Agora são <TIME>. Ele deve<NEWLINE>estar dormindo na cabana.<BOX_BREAK>Que tal sair para o campo<NEWLINE>e passar um pouco de tempo?<END>)PTBR",
        0x00
    },
    {
        0x5078,
        R"PTBR(Estou morrendo de fome!<NEWLINE>O jantar ainda não está pronto?<NEWLINE>Já são <TIME>!<END>)PTBR",
        0x03
    },
    {
        0x5079,
        R"PTBR(<UNSKIPPABLE>Esta era a <COLOR:RED>casa da<NEWLINE>grande Impa<COLOR:DEFAULT>, mas ela<NEWLINE>não mora mais aqui.<BOX_BREAK><UNSKIPPABLE>Agora, todos os moradores<NEWLINE>podem usá-la. Fique<NEWLINE>à vontade para entrar.<TEXTID:0x50,0x7A>)PTBR",
        0x00
    },
    {
        0x507A,
        R"PTBR(Esta vila era só dos<NEWLINE><COLOR:BLUE>Sheikah<COLOR:DEFAULT>, mas a<NEWLINE>grande Impa a abriu<NEWLINE>para todos.<END>)PTBR",
        0x00
    },
    {
        0x507B,
        R"PTBR(Estou dizendo, eu o vi!<BOX_BREAK>Vi o fantasma do coveiro Damp<BYTE:0x96><NEWLINE>entrando no próprio túmulo.<NEWLINE>Parecia estar segurando<NEWLINE>algum tipo de <COLOR:RED>tesouro<COLOR:DEFAULT>!<END>)PTBR",
        0x00
    },
    {
        0x507C,
        R"PTBR(É ele! Ali está ele!<NEWLINE>Foi ele que caiu do céu<NEWLINE>envolto em uma<NEWLINE>luz azul!<BOX_BREAK>Agora acredita em mim?<END>)PTBR",
        0x00
    },
    {
        0x507D,
        R"PTBR(Ninguém acredita no que<NEWLINE>venho contando há<NEWLINE>sete anos!<END>)PTBR",
        0x00
    },
    {
        0x507E,
        R"PTBR(O fogo quase acabou com todos!<NEWLINE>Mas, juntos, conseguimos<NEWLINE>apagar o incêndio!<NEWLINE>Fizemos um bom trabalho, não acha?<END>)PTBR",
        0x00
    },
    {
        0x507F,
        R"PTBR(Ha, ha, ha, ha, ha, ha!<BOX_BREAK>Veja só esse sujeito!<NEWLINE>Desde que fugiu da Cidade<NEWLINE>do Castelo de Hyrule,<NEWLINE>ficou ainda mais medroso!<END>)PTBR",
        0x00
    },
    {
        0x5080,
        R"PTBR(Ha, ha, ha, ha, ha, ha!<BOX_BREAK>Ele deve estar vendo coisas!<NEWLINE>Ha, ha, ha, ha, ha, ha!<END>)PTBR",
        0x00
    },
    {
        0x5081,
        R"PTBR(Ha, ha, ha, ha, ha, ha!<NEWLINE>Que roupas engraçadas<NEWLINE>você está usando, cara!<END>)PTBR",
        0x03
    },
    {
        0x5082,
        R"PTBR(Ha, ha, ha, ha, ha, ha!<NEWLINE>Nos momentos difíceis,<NEWLINE>rir é o melhor remédio!<NEWLINE>Meu pai sempre dizia isso!<END>)PTBR",
        0x03
    },
    {
        0x5083,
        R"PTBR(Veja só! Estou no topo do mundo!<NEWLINE>Não suporto ver ninguém<NEWLINE>num lugar mais alto que o meu!<NEWLINE>Preciso estar no topo!<END>)PTBR",
        0x00
    },
    {
        0x5084,
        R"PTBR(Se eu dormir aqui em cima,<NEWLINE>vou acabar caindo...<END>)PTBR",
        0x00
    },
    {
        0x5085,
        R"PTBR(O moinho puxa água<NEWLINE>do fundo do poço.<BOX_BREAK>Mas agora o poço secou.<NEWLINE>Hummm...<END>)PTBR",
        0x00
    },
    {
        0x5086,
        R"PTBR(A dona desta casa é muito<NEWLINE>generosa. Ela até cuidou<NEWLINE>dos carpinteiros quando<NEWLINE>eles estavam aqui!<END>)PTBR",
        0x03
    },
    {
        0x5087,
        R"PTBR(Há muito tempo...<NEWLINE>Vivia aqui na vila um homem<NEWLINE>que tinha um olho capaz<NEWLINE>de enxergar a verdade!<BOX_BREAK>Normalmente, é preciso treinar<NEWLINE>muito a visão da mente<NEWLINE>para enxergar a verdade...<BOX_BREAK>Mas dizem que esse homem<NEWLINE>tinha outro jeito<NEWLINE>de fazer isso...<BOX_BREAK>A casa dele ficava onde<NEWLINE>hoje está o poço...<END>)PTBR",
        0x00
    },
    {
        0x5088,
        R"PTBR(O pessoal conta que uma<NEWLINE><COLOR:RED>família muito rica<COLOR:DEFAULT><NEWLINE>morava em uma das casas<NEWLINE>desta vila...<BOX_BREAK>Mas dizem que a família<NEWLINE>inteira foi amaldiçoada<NEWLINE>por sua ganância!<BOX_BREAK>Quem sabe o que acontece<NEWLINE>a quem se deixa dominar<NEWLINE>pela ganância...<END>)PTBR",
        0x03
    },
    {
        0x5089,
        R"PTBR(He...<BOX_BREAK>Que pessoa inconveniente,<NEWLINE>nos interrompendo assim...<NEWLINE>Não acha, meu amor?<END>)PTBR",
        0x00
    },
    {
        0x508A,
        R"PTBR(Hi, hi...<BOX_BREAK>Invadindo nosso espaço!<NEWLINE>Ele deve ter algo<NEWLINE>melhor para fazer...<NEWLINE>Não acha, meu bem?<END>)PTBR",
        0x00
    },
    {
        0x508B,
        R"PTBR(<UNSKIPPABLE>Veja aquele homem de barba...<NEWLINE>Acho que ele foi demitido<NEWLINE>do trabalho no rancho...<TEXTID:0x50,0x8C>)PTBR",
        0x03
    },
    {
        0x508C,
        R"PTBR(Ele fica sem fazer nada<NEWLINE>de manhã, de tarde e de noite.<NEWLINE>É muito despreocupado<NEWLINE>para uma época tão difícil.<END>)PTBR",
        0x03
    },
    {
        0x508D,
        R"PTBR(Aquele preguiçoso me lembrava<NEWLINE>um pouco o meu Richard...<BOX_BREAK>Como? Nunca ouviu falar<NEWLINE>do meu pequeno Richard?<NEWLINE>Ele era um cãozinho tão famoso!<NEWLINE>Nunca ouviu mesmo falar dele?<END>)PTBR",
        0x03
    },
    {
        0x508E,
        R"PTBR(Ah, não! Outra tempestade!!<NEWLINE>Você tocou a ocarina<NEWLINE>de novo, não foi?!<NEWLINE>Grrrrr!!<END>)PTBR",
        0x00
    },
    {
        0x508F,
        R"PTBR(Você capturou um Grande Poe!<NEWLINE>Venda-o na <COLOR:RED>Loja de Fantasmas<COLOR:DEFAULT><NEWLINE>por um bom dinheiro!<END>)PTBR",
        0x20
    },
    {
        0x6000,
        R"PTBR(<QUICKTEXT_ENABLE>Alto! Fique onde está!<QUICKTEXT_DISABLE><END>)PTBR",
        0x02
    },
    {
        0x6001,
        R"PTBR(Ei, novato!<END>)PTBR",
        0x00
    },
    {
        0x6002,
        R"PTBR(Ei, novato! Espere um pouco<NEWLINE>que vou abrir o portão para você.<END>)PTBR",
        0x00
    },
    {
        0x6003,
        R"PTBR(<QUICKTEXT_ENABLE>Não nos subestime!<QUICKTEXT_DISABLE><END>)PTBR",
        0x02
    },
    {
        0x6004,
        R"PTBR(<UNSKIPPABLE>Vi suas habilidades. Para passar<NEWLINE>pelas guardas daqui, é preciso<NEWLINE>ter talento para ser ladrão.<BOX_BREAK><UNSKIPPABLE>Eu achava que todos os homens,<NEWLINE>exceto o grande Ganondorf,<NEWLINE>eram inúteis... Mas, depois<NEWLINE>de ver você, mudei de ideia!<BOX_BREAK><UNSKIPPABLE>A <COLOR:RED>venerável Nabooru<COLOR:DEFAULT>, nossa líder,<NEWLINE>me deixou no comando da fortaleza.<BOX_BREAK><UNSKIPPABLE>Nabooru é o braço direito<NEWLINE>do grande Ganondorf,<NEWLINE>rei das ladras Gerudo.<BOX_BREAK><UNSKIPPABLE>Ela fica no <COLOR:YELLOW>Templo do<NEWLINE>Espírito<COLOR:DEFAULT>, do outro lado<NEWLINE>do deserto.<BOX_BREAK><UNSKIPPABLE>Você deve querer fazer<NEWLINE>parte do nosso grupo, hein?<NEWLINE>Muito bem, então!<NEWLINE>Está aceito a partir de agora!<BOX_BREAK><UNSKIPPABLE>Leve isto. Com ele,<NEWLINE>terá acesso livre a todas<NEWLINE>as áreas da fortaleza!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6005,
        R"PTBR(De agora em diante, pode<NEWLINE>passar pelo portão do deserto<NEWLINE>quando quiser.<BOX_BREAK>No deserto fica o <COLOR:YELLOW>Templo do Espírito<COLOR:DEFAULT>,<COLOR:YELLOW><NEWLINE><COLOR:DEFAULT>onde mora a<NEWLINE>venerável Nabooru.<END>)PTBR",
        0x00
    },
    {
        0x6006,
        R"PTBR(<QUICKTEXT_ENABLE>Garoto estúpido!<QUICKTEXT_DISABLE><NEWLINE>Entre lá e fique quieto!<END>)PTBR",
        0x02
    },
    {
        0x6007,
        R"PTBR(<UNSKIPPABLE>Não sei de onde você veio,<NEWLINE>mas deve ter muita<NEWLINE>coragem para passar por<NEWLINE>todas as guardas daqui!<BOX_BREAK><UNSKIPPABLE>Todos os meus colegas carpinteiros<NEWLINE>estão presos por aqui.<BOX_BREAK><UNSKIPPABLE>Se conseguir nos tirar daqui,<NEWLINE>daremos um jeito de retribuir!<BOX_BREAK><UNSKIPPABLE>Mas tome cuidado! Deve haver<NEWLINE>guardas <COLOR:RED>Gerudo<COLOR:DEFAULT> em algum lugar<NEWLINE><TEXT_SPEED:0x02><QUICKTEXT_ENABLE>por<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>aqui<QUICKTEXT_DISABLE>...<TEXT_SPEED:0x00><BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE>Ah!<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>Cuidado!<QUICKTEXT_DISABLE><END>)PTBR",
        0x00
    },
    {
        0x6008,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x2E>A Entrada para o Passado<QUICKTEXT_DISABLE><END>)PTBR",
        0x10
    },
    {
        0x6009,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x24>A Entrada para o Presente<QUICKTEXT_DISABLE><END>)PTBR",
        0x10
    },
    {
        0x600A,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x24>A Entrada para o Futuro<QUICKTEXT_DISABLE><END>)PTBR",
        0x10
    },
    {
        0x600B,
        R"PTBR(<SFX:0x38,0xEC>Na ida, seu guia eu serei,<NEWLINE>mas na volta não ajudarei!<NEWLINE>Só há um caminho a tomar,<NEWLINE>siga-me sem se atrasar!<FADE:0x5A><END>)PTBR",
        0x03
    },
    {
        0x600C,
        R"PTBR(<UNSKIPPABLE>Passado, presente, futuro...<BOX_BREAK><UNSKIPPABLE>A Espada Mestra é um navio<NEWLINE>com o qual você pode ir e vir<NEWLINE>pelo rio do tempo...<BOX_BREAK><UNSKIPPABLE>O porto desse navio fica<NEWLINE>no Templo do Tempo...<BOX_BREAK><UNSKIPPABLE>Para restaurar o Colosso do Deserto<NEWLINE>e entrar no <COLOR:YELLOW>Templo do Espírito<COLOR:DEFAULT>,<NEWLINE>é preciso voltar pelo<NEWLINE>fluxo do tempo...<BOX_BREAK><UNSKIPPABLE>Ouça o <COLOR:YELLOW>Réquiem do Espírito<COLOR:DEFAULT>...<NEWLINE>Esta melodia levará uma criança<NEWLINE>de volta ao deserto.<END>)PTBR",
        0x03
    },
    {
        0x600D,
        R"PTBR(Sou a mestra Gerudo<NEWLINE>do arco e flecha a cavalo!<NEWLINE>E também sou a melhor<NEWLINE>amazona entre as Gerudo!<BOX_BREAK>Quer tentar o arco e flecha<NEWLINE>a cavalo por <COLOR:RED>20 Rupias<COLOR:DEFAULT>?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x600E,
        R"PTBR(Você tem coragem. Gostei de você.<NEWLINE>Siga-me.<END>)PTBR",
        0x00
    },
    {
        0x600F,
        R"PTBR(Sem um cavalo,<NEWLINE>nem pensar!<END>)PTBR",
        0x00
    },
    {
        0x6010,
        R"PTBR(<QUICKTEXT_ENABLE>Não quero nada com<NEWLINE>um covarde como você!<QUICKTEXT_DISABLE><END>)PTBR",
        0x00
    },
    {
        0x6011,
        R"PTBR(Você não é tão bom quanto diz.<NEWLINE>Quem sabe na próxima vez.<END>)PTBR",
        0x00
    },
    {
        0x6012,
        R"PTBR(Você foi bem.<BOX_BREAK>Por hoje, admito a derrota.<NEWLINE>Parece que ainda tenho<NEWLINE>muito a melhorar.<END>)PTBR",
        0x00
    },
    {
        0x6013,
        R"PTBR(Este é o <COLOR:RED>Campo de Treinamento<NEWLINE>Gerudo<COLOR:DEFAULT>.<BOX_BREAK>Ninguém entra sem<NEWLINE>um cartão de membro.<END>)PTBR",
        0x00
    },
    {
        0x6014,
        R"PTBR(Este é o <COLOR:RED>Campo de Treinamento<NEWLINE>Gerudo<COLOR:DEFAULT>.<BOX_BREAK>Cartão de membro verificado.<BOX_BREAK>Uma tentativa por 10 Rupias!<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Tentar<NEWLINE>Não tentar<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x6015,
        R"PTBR(Certo. Vou pegar suas 10 Rupias.<NEWLINE>Dê o seu melhor!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6016,
        R"PTBR(Você não tem dinheiro suficiente!<NEWLINE><QUICKTEXT_ENABLE>Volte outra hora.<QUICKTEXT_DISABLE><END>)PTBR",
        0x00
    },
    {
        0x6017,
        R"PTBR(<UNSKIPPABLE>Ei, novato!<BOX_BREAK><UNSKIPPABLE>Vai entrar no deserto?<NEWLINE>Vou abrir o portão, mas...<BOX_BREAK><UNSKIPPABLE>Para atravessar o deserto,<NEWLINE>precisa passar por <COLOR:RED>duas provas<COLOR:DEFAULT>.<TEXTID:0x60,0x18>)PTBR",
        0x00
    },
    {
        0x6018,
        R"PTBR(A primeira é o <COLOR:RED>Rio de<NEWLINE>Areia<COLOR:DEFAULT>! Não dá para cruzá-lo<NEWLINE>andando! Depois de passar,<NEWLINE>siga as bandeiras que colocamos.<BOX_BREAK>A segunda é o <COLOR:RED>Guia<NEWLINE>Fantasma<COLOR:DEFAULT>!<BOX_BREAK>Sem <COLOR:RED>olhos que enxerguem<NEWLINE>a verdade<COLOR:DEFAULT>, você só vai<NEWLINE>acabar voltando para cá.<BOX_BREAK>Vai mesmo assim, não é?<NEWLINE>Não vou impedir...<NEWLINE>Vá em frente!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6019,
        R"PTBR(<UNSKIPPABLE>Por que veio até<NEWLINE>aqui embaixo? O quê?<NEWLINE>Ia me perguntar<NEWLINE>a mesma coisa?<TEXTID:0x60,0x1A>)PTBR",
        0x00
    },
    {
        0x601A,
        R"PTBR(Bem, já que está<NEWLINE>aqui embaixo, aproveite<NEWLINE>o passeio!<END>)PTBR",
        0x00
    },
    {
        0x601B,
        R"PTBR(Bom garoto! Obrigado!<NEWLINE>Desculpe por não ter algo<NEWLINE>tão bom para dar em troca...<NEWLINE>Mas aceite isto mesmo assim!<END>)PTBR",
        0x00
    },
    {
        0x601C,
        R"PTBR(601C<END>)PTBR",
        0x00
    },
    {
        0x601D,
        R"PTBR(<UNSKIPPABLE>Nunca vi você por aqui, garoto...<BOX_BREAK>O que quer?<NEWLINE><THREE_CHOICE><COLOR:ADJUSTABLE>Conhecer o templo.<NEWLINE>Procurar os Sábios.<NEWLINE>Nada, na verdade.<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x601E,
        R"PTBR(Você é só uma criança!<NEWLINE>O templo não é lugar para crianças!<END>)PTBR",
        0x00
    },
    {
        0x601F,
        R"PTBR(Um Sábio? Não conheço<NEWLINE>ninguém assim.<END>)PTBR",
        0x00
    },
    {
        0x6020,
        R"PTBR(<UNSKIPPABLE>Está sem nada para fazer?<NEWLINE>Chegou na hora certa! Pode<NEWLINE>me fazer um favor, garoto?<BOX_BREAK><UNSKIPPABLE>Espere, antes quero perguntar<NEWLINE>uma coisa... Você não é<NEWLINE>um dos seguidores...<BOX_BREAK>de Ganondorf, é?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>E se eu for?<NEWLINE>Odeio Ganondorf!<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x6021,
        R"PTBR(<UNSKIPPABLE>Ha, ha, ha!<NEWLINE>Não banque o durão, garoto.<NEWLINE>Só fiz uma pergunta!<BOX_BREAK><UNSKIPPABLE>Uma criança como você nunca<NEWLINE>seria seguidora de Ganondorf!<BOX_BREAK><UNSKIPPABLE>Bem, vamos ao que interessa...<TEXTID:0x60,0x23>)PTBR",
        0x00
    },
    {
        0x6022,
        R"PTBR(<UNSKIPPABLE>Ah, é!<BOX_BREAK><UNSKIPPABLE>Você tem coragem.<NEWLINE>Acho que gostei de você.<TEXTID:0x60,0x23>)PTBR",
        0x00
    },
    {
        0x6023,
        R"PTBR(<UNSKIPPABLE>Primeiro, vou me apresentar.<NEWLINE>Sou <COLOR:RED>Nabooru<COLOR:DEFAULT>, uma Gerudo.<NEWLINE>Sou uma ladra que age sozinha.<BOX_BREAK><UNSKIPPABLE>Mas não me entenda mal!<BOX_BREAK><UNSKIPPABLE>Embora também seja ladra,<NEWLINE>sou completamente diferente<NEWLINE>de Ganondorf.<BOX_BREAK><UNSKIPPABLE>Ele e seus seguidores roubam<NEWLINE>mulheres e crianças<NEWLINE>e até matam pessoas!<BOX_BREAK><UNSKIPPABLE>Talvez não saiba, garoto,<NEWLINE>mas as Gerudo são um povo<NEWLINE>de mulheres. Só nasce<NEWLINE>um homem a cada cem anos...<BOX_BREAK><UNSKIPPABLE>Nossa lei diz que esse homem<NEWLINE>deve ser o rei das Gerudo,<NEWLINE>mas nunca vou me curvar<NEWLINE>a alguém tão perverso!<BOX_BREAK><UNSKIPPABLE>A propósito, qual é<NEWLINE>o seu nome, garoto?<BOX_BREAK><UNSKIPPABLE><NAME>?!<BOX_BREAK><UNSKIPPABLE>Que nome é esse?<NEWLINE>Bem... Enfim...<TEXTID:0x60,0x24>)PTBR",
        0x00
    },
    {
        0x6024,
        R"PTBR(<UNSKIPPABLE>Quero pedir um favor...<BOX_BREAK><UNSKIPPABLE>Pode passar por este buraco<NEWLINE>e pegar um tesouro lá dentro?<BOX_BREAK><UNSKIPPABLE>São as <COLOR:BLUE>Manoplas de<NEWLINE>Prata<COLOR:DEFAULT>. Com elas, é fácil<NEWLINE>empurrar e puxar coisas<NEWLINE>muito pesadas!<BOX_BREAK><UNSKIPPABLE>Não, não, garoto!<NEWLINE>Nem pense em ficar<NEWLINE>com o tesouro!<BOX_BREAK><UNSKIPPABLE>As Manoplas de Prata<NEWLINE>não servem numa criança<NEWLINE>como você! Seja um bom<NEWLINE>garoto e traga-as para mim!<BOX_BREAK><UNSKIPPABLE>Ganondorf e seus capangas<NEWLINE>usam o Templo do Espírito<NEWLINE>como esconderijo.<BOX_BREAK><UNSKIPPABLE>Só com as Manoplas de Prata<NEWLINE>conseguirei me infiltrar<NEWLINE>nas profundezas do templo.<BOX_BREAK><UNSKIPPABLE>Quando entrar, vou roubar<NEWLINE>todos os tesouros e acabar<NEWLINE>com os planos deles!<BOX_BREAK>E então? Vai me ajudar?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x6025,
        R"PTBR(<UNSKIPPABLE>Obrigada, garoto!<BOX_BREAK><UNSKIPPABLE>Vamos dar uma boa surpresa<NEWLINE>a Ganondorf e seus seguidores,<NEWLINE>não é?<TEXTID:0x60,0x26>)PTBR",
        0x00
    },
    {
        0x6026,
        R"PTBR(Se conseguir pegar as<NEWLINE><COLOR:BLUE>Manoplas de Prata<COLOR:DEFAULT>...<BOX_BREAK>Vou fazer algo muito bom<COLOR:RED> <COLOR:DEFAULT>por você!<END>)PTBR",
        0x00
    },
    {
        0x6027,
        R"PTBR(Bem, o que eu esperava?<NEWLINE>Afinal, você é só uma criança!<END>)PTBR",
        0x00
    },
    {
        0x6028,
        R"PTBR(<UNSKIPPABLE>Ei! Aonde estão me levando?!<END>)PTBR",
        0x03
    },
    {
        0x6029,
        R"PTBR(<UNSKIPPABLE>Ho, ho, ho!<NEWLINE>Parece que temos visita, Koume.<END>)PTBR",
        0x01
    },
    {
        0x602A,
        R"PTBR(<UNSKIPPABLE>Hi, hi, hi!<NEWLINE>Parece que sim, Kotake!<END>)PTBR",
        0x03
    },
    {
        0x602B,
        R"PTBR(<UNSKIPPABLE>Que sujeito atrevido!<NEWLINE>Invadindo nosso templo<NEWLINE>com tanta ousadia...<NEWLINE>Ho, ho, ho!<END>)PTBR",
        0x01
    },
    {
        0x602C,
        R"PTBR(<UNSKIPPABLE>Precisamos dar uma lição<NEWLINE>nesse atrevido!<NEWLINE>Hi, hi, hi!<END>)PTBR",
        0x03
    },
    {
        0x602D,
        R"PTBR(<UNSKIPPABLE>Ah, fiel serva...<END>)PTBR",
        0x03
    },
    {
        0x602E,
        R"PTBR(<UNSKIPPABLE>Destrua esse intruso<NEWLINE>em nosso nome!<END>)PTBR",
        0x03
    },
    {
        0x602F,
        R"PTBR(<UNSKIPPABLE>Inimigo... Do grande Ganondorf...<NEWLINE>Deve morrer...<END>)PTBR",
        0x01
    },
    {
        0x6030,
        R"PTBR(<UNSKIPPABLE>Uuuh...<NEWLINE>Onde estou...?<END>)PTBR",
        0x03
    },
    {
        0x6031,
        R"PTBR(<UNSKIPPABLE>Ora, ora...<NEWLINE>Parece que ela voltou ao normal...<NEWLINE>Koume...<END>)PTBR",
        0x03
    },
    {
        0x6032,
        R"PTBR(<UNSKIPPABLE>Ela é só uma menina,<NEWLINE>mas é muito respeitada<NEWLINE>entre as Gerudo, Kotake...<END>)PTBR",
        0x03
    },
    {
        0x6033,
        R"PTBR(<UNSKIPPABLE>Talvez devêssemos fazê-la<NEWLINE>trabalhar para o grande Ganondorf<NEWLINE>por mais um tempinho!<NEWLINE>Ho, ho, ho!<END>)PTBR",
        0x03
    },
    {
        0x6034,
        R"PTBR(<UNSKIPPABLE>Então vamos controlar<NEWLINE>a mente dela de novo!<NEWLINE>Hi, hi, hi!<END>)PTBR",
        0x03
    },
    {
        0x6035,
        R"PTBR(<UNSKIPPABLE>Garoto, muito obrigada.<BOX_BREAK><UNSKIPPABLE>He, he... Veja só! Em sete anos,<NEWLINE>aquele garotinho virou<NEWLINE>um espadachim habilidoso!<END>)PTBR",
        0x03
    },
    {
        0x6036,
        R"PTBR(Se eu soubesse que se tornaria<NEWLINE>um homem tão bonito...<BOX_BREAK_DELAYED:0x50>Devia ter cumprido a promessa<NEWLINE>que fiz naquela época...<FADE:0x50><END>)PTBR",
        0x52
    },
    {
        0x6037,
        R"PTBR(<UNSKIPPABLE>Aqui, fique com <COLOR:RED>isto<COLOR:DEFAULT>...<NEWLINE>É muito importante para mim.<NEWLINE>Vamos competir de novo depois!<END>)PTBR",
        0x00
    },
    {
        0x6038,
        R"PTBR(<UNSKIPPABLE><NAME>... Até a próxima!<END>)PTBR",
        0x03
    },
    {
        0x6039,
        R"PTBR(<UNSKIPPABLE>A propósito...<BOX_BREAK><UNSKIPPABLE>Eu me dei muito mal...<BOX_BREAK><UNSKIPPABLE>Aquelas velhas bruxas controlaram<NEWLINE>minha mente, e Ganondorf me usou<NEWLINE>para realizar seus planos malignos...<BOX_BREAK><UNSKIPPABLE>Mas não é engraçado?<NEWLINE>Logo eu me tornar a<NEWLINE><COLOR:YELLOW>Sábia do Espírito<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>Agora vou enfrentá-los<NEWLINE>como integrante dos seis Sábios!<NEWLINE>He, he...<BOX_BREAK><UNSKIPPABLE>Eles vão pagar<NEWLINE>pelo que fizeram comigo!<END>)PTBR",
        0x03
    },
    {
        0x603A,
        R"PTBR(<UNSKIPPABLE>Garoto...<BOX_BREAK><UNSKIPPABLE>Não...<NEWLINE><NAME>, o Herói do Tempo!<BOX_BREAK><UNSKIPPABLE>Em vez de cumprir a promessa<NEWLINE>daquela época, entrego este<NEWLINE><COLOR:YELLOW>Medalhão<COLOR:DEFAULT> a você!<BOX_BREAK><UNSKIPPABLE>Aceite!<END>)PTBR",
        0x03
    },
    {
        0x603B,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x12>Aaaargh!<QUICKTEXT_DISABLE> Me soltem!!<END>)PTBR",
        0x02
    },
    {
        0x603C,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x33>Suas... <QUICKTEXT_ENABLE>malditas!<QUICKTEXT_DISABLE><NEWLINE><SHIFT:0x29>Servas de Ganondorf!<END>)PTBR",
        0x02
    },
    {
        0x603D,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x1E><NAME>!<QUICKTEXT_DISABLE><NEWLINE><SHIFT:0x20>Saia daqui, agora!<END>)PTBR",
        0x03
    },
    {
        0x603E,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x0C>Essas bruxas estão usando<NEWLINE><SHIFT:0x2B>magia negra em mim!<END>)PTBR",
        0x03
    },
    {
        0x603F,
        R"PTBR(Ei, novato! Este é nosso<NEWLINE><COLOR:RED>campo de arco e flecha a cavalo<COLOR:DEFAULT>.<BOX_BREAK>Depois de muito treino,<NEWLINE>aprendemos a acertar<NEWLINE>o centro do alvo galopando<NEWLINE>como o vento!<BOX_BREAK>Quando aprender a montar,<NEWLINE>volte para experimentar.<NEWLINE>É um esporte perigoso,<NEWLINE>mas divertido!<END>)PTBR",
        0x00
    },
    {
        0x6040,
        R"PTBR(Ei, novato! Que belo<NEWLINE>cavalo você tem!<BOX_BREAK>Não sei de onde<NEWLINE>você o roubou, mas...<BOX_BREAK>Que tal encarar o desafio<NEWLINE>do <COLOR:RED>arco e flecha a cavalo<COLOR:DEFAULT>?<BOX_BREAK>Quando o cavalo começar<NEWLINE>a galopar, atire flechas<NEWLINE>nos alvos.<BOX_BREAK>Vamos ver quantos pontos faz.<NEWLINE>Você terá 20 flechas.<BOX_BREAK>Se fizer <COLOR:RED>1.000 pontos<COLOR:DEFAULT>,<NEWLINE>vou lhe dar algo bom!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6041,
        R"PTBR(Quer tentar por <COLOR:RED>20 Rupias<COLOR:DEFAULT>?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x6042,
        R"PTBR(Ei, novato!<NEWLINE>Você está indo bem!<NEWLINE>Mostre sua habilidade de novo!<BOX_BREAK>Agora tente fazer<NEWLINE><COLOR:RED>1.500 pontos<COLOR:DEFAULT>!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6043,
        R"PTBR(Quer tentar de novo?<NEWLINE>Parece que você tem<NEWLINE>potencial!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6044,
        R"PTBR(Ora, vejam! Você é um<NEWLINE>mestre absoluto!<BOX_BREAK>Vou lhe dar algo<NEWLINE>digno de um mestre.<BOX_BREAK>Esta aljava é muito importante<NEWLINE>para mim. Quero que fique com ela.<NEWLINE>Cuide bem dela, está bem?<END>)PTBR",
        0x00
    },
    {
        0x6045,
        R"PTBR(<POINTS> pontos... Humm...<NEWLINE>Ha, ha, ha! Você ainda tem<NEWLINE>muito a melhorar!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6046,
        R"PTBR(Fantástico!<NEWLINE>Você é um verdadeiro mestre!<BOX_BREAK>Aceite isto.<NEWLINE>Continue se aperfeiçoando!<END>)PTBR",
        0x00
    },
    {
        0x6047,
        R"PTBR(<POINTS> pontos...<NEWLINE>Muito impressionante!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6048,
        R"PTBR(Veja aquele garoto tolo!<NEWLINE>Veio por vontade própria<NEWLINE>se oferecer em sacrifício<NEWLINE>ao grande Ganondorf...<FADE:0x5A><END>)PTBR",
        0x03
    },
    {
        0x6049,
        R"PTBR(<SHIFT:0x05>Minhas chamas vão queimá-lo<NEWLINE><SHIFT:0x46>até os ossos!<FADE:0x3C><END>)PTBR",
        0x03
    },
    {
        0x604A,
        R"PTBR(Meu gelo vai congelá-lo<NEWLINE><SHIFT:0x46>até a alma!<FADE:0x3C><END>)PTBR",
        0x03
    },
    {
        0x604B,
        R"PTBR(<SHIFT:0x1C>Que garoto atrevido!<NEWLINE><SHIFT:0x15>Agora vamos lutar a sério,<NEWLINE><SHIFT:0x3C>não é, Kotake?<FADE:0x5A><END>)PTBR",
        0x03
    },
    {
        0x604C,
        R"PTBR(<SHIFT:0x4B>O quê?<BOX_BREAK_DELAYED:0x14><SHIFT:0x0A>Ei, Koume, o que é isso<NEWLINE><SHIFT:0x41>sobre sua cabeça?<FADE:0x3C><END>)PTBR",
        0x03
    },
    {
        0x604D,
        R"PTBR(<SHIFT:0x0B>Não sei, mas tem uma coisa<NEWLINE><SHIFT:0x14>sobre a sua também, Kotake!<FADE:0x3C><END>)PTBR",
        0x03
    },
    {
        0x604E,
        R"PTBR(<SHIFT:0x14>Mas só tenho 400 anos!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x604F,
        R"PTBR(<SHIFT:0x14>E eu só tenho 380 anos!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x6050,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x0C>Somos gêmeas! Não minta<NEWLINE><SHIFT:0x35>sobre sua idade!<QUICKTEXT_DISABLE><FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x6051,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x06>Você deve estar caduca!<QUICKTEXT_DISABLE><FADE:0x14><END>)PTBR",
        0x03
    },
    {
        0x6052,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x1E>Chamou quem de caduca?!<NEWLINE><SHIFT:0x16>É assim que trata sua<NEWLINE><SHIFT:0x3D>irmã mais velha?<QUICKTEXT_DISABLE><FADE:0x1E><END>)PTBR",
        0x03
    },
    {
        0x6053,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x36>Somos gêmeas!<NEWLINE><SHIFT:0x26>Como pode ser mais velha?<QUICKTEXT_DISABLE><FADE:0x1E><END>)PTBR",
        0x03
    },
    {
        0x6054,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x3F>Aaaah!!<QUICKTEXT_DISABLE><NEWLINE><QUICKTEXT_ENABLE><SHIFT:0x20>Como você é insensível!<QUICKTEXT_DISABLE><FADE:0x14><END>)PTBR",
        0x03
    },
    {
        0x6055,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x12>Como pode ser tão ingrata?<QUICKTEXT_DISABLE><FADE:0x0A><END>)PTBR",
        0x03
    },
    {
        0x6056,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x35>Você não tem coração!!<QUICKTEXT_DISABLE><FADE:0x04><END>)PTBR",
        0x03
    },
    {
        0x6057,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x33>Sua ingrata...<QUICKTEXT_DISABLE><FADE:0x04><END>)PTBR",
        0x03
    },
    {
        0x6058,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x21>Voltarei para assombrar você!<QUICKTEXT_DISABLE><FADE:0x28><END>)PTBR",
        0x52
    },
    {
        0x6059,
        R"PTBR(<QUICKTEXT_ENABLE>Agora vamos lutar a sério, Kotake!<QUICKTEXT_DISABLE><FADE:0x1E><END>)PTBR",
        0x03
    },
    {
        0x605A,
        R"PTBR(<SHIFT:0x37><QUICKTEXT_ENABLE>Certo, Koume.<QUICKTEXT_DISABLE><BOX_BREAK_DELAYED:0x14><SHIFT:0x30><QUICKTEXT_ENABLE>Kotake<QUICKTEXT_DISABLE> e <QUICKTEXT_ENABLE>Koume<QUICKTEXT_DISABLE>:<NEWLINE><SHIFT:0x1C><QUICKTEXT_ENABLE>Ataque<QUICKTEXT_DISABLE> de Dinamite <QUICKTEXT_ENABLE>Duplo!<QUICKTEXT_DISABLE><FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x605B,
        R"PTBR(<UNSKIPPABLE>Veio me salvar? Que maravilha!<NEWLINE>Sou <COLOR:RED>Ichiro,<NEWLINE>o carpinteiro<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Queríamos muito entrar<NEWLINE>no grupo delas, só de mulheres.<NEWLINE>Mas elas nos prenderam<NEWLINE>só porque somos homens!<BOX_BREAK><UNSKIPPABLE>Não queremos mais saber<NEWLINE>das Gerudo! São tão grosseiras!<BOX_BREAK><UNSKIPPABLE><COLOR:RED>Três colegas meus<COLOR:DEFAULT> também<NEWLINE>foram capturados. Ajude-os<NEWLINE>a escapar, por favor!<END>)PTBR",
        0x00
    },
    {
        0x605C,
        R"PTBR(<UNSKIPPABLE>Que garoto simpático! Obrigado<NEWLINE>por me salvar! Sou <COLOR:RED>Jiro,<NEWLINE>o carpinteiro<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Essas mulheres dão medo!<NEWLINE>Prefiro ser carpinteiro<NEWLINE>a me juntar a elas!<BOX_BREAK><UNSKIPPABLE>Mal posso esperar para sair<NEWLINE>daqui! <COLOR:RED>Dois colegas meus<COLOR:DEFAULT><NEWLINE>ainda estão presos. Pode<NEWLINE>libertá-los também?<END>)PTBR",
        0x00
    },
    {
        0x605D,
        R"PTBR(<UNSKIPPABLE>Obrigado, garoto! Você é incrível!<NEWLINE>Sou <COLOR:RED>Sabooro, o carpinteiro<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Viu nosso chefe, garoto?<NEWLINE>Ele deve estar preocupado comigo!<NEWLINE>Preciso voltar para lá<NEWLINE><QUICKTEXT_ENABLE>imediatamente!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE><COLOR:RED>Mais um colega nosso<COLOR:DEFAULT> ainda<NEWLINE>está preso. Salve-o, por favor!<END>)PTBR",
        0x00
    },
    {
        0x605E,
        R"PTBR(<UNSKIPPABLE>Achei que fosse me esquecer!<NEWLINE>Agora estou livre! Obrigado!<NEWLINE>Sou <COLOR:RED>Shiro, o carpinteiro<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Como agradecimento, vou contar<NEWLINE>algo interessante sobre<NEWLINE>o deserto que ouvi<NEWLINE>as Gerudo comentando.<BOX_BREAK><UNSKIPPABLE>Elas disseram: "Para cruzar<NEWLINE>o Deserto Assombrado, é preciso<NEWLINE>ter o '<COLOR:RED>olho da verdade<COLOR:DEFAULT>'. O Colosso<NEWLINE>fica do outro lado do deserto..."<BOX_BREAK><UNSKIPPABLE>Vou voltar para minha<NEWLINE><COLOR:RED>tenda perto do Vale Gerudo<COLOR:DEFAULT>.<NEWLINE>Passe lá depois! Pode encontrar<NEWLINE>algo útil. Até mais!<END>)PTBR",
        0x00
    },
    {
        0x605F,
        R"PTBR(A líder do bando de ladras<NEWLINE>é <COLOR:RED>Nabooru<COLOR:DEFAULT>. Ela anda fazendo<NEWLINE>experiências de controle mental<NEWLINE>nas ruínas do deserto.<END>)PTBR",
        0x03
    },
    {
        0x6060,
        R"PTBR(Então era Ganondorf,<NEWLINE>o Rei do Mal, que estava<NEWLINE>por trás do bando de ladras...<END>)PTBR",
        0x03
    },
    {
        0x6061,
        R"PTBR(<UNSKIPPABLE>Quando <COLOR:RED>Nabooru<COLOR:DEFAULT> agia<NEWLINE>por conta própria, nunca<NEWLINE>roubava dos fracos, mas...<TEXTID:0x60,0x62>)PTBR",
        0x03
    },
    {
        0x6062,
        R"PTBR(Agora, o bando de Nabooru<NEWLINE>só espalha crueldade e violência.<NEWLINE>Ela diz ser uma ladra honrada,<NEWLINE>mas não é mesmo!<END>)PTBR",
        0x03
    },
    {
        0x6063,
        R"PTBR(Como eu suspeitava, os seguidores<NEWLINE>de Ganondorf haviam<NEWLINE>controlado a mente de Nabooru...<END>)PTBR",
        0x03
    },
    {
        0x6064,
        R"PTBR(<UNSKIPPABLE>Entre as Gerudo, quem domina<NEWLINE>a montaria e o arco e flecha<NEWLINE>recebe muito respeito.<TEXTID:0x60,0x65>)PTBR",
        0x03
    },
    {
        0x6065,
        R"PTBR(Que tal tentar o arco e flecha<NEWLINE>a cavalo na Fortaleza Gerudo?<BOX_BREAK>Se tiver um cavalo, uma<NEWLINE>Gerudo da fortaleza<NEWLINE>preparará o desafio.<END>)PTBR",
        0x03
    },
    {
        0x6066,
        R"PTBR(Você se saiu muito bem, rapaz!<END>)PTBR",
        0x03
    },
    {
        0x6067,
        R"PTBR(Construir uma ponte sobre o vale<NEWLINE>é tarefa fácil para<NEWLINE>quatro carpinteiros.<END>)PTBR",
        0x03
    },
    {
        0x6068,
        R"PTBR(Sem aquelas velhas bruxas,<NEWLINE>o bando de ladras nem dá tanto medo!<END>)PTBR",
        0x03
    },
    {
        0x6069,
        R"PTBR(A <COLOR:RED>Fortaleza Gerudo<COLOR:DEFAULT> fica depois<NEWLINE>deste portão. Uma criança como<NEWLINE>você não tem o que fazer lá.<END>)PTBR",
        0x00
    },
    {
        0x606A,
        R"PTBR(<UNSKIPPABLE><SFX:0x68,0x55>Sou um <COLOR:RED>mestre artesão<COLOR:DEFAULT>.<NEWLINE>Aquelas ladras Gerudo...<NEWLINE>Destruíram a ponte.<BOX_BREAK><UNSKIPPABLE>Quero consertá-la, mas todos<NEWLINE>os meus funcionários sumiram!<BOX_BREAK><UNSKIPPABLE>Disseram que ser carpinteiro<NEWLINE>não é legal e foram para a<NEWLINE><COLOR:RED>Fortaleza Gerudo<COLOR:DEFAULT> para<NEWLINE>virar ladrões...<TEXTID:0x60,0x6B>)PTBR",
        0x00
    },
    {
        0x606B,
        R"PTBR(Ei, você! Se for<NEWLINE>à fortaleza, pode<NEWLINE>ver o que meus funcionários<NEWLINE>estão fazendo lá?<END>)PTBR",
        0x00
    },
    {
        0x606C,
        R"PTBR(Soube que salvou meus homens.<NEWLINE>Quando voltaram, construímos<NEWLINE>esta ponte.<BOX_BREAK>Veja só!<NEWLINE>Não é uma bela ponte?<BOX_BREAK>Eles podem ser uns molengas,<NEWLINE>mas, quando se uniram,<NEWLINE>deram conta do trabalho.<END>)PTBR",
        0x00
    },
    {
        0x606D,
        R"PTBR(<UNSKIPPABLE><SFX:0x68,0x55>Ei, essa serra é minha!<BOX_BREAK><UNSKIPPABLE>Mas... Achei que a tivesse<NEWLINE>deixado com minha mulher... Enfim...<TEXTID:0x60,0x6E>)PTBR",
        0x00
    },
    {
        0x606E,
        R"PTBR(Minha ferramenta de Biggoron<NEWLINE>quebrou. Eu ia à Cidade Goron<NEWLINE>mandar consertá-la.<BOX_BREAK>Você chegou na hora certa.<NEWLINE>Pode devolver minha serra?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x606F,
        R"PTBR(<SHIFT:0x47><QUICKTEXT_ENABLE>O quê?!<NEWLINE><SHIFT:0x14>Seu ladrão sujo e desprezível!<QUICKTEXT_DISABLE><END>)PTBR",
        0x00
    },
    {
        0x6070,
        R"PTBR(Este é o <COLOR:RED>Campo de Treinamento<NEWLINE>Gerudo<COLOR:DEFAULT>. A entrada é proibida<NEWLINE>para quem não está qualificado.<END>)PTBR",
        0x00
    },
    {
        0x6071,
        R"PTBR(Este é o <COLOR:RED>Campo de Treinamento<NEWLINE>Gerudo<COLOR:DEFAULT>. Você está qualificado...<NEWLINE>Entre e aprimore suas habilidades<NEWLINE>o quanto quiser.<EVENT><END>)PTBR",
        0x00
    },
    {
        0x6072,
        R"PTBR(Este é o <COLOR:RED>Campo de Treinamento<NEWLINE>Gerudo<COLOR:DEFAULT>. Mesmo qualificado,<NEWLINE>não vá querer ficar com<NEWLINE>todos os tesouros daqui!<END>)PTBR",
        0x00
    },
    {
        0x6073,
        R"PTBR(6073<END>)PTBR",
        0x00
    },
    {
        0x6074,
        R"PTBR(Ah, que pena.<BOX_BREAK>Para seguir ao Templo<NEWLINE>do Espírito, procure a <COLOR:RED>bandeira<NEWLINE>à esquerda<COLOR:DEFAULT>, fora da loja.<BOX_BREAK>Se mudar de ideia,<NEWLINE>volte outra hora!<END>)PTBR",
        0x00
    },
    {
        0x6075,
        R"PTBR(Ah, faltam Rupias.<NEWLINE>Não desconto nem uma Rupia.<END>)PTBR",
        0x00
    },
    {
        0x6076,
        R"PTBR(He, he.<NEWLINE>Você já está ocupado<NEWLINE>com outra coisa, não é?<BOX_BREAK>Se quiser me desafiar,<NEWLINE>precisa vir de cabeça livre.<NEWLINE>Sem distrações!<END>)PTBR",
        0x01
    },
    {
        0x6077,
        R"PTBR(<SHIFT:0x41>Bem-vindo!<BOX_BREAK>Vendo objetos estranhos<NEWLINE>e raros do mundo todo<NEWLINE>para qualquer pessoa.<NEWLINE>A oferta de hoje é...<BOX_BREAK>Um objeto perigoso que corre!<NEWLINE>Aterrorizante!<NEWLINE>Só conto o que é<NEWLINE>depois de ver o dinheiro...<BOX_BREAK>Que tal <COLOR:RED>200 Rupias<COLOR:DEFAULT>?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Comprar<NEWLINE>Não comprar<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x6078,
        R"PTBR(Muito obrigado!<BOX_BREAK>O que vendo é... <TEXT_SPEED:0x02><COLOR:RED>Bombchu<COLOR:DEFAULT>!<TEXT_SPEED:0x00><BOX_BREAK>Para seguir ao Templo<NEWLINE>do Espírito, procure a <COLOR:RED>bandeira<NEWLINE>à esquerda<COLOR:DEFAULT>, fora da loja.<NEWLINE>Até a próxima!<END>)PTBR",
        0x00
    },
    {
        0x6079,
        R"PTBR(<UNSKIPPABLE>Olá, <NAME>!<NEWLINE>Surpreso em me ver?<BOX_BREAK><UNSKIPPABLE>Um longo tempo neste mundo<NEWLINE>é quase nada para você, não é?<NEWLINE>Que mistério!<BOX_BREAK><UNSKIPPABLE>Até eu achava que as histórias<NEWLINE>de um garoto capaz<NEWLINE>de ir e vir pelo tempo<NEWLINE>eram apenas uma lenda.<BOX_BREAK><UNSKIPPABLE><NAME>, você se tornou<NEWLINE>um adulto de verdade.<TEXTID:0x60,0x7A>)PTBR",
        0x03
    },
    {
        0x607A,
        R"PTBR(De agora em diante,<NEWLINE>o futuro de todo o povo<NEWLINE>de Hyrule está em suas mãos.<BOX_BREAK>Talvez minha época tenha passado.<NEWLINE>Aqui vai meu último conselho.<BOX_BREAK>Duas bruxas vivem neste templo.<NEWLINE>Para derrotá-las, <COLOR:RED>use a magia<NEWLINE>delas contra elas mesmas<COLOR:DEFAULT>.<NEWLINE>Hu, hu!<TEXTID:0x60,0x7B>)PTBR",
        0x03
    },
    {
        0x607B,
        R"PTBR(Quer que eu repita<NEWLINE>o que disse?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x607C,
        R"PTBR(<UNSKIPPABLE>Continuarei observando você...<NEWLINE>Hu, hu, hu, hu!<END>)PTBR",
        0x03
    },
    {
        0x607D,
        R"PTBR(<UNSKIPPABLE>Sou o corredor viajante!<NEWLINE>Já corri por toda esta terra<NEWLINE>em busca de verdadeiros rivais.<BOX_BREAK><UNSKIPPABLE>Venci todos os desafiantes,<NEWLINE>humanos e animais.<BOX_BREAK><UNSKIPPABLE>Você parece um rapaz atlético,<NEWLINE>com um verdadeiro<NEWLINE>instinto de vencedor.<BOX_BREAK><UNSKIPPABLE>Agora que a ponte do Vale Gerudo<NEWLINE>está pronta, procuro alguém<NEWLINE>para disputar uma corrida<NEWLINE>em comemoração.<TEXTID:0x60,0x7E>)PTBR",
        0x01
    },
    {
        0x607E,
        R"PTBR(O melhor tempo daqui até<NEWLINE>a <COLOR:ADJUSTABLE>ponte nos Bosques Perdidos<COLOR:DEFAULT> é<NEWLINE><COLOR:RED><HIGHSCORE:0x04><COLOR:DEFAULT>. Esse é o meu recorde.<BOX_BREAK>Quer tentar bater meu recorde?<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x01
    },
    {
        0x607F,
        R"PTBR(Excelente!<NEWLINE>Então...<BOX_BREAK>Você primeiro.<NEWLINE>Vou te dar uma vantagem.<BOX_BREAK>Agora! <TEXT_SPEED:0x02>Vá em frente.<TEXT_SPEED:0x00><END>)PTBR",
        0x01
    },
    {
        0x6080,
        R"PTBR(He, he, he.<NEWLINE>Com essa atitude, nunca<NEWLINE>vai despertar seu<NEWLINE>instinto de vencedor.<END>)PTBR",
        0x01
    },
    {
        0x6081,
        R"PTBR(Bem, não foi perfeito, mas você<NEWLINE>tem garra! Infelizmente,<NEWLINE>nunca vai me vencer. Seu<NEWLINE>recorde já é coisa do passado.<BOX_BREAK>Seu tempo foi <COLOR:RED><HIGHSCORE:0x04><COLOR:DEFAULT>, não é?<NEWLINE>Foi por pouco, mas venci<NEWLINE>por um segundo!<EVENT><END>)PTBR",
        0x01
    },
    {
        0x6082,
        R"PTBR(He, he, he.<NEWLINE>Por favor. <TEXT_SPEED:0x02>Pode ir.<TEXT_SPEED:0x00><END>)PTBR",
        0x01
    },
    {
        0x6083,
        R"PTBR(Ah, parece que desistiu da corrida.<NEWLINE>He, he, he. Aposto que estava quase<NEWLINE>despertando seu instinto de vencedor!<FADE:0x3C><END>)PTBR",
        0x01
    },
    {
        0x6084,
        R"PTBR(He, he.<NEWLINE>Ainda falta despertar<NEWLINE>seu instinto de vencedor.<BOX_BREAK>Treine mais.<NEWLINE><QUICKTEXT_ENABLE>Até a próxima, então!<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x01
    },
    {
        0x6085,
        R"PTBR(<TEXT_SPEED:0x01><QUICKTEXT_ENABLE>Uf...<QUICKTEXT_DISABLE><QUICKTEXT_ENABLE>Uf...<QUICKTEXT_DISABLE><QUICKTEXT_ENABLE>Uf...<QUICKTEXT_DISABLE><TEXT_SPEED:0x00><BOX_BREAK>Uf... Uf... Ufa!<NEWLINE>Você foi muito bem!<BOX_BREAK>Mas não conseguiu me vencer!<NEWLINE>Seu tempo foi <COLOR:RED><MARATHON_TIME><COLOR:DEFAULT>, mas<NEWLINE>ganhei por um segundo!<BOX_BREAK>Uf... Uf...<NEWLINE>Venha me desafiar<NEWLINE>de novo qualquer hora!<BOX_BREAK>Uf... Uf...<NEWLINE><QUICKTEXT_ENABLE>Até a próxima, então!<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x01
    },
    {
        0x6086,
        R"PTBR(Sou o corredor viajante!<NEWLINE>Já corri por toda esta terra<NEWLINE>em busca de rivais com um<NEWLINE>verdadeiro instinto de vencedor!<BOX_BREAK>Vim correr pelo<NEWLINE>Deserto Assombrado, mas<NEWLINE>não parece uma boa hora.<BOX_BREAK>Quero voltar ao Campo de Hyrule,<NEWLINE>mas a ponte está... Bem,<NEWLINE>dá para ver daqui. Estou<NEWLINE>preso nesta tenda.<BOX_BREAK>Acho que não posso aceitar<NEWLINE>seu desafio agora.<NEWLINE>He, he!<END>)PTBR",
        0x01
    },
    {
        0x6087,
        R"PTBR(6087<END>)PTBR",
        0x00
    },
    {
        0x6088,
        R"PTBR(6088<END>)PTBR",
        0x00
    },
    {
        0x6089,
        R"PTBR(6089<END>)PTBR",
        0x00
    },
    {
        0x608A,
        R"PTBR(608A<END>)PTBR",
        0x00
    },
    {
        0x608B,
        R"PTBR(608B<END>)PTBR",
        0x00
    },
    {
        0x608C,
        R"PTBR(608C<END>)PTBR",
        0x00
    },
    {
        0x608D,
        R"PTBR(608D<END>)PTBR",
        0x00
    },
    {
        0x608E,
        R"PTBR(608E<END>)PTBR",
        0x00
    },
    {
        0x608F,
        R"PTBR(608F<END>)PTBR",
        0x00
    },
    {
        0x7000,
        R"PTBR(Não consigo pegar aquele Cucco!<END>)PTBR",
        0x00
    },
    {
        0x7001,
        R"PTBR(Uf, uf!<NEWLINE>Estou atrasado! Muito atrasado!<NEWLINE>Tenho um encontro importante!<END>)PTBR",
        0x00
    },
    {
        0x7002,
        R"PTBR(Esta é a Cidade do Castelo de Hyrule.<NEWLINE>Bem-vindo! Aqui há paz e prosperidade.<END>)PTBR",
        0x00
    },
    {
        0x7003,
        R"PTBR(Crianças não devem andar pela<NEWLINE>cidade à noite! Fique em casa<NEWLINE>até amanhecer!<END>)PTBR",
        0x03
    },
    {
        0x7004,
        R"PTBR(Estou tão entediado...<NEWLINE>Tudo seria mais interessante<NEWLINE>se houvesse mais...<NEWLINE>Problemas no mundo...<BOX_BREAK>Ei, mas isso fica<NEWLINE>só entre nós, está bem?<BOX_BREAK>Enfim, talvez dê para<NEWLINE>descontar a frustração<NEWLINE>quebrando estes vasos.<BOX_BREAK>Perto de um vaso, aperte <COLOR:BLUE><BYTE:0x9F><COLOR:DEFAULT> para<NEWLINE>erguê-lo e <COLOR:BLUE><BYTE:0x9F><COLOR:DEFAULT> de novo para lançá-lo!<END>)PTBR",
        0x00
    },
    {
        0x7005,
        R"PTBR(<UNSKIPPABLE>Isso é ótimo!<BOX_BREAK><UNSKIPPABLE>Esqueci de te dizer...<EVENT><END>)PTBR",
        0x01
    },
    {
        0x7006,
        R"PTBR(<QUICKTEXT_ENABLE>Há muita coisa acontecendo<NEWLINE>no castelo agora. Não posso<NEWLINE>deixar nem um cachorro<NEWLINE>entrar lá!<QUICKTEXT_DISABLE><END>)PTBR",
        0x00
    },
    {
        0x7007,
        R"PTBR(<UNSKIPPABLE>Uuugh... Você é o garoto<NEWLINE>da floresta...?<BOX_BREAK><UNSKIPPABLE>F-finalmente encontrei você...<NEWLINE>T-tenho algo para<NEWLINE>lhe d-dizer...<BOX_BREAK><UNSKIPPABLE><COLOR:RED>Ganondorf<COLOR:DEFAULT>, o rei dos ladrões<NEWLINE>Gerudo, traiu nosso rei...<BOX_BREAK><UNSKIPPABLE><COLOR:RED>Impa<COLOR:DEFAULT>, a protetora de Zelda,<NEWLINE>percebeu o perigo e fugiu<NEWLINE>do castelo com a princesa...<BOX_BREAK><UNSKIPPABLE>Tentei impedir os homens de<NEWLINE>Ganondorf de segui-las... Mas...<BOX_BREAK><UNSKIPPABLE>A princesa esperava por um<NEWLINE>garoto da floresta... Você...<NEWLINE>Ela queria lhe entregar <COLOR:RED>algo<COLOR:DEFAULT>...<NEWLINE>A esse garoto...<BOX_BREAK><UNSKIPPABLE>Se você recebeu<NEWLINE>da princesa, <TEXT_SPEED:0x03><QUICKTEXT_ENABLE>corra<QUICKTEXT_DISABLE>... <QUICKTEXT_ENABLE>para o<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE><COLOR:LIGHTBLUE>Tem<QUICKTEXT_DISABLE><QUICKTEXT_ENABLE>plo<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>do<QUICKTEXT_DISABLE><NEWLINE>Tempo<COLOR:DEFAULT>...<TEXT_SPEED:0x00><EVENT><END>)PTBR",
        0x00
    },
    {
        0x7008,
        R"PTBR(Ele não está mais se mexendo...<END>)PTBR",
        0x20
    },
    {
        0x7009,
        R"PTBR(<UNSKIPPABLE>Vê o homem com<NEWLINE>aquele olhar maligno?<BOX_BREAK><UNSKIPPABLE>É <COLOR:RED>Ganondorf<COLOR:DEFAULT>, o líder<NEWLINE>das Gerudo. Elas vêm<NEWLINE>do deserto distante, a oeste.<BOX_BREAK><UNSKIPPABLE>Ele jura lealdade ao meu pai,<NEWLINE>mas tenho certeza de que<NEWLINE>não é sincero.<BOX_BREAK><UNSKIPPABLE>As nuvens escuras que<NEWLINE>cobriam Hyrule no meu sonho...<NEWLINE>Devem representar esse homem!<END>)PTBR",
        0x03
    },
    {
        0x700A,
        R"PTBR(<SHIFT:0x0E>He, he, he! Muito bem!<BOX_BREAK_DELAYED:0x3C><SHIFT:0x08>Como pensei, você tinha as<NEWLINE><SHIFT:0x26>chaves da Porta do Tempo!<BOX_BREAK_DELAYED:0x5A><SHIFT:0x05>Você me trouxe aos portões<NEWLINE><SHIFT:0x2D>do Reino Sagrado...<BOX_BREAK_DELAYED:0x50><SHIFT:0x10>Sim, devo tudo a você, garoto!<FADE:0x32><END>)PTBR",
        0x03
    },
    {
        0x700B,
        R"PTBR(<UNSKIPPABLE>Por favor! Se não se apressar,<NEWLINE>ele vai embora!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x700C,
        R"PTBR(Por favor... Use <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT>...<NEWLINE>Venda-me o <COLOR:RED>conteúdo<COLOR:DEFAULT> de<NEWLINE>um frasco...<NEWLINE>Por favor... Use <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT>...<END>)PTBR",
        0x00
    },
    {
        0x700D,
        R"PTBR(Que loja estranha!<NEWLINE>Quando será que abre?<NEWLINE>Li a placa, mas<NEWLINE>continuo achando esquisita!<END>)PTBR",
        0x00
    },
    {
        0x700E,
        R"PTBR(Parece que está demorando<NEWLINE>uma eternidade para amanhecer...<BOX_BREAK>O Castelo de Hyrule fica lindo<NEWLINE>à luz do sol da manhã!<END>)PTBR",
        0x00
    },
    {
        0x700F,
        R"PTBR(Para salvar a garota da floresta,<NEWLINE>precisa de <COLOR:RED>outra habilidade<COLOR:DEFAULT>...<NEWLINE>Vá à Vila Kakariko!<END>)PTBR",
        0x00
    },
    {
        0x7010,
        R"PTBR(Parece que já tem<NEWLINE>as habilidades necessárias...<NEWLINE>A <COLOR:ADJUSTABLE>garota da floresta<COLOR:DEFAULT><NEWLINE>está esperando sua ajuda...<END>)PTBR",
        0x00
    },
    {
        0x7011,
        R"PTBR(Se quiser poções, traga<NEWLINE>um frasco vazio.<NEWLINE>Entendeu, rapaz?<PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x7012,
        R"PTBR(Desculpe, é só uma amostra.<NEWLINE>Com a crise na Cidade Goron,<NEWLINE>não recebemos entregas<NEWLINE>e o estoque acabou.<PERSISTENT><END>)PTBR",
        0x23
    },
    {
        0x7013,
        R"PTBR(Se for subir a Montanha da Morte,<NEWLINE>compre um <COLOR:LIGHTBLUE>Escudo Hyliano<COLOR:DEFAULT>.<NEWLINE>Ele protege você das<NEWLINE>pedras que caem.<BOX_BREAK>Mas talvez seja grande<NEWLINE>demais para uma criança...<PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x7014,
        R"PTBR(Não estou dançando, sabia...<NEWLINE>Minhas costas estão coçando!<NEWLINE>Uuuh! Aaah! Uuuh!<END>)PTBR",
        0x00
    },
    {
        0x7015,
        R"PTBR(Dizem que nós, <COLOR:LIGHTBLUE>hylianos<COLOR:DEFAULT>, temos<NEWLINE>orelhas grandes para ouvir os<NEWLINE>deuses... Mas eu nunca os ouvi!<END>)PTBR",
        0x00
    },
    {
        0x7016,
        R"PTBR(<UNSKIPPABLE>Garoto, já foi ao<NEWLINE><COLOR:YELLOW>Rancho Lon Lon<COLOR:DEFAULT>?<BOX_BREAK><UNSKIPPABLE>O leite de lá é delicioso!<NEWLINE>Tem muitos cavalos,<NEWLINE>e a filhinha do dono<NEWLINE>é uma gracinha!<TEXTID:0x70,0x17>)PTBR",
        0x00
    },
    {
        0x7017,
        R"PTBR(Para ir ao <COLOR:YELLOW>Rancho Lon Lon<COLOR:DEFAULT>,<NEWLINE>saia da cidade e atravesse<NEWLINE>o campo rumo ao sul. Vale a pena<NEWLINE>visitar o rancho pelo menos uma vez!<END>)PTBR",
        0x00
    },
    {
        0x7018,
        R"PTBR(<UNSKIPPABLE>Eu queria ver a <COLOR:RED>Princesa Zelda<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>Escapei dos guardas...<BOX_BREAK><UNSKIPPABLE>Atravessei o fosso a nado...<BOX_BREAK><UNSKIPPABLE>Estava quase lá<NEWLINE>quando me pegaram!<TEXTID:0x70,0x19>)PTBR",
        0x00
    },
    {
        0x7019,
        R"PTBR(Achei uma <COLOR:RED>pequena passagem de água<COLOR:DEFAULT><NEWLINE>do lado direito do castelo.<NEWLINE>Pensei em entrar escondido por ela,<NEWLINE>mas fiquei preso.<END>)PTBR",
        0x00
    },
    {
        0x701A,
        R"PTBR(<SHIFT:0x37>Aham! <QUICKTEXT_ENABLE>Humm!<QUICKTEXT_DISABLE><BOX_BREAK><SHIFT:0x05>Esta barba é meu orgulho!<NEWLINE><SHIFT:0x07>Não é uma beleza, garoto?!<END>)PTBR",
        0x00
    },
    {
        0x701B,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x37>Aham! <QUICKTEXT_ENABLE>Humm!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE><SHIFT:0x05>Esta barba é meu orgulho!<NEWLINE><SHIFT:0x07>Não é uma beleza, garoto?!<BOX_BREAK><UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x51>O quê?!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Procura o homem do<NEWLINE>Rancho Lon Lon?<BOX_BREAK><UNSKIPPABLE>Humm, talvez...<TEXTID:0x70,0x1C>)PTBR",
        0x00
    },
    {
        0x701C,
        R"PTBR(Vi um <COLOR:RED>homem de barba<NEWLINE>malcuidada<COLOR:DEFAULT> entregando<NEWLINE>algumas caixas no castelo.<END>)PTBR",
        0x00
    },
    {
        0x701D,
        R"PTBR(<UNSKIPPABLE>Conhece o <COLOR:LIGHTBLUE>Templo do<NEWLINE>Tempo<COLOR:DEFAULT> que fica na<NEWLINE>parte nordeste da cidade?<TEXTID:0x70,0x1E>)PTBR",
        0x00
    },
    {
        0x701E,
        R"PTBR(Dizem que o Templo do Tempo<NEWLINE>é a entrada para<NEWLINE>o Reino Sagrado...<BOX_BREAK>Sabia disso?<END>)PTBR",
        0x00
    },
    {
        0x701F,
        R"PTBR(<UNSKIPPABLE>Ha, ha, ha! Que sujeito maluco!<BOX_BREAK><UNSKIPPABLE>Acredita que ele tentou<NEWLINE>entrar escondido no castelo<NEWLINE>para ver a <COLOR:RED>Princesa Zelda<COLOR:DEFAULT>?<TEXTID:0x70,0x20>)PTBR",
        0x00
    },
    {
        0x7020,
        R"PTBR(Por causa desse idiota,<NEWLINE>reforçaram a segurança do castelo.<NEWLINE>Ha, ha, ha!<END>)PTBR",
        0x00
    },
    {
        0x7021,
        R"PTBR(<UNSKIPPABLE>Ganhei muito dinheiro!<BOX_BREAK><UNSKIPPABLE>Talvez eu deva procurar<NEWLINE>mais coisas para vender!<TEXTID:0x70,0x22>)PTBR",
        0x00
    },
    {
        0x7022,
        R"PTBR(Já sei! Vou ao <COLOR:BLUE>Lago Hylia<COLOR:DEFAULT>!<NEWLINE>Muitas coisas descem pelo rio<NEWLINE>e acabam chegando lá!<NEWLINE>Ha, ha!<END>)PTBR",
        0x00
    },
    {
        0x7023,
        R"PTBR(<UNSKIPPABLE>Ei, garoto! Esta é a <COLOR:LIGHTBLUE>cidade<NEWLINE>de Hyrule<COLOR:DEFAULT>! Passeie com calma<NEWLINE>e aproveite a vista!<TEXTID:0x70,0x24>)PTBR",
        0x00
    },
    {
        0x7024,
        R"PTBR(Se veio ver o <COLOR:LIGHTBLUE>Castelo de<NEWLINE>Hyrule<COLOR:DEFAULT>, pegue a rua<NEWLINE>à direita.<BOX_BREAK>Se quiser conhecer os <COLOR:BLUE>becos<NEWLINE>dos fundos<COLOR:DEFAULT> da cidade,<NEWLINE>pegue a rua à esquerda.<END>)PTBR",
        0x00
    },
    {
        0x7025,
        R"PTBR(Ahhh...<BOX_BREAK>Você é... Tão bonito...<BOX_BREAK>Como o Rei de Hyrule...<BOX_BREAK>Hi, hi...<END>)PTBR",
        0x00
    },
    {
        0x7026,
        R"PTBR(Ahhh...<BOX_BREAK>Você é...<BOX_BREAK>Mais bonita...<BOX_BREAK>Que a Princesa Zelda...<BOX_BREAK>Ahhh...<END>)PTBR",
        0x00
    },
    {
        0x7027,
        R"PTBR(<UNSKIPPABLE>Já ouviu a lenda do<NEWLINE>"Povo das Sombras"?<BOX_BREAK><UNSKIPPABLE>São os <COLOR:BLUE>Sheikah<COLOR:DEFAULT>... As sombras<NEWLINE>dos hylianos.<BOX_BREAK><UNSKIPPABLE>Dizem que juraram lealdade<NEWLINE>ao Rei de Hyrule e<NEWLINE>protegiam a Família Real.<BOX_BREAK><UNSKIPPABLE>Mas, com tantos anos de paz,<NEWLINE>ninguém vê um Sheikah<NEWLINE>por aqui há muito tempo.<BOX_BREAK><UNSKIPPABLE>Porém...<TEXTID:0x70,0x28>)PTBR",
        0x00
    },
    {
        0x7028,
        R"PTBR(Ouvi dizer que uma <COLOR:BLUE>Sheikah<NEWLINE><COLOR:DEFAULT>mora no castelo...<END>)PTBR",
        0x00
    },
    {
        0x7029,
        R"PTBR(Então quer ver a<NEWLINE><COLOR:RED>Princesa Zelda<COLOR:DEFAULT>, hein?<BOX_BREAK>Deve ter ouvido falar dela<NEWLINE>na cidade e decidido que<NEWLINE>precisava conhecê-la... Bem...<BOX_BREAK><QUICKTEXT_ENABLE>Vá para casa!<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>Saia daqui!<QUICKTEXT_DISABLE><NEWLINE>A princesa nunca receberia<NEWLINE>alguém como você!<END>)PTBR",
        0x00
    },
    {
        0x702A,
        R"PTBR(Z Z Z Z Z...<BOX_BREAK>Humm... Humm...<BOX_BREAK>Bem-vindo... O rancho é tão divertido...<BOX_BREAK>Venha dar uma olhada...<END>)PTBR",
        0x00
    },
    {
        0x702B,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE><SHIFT:0x2D>Mas que raios?!<QUICKTEXT_DISABLE><BOX_BREAK><UNSKIPPABLE>Não dá nem para tirar<NEWLINE>um cochilo por aqui?<END>)PTBR",
        0x00
    },
    {
        0x702C,
        R"PTBR(<UNSKIPPABLE>Olá, quem é você?<BOX_BREAK><UNSKIPPABLE>Isso, sou <COLOR:RED>Talon<COLOR:DEFAULT>, o dono<NEWLINE>do Rancho Lon Lon.<BOX_BREAK><UNSKIPPABLE>Vim entregar leite no castelo,<NEWLINE>mas sentei aqui para descansar<NEWLINE>e acho que peguei no sono...<BOX_BREAK><UNSKIPPABLE><SHIFT:0x4C><SFX:0x68,0x52>O quê?!<NEWLINE>Malon estava me procurando?<NEWLINE>Agora vou levar uma bronca!<BOX_BREAK><UNSKIPPABLE>Fiz uma bela besteira deixando<NEWLINE>Malon esperando por mim!<BOX_BREAK><UNSKIPPABLE>Ela vai me dar um sermão daqueles!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x702D,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x37>Ei, você! Pare!<NEWLINE><SHIFT:0x28>Você aí, garoto!<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x02
    },
    {
        0x702E,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x5F>!<BOX_BREAK_DELAYED:0x0A><UNSKIPPABLE><SHIFT:0x4E><QUICKTEXT_ENABLE>Quem?!<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x03
    },
    {
        0x702F,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x3A>Quem é você?<BOX_BREAK><UNSKIPPABLE>Como passou pelos guardas?<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7030,
        R"PTBR(Você tem? <NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x7031,
        R"PTBR(Bem, que estranho...<NEWLINE>Achei que você fosse<NEWLINE>o garoto do meu sonho...<NEWLINE>Não tem mesmo?<BOX_BREAK>Diga a verdade...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7032,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x2D>Como eu pensava!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7033,
        R"PTBR(Por favor, não conte<NEWLINE>isso a ninguém...<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Está bem<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x7034,
        R"PTBR(Vamos... Não vá contar para todos!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7035,
        R"PTBR(<UNSKIPPABLE>A lenda diz o seguinte...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7036,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x12>As três deusas esconderam a<NEWLINE><SHIFT:0x07><COLOR:RED>Triforce<COLOR:DEFAULT>, que contém o poder<NEWLINE><SHIFT:0x0D>dos deuses, em um local de Hyrule.<BOX_BREAK_DELAYED:0x50><UNSKIPPABLE><SHIFT:0x45>O poder<NEWLINE><SHIFT:0x03>de realizar o desejo de quem<NEWLINE><SHIFT:0x0A>tem a Triforce em suas mãos.<BOX_BREAK_DELAYED:0x50><UNSKIPPABLE><SHIFT:0x03>O desejo de um coração justo<NEWLINE><SHIFT:0x07>levará Hyrule a uma era<NEWLINE><SHIFT:0x09>de paz e prosperidade...<BOX_BREAK_DELAYED:0x3C><UNSKIPPABLE><SHIFT:0x06>Mas, se atender a um desejo<NEWLINE><SHIFT:0x0A>maligno, o mundo inteiro<NEWLINE><SHIFT:0x02>será consumido pelo mal...<NEWLINE><SHIFT:0x35>Assim diz a lenda...<BOX_BREAK_DELAYED:0x50><UNSKIPPABLE><SHIFT:0x16>Os antigos Sábios construíram<NEWLINE><SHIFT:0x02>o <COLOR:LIGHTBLUE>Templo do Tempo<COLOR:DEFAULT> para proteger<NEWLINE><SHIFT:0x20>a Triforce de pessoas malignas.<FADE:0x5A><END>)PTBR",
        0x23
    },
    {
        0x7037,
        R"PTBR(Isso mesmo... O Templo do Tempo<NEWLINE>é a passagem que liga<NEWLINE>nosso mundo<NEWLINE>ao Reino Sagrado.<BOX_BREAK>Mas a entrada está selada<NEWLINE>por uma parede de pedra chamada<NEWLINE><COLOR:LIGHTBLUE>Porta do Tempo<COLOR:DEFAULT>.<BOX_BREAK>Dizem que, para abri-la,<NEWLINE>é preciso reunir<NEWLINE>três <COLOR:RED>Pedras Espirituais<COLOR:DEFAULT>.<BOX_BREAK>E também é necessário...<NEWLINE>O tesouro que a Família Real<NEWLINE>guarda junto com esta lenda...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7038,
        R"PTBR(Ah, desculpe.<NEWLINE>Não sou muito boa contando histórias...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7039,
        R"PTBR(<UNSKIPPABLE><QUICKTEXT_ENABLE>O que foi?<QUICKTEXT_DISABLE> Ele viu você?<BOX_BREAK><UNSKIPPABLE>Não se preocupe.<BOX_BREAK><UNSKIPPABLE>Ele não faz ideia<NEWLINE>dos nossos planos... Ainda!<EVENT><END>)PTBR",
        0x01
    },
    {
        0x703A,
        R"PTBR(<UNSKIPPABLE>Por favor!<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Está bem<NEWLINE>Não acredito em você.<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x703B,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x42>Obrigada!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x703C,
        R"PTBR(Minha protetora vai guiar<NEWLINE>você para fora do castelo.<NEWLINE>Não tenha medo de falar com ela.<END>)PTBR",
        0x00
    },
    {
        0x703D,
        R"PTBR(A Pedra Espiritual...<NEWLINE>Você finalmente a encontrou!<BOX_BREAK>Dizem que os povos que guardam<NEWLINE>as Pedras Espirituais só<NEWLINE>confiam em quem conhece a<NEWLINE><COLOR:BLUE>melodia da Família Real<COLOR:DEFAULT>.<BOX_BREAK>Mas você já sabe disso,<NEWLINE>não é?<END>)PTBR",
        0x00
    },
    {
        0x703E,
        R"PTBR(Já ouviu dizer que a<NEWLINE>Princesa Zelda tem visões<NEWLINE>proféticas nos sonhos?<END>)PTBR",
        0x00
    },
    {
        0x703F,
        R"PTBR(Hã? O quê? Xô, garoto! Xô!<END>)PTBR",
        0x00
    },
    {
        0x7040,
        R"PTBR(Há três cavidades<NEWLINE>e uma inscrição aqui...<BOX_BREAK><QUICKTEXT_ENABLE>Quem tiver as 3 Pedras Espirituais<COLOR:BLUE><NEWLINE><COLOR:DEFAULT>deve portar a <COLOR:LIGHTBLUE>Ocarina do Tempo<COLOR:BLUE><NEWLINE><COLOR:DEFAULT>e tocar a <COLOR:LIGHTBLUE>Canção do Tempo<COLOR:DEFAULT><QUICKTEXT_DISABLE><BOX_BREAK>É o que diz a inscrição.<EVENT><END>)PTBR",
        0x20
    },
    {
        0x7041,
        R"PTBR(Vamos, não dá para fazer<NEWLINE>mais barato?<END>)PTBR",
        0x00
    },
    {
        0x7042,
        R"PTBR(Ei, solte! É meu!<NEWLINE>Eu achei primeiro!<END>)PTBR",
        0x00
    },
    {
        0x7043,
        R"PTBR(Ei, quem esbarrou em mim?!<END>)PTBR",
        0x00
    },
    {
        0x7044,
        R"PTBR(Não costumamos ver<NEWLINE>Gerudo por aqui...<NEWLINE>Tem algo suspeito acontecendo!<END>)PTBR",
        0x00
    },
    {
        0x7045,
        R"PTBR(Não era a Princesa Zelda<NEWLINE>naquele cavalo branco?!<END>)PTBR",
        0x00
    },
    {
        0x7046,
        R"PTBR(Quase levei um coice<NEWLINE>daquele cavalo preto!<END>)PTBR",
        0x00
    },
    {
        0x7047,
        R"PTBR(O homem no cavalo preto<NEWLINE>devia ser Ganondorf,<NEWLINE>o famoso rei<NEWLINE>dos ladrões Gerudo.<END>)PTBR",
        0x00
    },
    {
        0x7048,
        R"PTBR(O que aconteceu?!<END>)PTBR",
        0x00
    },
    {
        0x7049,
        R"PTBR(Veja como ele está assustado!<NEWLINE>Que medroso!<NEWLINE>Ha, ha, ha!<END>)PTBR",
        0x00
    },
    {
        0x704A,
        R"PTBR(Sinto que algo terrível<NEWLINE>está para acontecer...<NEWLINE>Talvez seja melhor sair da cidade.<END>)PTBR",
        0x00
    },
    {
        0x704B,
        R"PTBR(Algo aconteceu no castelo!<NEWLINE>Garoto, é melhor ter cuidado!<END>)PTBR",
        0x00
    },
    {
        0x704C,
        R"PTBR(Use essa <COLOR:RED>chave<COLOR:DEFAULT> para entrar<NEWLINE>na próxima sala. Vá, vá!<END>)PTBR",
        0x00
    },
    {
        0x704D,
        R"PTBR(A mulher no cavalo branco,<NEWLINE>segurando a menina...<NEWLINE>Não era uma lendária Sheikah?<END>)PTBR",
        0x00
    },
    {
        0x704E,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x2D><NAME>...<BOX_BREAK><UNSKIPPABLE><SHIFT:0x45>Acorde...<NEWLINE><SHIFT:0x05><NAME>, o escolhido...<END>)PTBR",
        0x52
    },
    {
        0x704F,
        R"PTBR(<UNSKIPPABLE>Sou <COLOR:RED>Rauru<COLOR:DEFAULT>, um dos antigos<NEWLINE>Sábios...<BOX_BREAK><UNSKIPPABLE>Há muito tempo, nós<NEWLINE>construímos o Templo do Tempo<NEWLINE>para proteger a entrada<NEWLINE>do Reino Sagrado...<BOX_BREAK><UNSKIPPABLE>Esta é a <COLOR:RED>Câmara dos Sábios<COLOR:DEFAULT>,<COLOR:RED><NEWLINE><COLOR:DEFAULT>dentro do Templo da Luz...<BOX_BREAK><UNSKIPPABLE>No centro do Reino Sagrado,<NEWLINE>o Templo da Luz é o<NEWLINE>último refúgio contra<NEWLINE>as forças malignas de Ganondorf.<BOX_BREAK><UNSKIPPABLE>A <COLOR:RED>Espada Mestra<COLOR:DEFAULT>, que destrói<NEWLINE>o mal e que você retirou<NEWLINE>do Pedestal do Tempo, era<NEWLINE>a última chave do Reino Sagrado.<BOX_BREAK><UNSKIPPABLE><NAME>...<NEWLINE>Não se assuste...<NEWLINE>Olhe para si mesmo...!<END>)PTBR",
        0x03
    },
    {
        0x7050,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x23><COLOR:LIGHTBLUE>Veja, <NAME>!<NEWLINE><COLOR:DEFAULT><SHIFT:0x32><COLOR:LIGHTBLUE>Você está grande!!<NEWLINE><COLOR:DEFAULT><SHIFT:0x31><COLOR:LIGHTBLUE>Você cresceu!<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x7051,
        R"PTBR(<UNSKIPPABLE>A Espada Mestra é uma lâmina<NEWLINE>sagrada que pessoas malignas<NEWLINE>jamais podem tocar...<BOX_BREAK><UNSKIPPABLE>Só quem for digno do título de<NEWLINE>"<COLOR:RED>Herói do Tempo<COLOR:DEFAULT>"<COLOR:RED> <COLOR:DEFAULT>pode retirá-la<NEWLINE>do Pedestal do Tempo...<BOX_BREAK><UNSKIPPABLE>Mas você era jovem demais<NEWLINE>para ser o Herói do Tempo...<BOX_BREAK><UNSKIPPABLE>Por isso, seu espírito ficou<NEWLINE>selado aqui por sete anos.<BOX_BREAK><UNSKIPPABLE>Agora que tem idade suficiente,<NEWLINE>chegou o momento de<NEWLINE>despertar<COLOR:RED> <COLOR:DEFAULT>como o Herói do Tempo!<BOX_BREAK>Então, compreende<NEWLINE>seu destino?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x7052,
        R"PTBR(Parece que você está confuso...<NEWLINE>Vou explicar de novo,<NEWLINE>desde o começo.<TEXTID:0x70,0x51>)PTBR",
        0x03
    },
    {
        0x7053,
        R"PTBR(<UNSKIPPABLE>Mas lembre-se...<BOX_BREAK><UNSKIPPABLE>Você abriu a Porta do Tempo<NEWLINE>em nome da paz...<BOX_BREAK><UNSKIPPABLE>Mas <COLOR:RED>Ganondorf<COLOR:DEFAULT>, o rei dos ladrões<NEWLINE>Gerudo, a usou para entrar<NEWLINE>neste Reino Sagrado proibido!<BOX_BREAK><UNSKIPPABLE>Ele obteve a Triforce no<NEWLINE>Templo da Luz e, com seu poder,<NEWLINE>tornou-se o <COLOR:RED>Rei do Mal<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Seu poder maligno se espalhou<NEWLINE>a partir dos templos de Hyrule.<NEWLINE>Em apenas sete anos, transformou<NEWLINE>Hyrule num mundo de monstros.<BOX_BREAK><UNSKIPPABLE>Agora, meu poder tem pouco<NEWLINE>alcance, mesmo dentro<NEWLINE>do Reino Sagrado...<BOX_BREAK><UNSKIPPABLE>Ele se limita à Câmara dos Sábios.<BOX_BREAK><UNSKIPPABLE>Mas ainda há esperança...<BOX_BREAK><UNSKIPPABLE>O poder dos Sábios permanece.<BOX_BREAK><UNSKIPPABLE>Quando o poder de todos os <COLOR:RED>Sábios<NEWLINE><COLOR:DEFAULT>despertar...<BOX_BREAK><UNSKIPPABLE>Os <COLOR:RED>Selos dos Sábios<COLOR:DEFAULT> prenderão<NEWLINE>todo o poder maligno<NEWLINE>no vazio do Reino...<BOX_BREAK><UNSKIPPABLE>Eu, Rauru, sou um dos Sábios...<NEWLINE>E...<BOX_BREAK><UNSKIPPABLE>Seu poder de lutar ao lado<NEWLINE>dos Sábios faz de você o<NEWLINE><COLOR:RED>Herói do Tempo<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>O Herói do Tempo,<NEWLINE>escolhido pela Espada Mestra!<BOX_BREAK><UNSKIPPABLE>Leve meu espírito com você...<NEWLINE>Encontre o poder<NEWLINE>dos outros Sábios<NEWLINE>e una-o ao seu!<END>)PTBR",
        0x03
    },
    {
        0x7054,
        R"PTBR(<UNSKIPPABLE><COLOR:LIGHTBLUE><NAME>... Voltamos ao<NEWLINE><COLOR:DEFAULT>Templo do Tempo<COLOR:LIGHTBLUE>...<NEWLINE>Será que <COLOR:DEFAULT>sete anos<COLOR:LIGHTBLUE><NEWLINE>se passaram mesmo?<COLOR:DEFAULT><BOX_BREAK><UNSKIPPABLE><COLOR:LIGHTBLUE>Parece que você não pode mais<NEWLINE>usar algumas das <COLOR:DEFAULT>armas<COLOR:LIGHTBLUE><NEWLINE>que encontrou quando criança...<BOX_BREAK><COLOR:DEFAULT><UNSKIPPABLE><COLOR:LIGHTBLUE>Vamos sair daqui!<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x7055,
        R"PTBR(Ei, o quê...?<NEWLINE>Qual é o problema de ficar<NEWLINE>à toa o dia inteiro?<BOX_BREAK>Hein, garoto?<END>)PTBR",
        0x00
    },
    {
        0x7056,
        R"PTBR(<UNSKIPPABLE>Estava esperando por você,<NEWLINE>Herói do Tempo...<END>)PTBR",
        0x03
    },
    {
        0x7057,
        R"PTBR(<UNSKIPPABLE>Quando o mal dominar tudo,<NEWLINE>uma voz do Reino Sagrado<NEWLINE>chamará os futuros Sábios<NEWLINE>que habitam os <COLOR:RED>cinco templos<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Um no fundo de uma <COLOR:ADJUSTABLE>floresta<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Um no alto de uma <COLOR:RED>montanha<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Um sob um <COLOR:BLUE>vasto lago<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Um na <COLOR:PURPLE>morada dos mortos<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Um dentro de uma <COLOR:YELLOW>deusa da areia<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Ao lado do Herói do Tempo,<NEWLINE>os Sábios despertos<NEWLINE>aprisionarão o mal e devolverão<NEWLINE>a luz da paz ao mundo...<BOX_BREAK><UNSKIPPABLE>Esta é a lenda dos templos,<NEWLINE>transmitida pelo meu povo,<NEWLINE>os <COLOR:BLUE>Sheikah<COLOR:DEFAULT>.<END>)PTBR",
        0x03
    },
    {
        0x7058,
        R"PTBR(Desculpe.<NEWLINE>Ainda não estamos abertos.<NEWLINE>Por favor, volte logo!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x7059,
        R"PTBR(<UNSKIPPABLE>Use a <COLOR:RED>Espada Mestra<COLOR:DEFAULT>!<NEWLINE>Destrua Ganon com<NEWLINE>a espada sagrada!<END>)PTBR",
        0x00
    },
    {
        0x705A,
        R"PTBR(<UNSKIPPABLE>Eu estava esperando por você,<NEWLINE><NAME>.<END>)PTBR",
        0x02
    },
    {
        0x705B,
        R"PTBR(<UNSKIPPABLE><NAME>, o Herói do Tempo...<BOX_BREAK><UNSKIPPABLE>Você superou muitas dificuldades<NEWLINE>e despertou seis Sábios.<BOX_BREAK><UNSKIPPABLE>Agora, falta o último desafio:<NEWLINE>o confronto com Ganondorf,<NEWLINE>o Rei do Mal...<END>)PTBR",
        0x03
    },
    {
        0x705C,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x10>Se busca o triângulo sagrado,<NEWLINE><SHIFT:0x28>escute com atenção...<BOX_BREAK_DELAYED:0x3C><UNSKIPPABLE><SHIFT:0x09>O Reino Sagrado, onde repousa<NEWLINE><SHIFT:0x09>o triângulo sagrado, é um<NEWLINE><SHIFT:0x14>espelho que reflete<NEWLINE><SHIFT:0x3B>o coração...<BOX_BREAK_DELAYED:0x46><UNSKIPPABLE><SHIFT:0x05>O coração de quem entra nele...<NEWLINE><SHIFT:0x0C>Se for maligno, o Reino<NEWLINE><SHIFT:0x14>se encherá de maldade. Se puro,<NEWLINE><SHIFT:0x04>o Reino se tornará um paraíso.<BOX_BREAK_DELAYED:0x5A><UNSKIPPABLE><SHIFT:0x02>A Triforce... O triângulo sagrado...<NEWLINE><SHIFT:0x0A>É a balança que pesa<NEWLINE><SHIFT:0x3C>as três forças:<NEWLINE><SHIFT:0x13>Poder, Sabedoria e Coragem.<BOX_BREAK_DELAYED:0x5A><UNSKIPPABLE><SHIFT:0x02>Se quem tocar o triângulo sagrado<NEWLINE><SHIFT:0x06>tiver as três forças em<NEWLINE><SHIFT:0x0A>equilíbrio no coração, receberá<NEWLINE><SHIFT:0x03>a Força Suprema para governar tudo.<BOX_BREAK_DELAYED:0x50><UNSKIPPABLE><SHIFT:0x06>Mas, se não houver equilíbrio,<NEWLINE><SHIFT:0x02>a Triforce se dividirá<NEWLINE><SHIFT:0x32>em três partes:<NEWLINE><SHIFT:0x13>Poder, Sabedoria e Coragem.<BOX_BREAK_DELAYED:0x50><UNSKIPPABLE><SHIFT:0x04>Apenas uma ficará com quem<NEWLINE><SHIFT:0x02>tocou a Triforce... A parte<NEWLINE><SHIFT:0x07>que representa a força<NEWLINE><SHIFT:0x27>em que mais acredita.<BOX_BREAK_DELAYED:0x5A><UNSKIPPABLE><SHIFT:0x04>Para obter a Força Suprema,<NEWLINE><SHIFT:0x0C>precisará reunir as duas<NEWLINE><SHIFT:0x44>partes perdidas.<BOX_BREAK_DELAYED:0x50><UNSKIPPABLE><SHIFT:0x12>Elas estarão com outros<NEWLINE><SHIFT:0x07>escolhidos pelo destino, que<NEWLINE><SHIFT:0x0A>terão a marca da Triforce<NEWLINE><SHIFT:0x11>no dorso de suas mãos.<FADE:0x5A><END>)PTBR",
        0x23
    },
    {
        0x705D,
        R"PTBR(<UNSKIPPABLE>Há sete anos, Ganondorf,<NEWLINE>o Rei dos Ladrões, usou a porta<NEWLINE>que você abriu no Templo do Tempo<NEWLINE>para entrar no Reino Sagrado.<BOX_BREAK><UNSKIPPABLE>Ao tocar a Triforce,<NEWLINE>a lenda se cumpriu.<END>)PTBR",
        0x03
    },
    {
        0x705E,
        R"PTBR(<UNSKIPPABLE>Quem possui a <COLOR:RED>Triforce<NEWLINE>da Coragem<COLOR:DEFAULT> é...<NEWLINE>Você, <NAME>!<END>)PTBR",
        0x03
    },
    {
        0x705F,
        R"PTBR(<UNSKIPPABLE>E quem possui a<NEWLINE><COLOR:RED>Triforce da Sabedoria<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>É a sétima Sábia,<NEWLINE>destinada a liderar<NEWLINE>todos os outros...<END>)PTBR",
        0x03
    },
    {
        0x7060,
        R"PTBR(<UNSKIPPABLE>Sou eu, a Princesa de Hyrule,<NEWLINE><COLOR:RED>Zelda<COLOR:DEFAULT>.<END>)PTBR",
        0x03
    },
    {
        0x7061,
        R"PTBR(<UNSKIPPABLE>Desculpe por ter me apresentado<NEWLINE>disfarçada, mas precisava<NEWLINE>me esconder do Rei do Mal.<NEWLINE>Por favor, me perdoe...<END>)PTBR",
        0x03
    },
    {
        0x7062,
        R"PTBR(Eu vi você enquanto fugia<NEWLINE>do castelo com minha<NEWLINE>protetora, Impa.<FADE:0x50><END>)PTBR",
        0x22
    },
    {
        0x7063,
        R"PTBR(<UNSKIPPABLE>Achei que, enquanto a ocarina<NEWLINE>estivesse com você,<NEWLINE>Ganondorf nunca entraria<NEWLINE>no Reino Sagrado, mas...<BOX_BREAK><UNSKIPPABLE>Aconteceu algo que<NEWLINE>eu jamais poderia imaginar...<END>)PTBR",
        0x03
    },
    {
        0x7064,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x24>Esse tremor... Não pode ser!?<END>)PTBR",
        0x03
    },
    {
        0x7065,
        R"PTBR(<UNSKIPPABLE>Princesa Zelda...<NEWLINE>Sua traidora tola!<BOX_BREAK><UNSKIPPABLE>Admito: foi impressionante escapar<NEWLINE>de mim por sete longos anos.<END>)PTBR",
        0x23
    },
    {
        0x7066,
        R"PTBR(<UNSKIPPABLE>Se quiser salvar Zelda,<NEWLINE>venha ao meu castelo!<END>)PTBR",
        0x23
    },
    {
        0x7067,
        R"PTBR(<UNSKIPPABLE><NAME>... Pode me ouvir?<NEWLINE>Sou Rauru, o Sábio.<BOX_BREAK><UNSKIPPABLE>Nós seis uniremos nosso poder<NEWLINE>para criar uma ponte até<NEWLINE>o castelo de Ganondorf...<BOX_BREAK><UNSKIPPABLE>A torre central do castelo,<NEWLINE>conhecida como Torre de Ganon,<NEWLINE>tem <COLOR:RED>seis barreiras malignas<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Destrua as seis barreiras<NEWLINE>e salve a Princesa Zelda!!<END>)PTBR",
        0x21
    },
    {
        0x7068,
        R"PTBR(7068<END>)PTBR",
        0x00
    },
    {
        0x7069,
        R"PTBR(7069<END>)PTBR",
        0x00
    },
    {
        0x706A,
        R"PTBR(706a<END>)PTBR",
        0x20
    },
    {
        0x706B,
        R"PTBR(706b<END>)PTBR",
        0x00
    },
    {
        0x706C,
        R"PTBR(Antigas Criadoras de Hyrule!<BOX_BREAK_DELAYED:0x3C>Abram agora a porta selada<NEWLINE>e enviem a encarnação<NEWLINE>maligna das trevas para<NEWLINE>o vazio do Reino do Mal!!<FADE:0x5A><END>)PTBR",
        0x03
    },
    {
        0x706D,
        R"PTBR(<UNSKIPPABLE><NAME>!<NEWLINE>Acabe com ele usando a espada<NEWLINE>do tempo, a Espada Mestra!<END>)PTBR",
        0x00
    },
    {
        0x706E,
        R"PTBR(<UNSKIPPABLE>Ó porta selada, aberta<NEWLINE>pelos Sábios... Feche-se<NEWLINE>para sempre com a encarnação<NEWLINE>maligna das trevas lá dentro!!<END>)PTBR",
        0x00
    },
    {
        0x706F,
        R"PTBR(<UNSKIPPABLE>Obrigada, <NAME>...<BOX_BREAK><UNSKIPPABLE>Graças a você, Ganondorf<NEWLINE>foi selado no Reino do Mal!<BOX_BREAK><UNSKIPPABLE>A paz voltará a reinar<NEWLINE>neste mundo... Por um tempo.<END>)PTBR",
        0x03
    },
    {
        0x7070,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x3C>Obrigada...<NEWLINE><SHIFT:0x32><NAME>...<BOX_BREAK_DELAYED:0x28><UNSKIPPABLE><SHIFT:0x32>Adeus...<FADE:0x3C><END>)PTBR",
        0x22
    },
    {
        0x7071,
        R"PTBR(Quer tanto assim passar<NEWLINE>por este portão? Deixe eu pensar...<NEWLINE>Certo, mas, em troca...<TEXTID:0x70,0x72>)PTBR",
        0x00
    },
    {
        0x7072,
        R"PTBR(Dê-me 10 Rupias...<NEWLINE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x00
    },
    {
        0x7073,
        R"PTBR(Por favor, acredite em mim...<NEWLINE>Minhas profecias<NEWLINE>nunca falharam!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7074,
        R"PTBR(<UNSKIPPABLE>Você destruiu as criaturas<NEWLINE>malignas do templo<NEWLINE>e despertou a Sábia...<BOX_BREAK><UNSKIPPABLE>Mas outros Sábios<NEWLINE>ainda precisam de ajuda.<BOX_BREAK><UNSKIPPABLE>Para despertar todos eles,<NEWLINE>você precisa se tornar<NEWLINE>ainda mais poderoso.<BOX_BREAK><UNSKIPPABLE>Terá de viajar<NEWLINE>pelas montanhas...<BOX_BREAK><UNSKIPPABLE>Por baixo d'água...<BOX_BREAK><UNSKIPPABLE>E até pelo tempo...<END>)PTBR",
        0x03
    },
    {
        0x7075,
        R"PTBR(<UNSKIPPABLE>Enquanto tiver a <COLOR:LIGHTBLUE>Ocarina<NEWLINE>do Tempo<COLOR:DEFAULT> e a <COLOR:LIGHTBLUE>Espada Mestra<COLOR:DEFAULT>,<BOX_BREAK><UNSKIPPABLE>terá o próprio tempo<NEWLINE>em suas mãos...<BOX_BREAK><UNSKIPPABLE><NAME>, nós nos veremos<NEWLINE>novamente!<END>)PTBR",
        0x03
    },
    {
        0x7076,
        R"PTBR(Este é um novo tipo de bomba!<NEWLINE>Tenho poucas unidades.<NEWLINE>Quando acabar o estoque,<NEWLINE>não haverá mais!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x7077,
        R"PTBR(<UNSKIPPABLE>Sou <COLOR:RED>Sheik<COLOR:DEFAULT>.<NEWLINE>Sobrevivente dos Sheikah...<END>)PTBR",
        0x03
    },
    {
        0x7078,
        R"PTBR(<UNSKIPPABLE>Vendo você aí,<NEWLINE>com a mítica <COLOR:RED>Espada<NEWLINE>Mestra<COLOR:DEFAULT>, realmente parece<NEWLINE>o lendário Herói do Tempo...<END>)PTBR",
        0x03
    },
    {
        0x7079,
        R"PTBR(<UNSKIPPABLE>Se acredita na lenda, você<NEWLINE>não tem escolha. Deve encontrar<NEWLINE>os cinco templos e despertar os<NEWLINE><COLOR:RED>cinco Sábios<COLOR:DEFAULT>...<END>)PTBR",
        0x03
    },
    {
        0x707A,
        R"PTBR(<UNSKIPPABLE>Uma Sábia aguarda seu despertar<NEWLINE>no <COLOR:ADJUSTABLE>Templo da Floresta<COLOR:DEFAULT>.<NEWLINE>Tenho certeza de que você<NEWLINE>conhece essa garota...<BOX_BREAK><UNSKIPPABLE>Por causa do poder maligno<NEWLINE>no templo, ela não consegue<NEWLINE>ouvir o chamado do Reino<NEWLINE>Sagrado para despertar...<BOX_BREAK><UNSKIPPABLE>Infelizmente, com seu equipamento<NEWLINE>atual, você nem sequer pode<NEWLINE>entrar no templo...<BOX_BREAK><UNSKIPPABLE>Mas, se acredita no que digo,<NEWLINE>vá até a <COLOR:RED>Vila<NEWLINE>Kakariko<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Entendeu,<NEWLINE><NAME>?<END>)PTBR",
        0x03
    },
    {
        0x707B,
        R"PTBR(Achei que devia confiar a<NEWLINE>Ocarina a você... Pensei que<NEWLINE>seria nossa melhor chance...<FADE:0x50><END>)PTBR",
        0x22
    },
    {
        0x707C,
        R"PTBR(<UNSKIPPABLE>Antes... há coisas que quero<NEWLINE>contar só a você. Escute.<BOX_BREAK><UNSKIPPABLE>Outra lenda pouco conhecida<NEWLINE>da Triforce, transmitida pelos<NEWLINE>Sheikah, o povo das sombras...<END>)PTBR",
        0x03
    },
    {
        0x707D,
        R"PTBR(<UNSKIPPABLE>A Triforce se dividiu em três<NEWLINE>partes. Só a <COLOR:RED>Triforce do Poder<COLOR:DEFAULT><NEWLINE>ficou nas mãos de Ganondorf.<END>)PTBR",
        0x03
    },
    {
        0x707E,
        R"PTBR(<UNSKIPPABLE>A força da Triforce do Poder<NEWLINE>fez dele um poderoso rei do mal,<NEWLINE>mas não saciou suas<NEWLINE>ambições sombrias.<END>)PTBR",
        0x03
    },
    {
        0x707F,
        R"PTBR(<UNSKIPPABLE>Para dominar o mundo inteiro,<NEWLINE>Ganondorf passou a procurar<NEWLINE>os <COLOR:RED>escolhidos pelo destino<COLOR:DEFAULT>,<NEWLINE>donos das outras duas partes.<END>)PTBR",
        0x03
    },
    {
        0x7080,
        R"PTBR(<UNSKIPPABLE>Naquele dia, há sete anos,<NEWLINE>Ganondorf atacou o Castelo de Hyrule.<END>)PTBR",
        0x03
    },
    {
        0x7081,
        R"PTBR(<UNSKIPPABLE>Quando você abriu a Porta do<NEWLINE>Tempo, a Espada Mestra selou<NEWLINE>você no Reino Sagrado...<END>)PTBR",
        0x03
    },
    {
        0x7082,
        R"PTBR(<UNSKIPPABLE>Seu espírito ficou no Reino<NEWLINE>Sagrado... Então Ganondorf<NEWLINE>invadiu aquele reino, e a<NEWLINE>Triforce caiu em suas mãos...<BOX_BREAK><UNSKIPPABLE>Ganondorf virou o Rei do Mal,<NEWLINE>e o Reino Sagrado se tornou<NEWLINE>um mundo maligno. Tudo isso<NEWLINE>foi uma infeliz coincidência.<BOX_BREAK><UNSKIPPABLE>Eu me disfarcei de Sheikah,<NEWLINE>na esperança de que você voltasse.<NEWLINE>Esperei por sete anos...<END>)PTBR",
        0x03
    },
    {
        0x7083,
        R"PTBR(<UNSKIPPABLE>E... agora você voltou.<NEWLINE>A era de trevas de Ganondorf,<NEWLINE>o Rei do Mal, vai acabar!<END>)PTBR",
        0x03
    },
    {
        0x7084,
        R"PTBR(<UNSKIPPABLE>Os seis Sábios abrirão a porta<NEWLINE>selada e atrairão Ganondorf<NEWLINE>de volta ao Reino Sagrado.<BOX_BREAK><UNSKIPPABLE>Então selarei a porta entre<NEWLINE>este mundo e o Reino Sagrado.<BOX_BREAK><UNSKIPPABLE>Assim, Ganondorf, o Rei do Mal,<NEWLINE>desaparecerá de Hyrule.<BOX_BREAK><UNSKIPPABLE><NAME>...<NEWLINE>Preciso da sua coragem mais<NEWLINE>uma vez. Proteja-me enquanto<NEWLINE>eu faço a minha parte.<BOX_BREAK><UNSKIPPABLE>E esta arma pode atravessar<NEWLINE>as defesas do Rei do Mal...<NEWLINE>O poder concedido<NEWLINE>aos escolhidos...<BOX_BREAK><UNSKIPPABLE><SHIFT:0x0F>A sagrada <COLOR:LIGHTBLUE>Flecha de Luz<COLOR:DEFAULT>!!!<END>)PTBR",
        0x03
    },
    {
        0x7085,
        R"PTBR(<UNSKIPPABLE>Mas você baixou a guarda...<NEWLINE>Sabia que apareceria se deixasse<NEWLINE>esse garoto andar por aí!<END>)PTBR",
        0x03
    },
    {
        0x7086,
        R"PTBR(<UNSKIPPABLE>Meu único erro foi subestimar<NEWLINE>um pouco o poder<NEWLINE>desse garoto...<END>)PTBR",
        0x03
    },
    {
        0x7087,
        R"PTBR(<UNSKIPPABLE>Não...<NEWLINE>Não foi o poder do garoto<NEWLINE>que subestimei, mas o poder<NEWLINE>da Triforce da Coragem!<BOX_BREAK><UNSKIPPABLE>E a Triforce da Sabedoria<NEWLINE>está com Zelda...<NEWLINE>Quando eu tiver essas duas...<BOX_BREAK><UNSKIPPABLE>Serei o verdadeiro<NEWLINE>senhor do mundo!!<END>)PTBR",
        0x03
    },
    {
        0x7088,
        R"PTBR(<QUICKTEXT_ENABLE>A Ocarina do Tempo abriu a porta.<NEWLINE>O Herói do Tempo desceu até aqui<NEWLINE>empunhando a Espada Mestra.<QUICKTEXT_DISABLE><END>)PTBR",
        0x20
    },
    {
        0x7089,
        R"PTBR(É estranho ver tantos cães<NEWLINE>soltos nas ruas à noite...<NEWLINE>Você não acha?<END>)PTBR",
        0x00
    },
    {
        0x708A,
        R"PTBR(Ei, garoto, vou te contar<NEWLINE>uma coisa útil...<BOX_BREAK>Ouvi dizer que há uma <COLOR:RED>fonte<NEWLINE>misteriosa<COLOR:DEFAULT> em algum lugar<NEWLINE>perto do castelo...<END>)PTBR",
        0x00
    },
    {
        0x708B,
        R"PTBR(<UNSKIPPABLE>Para voltar à sua época,<NEWLINE>recoloque a Espada Mestra<NEWLINE>no <COLOR:RED>Pedestal do Tempo<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Assim, você voltará<NEWLINE>sete anos no tempo...<END>)PTBR",
        0x03
    },
    {
        0x708C,
        R"PTBR(<UNSKIPPABLE>Um dia, você precisará voltar<NEWLINE>aqui depressa...<NEWLINE>Vou lhe ensinar uma canção<NEWLINE>para quando esse dia chegar...<BOX_BREAK><UNSKIPPABLE>A canção que o traz de volta<NEWLINE>ao Templo do Tempo...<NEWLINE><COLOR:LIGHTBLUE>O Prelúdio da Luz<COLOR:DEFAULT>...<END>)PTBR",
        0x03
    },
    {
        0x708D,
        R"PTBR(<UNSKIPPABLE>Sou <COLOR:RED>Impa<COLOR:DEFAULT>, dos Sheikah.<NEWLINE>Sou responsável por proteger<NEWLINE>a Princesa Zelda. Tudo está<NEWLINE>exatamente como ela previu.<END>)PTBR",
        0x03
    },
    {
        0x708E,
        R"PTBR(Se os guardas acharem você,<NEWLINE>teremos problemas. Deixe-me<NEWLINE>acompanhá-lo até a saída.<END>)PTBR",
        0x00
    },
    {
        0x708F,
        R"PTBR(<QUICKTEXT_ENABLE>Ei, você! Não cause problemas!<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x03
    },
    {
        0x7090,
        R"PTBR(<UNSKIPPABLE>Você é um garoto corajoso...<NEWLINE>Está partindo para uma nova<NEWLINE>e grande aventura, não é?<BOX_BREAK><UNSKIPPABLE>No sonho da princesa, eu devia<NEWLINE>ensinar uma melodia<COLOR:RED> <COLOR:DEFAULT>ao garoto<NEWLINE>que veio da floresta.<BOX_BREAK><UNSKIPPABLE>É uma antiga <COLOR:BLUE>melodia passada<NEWLINE>entre gerações da Família Real<COLOR:DEFAULT>.<BOX_BREAK><UNSKIPPABLE>Toco essa canção de ninar<NEWLINE>para a Princesa Zelda desde<NEWLINE>que ela era um bebê...<BOX_BREAK><UNSKIPPABLE>Há um poder misterioso<NEWLINE>nessas notas.<BOX_BREAK><UNSKIPPABLE>Agora, ouça com atenção...<END>)PTBR",
        0x03
    },
    {
        0x7091,
        R"PTBR(<UNSKIPPABLE>Toda a tragédia que se abateu<NEWLINE>sobre Hyrule foi culpa minha...<BOX_BREAK><UNSKIPPABLE>Eu era tão jovem... Não entendia<NEWLINE>as consequências de tentar<NEWLINE>controlar o Reino Sagrado.<BOX_BREAK><UNSKIPPABLE>E arrastei você para isso.<BOX_BREAK><UNSKIPPABLE>Agora é hora de reparar<NEWLINE>os meus erros...<BOX_BREAK><UNSKIPPABLE>Devolva a Espada Mestra ao seu<NEWLINE>repouso e feche a Porta do Tempo...<END>)PTBR",
        0x03
    },
    {
        0x7092,
        R"PTBR(<UNSKIPPABLE>Mas, com isso, o caminho entre<NEWLINE>as duas épocas será fechado...<END>)PTBR",
        0x03
    },
    {
        0x7093,
        R"PTBR(<UNSKIPPABLE><NAME>,<NEWLINE>dê-me a Ocarina...<BOX_BREAK><UNSKIPPABLE>Como Sábia, posso usá-la para<NEWLINE>levar você de volta à sua época.<END>)PTBR",
        0x03
    },
    {
        0x7094,
        R"PTBR(<UNSKIPPABLE>Quando a paz voltar a Hyrule...<BOX_BREAK><UNSKIPPABLE>Será hora de nos<NEWLINE>despedirmos...<END>)PTBR",
        0x01
    },
    {
        0x7095,
        R"PTBR(<UNSKIPPABLE>Volte para casa, <NAME>.<NEWLINE>Recupere o tempo que perdeu!<BOX_BREAK><UNSKIPPABLE>Para casa...<NEWLINE>onde você deveria estar...<NEWLINE>como você deveria ser...<END>)PTBR",
        0x03
    },
    {
        0x7096,
        R"PTBR(<SHIFT:0x46><QUICKTEXT_ENABLE>Tsc<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>tsc.<QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x00
    },
    {
        0x7097,
        R"PTBR(Bem, talvez seja muito caro<NEWLINE>para uma criança.<EVENT><END>)PTBR",
        0x00
    },
    {
        0x7098,
        R"PTBR(Certo, vou deixar você passar.<NEWLINE>Depressa!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x7099,
        R"PTBR(É SEGREDO.<NEWLINE>NÃO CONTE A NINGUÉM.<END>)PTBR",
        0x00
    },
    {
        0x709A,
        R"PTBR(Cara, estou TÃO cansado!<BOX_BREAK>A ronda noturna é um tédio!<NEWLINE>Bem que podiam aparecer uns<NEWLINE>fantasmas ou algo assim...<BOX_BREAK>Sabe, eu me interesso muito<NEWLINE>por fantasmas!<BOX_BREAK>Gosto de estudá-los nas horas<NEWLINE>vagas. E nunca se sabe...<NEWLINE>Um dia, esse conhecimento<NEWLINE>pode ser útil!<END>)PTBR",
        0x00
    },
    {
        0x709B,
        R"PTBR(O pelo do meu querido cachorrinho<NEWLINE>é muito mais especial que o<NEWLINE>desses vira-latas daqui!<END>)PTBR",
        0x00
    },
    {
        0x709C,
        R"PTBR(Meu querido cachorrinho corre<NEWLINE>mais rápido que qualquer<NEWLINE>um desses vira-latas daqui!<END>)PTBR",
        0x00
    },
    {
        0x709D,
        R"PTBR(Meu cachorrinho sumiu!<NEWLINE>Procure por ele! Por favor!<END>)PTBR",
        0x03
    },
    {
        0x709E,
        R"PTBR(<SHIFT:0x4C><QUICKTEXT_ENABLE>Arrrgh!<QUICKTEXT_DISABLE><NEWLINE>Esse não é meu cachorro!<NEWLINE>Como pôde confundir meu bebê<NEWLINE>com um vira-lata desses?!<END>)PTBR",
        0x03
    },
    {
        0x709F,
        R"PTBR(<SHIFT:0x46><QUICKTEXT_ENABLE>Richard!<QUICKTEXT_DISABLE><BOX_BREAK>É o meu pequeno Richard!<NEWLINE>Obrigada! Muito obrigada!<NEWLINE>Tome isto como<NEWLINE>recompensa!<END>)PTBR",
        0x03
    },
    {
        0x70A0,
        R"PTBR(É perigoso sair à noite com<NEWLINE>tantos cães soltos por aí...<NEWLINE>Não estou preocupada com você!<NEWLINE>É com o meu cachorrinho!<END>)PTBR",
        0x03
    },
    {
        0x70A1,
        R"PTBR(Olááá!<NEWLINE>Esta é a <COLOR:RED>Loja de Máscaras Felizes<COLOR:DEFAULT>!<NEWLINE>Vendemos máscaras que trazem<NEWLINE>felicidade a todos!<BOX_BREAK>Que tal vender felicidade?<NEWLINE>Eu empresto uma máscara,<NEWLINE>você a vende e depois<NEWLINE>traz o <COLOR:RED>dinheiro<COLOR:DEFAULT> aqui.<BOX_BREAK>Para saber todos os detalhes,<NEWLINE>dê uma olhada na <COLOR:RED>placa<NEWLINE><COLOR:DEFAULT>logo ali.<BOX_BREAK>Depois de vender todas elas,<NEWLINE>você também será<COLOR:RED> <COLOR:DEFAULT>feliz!<BOX_BREAK><SHIFT:0x40>Tenha fé...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70A2,
        R"PTBR(<QUICKTEXT_ENABLE>Escolha uma máscara movendo<NEWLINE><COLOR:LIGHTBLUE><BYTE:0xAA><COLOR:DEFAULT> para a esquerda ou direita.<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Conversar com o dono<NEWLINE>Não pegar emprestado<COLOR:DEFAULT><QUICKTEXT_DISABLE><END>)PTBR",
        0x03
    },
    {
        0x70A3,
        R"PTBR(A <COLOR:RED>máscara<COLOR:DEFAULT> é um item de <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT>. Atribua-a<NEWLINE>a <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT> e aperte <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT> para colocá-la.<BOX_BREAK>Fale com as pessoas usando<NEWLINE>a máscara e veja suas reações.<BOX_BREAK>Se alguém se interessar,<NEWLINE>vai perguntar sobre ela.<NEWLINE>Talvez essa pessoa queira<NEWLINE>ficar com a máscara.<BOX_BREAK>Em algum lugar do mundo,<NEWLINE>alguém espera por essas máscaras.<BOX_BREAK><SHIFT:0x32>Basta ter fé...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70A4,
        R"PTBR(Acho que vi uma garotinha<NEWLINE>bonitinha por aqui...<NEWLINE>Será que foi ao castelo?<NEWLINE>Quem sabe?<END>)PTBR",
        0x00
    },
    {
        0x70A5,
        R"PTBR(Ótimo! Você vendeu a máscara!<NEWLINE>Agora me pague <COLOR:RED>10 Rupias<COLOR:DEFAULT><NEWLINE>pela Máscara Keaton.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70A6,
        R"PTBR(Oh! Ainda não vendeu a última<NEWLINE>máscara. Tenha fé... Continue<NEWLINE>tentando mais um pouco.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70A7,
        R"PTBR(Pagamento recebido!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70A8,
        R"PTBR(<QUICKTEXT_ENABLE>O quê?!<QUICKTEXT_DISABLE><NEWLINE>Você não tem o meu dinheiro?!<BOX_BREAK><QUICKTEXT_ENABLE>Como se atreve!<QUICKTEXT_DISABLE><BOX_BREAK>É melhor trazer o meu dinheiro...<NEWLINE>Senão, vai se arrepender!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70A9,
        R"PTBR(Isso mesmo!<BOX_BREAK>Muito bem!<NEWLINE>Você vendeu todas as máscaras.<BOX_BREAK>Sabia que podia confiar em você!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70AA,
        R"PTBR(<UNSKIPPABLE>Como recompensa...<NEWLINE>Vou emprestar uma máscara especial.<BOX_BREAK><UNSKIPPABLE>Esta é a <COLOR:RED>Máscara da Verdade<COLOR:DEFAULT>.<NEWLINE>Uma máscara misteriosa<NEWLINE>deixada pelos Sheikah.<BOX_BREAK><UNSKIPPABLE>Com ela, você pode ler<NEWLINE>a mente das outras pessoas...<NEWLINE>É útil, mas dá medo!<BOX_BREAK><UNSKIPPABLE>Por que dá medo?<BOX_BREAK><UNSKIPPABLE>Talvez descubra ao crescer<NEWLINE>e entender o verdadeiro<NEWLINE>sentido da vida...<BOX_BREAK><UNSKIPPABLE>Ho, ho, ho!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70AB,
        R"PTBR(Agora você pode pegar emprestada<NEWLINE>a máscara que quiser.<NEWLINE>Basta ter fé...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70AC,
        R"PTBR(Bem-vindo!<NEWLINE>Qual máscara quer emprestada?<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70AD,
        R"PTBR(<QUICKTEXT_ENABLE>Escolha uma máscara movendo<NEWLINE><COLOR:LIGHTBLUE><BYTE:0xAA><COLOR:DEFAULT> para a esquerda ou direita.<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sobre a Máscara da Verdade<NEWLINE>Não pegar emprestado<COLOR:DEFAULT><QUICKTEXT_DISABLE><END>)PTBR",
        0x03
    },
    {
        0x70AE,
        R"PTBR(Esta é a <COLOR:RED>Máscara da Verdade<COLOR:DEFAULT>.<NEWLINE>Uma máscara misteriosa<NEWLINE>deixada pelos Sheikah.<BOX_BREAK>Com ela, você pode ler<NEWLINE>a mente das outras pessoas.<NEWLINE>É útil, mas dá medo!<BOX_BREAK>Por que dá medo?<BOX_BREAK>Você vai descobrir quando crescer!<BOX_BREAK>Ho, ho, ho!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70AF,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara da Verdade - Não se vende<COLOR:DEFAULT><NEWLINE>Esta máscara tem poderes especiais.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B0,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara de Caveira - 20 Rupias<COLOR:DEFAULT><NEWLINE>Uma caveira com chifres.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B1,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara Assustadora - 30 Rupias<NEWLINE><COLOR:DEFAULT>Máscara de madeira com ar triste.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B2,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara Keaton - 10 Rupias<NEWLINE><COLOR:DEFAULT>Keaton está na moda! É um sucesso!<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B3,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Capuz de Coelho - 50 Rupias<NEWLINE><COLOR:DEFAULT>Com orelhas que balançam!<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B4,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Másc. de Caveira - Empréstimo grátis<COLOR:DEFAULT><NEWLINE>Uma caveira com chifres.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B5,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Másc. Assustadora - Empréstimo grátis<NEWLINE><COLOR:DEFAULT>Máscara de madeira com ar triste.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B6,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara Keaton - Empréstimo grátis<NEWLINE><COLOR:DEFAULT>Keaton está na moda! É um sucesso!<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B7,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Capuz de Coelho - Empréstimo grátis<NEWLINE><COLOR:DEFAULT>Com orelhas que balançam!<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B8,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara Goron - Empréstimo grátis<NEWLINE><COLOR:DEFAULT>Esse rosto redondo vai deixar<NEWLINE>você um pouco mais feliz!<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70B9,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara Zora - Empréstimo grátis<COLOR:DEFAULT><NEWLINE>Você vai nadar cheio de estilo<NEWLINE>usando esta máscara!<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70BA,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Máscara Gerudo - Empréstimo grátis<NEWLINE><COLOR:DEFAULT>Os olhos encantadores dão um<NEWLINE>ótimo disfarce de mulher.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70BB,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:RED>Másc. da Verdade - Empréstimo grátis<COLOR:DEFAULT><NEWLINE>Uma máscara misteriosa que lê<NEWLINE>a mente das outras pessoas.<QUICKTEXT_DISABLE><PERSISTENT><END>)PTBR",
        0x03
    },
    {
        0x70BC,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar a <COLOR:RED>Máscara de<NEWLINE>Caveira<COLOR:DEFAULT> emprestada?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70BD,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar emprestada a<NEWLINE><COLOR:RED>Máscara Assustadora<COLOR:DEFAULT>?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70BE,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar emprestada a<NEWLINE><COLOR:RED>Máscara Keaton<COLOR:DEFAULT>?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70BF,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar emprestado o<NEWLINE><COLOR:RED>Capuz de Coelho<COLOR:DEFAULT>?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70C0,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar emprestada a<NEWLINE><COLOR:RED>Máscara Goron<COLOR:DEFAULT>?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70C1,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar emprestada a<NEWLINE><COLOR:RED>Máscara Zora<COLOR:DEFAULT>?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70C2,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar emprestada a<NEWLINE><COLOR:RED>Máscara Gerudo<COLOR:DEFAULT>?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70C3,
        R"PTBR(<QUICKTEXT_ENABLE>Quer pegar emprestada a<NEWLINE><COLOR:RED>Máscara da Verdade<COLOR:DEFAULT>?<QUICKTEXT_DISABLE><NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70C4,
        R"PTBR(Ótimo! Você vendeu a máscara!<NEWLINE>Agora me pague <COLOR:RED>20 Rupias<NEWLINE><COLOR:DEFAULT>pela Máscara de Caveira.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70C5,
        R"PTBR(Ótimo! Você vendeu a máscara!<NEWLINE>Agora me pague <COLOR:RED>30 Rupias<NEWLINE><COLOR:DEFAULT>pela Máscara Assustadora.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70C6,
        R"PTBR(Ótimo! Você vendeu o capuz!<NEWLINE>Agora me pague <COLOR:RED>50 Rupias<NEWLINE><COLOR:DEFAULT>pelo Capuz de Coelho.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70C7,
        R"PTBR(Oh! Ainda não vendeu a máscara.<NEWLINE>Tenha fé por mais<NEWLINE>um tempinho.<BOX_BREAK>Ou prefere trocá-la<NEWLINE>por outra máscara?<NEWLINE><TWO_CHOICE><COLOR:ADJUSTABLE>Sim<NEWLINE>Não<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70C8,
        R"PTBR(<UNSKIPPABLE>As partes da Triforce ressoam...<NEWLINE>Estão se reunindo mais uma vez...<END>)PTBR",
        0x03
    },
    {
        0x70C9,
        R"PTBR(<UNSKIPPABLE>As duas partes da Triforce que<NEWLINE>não consegui tomar naquele dia,<NEWLINE>há sete anos...<BOX_BREAK><UNSKIPPABLE>Não esperava encontrá-las<NEWLINE>escondidas em vocês dois!<END>)PTBR",
        0x03
    },
    {
        0x70CA,
        R"PTBR(<UNSKIPPABLE>E agora, enfim, todas as partes<NEWLINE>da Triforce estão reunidas aqui!<END>)PTBR",
        0x03
    },
    {
        0x70CB,
        R"PTBR(<UNSKIPPABLE>Esses brinquedos não são para vocês!<END>)PTBR",
        0x03
    },
    {
        0x70CC,
        R"PTBR(<UNSKIPPABLE>Ordeno que os devolvam<NEWLINE>a mim!<END>)PTBR",
        0x03
    },
    {
        0x70CD,
        R"PTBR(<UNSKIPPABLE><SFX:0x68,0x5F><COLOR:LIGHTBLUE><NAME>!<NEWLINE>Não consigo ajudar você!<NEWLINE>As ondas de escuridão<NEWLINE>não me deixam chegar perto!<BOX_BREAK><COLOR:DEFAULT><UNSKIPPABLE><COLOR:LIGHTBLUE>Desculpe, <NAME>!<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70CE,
        R"PTBR(<UNSKIPPABLE>O grande Rei do Mal, Ganondorf...<NEWLINE>derrotado por esse garoto?!<END>)PTBR",
        0x03
    },
    {
        0x70CF,
        R"PTBR(<UNSKIPPABLE><NAME>....!<END>)PTBR",
        0x03
    },
    {
        0x70D0,
        R"PTBR(<UNSKIPPABLE>Ganondorf... homem digno de pena...<BOX_BREAK><UNSKIPPABLE>Sem uma mente forte e justa,<NEWLINE>não pôde controlar o poder<NEWLINE>dos deuses... e...<END>)PTBR",
        0x03
    },
    {
        0x70D1,
        R"PTBR(<UNSKIPPABLE><NAME>, escute!<NEWLINE>Esta torre vai desabar!<BOX_BREAK><UNSKIPPABLE>Com suas últimas forças,<NEWLINE>Ganondorf quer nos esmagar<NEWLINE>sob as ruínas da torre!<NEWLINE>Precisamos fugir depressa!<END>)PTBR",
        0x03
    },
    {
        0x70D2,
        R"PTBR(<UNSKIPPABLE>Por favor, siga-me!<END>)PTBR",
        0x03
    },
    {
        0x70D3,
        R"PTBR(<UNSKIPPABLE>Acabou... finalmente acabou...<END>)PTBR",
        0x03
    },
    {
        0x70D4,
        R"PTBR(<UNSKIPPABLE><COLOR:LIGHTBLUE><NAME>...<NEWLINE>Desculpe por não ter ajudado<NEWLINE>na batalha anterior!<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70D5,
        R"PTBR(<UNSKIPPABLE>Que som é esse?<END>)PTBR",
        0x03
    },
    {
        0x70D6,
        R"PTBR(<UNSKIPPABLE><SFX:0x68,0x5F><COLOR:LIGHTBLUE>Não vou deixar que ele<NEWLINE>me afaste outra vez!<NEWLINE><COLOR:DEFAULT><QUICKTEXT_ENABLE><COLOR:LIGHTBLUE>Desta vez, lutaremos juntos!<COLOR:DEFAULT><QUICKTEXT_DISABLE><END>)PTBR",
        0x03
    },
    {
        0x70D7,
        R"PTBR(<UNSKIPPABLE><NAME>! A Espada Mestra<NEWLINE>está aqui!<NEWLINE><QUICKTEXT_ENABLE>Depressa!!<QUICKTEXT_DISABLE><END>)PTBR",
        0x03
    },
    {
        0x70D8,
        R"PTBR(<UNSKIPPABLE>Estou prendendo o Rei do Mal<NEWLINE>com meu poder! Use sua espada<NEWLINE>para dar o golpe final!<END>)PTBR",
        0x03
    },
    {
        0x70D9,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x41>Seis Sábios...<NEWLINE><QUICKTEXT_ENABLE><SHIFT:0x50>Agora!!<QUICKTEXT_DISABLE><FADE:0x1E><END>)PTBR",
        0x03
    },
    {
        0x70DA,
        R"PTBR(<UNSKIPPABLE><TEXT_SPEED:0x03>VOCÊS...<TEXT_SPEED:0x00><FADE:0x1E><END>)PTBR",
        0x03
    },
    {
        0x70DB,
        R"PTBR(<UNSKIPPABLE><TEXT_SPEED:0x03>MALDITA SEJA... ZELDA!<NEWLINE><TEXT_SPEED:0x02>MALDITOS SEJAM... SÁBIOS!!<TEXT_SPEED:0x00><FADE:0x32><END>)PTBR",
        0x03
    },
    {
        0x70DC,
        R"PTBR(<UNSKIPPABLE>MALDITO SEJA... <QUICKTEXT_ENABLE><NAME>!<QUICKTEXT_DISABLE><FADE:0x1E><END>)PTBR",
        0x03
    },
    {
        0x70DD,
        R"PTBR(<UNSKIPPABLE>Um dia...<NEWLINE>Quando este selo se romper...<BOX_BREAK_DELAYED:0x50><UNSKIPPABLE>Eu exterminarei<NEWLINE>seus descendentes!!<FADE:0x50><END>)PTBR",
        0x03
    },
    {
        0x70DE,
        R"PTBR(<UNSKIPPABLE>Enquanto a Triforce do Poder<NEWLINE>estiver em minhas mãos...<FADE:0x50><END>)PTBR",
        0x03
    },
    {
        0x70DF,
        R"PTBR(<TEXT_SPEED:0x02>Você... <TEXT_SPEED:0x00>quem é você?<FADE:0x50><END>)PTBR",
        0x23
    },
    {
        0x70E0,
        R"PTBR(<SHIFT:0x0A>A <COLOR:ADJUSTABLE>Barreira da Floresta<COLOR:DEFAULT> caiu!<NEWLINE><SHIFT:0x14>Depressa, <NAME>!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x70E1,
        R"PTBR(<SHIFT:0x0F>A <COLOR:RED>Barreira do Fogo<COLOR:DEFAULT> caiu!<NEWLINE><SHIFT:0x14>Depressa, irmão!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x70E2,
        R"PTBR(<SHIFT:0x0F>A <COLOR:BLUE>Barreira da Água<COLOR:DEFAULT> caiu!<NEWLINE><SHIFT:0x46>Depressa!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x70E3,
        R"PTBR(<SHIFT:0x0F>A <COLOR:PURPLE>Barreira das Sombras<COLOR:DEFAULT> caiu!<NEWLINE><SHIFT:0x1E>Por favor, salve a princesa!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x70E4,
        R"PTBR(<SHIFT:0x0F>A <COLOR:YELLOW>Barreira do Espírito<COLOR:DEFAULT> caiu!<NEWLINE><SHIFT:0x37>Depressa, garoto!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x70E5,
        R"PTBR(<SHIFT:0x0F>A <COLOR:LIGHTBLUE>Barreira da Luz<COLOR:DEFAULT> caiu!<NEWLINE><SHIFT:0x4B>Depressa!<FADE:0x28><END>)PTBR",
        0x03
    },
    {
        0x70E6,
        R"PTBR(<COLOR:LIGHTBLUE><NAME>, aquilo não é...?!<COLOR:DEFAULT><END>)PTBR",
        0x03
    },
    {
        0x70E7,
        R"PTBR(<COLOR:LIGHTBLUE>É aquela lâmina lendária...<COLOR:DEFAULT><FADE:0x1E><END>)PTBR",
        0x03
    },
    {
        0x70E8,
        R"PTBR(<QUICKTEXT_ENABLE><SHIFT:0x29><COLOR:LIGHTBLUE>A Espada Mestra!!<COLOR:DEFAULT><QUICKTEXT_DISABLE><END>)PTBR",
        0x03
    },
    {
        0x70E9,
        R"PTBR(<UNSKIPPABLE>Encontre os outros Sábios<COLOR:RED><NEWLINE><COLOR:DEFAULT>e salve Hyrule!<FADE:0x50><END>)PTBR",
        0x52
    },
    {
        0x70EA,
        R"PTBR(Aquele homem assustador<NEWLINE>saiu daqui a toda velocidade!<END>)PTBR",
        0x00
    },
    {
        0x70EB,
        R"PTBR(Ai, que medo...<NEWLINE>Ai, que medo...<END>)PTBR",
        0x00
    },
    {
        0x70EC,
        R"PTBR(Ei, o que você quer?<NEWLINE>Não tenho tempo para<NEWLINE>conversar com você!<END>)PTBR",
        0x00
    },
    {
        0x70ED,
        R"PTBR(Por favor... com <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT>...<NEWLINE>Venda alguma coisa para mim...<NEWLINE>Por favor... com <COLOR:YELLOW><BYTE:0xA1><COLOR:DEFAULT>...<END>)PTBR",
        0x00
    },
    {
        0x70EE,
        R"PTBR(Não...<NEWLINE>Não é isso que eu quero...<NEWLINE>Quero <COLOR:RED>algo dentro de um frasco<COLOR:DEFAULT>...<NEWLINE>Não era disso que eu falava...<END>)PTBR",
        0x00
    },
    {
        0x70EF,
        R"PTBR(Não...<NEWLINE>Não posso aceitar isso...<NEWLINE>Não é o que eu quero comprar...<END>)PTBR",
        0x00
    },
    {
        0x70F0,
        R"PTBR(Oh, é <COLOR:LIGHTBLUE>Fogo Azul<COLOR:DEFAULT>!<NEWLINE>Pago <COLOR:RED>150 Rupias<COLOR:DEFAULT> por ele!<NEWLINE>Mas não pode desistir depois, tá?<END>)PTBR",
        0x00
    },
    {
        0x70F1,
        R"PTBR(Oh, um <COLOR:PURPLE>Peixe<COLOR:DEFAULT>!<NEWLINE>Pago <COLOR:RED>100 Rupias<COLOR:DEFAULT> por ele!<NEWLINE>Mas não pode desistir depois, tá?<END>)PTBR",
        0x00
    },
    {
        0x70F2,
        R"PTBR(Oh, que <COLOR:ADJUSTABLE>Inseto<COLOR:DEFAULT> bonitinho!<NEWLINE>Pago <COLOR:RED>50 Rupias<COLOR:DEFAULT> por ele!<NEWLINE>Mas não pode desistir depois, tá?<END>)PTBR",
        0x00
    },
    {
        0x70F3,
        R"PTBR(Oh, que <COLOR:LIGHTBLUE>Fada<COLOR:DEFAULT> adorável!<NEWLINE>Pago <COLOR:RED>25 Rupias<COLOR:DEFAULT> por ela!<NEWLINE>Mas não pode desistir depois, tá?<END>)PTBR",
        0x00
    },
    {
        0x70F4,
        R"PTBR(<UNSKIPPABLE>Oh... você é um jovem cheio<NEWLINE>de energia. Corajoso<NEWLINE>e bonito também.<BOX_BREAK><UNSKIPPABLE>He, he, he... Seu nome é<NEWLINE><NAME>, não é?<BOX_BREAK><UNSKIPPABLE>He, he, he... Não se espante.<NEWLINE>Eu leio a mente das pessoas.<BOX_BREAK><UNSKIPPABLE>Se eu fosse bonito assim,<NEWLINE>poderia ter outro tipo<NEWLINE>de negócio... He, he, he...<BOX_BREAK><UNSKIPPABLE>Esta é a única <COLOR:RED>Loja de Fantasmas<COLOR:DEFAULT><NEWLINE>de Hyrule.<BOX_BREAK><UNSKIPPABLE>Graças ao grande Ganondorf,<NEWLINE>esta é uma ótima época para<NEWLINE>esse ramo... He, he, he...<BOX_BREAK><UNSKIPPABLE>Só espero que o mundo<NEWLINE>fique ainda pior!<BOX_BREAK><UNSKIPPABLE>Os fantasmas chamados <COLOR:RED>Poes<COLOR:DEFAULT><NEWLINE>são espíritos de puro ódio.<NEWLINE>Surgem nos campos e no<NEWLINE>cemitério. Odeiam o mundo!<BOX_BREAK><UNSKIPPABLE>Jovem, se capturar um Poe,<NEWLINE>pagarei muito bem por ele...<NEWLINE>He, he, he!<END>)PTBR",
        0x00
    },
    {
        0x70F5,
        R"PTBR(Ei, jovem. Como vai<NEWLINE>hoje? Se tiver um <COLOR:RED>Poe<COLOR:DEFAULT>,<NEWLINE>eu compro.<BOX_BREAK>Seu cartão tem <COLOR:PURPLE><HIGHSCORE:0x01><COLOR:DEFAULT> pontos.<NEWLINE>Volte sempre!<NEWLINE>He, he, he!<END>)PTBR",
        0x00
    },
    {
        0x70F6,
        R"PTBR(<UNSKIPPABLE>Oh, trouxe um Poe hoje!<BOX_BREAK><UNSKIPPABLE><TEXT_SPEED:0x02>........<TEXT_SPEED:0x00><BOX_BREAK><UNSKIPPABLE>Hmmm...<BOX_BREAK><UNSKIPPABLE>É um <COLOR:RED>Poe<COLOR:DEFAULT> <COLOR:RED>comum<COLOR:DEFAULT>.<NEWLINE>Aqui estão suas <COLOR:RED>10 Rupias<COLOR:DEFAULT>.<NEWLINE>Pegue.<BOX_BREAK><UNSKIPPABLE>He, he.<END>)PTBR",
        0x00
    },
    {
        0x70F7,
        R"PTBR(<UNSKIPPABLE>Oh, trouxe um Poe hoje!<BOX_BREAK><UNSKIPPABLE>Hmmm!<BOX_BREAK><UNSKIPPABLE>Muito interessante!<NEWLINE>É um <COLOR:RED>Grande Poe<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>Pago <COLOR:RED>50 Rupias<COLOR:DEFAULT> por ele.<BOX_BREAK><UNSKIPPABLE>E ainda vou marcar <COLOR:RED>100<NEWLINE>pontos<COLOR:DEFAULT> no seu cartão.<BOX_BREAK><UNSKIPPABLE>Ao chegar a <COLOR:RED>1.000 pontos<COLOR:DEFAULT>,<NEWLINE>você ficará feliz! He, he.<END>)PTBR",
        0x00
    },
    {
        0x70F8,
        R"PTBR(<UNSKIPPABLE>Espere aí! UAU!<BOX_BREAK><UNSKIPPABLE>Você chegou a <COLOR:RED>1.000 pontos<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>Jovem, você é um verdadeiro<NEWLINE><COLOR:RED>Caçador de Fantasmas<COLOR:DEFAULT>!<BOX_BREAK><UNSKIPPABLE>Esperava que eu dissesse<NEWLINE>isso? He, he, he!<BOX_BREAK><UNSKIPPABLE>Graças a você, meu estoque<NEWLINE>de <COLOR:RED>Grandes Poes<COLOR:DEFAULT> está cheio.<NEWLINE>Esta será a última vez<NEWLINE>que compro um fantasma.<BOX_BREAK><UNSKIPPABLE>Está pensando no que prometi<NEWLINE>para quando você chegasse<NEWLINE>a 1.000 pontos, não é? He, he.<BOX_BREAK><UNSKIPPABLE>Não se preocupe, não esqueci.<NEWLINE>Tome isto.<END>)PTBR",
        0x00
    },
    {
        0x70F9,
        R"PTBR(<UNSKIPPABLE>Oh? O que é isso?<BOX_BREAK><UNSKIPPABLE><TEXT_SPEED:0x02><QUICKTEXT_ENABLE>Será<QUICKTEXT_DISABLE> <QUICKTEXT_ENABLE>que é<QUICKTEXT_DISABLE>...<TEXT_SPEED:0x00><EVENT><END>)PTBR",
        0x03
    },
    {
        0x70FA,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:LIGHTBLUE>uma fada<COLOR:DEFAULT><QUICKTEXT_DISABLE>?!<BOX_BREAK><UNSKIPPABLE>Então, você...<NEWLINE>Você veio da floresta?<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70FB,
        R"PTBR(<UNSKIPPABLE>Então... por acaso você tem<NEWLINE>a <COLOR:ADJUSTABLE>Pedra Espiritual da<NEWLINE>Floresta<COLOR:DEFAULT>?! Aquela pedra<NEWLINE>verde e brilhante...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70FC,
        R"PTBR(<UNSKIPPABLE>Tive um sonho... Nele, nuvens<NEWLINE>escuras de tempestade cobriam<NEWLINE>as terras de Hyrule...<BOX_BREAK><UNSKIPPABLE>De repente, um raio de luz<NEWLINE>saiu da floresta, abriu as<NEWLINE>nuvens e iluminou o chão...<BOX_BREAK><UNSKIPPABLE>A luz tomou a forma de alguém<NEWLINE>com uma <COLOR:ADJUSTABLE>pedra verde e brilhante<COLOR:DEFAULT>,<NEWLINE>seguido por uma <COLOR:LIGHTBLUE>fada<COLOR:DEFAULT>...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70FD,
        R"PTBR(<UNSKIPPABLE>Sei que o sonho era uma profecia:<NEWLINE>alguém viria da<NEWLINE><COLOR:ADJUSTABLE>floresta<COLOR:DEFAULT>...<BOX_BREAK><UNSKIPPABLE>Sim, achei que essa pessoa<NEWLINE>poderia ser você...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70FE,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x3A>Oh, desculpe!<BOX_BREAK><UNSKIPPABLE>Fiquei tão empolgada contando<NEWLINE>minha história que nem<NEWLINE>me apresentei direito!<EVENT><END>)PTBR",
        0x03
    },
    {
        0x70FF,
        R"PTBR(<UNSKIPPABLE><SHIFT:0x0C>Sou <COLOR:LIGHTBLUE>Zelda<COLOR:DEFAULT>, Princesa de Hyrule.<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7100,
        R"PTBR(O quê? Já nos conhecemos?<END>)PTBR",
        0x00
    },
    {
        0x7101,
        R"PTBR(Ahh... Que fofura!<NEWLINE>Pode me dizer onde<NEWLINE>encontrou isso?<END>)PTBR",
        0x00
    },
    {
        0x7102,
        R"PTBR(Aaaah!<NEWLINE>Socorro!<END>)PTBR",
        0x00
    },
    {
        0x7103,
        R"PTBR(Ah... é? E daí?<END>)PTBR",
        0x00
    },
    {
        0x7104,
        R"PTBR(Odeio raposas!<END>)PTBR",
        0x00
    },
    {
        0x7105,
        R"PTBR(Que irritante!<END>)PTBR",
        0x00
    },
    {
        0x7106,
        R"PTBR(Ei, ficou bem em você!<END>)PTBR",
        0x00
    },
    {
        0x7107,
        R"PTBR(<QUICKTEXT_ENABLE>AAAAH! Qual é o seu problema?!<QUICKTEXT_DISABLE><END>)PTBR",
        0x00
    },
    {
        0x7108,
        R"PTBR(Oooh... É um Zora?<NEWLINE>Esses belos olhos são<NEWLINE>fascinantes...<END>)PTBR",
        0x00
    },
    {
        0x7109,
        R"PTBR(Ai, não! Você dá medo!<NEWLINE>Não chegue mais perto!<END>)PTBR",
        0x00
    },
    {
        0x710A,
        R"PTBR(Ah... Que saudade! Isso<NEWLINE>me lembra de quando<NEWLINE>eu era criança.<END>)PTBR",
        0x00
    },
    {
        0x710B,
        R"PTBR(Isso é tão engraçado...<NEWLINE>Não consigo parar de rir!<NEWLINE>Hi, hi!<END>)PTBR",
        0x00
    },
    {
        0x710C,
        R"PTBR(<QUICKTEXT_ENABLE>Opa!<QUICKTEXT_DISABLE> Desculpe, mãe!<NEWLINE>Ah... É você!<NEWLINE>Não me dê um susto<NEWLINE>desses!<END>)PTBR",
        0x00
    },
    {
        0x710D,
        R"PTBR(Que cabeça grande você tem!<END>)PTBR",
        0x00
    },
    {
        0x710E,
        R"PTBR(Ah, não faça isso!<NEWLINE>Eu fico com vergonha...<END>)PTBR",
        0x00
    },
    {
        0x710F,
        R"PTBR(Está havendo algum concurso<NEWLINE>de máscaras?<NEWLINE><QUICKTEXT_ENABLE>Vou votar em você!<QUICKTEXT_DISABLE><END>)PTBR",
        0x00
    },
    {
        0x7110,
        R"PTBR(Oh! Um coelho!<NEWLINE>Falando nisso, vi um homem<NEWLINE>esquisito correndo atrás<NEWLINE>de coelhos por aí...<END>)PTBR",
        0x00
    },
    {
        0x7111,
        R"PTBR(Oooh, que moça bonita!<NEWLINE>Mas você é meio baixinha,<NEWLINE>não é?<END>)PTBR",
        0x00
    },
    {
        0x7112,
        R"PTBR(Bem... Não pensei em nada engraçado<NEWLINE>para dizer... Desculpe, garoto!<END>)PTBR",
        0x00
    },
    {
        0x7113,
        R"PTBR(Uma máscara... Quando eu era<NEWLINE>criança, também usava máscaras...<NEWLINE>O quê? Você não consegue<NEWLINE>me imaginar fazendo isso?<END>)PTBR",
        0x00
    },
    {
        0x7114,
        R"PTBR(Ahhh... Entendi...<NEWLINE>É uma ilusão...<END>)PTBR",
        0x00
    },
    {
        0x7115,
        R"PTBR(Ei, garoto, quando crescer,<NEWLINE>não seja como eu...<END>)PTBR",
        0x00
    },
    {
        0x7116,
        R"PTBR(<QUICKTEXT_ENABLE>AAAAAAAAAAH!<NEWLINE>UMA GERUDO!!!!<QUICKTEXT_DISABLE><BOX_BREAK>O q-quê? Uma máscara?<NEWLINE>Por que você tem uma<NEWLINE>máscara dessas?!<END>)PTBR",
        0x00
    },
    {
        0x7117,
        R"PTBR(Desculpe, estou ocupado agora.<END>)PTBR",
        0x00
    },
    {
        0x7118,
        R"PTBR(Uau! É o Keaton!<NEWLINE>Oi, Keaton!<END>)PTBR",
        0x00
    },
    {
        0x7119,
        R"PTBR(Que medo!<NEWLINE>Tem um menino na Vila<NEWLINE>Kakariko procurando uma<NEWLINE>máscara como essa!<END>)PTBR",
        0x00
    },
    {
        0x711A,
        R"PTBR(Hmm... Bem... Você não tem<NEWLINE>outras máscaras?<END>)PTBR",
        0x00
    },
    {
        0x711B,
        R"PTBR(Que máscara estranha!<NEWLINE>Hi, ha, ha!<END>)PTBR",
        0x00
    },
    {
        0x711C,
        R"PTBR(Ei, garoto! Não vê que estamos<NEWLINE>ocupados?! Deixe a gente em paz!<END>)PTBR",
        0x00
    },
    {
        0x711D,
        R"PTBR(Desculpe. Não quero nem olhar<NEWLINE>para outra mulher!<END>)PTBR",
        0x00
    },
    {
        0x711E,
        R"PTBR(Hi, hi.<NEWLINE>Não dê atenção a esse garoto,<NEWLINE>meu bem... Finja que estamos<NEWLINE>num mundinho só nosso...<END>)PTBR",
        0x00
    },
    {
        0x711F,
        R"PTBR(Ah, por favor!<NEWLINE>Vá incomodar<NEWLINE>outra pessoa!<END>)PTBR",
        0x00
    },
    {
        0x7120,
        R"PTBR(Dizem que existe uma Loja<NEWLINE>de Poções capaz de preparar<NEWLINE>o remédio perfeito!<END>)PTBR",
        0x00
    },
    {
        0x7121,
        R"PTBR(Dizem que há um monstro<NEWLINE>que come <COLOR:LIGHTBLUE>Escudos Hylianos<COLOR:DEFAULT><NEWLINE>em algum lugar deste mundo.<NEWLINE>Você já viu esse bicho?<END>)PTBR",
        0x00
    },
    {
        0x7122,
        R"PTBR(Vim aqui vender bombas...<NEWLINE>Compre algumas, por favor!<END>)PTBR",
        0x00
    },
    {
        0x7123,
        R"PTBR(<UNSKIPPABLE>Eu... estou com medo...<NEWLINE>Sinto que aquele homem<NEWLINE>vai destruir Hyrule.<BOX_BREAK><UNSKIPPABLE>O poder dele é assustador!<BOX_BREAK><UNSKIPPABLE>Mas ainda bem que<NEWLINE>você veio...<EVENT><END>)PTBR",
        0x03
    },
    {
        0x7124,
        R"PTBR(O quê? Se quer alguma coisa,<NEWLINE>diga logo o que é!<END>)PTBR",
        0x00
    },
    {
        0x7125,
        R"PTBR(Estou ocupado! Saia da frente,<NEWLINE>seu folgado!<END>)PTBR",
        0x00
    },
    {
        0x7126,
        R"PTBR(Ei, garoto, isso aí é<NEWLINE>madeira de boa qualidade!<END>)PTBR",
        0x00
    },
    {
        0x7127,
        R"PTBR(Hrrrrm!<NEWLINE>Saia da minha frente!<NEWLINE>Seu imprestável...<END>)PTBR",
        0x00
    },
    {
        0x7128,
        R"PTBR(AAAAAAAH!<NEWLINE>Opa, não posso gritar assim,<NEWLINE>ou o chefe vai brigar comigo!<END>)PTBR",
        0x00
    },
    {
        0x7129,
        R"PTBR(Desculpe, chefe!<NEWLINE>Não estava enrolando!<NEWLINE>Já vou trabalhar!<BOX_BREAK>Ué, não é você, chefe?<END>)PTBR",
        0x00
    },
    {
        0x712A,
        R"PTBR(As Gerudo são belas e corajosas...<NEWLINE>São fascinantes!<END>)PTBR",
        0x00
    },
    {
        0x712B,
        R"PTBR(Um dia, quando eu tiver mais prática,<NEWLINE>vou esculpir uma máscara dessas!<END>)PTBR",
        0x00
    },
    {
        0x712C,
        R"PTBR(Ah, essa é a máscara<NEWLINE>de que todo mundo fala!<NEWLINE>Ela é meio estranha...<END>)PTBR",
        0x00
    },
    {
        0x712D,
        R"PTBR(Uá, ha, ha!<NEWLINE>Como vão os negócios,<NEWLINE>senhor herói?<NEWLINE>Ha, ha, ha!<END>)PTBR",
        0x00
    },
    {
        0x712E,
        R"PTBR(Estou em serviço.<NEWLINE>Entendeu?<NEWLINE>EM SERVIÇO!<END>)PTBR",
        0x00
    },
    {
        0x712F,
        R"PTBR(Hmm... Bem, não sei o que<NEWLINE>dizer dessa máscara...<END>)PTBR",
        0x00
    },
    {
        0x7130,
        R"PTBR(Ah, que fofura!<NEWLINE>Mas os Cuccos são muito mais fofos!<END>)PTBR",
        0x00
    },
    {
        0x7131,
        R"PTBR(Hã? O quê?<NEWLINE>Está triste?<NEWLINE>Feliz?<NEWLINE>Não dá para saber...<END>)PTBR",
        0x00
    },
    {
        0x7132,
        R"PTBR(Desculpe, isso não<NEWLINE>me interessa muito.<END>)PTBR",
        0x00
    },
    {
        0x7133,
        R"PTBR(O menino que brinca no<NEWLINE>cemitério estava falando<NEWLINE>algo sobre o rosto dele...<END>)PTBR",
        0x00
    },
    {
        0x7134,
        R"PTBR(Eu sou mesmo um homem bom.<NEWLINE>Não acredita em mim?<END>)PTBR",
        0x00
    },
    {
        0x7135,
        R"PTBR(AAAAAH!<NEWLINE>Pensei que fosse aquela velha bruxa!<NEWLINE>Não me dê um susto desses!<END>)PTBR",
        0x00
    },
    {
        0x7136,
        R"PTBR(Lembro de meu pai falar de<NEWLINE>um ferreiro de espadas...<NEWLINE>Mas isso não me interessa<NEWLINE>nem um pouco.<END>)PTBR",
        0x00
    },
    {
        0x7137,
        R"PTBR(Não tenho medo dos monstros<NEWLINE>da floresta! Está tentando<NEWLINE>tirar sarro de mim?<END>)PTBR",
        0x00
    },
    {
        0x7138,
        R"PTBR(O que é isso? Daqui eu<NEWLINE>não consigo ver direito...<END>)PTBR",
        0x00
    },
    {
        0x7139,
        R"PTBR(Oi de novo! Como você está hoje?<END>)PTBR",
        0x00
    },
    {
        0x713A,
        R"PTBR(Está tudo bem hoje!<END>)PTBR",
        0x00
    },
    {
        0x713B,
        R"PTBR(Cansado... Estou tão cansado...<END>)PTBR",
        0x00
    },
    {
        0x713C,
        R"PTBR(Não quero saber<NEWLINE>de raposas!<END>)PTBR",
        0x00
    },
    {
        0x713D,
        R"PTBR(Que coisa irritante!<NEWLINE>Até incomoda os olhos!<END>)PTBR",
        0x00
    },
    {
        0x713E,
        R"PTBR(Está muito bonito!<END>)PTBR",
        0x00
    },
    {
        0x713F,
        R"PTBR(Aaaaaah!<NEWLINE>Qual é o seu problema?<NEWLINE>Está querendo arrumar confusão?<END>)PTBR",
        0x00
    },
    {
        0x7140,
        R"PTBR(Seu idiota!<NEWLINE>Quando falar com alguém,<NEWLINE>olhe nos olhos da pessoa!<END>)PTBR",
        0x00
    },
    {
        0x7141,
        R"PTBR(Seu idiota!<NEWLINE>Quando falar com alguém,<NEWLINE>não fique encarando!<END>)PTBR",
        0x00
    },
    {
        0x7142,
        R"PTBR(Seu idiota!<NEWLINE>Quando falar com alguém,<NEWLINE>tire a máscara!<END>)PTBR",
        0x00
    },
    {
        0x7143,
        R"PTBR(Seu idiota!<NEWLINE>Não sei por que estou dizendo<NEWLINE>isso, mas... você é um mesmo!<END>)PTBR",
        0x00
    },
    {
        0x7144,
        R"PTBR(Onde conseguiu isso?<NEWLINE>O quê?<NEWLINE>É uma máscara?<END>)PTBR",
        0x00
    },
    {
        0x7145,
        R"PTBR(Ah, me deixe em paz...<NEWLINE>Não vê que estou no<NEWLINE>embalo da música?<END>)PTBR",
        0x00
    },
    {
        0x7146,
        R"PTBR(Uma máscara é como um<NEWLINE>instrumento musical: reflete<NEWLINE>quem a usa. Gostei da sua<NEWLINE>originalidade, garoto!<END>)PTBR",
        0x00
    },
    {
        0x7147,
        R"PTBR(Que cabeção!<NEWLINE>Como passou por aquela porta?!<END>)PTBR",
        0x00
    },
    {
        0x7148,
        R"PTBR(Eu ODEIO raposas, garoto!<END>)PTBR",
        0x00
    },
    {
        0x7149,
        R"PTBR(Se essa não é a cara<NEWLINE>mais irritante que já vi<NEWLINE>na vida, então não sei<NEWLINE>qual é!<END>)PTBR",
        0x00
    },
    {
        0x714A,
        R"PTBR(Ei, que belo rosto<NEWLINE>você tem aí, garoto!<END>)PTBR",
        0x00
    },
    {
        0x714B,
        R"PTBR(Tem alguma reclamação?<NEWLINE>Fale, então!<END>)PTBR",
        0x00
    },
    {
        0x714C,
        R"PTBR(Por favor, pare de brincar<NEWLINE>e quebre nossa maldição!<END>)PTBR",
        0x00
    },
    {
        0x714D,
        R"PTBR(Se eu usasse isso...<NEWLINE>Seria uma Skulltula de verdade...<NEWLINE>AAAAAAAAAAH!<END>)PTBR",
        0x00
    },
    {
        0x714E,
        R"PTBR(Desculpe se não dou risada...<NEWLINE>É difícil ficar feliz<NEWLINE>nessa situação...<NEWLINE>Com essa maldição e tudo...<END>)PTBR",
        0x00
    },
    {
        0x714F,
        R"PTBR(<SFX:0x68,0x67>Aaaaaah!<NEWLINE>Que medo!<NEWLINE>Sei que dou medo, mas... nossa!<NEWLINE>Isso é assustador mesmo!<END>)PTBR",
        0x00
    },
    {
        0x7150,
        R"PTBR(Hã?! O q-quê?!<BOX_BREAK>Ah, é só uma criança.<NEWLINE>Não me dê um susto desses!<NEWLINE>Pode não parecer, mas sou<NEWLINE>um sujeito muito sensível!<END>)PTBR",
        0x00
    },
    {
        0x7151,
        R"PTBR(Olha só a cabeça desse garoto!<NEWLINE>É ENORME!<NEWLINE>Bem, a minha também é...<END>)PTBR",
        0x00
    },
    {
        0x7152,
        R"PTBR(Você sabe que tipo de<NEWLINE>máscara é essa...?<NEWLINE>E usa mesmo assim?<END>)PTBR",
        0x00
    },
    {
        0x7153,
        R"PTBR(Estou trabalhando agora...<NEWLINE>Se quer que eu cave,<NEWLINE>não me atrapalhe.<END>)PTBR",
        0x00
    },
    {
        0x7154,
        R"PTBR(O que é isso? Aquele bicho<NEWLINE>que pula pelos campos...<NEWLINE>Esqueci como é que<NEWLINE>ele se chama...<END>)PTBR",
        0x00
    },
    {
        0x7155,
        R"PTBR(Ei! É uma Máscara Keaton!!<NEWLINE>Também pedi uma<NEWLINE>para o meu pai!<END>)PTBR",
        0x00
    },
    {
        0x7156,
        R"PTBR(Até que se parece com<NEWLINE>o Sr. Damp<BYTE:0x96>, não é?<END>)PTBR",
        0x00
    },
    {
        0x7157,
        R"PTBR(Não se parece nem um pouco<NEWLINE>com o Sr. Damp<BYTE:0x96>, né?<END>)PTBR",
        0x00
    },
    {
        0x7158,
        R"PTBR(<SFX:0x68,0x63>Que máscara legal... Mas dá<NEWLINE>um pouco de medo, não acha?<END>)PTBR",
        0x00
    },
    {
        0x7159,
        R"PTBR(Ei! Isso me lembra algo...<NEWLINE>Acho que vi algo parecido<NEWLINE>nos Bosques Perdidos, não?<END>)PTBR",
        0x00
    },
    {
        0x715A,
        R"PTBR(<SFX:0x68,0x63>Isso me faz sentir... feliz...<END>)PTBR",
        0x00
    },
    {
        0x715B,
        R"PTBR(Ah... snif...<NEWLINE>Essa máscara...<NEWLINE>Ela me deixa... triste...<END>)PTBR",
        0x00
    },
    {
        0x715C,
        R"PTBR(Ha! Essa máscara não adianta nada!<NEWLINE>Você tem medo de mim, o grande<NEWLINE>Mido... Não é mesmo?!<END>)PTBR",
        0x00
    },
    {
        0x715D,
        R"PTBR(Aaaah! O quê?<NEWLINE>Ei, não tenho medo de você!<NEWLINE>Só não chegue mais perto,<NEWLINE>entendeu?!<END>)PTBR",
        0x00
    },
    {
        0x715E,
        R"PTBR(Ei, que máscara legal.<NEWLINE>Eu quero!<NEWLINE>É BRINCADEIRA! Ha!<NEWLINE>Não quero essa máscara idiota!<END>)PTBR",
        0x00
    },
    {
        0x715F,
        R"PTBR(Uá, ha, ha, ha!<NEWLINE>Combina muito com você!<END>)PTBR",
        0x00
    },
    {
        0x7160,
        R"PTBR(Aaaah!<NEWLINE>V-vou contar isso<NEWLINE>para o Mido!<END>)PTBR",
        0x00
    },
    {
        0x7161,
        R"PTBR(Aaaah!<NEWLINE>V-vou pedir para o Mido<NEWLINE>dar uma surra em você!<END>)PTBR",
        0x00
    },
    {
        0x7162,
        R"PTBR(Uaaau!<NEWLINE>Você é algum tipo de<NEWLINE>fantasma da floresta?<END>)PTBR",
        0x00
    },
    {
        0x7163,
        R"PTBR(Que legal!<NEWLINE>Ah... Não conte ao Mido que eu disse!<END>)PTBR",
        0x00
    },
    {
        0x7164,
        R"PTBR(O quê?!<NEWLINE>Você voltou!<NEWLINE>Sei quem você é,<NEWLINE>mesmo com essa máscara!<END>)PTBR",
        0x00
    },
    {
        0x7165,
        R"PTBR(O que será que Mido diria<NEWLINE>se visse isso?<NEWLINE>Eu adoraria ver<NEWLINE>a reação dele!<END>)PTBR",
        0x00
    },
    {
        0x7166,
        R"PTBR(Entendi...<NEWLINE>Vai assustar o Mido com<NEWLINE>essa máscara, não é?!<END>)PTBR",
        0x00
    },
    {
        0x7167,
        R"PTBR(Ha, ha, ha!<NEWLINE>Que cara engraçada!<NEWLINE>Aposto que a Saria<NEWLINE>também ia rir muito!<END>)PTBR",
        0x00
    },
    {
        0x7168,
        R"PTBR(Hi, hi, hi!<NEWLINE>Uma máscara de madeira?<NEWLINE>Parece que você colocou<NEWLINE>um escudo no rosto!<END>)PTBR",
        0x00
    },
    {
        0x7169,
        R"PTBR(Que cara esquisita!<BOX_BREAK>Falando nisso, um dos meninos<NEWLINE>da floresta estava reclamando<NEWLINE>do próprio rosto...<END>)PTBR",
        0x00
    },
    {
        0x716A,
        R"PTBR(Que cabeça enorme você tem!<END>)PTBR",
        0x00
    },
    {
        0x716B,
        R"PTBR(Hi, hi!<NEWLINE>Onde conseguiu isso?<NEWLINE>Fora da floresta?<NEWLINE>Não pode ser! Não acredito!<END>)PTBR",
        0x00
    },
    {
        0x716C,
        R"PTBR(Hi, hi!<NEWLINE>É engraçada, mas não faz<NEWLINE>muito o meu estilo...<END>)PTBR",
        0x00
    },
    {
        0x716D,
        R"PTBR(Isso aí!<NEWLINE>Com esta máscara, me sinto<NEWLINE>forte e assustador!<NEWLINE>Hi, hi!<END>)PTBR",
        0x00
    },
    {
        0x716E,
        R"PTBR(Hi, hi!<NEWLINE>Como há gente diferente<NEWLINE>neste mundo!<END>)PTBR",
        0x00
    },
    {
        0x716F,
        R"PTBR(Hi, hi!<NEWLINE>Não preciso de outra...<NEWLINE>Gosto da minha, obrigado!<END>)PTBR",
        0x00
    },
    {
        0x7170,
        R"PTBR(<SFX:0x68,0x6D>Uau, sua cabeça fica<NEWLINE>enorme com isso!<NEWLINE>Hi, hi!<END>)PTBR",
        0x00
    },
    {
        0x7171,
        R"PTBR(<SFX:0x68,0x6B>Que ratinho fofinho!<NEWLINE>O quê?<NEWLINE>Ah, não é um rato?<END>)PTBR",
        0x00
    },
    {
        0x7172,
        R"PTBR(<SFX:0x68,0x6C>O que está balançando<NEWLINE>na sua cabeça?<NEWLINE>Orelhas? Parece que você<NEWLINE>tem quatro orelhas!<END>)PTBR",
        0x00
    },
    {
        0x7173,
        R"PTBR(<SFX:0x68,0x69>Deve ser emocionante passar<NEWLINE>escondido pelos guardas<NEWLINE>usando essa máscara!<END>)PTBR",
        0x00
    },
    {
        0x7174,
        R"PTBR(Oi, menino da fada!<NEWLINE>O quê?<NEWLINE>Acha que está disfarçado?<NEWLINE>É tão óbvio quem você é!<END>)PTBR",
        0x00
    },
    {
        0x7175,
        R"PTBR(Uau!<NEWLINE>Que olhos grandes você tem!<NEWLINE>Os Gorons são tão fofos, né?<END>)PTBR",
        0x00
    },
    {
        0x7176,
        R"PTBR(Conheço esse personagem!<NEWLINE>É o Keaton! Ele está<NEWLINE>na moda na Cidade do<NEWLINE>Castelo de Hyrule!<END>)PTBR",
        0x00
    },
    {
        0x7177,
        R"PTBR(Ah, tenha paciência!<NEWLINE>Esses meninos não têm jeito!<END>)PTBR",
        0x00
    },
    {
        0x7178,
        R"PTBR(Peraí... Peraí...<NEWLINE>Eu sei quem você é...<NEWLINE>É o... Kin-ton!<NEWLINE>Não é isso?!<END>)PTBR",
        0x00
    },
    {
        0x7179,
        R"PTBR(Essa dá medo, hein?<NEWLINE>Quase tanto quanto... o Ingo!<END>)PTBR",
        0x00
    },
    {
        0x717A,
        R"PTBR(Isso me lembra a minha esposa...<NEWLINE>Pensando bem, não...<NEWLINE>Não se parece nada com ela!<END>)PTBR",
        0x00
    },
    {
        0x717B,
        R"PTBR(UAAAH...<NEWLINE>Estou meio cansado agora...<NEWLINE>Mostre isso depois...<END>)PTBR",
        0x00
    },
    {
        0x717C,
        R"PTBR(Cai fora, garoto!<NEWLINE>Não vê que estou ocupado?!<END>)PTBR",
        0x00
    },
    {
        0x717D,
        R"PTBR(Humpf!<NEWLINE>Brincar assim é bom quando<NEWLINE>se é criança. Espere crescer!<NEWLINE>É trabalho, trabalho e trabalho!<END>)PTBR",
        0x00
    },
    {
        0x717E,
        R"PTBR(AAAAH!<NEWLINE>Humpf. É só uma máscara...<NEWLINE>Cai fora, garoto! Suma daqui!<END>)PTBR",
        0x00
    },
    {
        0x717F,
        R"PTBR(He, he, he...<NEWLINE>Isso me animou um pouco,<NEWLINE>garoto.<NEWLINE>Obrigado!<END>)PTBR",
        0x00
    },
    {
        0x7180,
        R"PTBR(Hmmm... Vejamos...<NEWLINE>Sim, tenho certeza...<NEWLINE>Isso foi feito com uma<NEWLINE>tábua de caixão. Foi, sim!<END>)PTBR",
        0x00
    },
    {
        0x7181,
        R"PTBR(Ahhh... Sim. Vejamos...<NEWLINE>Um trabalho muito bem-feito.<NEWLINE>Mas não seria um bom<NEWLINE>ingrediente para meu remédio.<END>)PTBR",
        0x00
    },
    {
        0x7182,
        R"PTBR(Que interessante! Um Goron!<NEWLINE>Por falar nisso, como será<NEWLINE>que vai meu velho amigo<NEWLINE>Biggoron, da Montanha da Morte?<END>)PTBR",
        0x00
    },
    {
        0x7183,
        R"PTBR(Um material bem incomum...<NEWLINE>Acho que não dissolve em água.<NEWLINE>Então não seria um bom<NEWLINE>ingrediente para meus remédios...<END>)PTBR",
        0x00
    },
    {
        0x7184,
        R"PTBR(Nhac, nhac, nhac...<NEWLINE>Tá, tá, uma máscara.<NEWLINE>Quer comprar feijões?<END>)PTBR",
        0x00
    },
    {
        0x7185,
        R"PTBR(Nhac, nhac, nhac...<NEWLINE>Não, não quero comprar.<END>)PTBR",
        0x00
    },
    {
        0x7186,
        R"PTBR(Nhac, nhac, nhac...<NEWLINE>Não, não faz meu estilo.<END>)PTBR",
        0x00
    },
    {
        0x7187,
        R"PTBR(Nhac, nhac, nhac...<NEWLINE>Bem... Não, acho que<NEWLINE>não quero isso.<END>)PTBR",
        0x00
    },
    {
        0x7188,
        R"PTBR(O que você quer?<END>)PTBR",
        0x00
    },
    {
        0x7189,
        R"PTBR(Você não parece saber<NEWLINE>nadar muito bem...<END>)PTBR",
        0x00
    },
    {
        0x718A,
        R"PTBR(Cabelos ruivos... Pele morena...<NEWLINE>Já vi gente assim antes...<END>)PTBR",
        0x00
    },
    {
        0x718B,
        R"PTBR(Ah, sei.<NEWLINE>Você é meio pequeno para<NEWLINE>ser um Zora...<END>)PTBR",
        0x00
    },
    {
        0x718C,
        R"PTBR(Ho, ho, ho!<NEWLINE>Vocês, hylianos, são<NEWLINE>criaturas tão bobas!<END>)PTBR",
        0x00
    },
    {
        0x718D,
        R"PTBR(Essa cara... me dá arrepios...<END>)PTBR",
        0x00
    },
    {
        0x718E,
        R"PTBR(Que saudade daqueles tempos!<NEWLINE>Isso me lembra meu amigo<NEWLINE>de infância, Biggoron!<END>)PTBR",
        0x00
    },
    {
        0x718F,
        R"PTBR(Não acho nada engraçado.<NEWLINE>Está zombando de mim?<END>)PTBR",
        0x00
    },
    {
        0x7190,
        R"PTBR(Você é um cara engraçado!<END>)PTBR",
        0x00
    },
    {
        0x7191,
        R"PTBR(Sua cabeça é gigantesca!<END>)PTBR",
        0x00
    },
    {
        0x7192,
        R"PTBR(Não faça isso...<NEWLINE>Está me envergonhando!<END>)PTBR",
        0x00
    },
    {
        0x7193,
        R"PTBR(Ótimo! Você decidiu mesmo<NEWLINE>virar um Zora!<NEWLINE>Agora está pronto para<NEWLINE>se casar comigo?<END>)PTBR",
        0x00
    },
    {
        0x7194,
        R"PTBR(UAU!<NEWLINE>Meu coração começou<NEWLINE>a bater tão rápido!<END>)PTBR",
        0x00
    },
    {
        0x7195,
        R"PTBR(Que máscara desagradável...<NEWLINE>Adeus.<END>)PTBR",
        0x00
    },
    {
        0x7196,
        R"PTBR(Hrrrrm...<NEWLINE>Não sei o que dizer.<END>)PTBR",
        0x00
    },
    {
        0x7197,
        R"PTBR(Não seja tão enjoado para comer!<NEWLINE>Comeu todas as suas pedras<NEWLINE>verdes? Precisa comer para<NEWLINE>crescer forte e saudável!<END>)PTBR",
        0x00
    },
    {
        0x7198,
        R"PTBR(Deixe-me em paz!<END>)PTBR",
        0x00
    },
    {
        0x7199,
        R"PTBR(Está tentando me fazer rir?<NEWLINE>Bem, isso não é tão engraçado...<END>)PTBR",
        0x00
    },
    {
        0x719A,
        R"PTBR(Você está me irritando!<END>)PTBR",
        0x00
    },
    {
        0x719B,
        R"PTBR(Odeio as Gerudo!!<END>)PTBR",
        0x00
    },
    {
        0x719C,
        R"PTBR(Pare de me incomodar!<NEWLINE>Vá embora!<END>)PTBR",
        0x00
    },
    {
        0x719D,
        R"PTBR(Uá, ha, ha!<NEWLINE>Acha que está disfarçado?<NEWLINE>Que engraçado!<END>)PTBR",
        0x00
    },
    {
        0x719E,
        R"PTBR(Saia da minha frente!<NEWLINE>Suma daqui!<NEWLINE>Está procurando encrenca, é?<END>)PTBR",
        0x00
    },
    {
        0x719F,
        R"PTBR(Você tem coragem de aparecer<NEWLINE>aqui usando isso, garoto!<NEWLINE>Mas não vai nos enganar<NEWLINE>tão facilmente!<END>)PTBR",
        0x00
    },
    {
        0x71A0,
        R"PTBR(O que é isso?<NEWLINE>O que isso tem a ver<NEWLINE>com a gente?<END>)PTBR",
        0x00
    },
    {
        0x71A1,
        R"PTBR(Ha, ha, ha!<NEWLINE>Você tem coragem de sobra,<NEWLINE>hein, garoto?<NEWLINE>Gostei de você!<END>)PTBR",
        0x00
    },
    {
        0x71A2,
        R"PTBR(Vamos! É hora de levar a sério!<END>)PTBR",
        0x00
    },
    {
        0x71A3,
        R"PTBR(Que estranho... Parece um pouco<NEWLINE>comigo...<NEWLINE>Não... Pensando bem, não.<NEWLINE>Olhando de perto, nada a ver.<END>)PTBR",
        0x00
    },
    {
        0x71A4,
        R"PTBR(Hmm. Não, não, não!<NEWLINE>Essas orelhas estão erradas!<NEWLINE>Deviam ser mais compridas!<END>)PTBR",
        0x00
    },
    {
        0x71A5,
        R"PTBR(Você não fica com medo<NEWLINE>de andar assim por aí<NEWLINE>no meio da noite?<END>)PTBR",
        0x00
    },
    {
        0x71A6,
        R"PTBR(Ha, ha, ha!<NEWLINE>Você gosta mesmo dessas coisas,<NEWLINE>não é?!<END>)PTBR",
        0x00
    },
    {
        0x71A7,
        R"PTBR(Acho que já vi uma pedra<NEWLINE>parecida com isso...<NEWLINE>Onde foi mesmo?<NEWLINE>Hmmm...<END>)PTBR",
        0x00
    },
    {
        0x71A8,
        R"PTBR(Depressa, <NAME>!<NEWLINE>A torre pode desabar<NEWLINE>a qualquer momento!!<END>)PTBR",
        0x00
    },
    {
        0x71A9,
        R"PTBR(Cuidado com os escombros caindo!<END>)PTBR",
        0x00
    },
    {
        0x71AA,
        R"PTBR(<NAME>!<NEWLINE>Socorro!<END>)PTBR",
        0x03
    },
    {
        0x71AB,
        R"PTBR(<NAME>!<NEWLINE>A saída é logo ali!<END>)PTBR",
        0x00
    },
    {
        0x71AC,
        R"PTBR(Obrigada, <NAME>.<NEWLINE>Agora, vamos depressa!<END>)PTBR",
        0x03
    },
    {
        0x71AD,
        R"PTBR(Que pena!<BOX_BREAK>Pratique bastante e volte!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x71AE,
        R"PTBR(Quase!!<BOX_BREAK>Bem... Está certo!<NEWLINE>Pode tentar mais uma vez<NEWLINE>de graça...<NEWLINE>Desta vez, tem que conseguir!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x71AF,
        R"PTBR(Maravilhoso!!!<NEWLINE>Bravo!!!<NEWLINE>Perfeito!!!<BOX_BREAK>Aqui está um presente fantástico!<EVENT><END>)PTBR",
        0x00
    },
    {
        0x71B0,
        R"PTBR(<QUICKTEXT_ENABLE><COLOR:LIGHTBLUE>Ah, não! <COLOR:RED>O tempo acabou!<NEWLINE><COLOR:LIGHTBLUE>O que você ia entregar<NEWLINE>estragou!<NEWLINE>Vamos tentar de novo!<COLOR:DEFAULT><QUICKTEXT_DISABLE><EVENT><END>)PTBR",
        0x02
    },
    {
        0x71B1,
        R"PTBR(<QUICKTEXT_ENABLE>BOING! BOING!<NEWLINE>Agora são <TIME>!<QUICKTEXT_DISABLE><FADE:0x28><END>)PTBR",
        0x02
    },
    {
        0x71B2,
        R"PTBR(O guarda do portão da Montanha<NEWLINE>da Morte indicou nossa loja?<NEWLINE>Então vou fazer<NEWLINE>um bom preço para você!<END>)PTBR",
        0x00
    },
    {
        0xFFFD,
        R"PTBR(<END>)PTBR",
        0x00
    },
};

const size_t kPTBRMessages_4000_FFFFCount = sizeof(kPTBRMessages_4000_FFFF) / sizeof(kPTBRMessages_4000_FFFF[0]);
