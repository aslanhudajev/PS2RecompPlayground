#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitCamera
// Address: 0x267688 - 0x268414
void InitCamera_0x267688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x267688u;

    // 0x267688: 0x27bdfec0
    ctx->pc = 0x267688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x26768c: 0xffbf0120
    ctx->pc = 0x26768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x267690: 0xffb70110
    ctx->pc = 0x267690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
    // 0x267694: 0xffb60100
    ctx->pc = 0x267694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x267698: 0xffb500f0
    ctx->pc = 0x267698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x26769c: 0xffb400e0
    ctx->pc = 0x26769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2676a0: 0xffb300d0
    ctx->pc = 0x2676a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x2676a4: 0xffb200c0
    ctx->pc = 0x2676a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2676a8: 0xffb100b0
    ctx->pc = 0x2676a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x2676ac: 0xffb000a0
    ctx->pc = 0x2676acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2676b0: 0xe7b40130
    ctx->pc = 0x2676b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2676b4: 0xc0aa372
    ctx->pc = 0x2676B4u;
    SET_GPR_U32(ctx, 31, 0x2676BCu);
    ctx->pc = 0x2676B8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenHeight_0x2a8dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2676BCu; }
    }
    if (ctx->pc != 0x2676BCu) { return; }
    ctx->pc = 0x2676BCu;
    // 0x2676bc: 0xc0aa36c
    ctx->pc = 0x2676BCu;
    SET_GPR_U32(ctx, 31, 0x2676C4u);
    ctx->pc = 0x2676C0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenWidth_0x2a8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2676C4u; }
    }
    if (ctx->pc != 0x2676C4u) { return; }
    ctx->pc = 0x2676C4u;
    // 0x2676c4: 0x40b82d
    ctx->pc = 0x2676c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2676c8: 0x3c02003c
    ctx->pc = 0x2676c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2676cc: 0xac4039c4
    ctx->pc = 0x2676ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14788), GPR_U32(ctx, 0));
    // 0x2676d0: 0x3c020034
    ctx->pc = 0x2676d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2676d4: 0xac40fa04
    ctx->pc = 0x2676d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965764), GPR_U32(ctx, 0));
    // 0x2676d8: 0x3c020034
    ctx->pc = 0x2676d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2676dc: 0xac40fa1c
    ctx->pc = 0x2676dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965788), GPR_U32(ctx, 0));
    // 0x2676e0: 0x3c030034
    ctx->pc = 0x2676e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2676e4: 0x3c020034
    ctx->pc = 0x2676e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2676e8: 0x44800800
    ctx->pc = 0x2676e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2676ec: 0xe441fa18
    ctx->pc = 0x2676ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), bits); }
    // 0x2676f0: 0xe461fa14
    ctx->pc = 0x2676f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965780), bits); }
    // 0x2676f4: 0x3c020034
    ctx->pc = 0x2676f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2676f8: 0x2403ffff
    ctx->pc = 0x2676f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2676fc: 0xac43cdb8
    ctx->pc = 0x2676fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954424), GPR_U32(ctx, 3));
    // 0x267700: 0x3c020034
    ctx->pc = 0x267700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267704: 0xac43f944
    ctx->pc = 0x267704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965572), GPR_U32(ctx, 3));
    // 0x267708: 0x3c020034
    ctx->pc = 0x267708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26770c: 0xac40f520
    ctx->pc = 0x26770cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
    // 0x267710: 0x3c020034
    ctx->pc = 0x267710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267714: 0xac40f9cc
    ctx->pc = 0x267714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965708), GPR_U32(ctx, 0));
    // 0x267718: 0x3c020034
    ctx->pc = 0x267718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26771c: 0xac40f934
    ctx->pc = 0x26771cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965556), GPR_U32(ctx, 0));
    // 0x267720: 0x3c020034
    ctx->pc = 0x267720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267724: 0xac40f93c
    ctx->pc = 0x267724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965564), GPR_U32(ctx, 0));
    // 0x267728: 0x3c020034
    ctx->pc = 0x267728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26772c: 0x24040001
    ctx->pc = 0x26772cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x267730: 0xac44f940
    ctx->pc = 0x267730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965568), GPR_U32(ctx, 4));
    // 0x267734: 0x3c020034
    ctx->pc = 0x267734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267738: 0xac40fa00
    ctx->pc = 0x267738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965760), GPR_U32(ctx, 0));
    // 0x26773c: 0x3c02003c
    ctx->pc = 0x26773cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267740: 0xac40397c
    ctx->pc = 0x267740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14716), GPR_U32(ctx, 0));
    // 0x267744: 0x3c02003c
    ctx->pc = 0x267744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267748: 0xac403980
    ctx->pc = 0x267748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14720), GPR_U32(ctx, 0));
    // 0x26774c: 0x3c020034
    ctx->pc = 0x26774cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267750: 0xac40f90c
    ctx->pc = 0x267750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965516), GPR_U32(ctx, 0));
    // 0x267754: 0x3c020034
    ctx->pc = 0x267754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267758: 0xac40f910
    ctx->pc = 0x267758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965520), GPR_U32(ctx, 0));
    // 0x26775c: 0x3c020034
    ctx->pc = 0x26775cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267760: 0xac43f930
    ctx->pc = 0x267760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965552), GPR_U32(ctx, 3));
    // 0x267764: 0x3c02003c
    ctx->pc = 0x267764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267768: 0xac433978
    ctx->pc = 0x267768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14712), GPR_U32(ctx, 3));
    // 0x26776c: 0x3c02003c
    ctx->pc = 0x26776cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267770: 0xac4039c0
    ctx->pc = 0x267770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14784), GPR_U32(ctx, 0));
    // 0x267774: 0x3c03003c
    ctx->pc = 0x267774u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x267778: 0x3c02003c
    ctx->pc = 0x267778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26777c: 0xe441396c
    ctx->pc = 0x26777cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14700), bits); }
    // 0x267780: 0xe4613970
    ctx->pc = 0x267780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14704), bits); }
    // 0x267784: 0x3c02003c
    ctx->pc = 0x267784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267788: 0xac4038d0
    ctx->pc = 0x267788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14544), GPR_U32(ctx, 0));
    // 0x26778c: 0x3c03003c
    ctx->pc = 0x26778cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x267790: 0x24020258
    ctx->pc = 0x267790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 600));
    // 0x267794: 0xac6238dc
    ctx->pc = 0x267794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14556), GPR_U32(ctx, 2));
    // 0x267798: 0x3c020034
    ctx->pc = 0x267798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26779c: 0xac40f8f0
    ctx->pc = 0x26779cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965488), GPR_U32(ctx, 0));
    // 0x2677a0: 0x3c02003c
    ctx->pc = 0x2677a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2677a4: 0xac4438e4
    ctx->pc = 0x2677a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14564), GPR_U32(ctx, 4));
    // 0x2677a8: 0x3c020032
    ctx->pc = 0x2677a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2677ac: 0xac400808
    ctx->pc = 0x2677acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x2677b0: 0x3c020034
    ctx->pc = 0x2677b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2677b4: 0x3c0141d0
    ctx->pc = 0x2677b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16848 << 16));
    // 0x2677b8: 0x44810000
    ctx->pc = 0x2677b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2677bc: 0xe440f900
    ctx->pc = 0x2677bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965504), bits); }
    // 0x2677c0: 0x3c020034
    ctx->pc = 0x2677c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2677c4: 0x3c014200
    ctx->pc = 0x2677c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x2677c8: 0x44810000
    ctx->pc = 0x2677c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2677cc: 0xe440f904
    ctx->pc = 0x2677ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965508), bits); }
    // 0x2677d0: 0x3c030034
    ctx->pc = 0x2677d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2677d4: 0x3c02003c
    ctx->pc = 0x2677d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2677d8: 0x3c013f33
    ctx->pc = 0x2677d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16179 << 16));
    // 0x2677dc: 0x34213333
    ctx->pc = 0x2677dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x2677e0: 0x44810000
    ctx->pc = 0x2677e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2677e4: 0xe44038f0
    ctx->pc = 0x2677e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14576), bits); }
    // 0x2677e8: 0xe460f8f8
    ctx->pc = 0x2677e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965496), bits); }
    // 0x2677ec: 0x3c02003c
    ctx->pc = 0x2677ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2677f0: 0xac4438ec
    ctx->pc = 0x2677f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14572), GPR_U32(ctx, 4));
    // 0x2677f4: 0x3c020032
    ctx->pc = 0x2677f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2677f8: 0xac400810
    ctx->pc = 0x2677f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2064), GPR_U32(ctx, 0));
    // 0x2677fc: 0x3c020032
    ctx->pc = 0x2677fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x267800: 0xac40080c
    ctx->pc = 0x267800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
    // 0x267804: 0x3c020034
    ctx->pc = 0x267804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267808: 0xac40f9d0
    ctx->pc = 0x267808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965712), GPR_U32(ctx, 0));
    // 0x26780c: 0xa82d
    ctx->pc = 0x26780cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267810: 0x3c02003c
    ctx->pc = 0x267810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267814: 0xac4039a4
    ctx->pc = 0x267814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14756), GPR_U32(ctx, 0));
    // 0x267818: 0x3c02003c
    ctx->pc = 0x267818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26781c: 0xac4039a8
    ctx->pc = 0x26781cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14760), GPR_U32(ctx, 0));
    // 0x267820: 0x3c02003c
    ctx->pc = 0x267820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267824: 0xac4039b0
    ctx->pc = 0x267824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14768), GPR_U32(ctx, 0));
    // 0x267828: 0x3c02003c
    ctx->pc = 0x267828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26782c: 0xac4039b4
    ctx->pc = 0x26782cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14772), GPR_U32(ctx, 0));
    // 0x267830: 0x3c02003c
    ctx->pc = 0x267830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267834: 0xe44139b8
    ctx->pc = 0x267834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14776), bits); }
    // 0x267838: 0x3c02003c
    ctx->pc = 0x267838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26783c: 0xac4039ac
    ctx->pc = 0x26783cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14764), GPR_U32(ctx, 0));
    // 0x267840: 0x802d
    ctx->pc = 0x267840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267844: 0x3c020034
    ctx->pc = 0x267844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267848: 0x2452eb60
    ctx->pc = 0x267848u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26784c: 0x46000d06
    ctx->pc = 0x26784cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x267850: 0x3c11ffff
    ctx->pc = 0x267850u;
    SET_GPR_U32(ctx, 17, ((uint32_t)65535 << 16));
    // 0x267854: 0x3631ffff
    ctx->pc = 0x267854u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 65535));
label_267858:
    // 0x267858: 0xae400000
    ctx->pc = 0x267858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x26785c: 0x3c04003a
    ctx->pc = 0x26785cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x267860: 0x24842550
    ctx->pc = 0x267860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x267864: 0xc0b5494
    ctx->pc = 0x267864u;
    SET_GPR_U32(ctx, 31, 0x26786Cu);
    ctx->pc = 0x267868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26786Cu; }
    }
    if (ctx->pc != 0x26786Cu) { return; }
    ctx->pc = 0x26786Cu;
    // 0x26786c: 0xae400050
    ctx->pc = 0x26786cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x267870: 0xae400054
    ctx->pc = 0x267870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x267874: 0xae400058
    ctx->pc = 0x267874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x267878: 0xae400060
    ctx->pc = 0x267878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x26787c: 0xae400064
    ctx->pc = 0x26787cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x267880: 0xae400068
    ctx->pc = 0x267880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x267884: 0xae400070
    ctx->pc = 0x267884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x267888: 0xae400074
    ctx->pc = 0x267888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x26788c: 0xae400078
    ctx->pc = 0x26788cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x267890: 0xae400080
    ctx->pc = 0x267890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
    // 0x267894: 0xae400084
    ctx->pc = 0x267894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x267898: 0xae400088
    ctx->pc = 0x267898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x26789c: 0xae400090
    ctx->pc = 0x26789cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x2678a0: 0xae400094
    ctx->pc = 0x2678a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x2678a4: 0xae400098
    ctx->pc = 0x2678a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x2678a8: 0xae4000a0
    ctx->pc = 0x2678a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x2678ac: 0xae4000a4
    ctx->pc = 0x2678acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x2678b0: 0xae4000a8
    ctx->pc = 0x2678b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
    // 0x2678b4: 0xae4000b0
    ctx->pc = 0x2678b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x2678b8: 0xae4000b4
    ctx->pc = 0x2678b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x2678bc: 0xae4000b8
    ctx->pc = 0x2678bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x2678c0: 0xae4000c0
    ctx->pc = 0x2678c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x2678c4: 0xae4000c4
    ctx->pc = 0x2678c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x2678c8: 0xae4000c8
    ctx->pc = 0x2678c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x2678cc: 0xae400130
    ctx->pc = 0x2678ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
    // 0x2678d0: 0xae400134
    ctx->pc = 0x2678d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
    // 0x2678d4: 0xae400138
    ctx->pc = 0x2678d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 0));
    // 0x2678d8: 0xae400140
    ctx->pc = 0x2678d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
    // 0x2678dc: 0xae400144
    ctx->pc = 0x2678dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 0));
    // 0x2678e0: 0xae400148
    ctx->pc = 0x2678e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 0));
    // 0x2678e4: 0xae400150
    ctx->pc = 0x2678e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
    // 0x2678e8: 0xae400154
    ctx->pc = 0x2678e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 0));
    // 0x2678ec: 0xae400158
    ctx->pc = 0x2678ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
    // 0x2678f0: 0xae400160
    ctx->pc = 0x2678f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
    // 0x2678f4: 0xae400164
    ctx->pc = 0x2678f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 0));
    // 0x2678f8: 0xae400168
    ctx->pc = 0x2678f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 0));
    // 0x2678fc: 0xae400170
    ctx->pc = 0x2678fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 0));
    // 0x267900: 0xae400174
    ctx->pc = 0x267900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 0));
    // 0x267904: 0xae400178
    ctx->pc = 0x267904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
    // 0x267908: 0xae400180
    ctx->pc = 0x267908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 0));
    // 0x26790c: 0xae400184
    ctx->pc = 0x26790cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 0));
    // 0x267910: 0xae400188
    ctx->pc = 0x267910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x267914: 0xae400190
    ctx->pc = 0x267914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 0));
    // 0x267918: 0xae400194
    ctx->pc = 0x267918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
    // 0x26791c: 0xae400198
    ctx->pc = 0x26791cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
    // 0x267920: 0xae4000e4
    ctx->pc = 0x267920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x267924: 0x3c014248
    ctx->pc = 0x267924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x267928: 0x44810000
    ctx->pc = 0x267928u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26792c: 0xe64000d0
    ctx->pc = 0x26792cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x267930: 0x2402ffff
    ctx->pc = 0x267930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267934: 0xae4200d4
    ctx->pc = 0x267934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x267938: 0xae4000e0
    ctx->pc = 0x267938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x26793c: 0xae4000dc
    ctx->pc = 0x26793cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x267940: 0xae4000d8
    ctx->pc = 0x267940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x267944: 0xe65400f4
    ctx->pc = 0x267944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x267948: 0xe65400f0
    ctx->pc = 0x267948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x26794c: 0xe65400ec
    ctx->pc = 0x26794cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x267950: 0xe65400e8
    ctx->pc = 0x267950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x267954: 0xae5100fc
    ctx->pc = 0x267954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 17));
    // 0x267958: 0xae5100f8
    ctx->pc = 0x267958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 17));
    // 0x26795c: 0xae400100
    ctx->pc = 0x26795cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
    // 0x267960: 0xae510108
    ctx->pc = 0x267960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 17));
    // 0x267964: 0xae510104
    ctx->pc = 0x267964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 17));
    // 0x267968: 0xae400124
    ctx->pc = 0x267968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
    // 0x26796c: 0xae400120
    ctx->pc = 0x26796cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
    // 0x267970: 0xae40011c
    ctx->pc = 0x267970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
    // 0x267974: 0xae400118
    ctx->pc = 0x267974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x267978: 0xae400114
    ctx->pc = 0x267978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x26797c: 0xae400110
    ctx->pc = 0x26797cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x267980: 0xae40010c
    ctx->pc = 0x267980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x267984: 0x26100001
    ctx->pc = 0x267984u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x267988: 0x2a020006
    ctx->pc = 0x267988u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x26798c: 0x1440ffb2
    ctx->pc = 0x26798Cu;
    {
        const bool branch_taken_0x26798c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x267990u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 416));
        if (branch_taken_0x26798c) {
            ctx->pc = 0x267858u;
            goto label_267858;
        }
    }
    ctx->pc = 0x267994u;
    // 0x267994: 0x3c100034
    ctx->pc = 0x267994u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x267998: 0x12600010
    ctx->pc = 0x267998u;
    {
        const bool branch_taken_0x267998 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x26799Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 4294962016));
        if (branch_taken_0x267998) {
            ctx->pc = 0x2679DCu;
            goto label_2679dc;
        }
    }
    ctx->pc = 0x2679A0u;
    // 0x2679a0: 0x202d
    ctx->pc = 0x2679a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679a4: 0x24050002
    ctx->pc = 0x2679a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2679a8: 0xc099c34
    ctx->pc = 0x2679A8u;
    SET_GPR_U32(ctx, 31, 0x2679B0u);
    ctx->pc = 0x2679ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2679B0u; }
    }
    if (ctx->pc != 0x2679B0u) { return; }
    ctx->pc = 0x2679B0u;
    // 0x2679b0: 0xae400070
    ctx->pc = 0x2679b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x2679b4: 0xae400074
    ctx->pc = 0x2679b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x2679b8: 0xae400078
    ctx->pc = 0x2679b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x2679bc: 0xae400140
    ctx->pc = 0x2679bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
    // 0x2679c0: 0xae400144
    ctx->pc = 0x2679c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 0));
    // 0x2679c4: 0x3c01bf80
    ctx->pc = 0x2679c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2679c8: 0x44810000
    ctx->pc = 0x2679c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2679cc: 0xe6400148
    ctx->pc = 0x2679ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
    // 0x2679d0: 0x24020001
    ctx->pc = 0x2679d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2679d4: 0x1000021c
    ctx->pc = 0x2679D4u;
    {
        const bool branch_taken_0x2679d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2679D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294962016), GPR_U32(ctx, 2));
        if (branch_taken_0x2679d4) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x2679DCu;
label_2679dc:
    // 0x2679dc: 0x3c020031
    ctx->pc = 0x2679dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2679e0: 0x8c430018
    ctx->pc = 0x2679e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2679e4: 0x2402400b
    ctx->pc = 0x2679e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
    // 0x2679e8: 0x14620012
    ctx->pc = 0x2679E8u;
    {
        const bool branch_taken_0x2679e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2679ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2679e8) {
            ctx->pc = 0x267A34u;
            goto label_267a34;
        }
    }
    ctx->pc = 0x2679F0u;
    // 0x2679f0: 0x202d
    ctx->pc = 0x2679f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679f4: 0x24050002
    ctx->pc = 0x2679f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2679f8: 0xc099c34
    ctx->pc = 0x2679F8u;
    SET_GPR_U32(ctx, 31, 0x267A00u);
    ctx->pc = 0x2679FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A00u; }
    }
    if (ctx->pc != 0x267A00u) { return; }
    ctx->pc = 0x267A00u;
    // 0x267a00: 0xae400070
    ctx->pc = 0x267a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x267a04: 0x3c0140c0
    ctx->pc = 0x267a04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x267a08: 0x44810000
    ctx->pc = 0x267a08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267a0c: 0xe6400074
    ctx->pc = 0x267a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x267a10: 0x3c0141a0
    ctx->pc = 0x267a10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x267a14: 0x44810000
    ctx->pc = 0x267a14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267a18: 0xe6400078
    ctx->pc = 0x267a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x267a1c: 0xae400140
    ctx->pc = 0x267a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
    // 0x267a20: 0x3c014000
    ctx->pc = 0x267a20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x267a24: 0x44810000
    ctx->pc = 0x267a24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267a28: 0xe6400144
    ctx->pc = 0x267a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x267a2c: 0x1000009f
    ctx->pc = 0x267A2Cu;
    {
        const bool branch_taken_0x267a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267A30u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 0));
        if (branch_taken_0x267a2c) {
            ctx->pc = 0x267CACu;
            goto label_267cac;
        }
    }
    ctx->pc = 0x267A34u;
label_267a34:
    // 0x267a34: 0x8c430018
    ctx->pc = 0x267a34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x267a38: 0x2402400d
    ctx->pc = 0x267a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
    // 0x267a3c: 0x10620005
    ctx->pc = 0x267A3Cu;
    {
        const bool branch_taken_0x267a3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x267A40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        if (branch_taken_0x267a3c) {
            ctx->pc = 0x267A54u;
            goto label_267a54;
        }
    }
    ctx->pc = 0x267A44u;
    // 0x267a44: 0x10620003
    ctx->pc = 0x267A44u;
    {
        const bool branch_taken_0x267a44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x267A48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x267a44) {
            ctx->pc = 0x267A54u;
            goto label_267a54;
        }
    }
    ctx->pc = 0x267A4Cu;
    // 0x267a4c: 0x14620025
    ctx->pc = 0x267A4Cu;
    {
        const bool branch_taken_0x267a4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x267A50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x267a4c) {
            ctx->pc = 0x267AE4u;
            goto label_267ae4;
        }
    }
    ctx->pc = 0x267A54u;
label_267a54:
    // 0x267a54: 0x202d
    ctx->pc = 0x267a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a58: 0x24050002
    ctx->pc = 0x267a58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x267a5c: 0xc099c34
    ctx->pc = 0x267A5Cu;
    SET_GPR_U32(ctx, 31, 0x267A64u);
    ctx->pc = 0x267A60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A64u; }
    }
    if (ctx->pc != 0x267A64u) { return; }
    ctx->pc = 0x267A64u;
    // 0x267a64: 0x3c014049
    ctx->pc = 0x267a64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x267a68: 0x34210fdb
    ctx->pc = 0x267a68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x267a6c: 0x44810000
    ctx->pc = 0x267a6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267a70: 0xe64000ec
    ctx->pc = 0x267a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x267a74: 0xe64000b4
    ctx->pc = 0x267a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
    // 0x267a78: 0xae4000f0
    ctx->pc = 0x267a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x267a7c: 0x3c02003c
    ctx->pc = 0x267a7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267a80: 0x24433988
    ctx->pc = 0x267a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14728));
    // 0x267a84: 0x3c01c1b4
    ctx->pc = 0x267a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49588 << 16));
    // 0x267a88: 0x3421cccd
    ctx->pc = 0x267a88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x267a8c: 0x44810800
    ctx->pc = 0x267a8cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267a90: 0xe4413988
    ctx->pc = 0x267a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14728), bits); }
    // 0x267a94: 0x3c014103
    ctx->pc = 0x267a94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16643 << 16));
    // 0x267a98: 0x34213333
    ctx->pc = 0x267a98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x267a9c: 0x44810000
    ctx->pc = 0x267a9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267aa0: 0xe4600004
    ctx->pc = 0x267aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x267aa4: 0xe4610008
    ctx->pc = 0x267aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x267aa8: 0x3c02003c
    ctx->pc = 0x267aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267aac: 0x24433998
    ctx->pc = 0x267aacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14744));
    // 0x267ab0: 0x3c014203
    ctx->pc = 0x267ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16899 << 16));
    // 0x267ab4: 0x34213333
    ctx->pc = 0x267ab4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x267ab8: 0x44810800
    ctx->pc = 0x267ab8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267abc: 0xe4413998
    ctx->pc = 0x267abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14744), bits); }
    // 0x267ac0: 0x3c013f8c
    ctx->pc = 0x267ac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16268 << 16));
    // 0x267ac4: 0x3421cccd
    ctx->pc = 0x267ac4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x267ac8: 0x44810000
    ctx->pc = 0x267ac8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267acc: 0xe4600004
    ctx->pc = 0x267accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x267ad0: 0xc09b95a
    ctx->pc = 0x267AD0u;
    SET_GPR_U32(ctx, 31, 0x267AD8u);
    ctx->pc = 0x267AD4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x26E568u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_wsel_pos_0x26e568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267AD8u; }
    }
    if (ctx->pc != 0x267AD8u) { return; }
    ctx->pc = 0x267AD8u;
    // 0x267ad8: 0xae4000dc
    ctx->pc = 0x267ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x267adc: 0x10000073
    ctx->pc = 0x267ADCu;
    {
        const bool branch_taken_0x267adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267AE0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        if (branch_taken_0x267adc) {
            ctx->pc = 0x267CACu;
            goto label_267cac;
        }
    }
    ctx->pc = 0x267AE4u;
label_267ae4:
    // 0x267ae4: 0x8c430018
    ctx->pc = 0x267ae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x267ae8: 0x34028007
    ctx->pc = 0x267ae8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32775));
    // 0x267aec: 0x1462001d
    ctx->pc = 0x267AECu;
    {
        const bool branch_taken_0x267aec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x267AF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x267aec) {
            ctx->pc = 0x267B64u;
            goto label_267b64;
        }
    }
    ctx->pc = 0x267AF4u;
    // 0x267af4: 0x202d
    ctx->pc = 0x267af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267af8: 0x24050002
    ctx->pc = 0x267af8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x267afc: 0xc099c34
    ctx->pc = 0x267AFCu;
    SET_GPR_U32(ctx, 31, 0x267B04u);
    ctx->pc = 0x267B00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B04u; }
    }
    if (ctx->pc != 0x267B04u) { return; }
    ctx->pc = 0x267B04u;
    // 0x267b04: 0x3c01c1e5
    ctx->pc = 0x267b04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49637 << 16));
    // 0x267b08: 0x3421eb85
    ctx->pc = 0x267b08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 60293));
    // 0x267b0c: 0x44810000
    ctx->pc = 0x267b0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267b10: 0xe6400070
    ctx->pc = 0x267b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x267b14: 0x3c014254
    ctx->pc = 0x267b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16980 << 16));
    // 0x267b18: 0x34210a3d
    ctx->pc = 0x267b18u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2621));
    // 0x267b1c: 0x44810000
    ctx->pc = 0x267b1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267b20: 0xe6400074
    ctx->pc = 0x267b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x267b24: 0x3c01429e
    ctx->pc = 0x267b24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17054 << 16));
    // 0x267b28: 0x44810000
    ctx->pc = 0x267b28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267b2c: 0xe6400078
    ctx->pc = 0x267b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x267b30: 0x3c01c1d7
    ctx->pc = 0x267b30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49623 << 16));
    // 0x267b34: 0x3421ae14
    ctx->pc = 0x267b34u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 44564));
    // 0x267b38: 0x44810000
    ctx->pc = 0x267b38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267b3c: 0xe6400140
    ctx->pc = 0x267b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x267b40: 0x3c014242
    ctx->pc = 0x267b40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16962 << 16));
    // 0x267b44: 0x34213d71
    ctx->pc = 0x267b44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15729));
    // 0x267b48: 0x44810000
    ctx->pc = 0x267b48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267b4c: 0xe6400144
    ctx->pc = 0x267b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x267b50: 0x3c014281
    ctx->pc = 0x267b50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17025 << 16));
    // 0x267b54: 0x34214ccd
    ctx->pc = 0x267b54u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 19661));
    // 0x267b58: 0x44810000
    ctx->pc = 0x267b58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267b5c: 0x10000053
    ctx->pc = 0x267B5Cu;
    {
        const bool branch_taken_0x267b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267B60u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
        if (branch_taken_0x267b5c) {
            ctx->pc = 0x267CACu;
            goto label_267cac;
        }
    }
    ctx->pc = 0x267B64u;
label_267b64:
    // 0x267b64: 0x8c430018
    ctx->pc = 0x267b64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x267b68: 0x34028008
    ctx->pc = 0x267b68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x267b6c: 0x14620184
    ctx->pc = 0x267B6Cu;
    {
        const bool branch_taken_0x267b6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x267B70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x267b6c) {
            ctx->pc = 0x268180u;
            goto label_268180;
        }
    }
    ctx->pc = 0x267B74u;
    // 0x267b74: 0x3c020035
    ctx->pc = 0x267b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x267b78: 0x8c42a2e8
    ctx->pc = 0x267b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943464)));
    // 0x267b7c: 0x1040004e
    ctx->pc = 0x267B7Cu;
    {
        const bool branch_taken_0x267b7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x267B80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x267b7c) {
            ctx->pc = 0x267CB8u;
            goto label_267cb8;
        }
    }
    ctx->pc = 0x267B84u;
    // 0x267b84: 0x24050002
    ctx->pc = 0x267b84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x267b88: 0xc099c34
    ctx->pc = 0x267B88u;
    SET_GPR_U32(ctx, 31, 0x267B90u);
    ctx->pc = 0x267B8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B90u; }
    }
    if (ctx->pc != 0x267B90u) { return; }
    ctx->pc = 0x267B90u;
    // 0x267b90: 0x3c020033
    ctx->pc = 0x267b90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x267b94: 0x2443c7c8
    ctx->pc = 0x267b94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x267b98: 0xc440c7c8
    ctx->pc = 0x267b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267b9c: 0xe6400070
    ctx->pc = 0x267b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x267ba0: 0xc4600004
    ctx->pc = 0x267ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267ba4: 0xe6400074
    ctx->pc = 0x267ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x267ba8: 0xc4600008
    ctx->pc = 0x267ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267bac: 0xe6400078
    ctx->pc = 0x267bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x267bb0: 0x26510070
    ctx->pc = 0x267bb0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 112));
    // 0x267bb4: 0x3c020034
    ctx->pc = 0x267bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267bb8: 0x220202d
    ctx->pc = 0x267bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bbc: 0xc44ce88c
    ctx->pc = 0x267bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267bc0: 0x3c013dcc
    ctx->pc = 0x267bc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x267bc4: 0x3421cccd
    ctx->pc = 0x267bc4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x267bc8: 0x44816800
    ctx->pc = 0x267bc8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x267bcc: 0xc087b5c
    ctx->pc = 0x267BCCu;
    SET_GPR_U32(ctx, 31, 0x267BD4u);
    ctx->pc = 0x267BD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267BD4u; }
    }
    if (ctx->pc != 0x267BD4u) { return; }
    ctx->pc = 0x267BD4u;
    // 0x267bd4: 0x3c014090
    ctx->pc = 0x267bd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16528 << 16));
    // 0x267bd8: 0x44810800
    ctx->pc = 0x267bd8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267bdc: 0x46010000
    ctx->pc = 0x267bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267be0: 0xe6400074
    ctx->pc = 0x267be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x267be4: 0xc08de78
    ctx->pc = 0x267BE4u;
    SET_GPR_U32(ctx, 31, 0x267BECu);
    ctx->pc = 0x267BE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2379E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_closest_milestone_0x2379e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267BECu; }
    }
    if (ctx->pc != 0x267BECu) { return; }
    ctx->pc = 0x267BECu;
    // 0x267bec: 0xae4200dc
    ctx->pc = 0x267becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
    // 0x267bf0: 0xae4000b0
    ctx->pc = 0x267bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x267bf4: 0x24030070
    ctx->pc = 0x267bf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 112));
    // 0x267bf8: 0x431018
    ctx->pc = 0x267bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x267bfc: 0x3c040034
    ctx->pc = 0x267bfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x267c00: 0x24848bb0
    ctx->pc = 0x267c00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937520));
    // 0x267c04: 0x442021
    ctx->pc = 0x267c04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x267c08: 0xc09a2aa
    ctx->pc = 0x267C08u;
    SET_GPR_U32(ctx, 31, 0x267C10u);
    ctx->pc = 0x267C0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C10u; }
    }
    if (ctx->pc != 0x267C10u) { return; }
    ctx->pc = 0x267C10u;
    // 0x267c10: 0xe64000ec
    ctx->pc = 0x267c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x267c14: 0xe64000b4
    ctx->pc = 0x267c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
    // 0x267c18: 0xae4000b8
    ctx->pc = 0x267c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x267c1c: 0x3c014170
    ctx->pc = 0x267c1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x267c20: 0x44810000
    ctx->pc = 0x267c20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267c24: 0xe64000d0
    ctx->pc = 0x267c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x267c28: 0x3a0202d
    ctx->pc = 0x267c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c2c: 0xc0b5ae8
    ctx->pc = 0x267C2Cu;
    SET_GPR_U32(ctx, 31, 0x267C34u);
    ctx->pc = 0x267C30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C34u; }
    }
    if (ctx->pc != 0x267C34u) { return; }
    ctx->pc = 0x267C34u;
    // 0x267c34: 0xafa00040
    ctx->pc = 0x267c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x267c38: 0xafa00044
    ctx->pc = 0x267c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x267c3c: 0xc64000d0
    ctx->pc = 0x267c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c40: 0xe7a00048
    ctx->pc = 0x267c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x267c44: 0x27a40040
    ctx->pc = 0x267c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x267c48: 0x27a50050
    ctx->pc = 0x267c48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x267c4c: 0xc0b57a2
    ctx->pc = 0x267C4Cu;
    SET_GPR_U32(ctx, 31, 0x267C54u);
    ctx->pc = 0x267C50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C54u; }
    }
    if (ctx->pc != 0x267C54u) { return; }
    ctx->pc = 0x267C54u;
    // 0x267c54: 0xc6400070
    ctx->pc = 0x267c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c58: 0xc7a10050
    ctx->pc = 0x267c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267c5c: 0x46010000
    ctx->pc = 0x267c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267c60: 0xe6400140
    ctx->pc = 0x267c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x267c64: 0xc6400074
    ctx->pc = 0x267c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c68: 0xc7a10054
    ctx->pc = 0x267c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267c6c: 0x46010000
    ctx->pc = 0x267c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267c70: 0xe6400144
    ctx->pc = 0x267c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x267c74: 0xc6400078
    ctx->pc = 0x267c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c78: 0xc7a10058
    ctx->pc = 0x267c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267c7c: 0x46010000
    ctx->pc = 0x267c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267c80: 0xe6400148
    ctx->pc = 0x267c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
    // 0x267c84: 0x26500140
    ctx->pc = 0x267c84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 320));
    // 0x267c88: 0x220202d
    ctx->pc = 0x267c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c8c: 0x200282d
    ctx->pc = 0x267c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c90: 0xc099c08
    ctx->pc = 0x267C90u;
    SET_GPR_U32(ctx, 31, 0x267C98u);
    ctx->pc = 0x267C94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C98u; }
    }
    if (ctx->pc != 0x267C98u) { return; }
    ctx->pc = 0x267C98u;
    // 0x267c98: 0x202d
    ctx->pc = 0x267c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c9c: 0xc09a760
    ctx->pc = 0x267C9Cu;
    SET_GPR_U32(ctx, 31, 0x267CA4u);
    ctx->pc = 0x267CA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267CA4u; }
    }
    if (ctx->pc != 0x267CA4u) { return; }
    ctx->pc = 0x267CA4u;
    // 0x267ca4: 0x2402ffff
    ctx->pc = 0x267ca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267ca8: 0xae4200d4
    ctx->pc = 0x267ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_267cac:
    // 0x267cac: 0x24020001
    ctx->pc = 0x267cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x267cb0: 0x10000165
    ctx->pc = 0x267CB0u;
    {
        const bool branch_taken_0x267cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x267cb0) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x267CB8u;
label_267cb8:
    // 0x267cb8: 0x3c020034
    ctx->pc = 0x267cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267cbc: 0x8c42e7c8
    ctx->pc = 0x267cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x267cc0: 0x8c520060
    ctx->pc = 0x267cc0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x267cc4: 0x3c030033
    ctx->pc = 0x267cc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x267cc8: 0x86420034
    ctx->pc = 0x267cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x267ccc: 0xac623c00
    ctx->pc = 0x267cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15360), GPR_U32(ctx, 2));
    // 0x267cd0: 0x3c03003c
    ctx->pc = 0x267cd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x267cd4: 0x86420026
    ctx->pc = 0x267cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x267cd8: 0x4410008
    ctx->pc = 0x267CD8u;
    {
        const bool branch_taken_0x267cd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267CDCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14628), GPR_U32(ctx, 2));
        if (branch_taken_0x267cd8) {
            ctx->pc = 0x267CFCu;
            goto label_267cfc;
        }
    }
    ctx->pc = 0x267CE0u;
    // 0x267ce0: 0x3c020034
    ctx->pc = 0x267ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267ce4: 0x8c428b78
    ctx->pc = 0x267ce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937464)));
    // 0x267ce8: 0x14400005
    ctx->pc = 0x267CE8u;
    {
        const bool branch_taken_0x267ce8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x267CECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x267ce8) {
            ctx->pc = 0x267D00u;
            goto label_267d00;
        }
    }
    ctx->pc = 0x267CF0u;
    // 0x267cf0: 0xac603924
    ctx->pc = 0x267cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14628), GPR_U32(ctx, 0));
    // 0x267cf4: 0x94623924
    ctx->pc = 0x267cf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14628)));
    // 0x267cf8: 0xa6420026
    ctx->pc = 0x267cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 2));
label_267cfc:
    // 0x267cfc: 0x3c02003c
    ctx->pc = 0x267cfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_267d00:
    // 0x267d00: 0x8c433924
    ctx->pc = 0x267d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14628)));
    // 0x267d04: 0x10600007
    ctx->pc = 0x267D04u;
    {
        const bool branch_taken_0x267d04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x267D08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x267d04) {
            ctx->pc = 0x267D24u;
            goto label_267d24;
        }
    }
    ctx->pc = 0x267D0Cu;
    // 0x267d0c: 0x186000b8
    ctx->pc = 0x267D0Cu;
    {
        const bool branch_taken_0x267d0c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x267D10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x267d0c) {
            ctx->pc = 0x267FF0u;
            goto label_267ff0;
        }
    }
    ctx->pc = 0x267D14u;
    // 0x267d14: 0x1062007d
    ctx->pc = 0x267D14u;
    {
        const bool branch_taken_0x267d14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x267D18u;
        SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
        if (branch_taken_0x267d14) {
            ctx->pc = 0x267F0Cu;
            goto label_267f0c;
        }
    }
    ctx->pc = 0x267D1Cu;
    // 0x267d1c: 0x100000b6
    ctx->pc = 0x267D1Cu;
    {
        const bool branch_taken_0x267d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267D20u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4294962016));
        if (branch_taken_0x267d1c) {
            ctx->pc = 0x267FF8u;
            goto label_267ff8;
        }
    }
    ctx->pc = 0x267D24u;
label_267d24:
    // 0x267d24: 0x24050005
    ctx->pc = 0x267d24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x267d28: 0xc099c34
    ctx->pc = 0x267D28u;
    SET_GPR_U32(ctx, 31, 0x267D30u);
    ctx->pc = 0x267D2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D30u; }
    }
    if (ctx->pc != 0x267D30u) { return; }
    ctx->pc = 0x267D30u;
    // 0x267d30: 0x3c030034
    ctx->pc = 0x267d30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x267d34: 0x2463eb60
    ctx->pc = 0x267d34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x267d38: 0x3c020032
    ctx->pc = 0x267d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x267d3c: 0x2442f9f8
    ctx->pc = 0x267d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x267d40: 0xc440003c
    ctx->pc = 0x267d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267d44: 0xe4600140
    ctx->pc = 0x267d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x267d48: 0xc4400044
    ctx->pc = 0x267d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267d4c: 0xe4600148
    ctx->pc = 0x267d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 328), bits); }
    // 0x267d50: 0xc4400028
    ctx->pc = 0x267d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267d54: 0xe4600144
    ctx->pc = 0x267d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x267d58: 0x3c140034
    ctx->pc = 0x267d58u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x267d5c: 0x3c110034
    ctx->pc = 0x267d5cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x267d60: 0x3c020032
    ctx->pc = 0x267d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x267d64: 0x2453f9f8
    ctx->pc = 0x267d64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x267d68: 0x3c020034
    ctx->pc = 0x267d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267d6c: 0x3c014120
    ctx->pc = 0x267d6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x267d70: 0x4481a000
    ctx->pc = 0x267d70u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x267d74: 0x10000004
    ctx->pc = 0x267D74u;
    {
        const bool branch_taken_0x267d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267D78u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294962016));
        if (branch_taken_0x267d74) {
            ctx->pc = 0x267D88u;
            goto label_267d88;
        }
    }
    ctx->pc = 0x267D7Cu;
    // 0x267d7c: 0x0
    ctx->pc = 0x267d7cu;
    // NOP
label_267d80:
    // 0x267d80: 0x46140001
    ctx->pc = 0x267d80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x267d84: 0xe6000144
    ctx->pc = 0x267d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
label_267d88:
    // 0x267d88: 0x2684eca0
    ctx->pc = 0x267d88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294962336));
    // 0x267d8c: 0xc62ce88c
    ctx->pc = 0x267d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267d90: 0x3c013dcc
    ctx->pc = 0x267d90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x267d94: 0x3421cccd
    ctx->pc = 0x267d94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x267d98: 0x44816800
    ctx->pc = 0x267d98u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x267d9c: 0xc087b5c
    ctx->pc = 0x267D9Cu;
    SET_GPR_U32(ctx, 31, 0x267DA4u);
    ctx->pc = 0x267DA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DA4u; }
    }
    if (ctx->pc != 0x267DA4u) { return; }
    ctx->pc = 0x267DA4u;
    // 0x267da4: 0x46000046
    ctx->pc = 0x267da4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x267da8: 0xc620e88c
    ctx->pc = 0x267da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267dac: 0x46000832
    ctx->pc = 0x267dacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267db0: 0x0
    ctx->pc = 0x267db0u;
    // NOP
    // 0x267db4: 0x45000006
    ctx->pc = 0x267DB4u;
    {
        const bool branch_taken_0x267db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267DB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x267db4) {
            ctx->pc = 0x267DD0u;
            goto label_267dd0;
        }
    }
    ctx->pc = 0x267DBCu;
    // 0x267dbc: 0xc660001c
    ctx->pc = 0x267dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267dc0: 0x46000836
    ctx->pc = 0x267dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267dc4: 0x0
    ctx->pc = 0x267dc4u;
    // NOP
    // 0x267dc8: 0x4502ffed
    ctx->pc = 0x267DC8u;
    {
        const bool branch_taken_0x267dc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x267dc8) {
            ctx->pc = 0x267DCCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x267D80u;
            goto label_267d80;
        }
    }
    ctx->pc = 0x267DD0u;
label_267dd0:
    // 0x267dd0: 0xc440e88c
    ctx->pc = 0x267dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267dd4: 0x46000832
    ctx->pc = 0x267dd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267dd8: 0x0
    ctx->pc = 0x267dd8u;
    // NOP
    // 0x267ddc: 0x45010005
    ctx->pc = 0x267DDCu;
    {
        const bool branch_taken_0x267ddc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x267DE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x267ddc) {
            ctx->pc = 0x267DF4u;
            goto label_267df4;
        }
    }
    ctx->pc = 0x267DE4u;
    // 0x267de4: 0x3c0140a0
    ctx->pc = 0x267de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x267de8: 0x44810000
    ctx->pc = 0x267de8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267dec: 0x10000003
    ctx->pc = 0x267DECu;
    {
        const bool branch_taken_0x267dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267DF0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x267dec) {
            ctx->pc = 0x267DFCu;
            goto label_267dfc;
        }
    }
    ctx->pc = 0x267DF4u;
label_267df4:
    // 0x267df4: 0x3c030032
    ctx->pc = 0x267df4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x267df8: 0xc460fa38
    ctx->pc = 0x267df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_267dfc:
    // 0x267dfc: 0xe440eca4
    ctx->pc = 0x267dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962340), bits); }
    // 0x267e00: 0x3c020034
    ctx->pc = 0x267e00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267e04: 0x2443eb60
    ctx->pc = 0x267e04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x267e08: 0x3c020033
    ctx->pc = 0x267e08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x267e0c: 0xc4600144
    ctx->pc = 0x267e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e10: 0xc441c7cc
    ctx->pc = 0x267e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e14: 0x46010034
    ctx->pc = 0x267e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267e18: 0x0
    ctx->pc = 0x267e18u;
    // NOP
    // 0x267e1c: 0x45030001
    ctx->pc = 0x267E1Cu;
    {
        const bool branch_taken_0x267e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267e1c) {
            ctx->pc = 0x267E20u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
            ctx->pc = 0x267E24u;
            goto label_267e24;
        }
    }
    ctx->pc = 0x267E24u;
label_267e24:
    // 0x267e24: 0x3c110034
    ctx->pc = 0x267e24u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x267e28: 0x2630eb60
    ctx->pc = 0x267e28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294962016));
    // 0x267e2c: 0xc6400028
    ctx->pc = 0x267e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e30: 0xe60000d0
    ctx->pc = 0x267e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x267e34: 0x3c013f2a
    ctx->pc = 0x267e34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x267e38: 0x3421aab0
    ctx->pc = 0x267e38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43696));
    // 0x267e3c: 0x44810800
    ctx->pc = 0x267e3cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267e40: 0x46010002
    ctx->pc = 0x267e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x267e44: 0xe60000ec
    ctx->pc = 0x267e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x267e48: 0x3c020032
    ctx->pc = 0x267e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x267e4c: 0xc440fa38
    ctx->pc = 0x267e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e50: 0x3c014120
    ctx->pc = 0x267e50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x267e54: 0x44810800
    ctx->pc = 0x267e54u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267e58: 0x46010000
    ctx->pc = 0x267e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267e5c: 0xe60000f0
    ctx->pc = 0x267e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x267e60: 0x3c013f80
    ctx->pc = 0x267e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x267e64: 0x44810800
    ctx->pc = 0x267e64u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267e68: 0x46010000
    ctx->pc = 0x267e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267e6c: 0xe60000f4
    ctx->pc = 0x267e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x267e70: 0x3c013f68
    ctx->pc = 0x267e70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16232 << 16));
    // 0x267e74: 0x34215697
    ctx->pc = 0x267e74u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 22167));
    // 0x267e78: 0x44810000
    ctx->pc = 0x267e78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267e7c: 0xe60000b0
    ctx->pc = 0x267e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x267e80: 0xae0000b4
    ctx->pc = 0x267e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x267e84: 0xae0000b8
    ctx->pc = 0x267e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x267e88: 0x3a0202d
    ctx->pc = 0x267e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e8c: 0xc0b5ae8
    ctx->pc = 0x267E8Cu;
    SET_GPR_U32(ctx, 31, 0x267E94u);
    ctx->pc = 0x267E90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E94u; }
    }
    if (ctx->pc != 0x267E94u) { return; }
    ctx->pc = 0x267E94u;
    // 0x267e94: 0xafa00040
    ctx->pc = 0x267e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x267e98: 0xafa00044
    ctx->pc = 0x267e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x267e9c: 0xc60000d0
    ctx->pc = 0x267e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267ea0: 0xe7a00048
    ctx->pc = 0x267ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x267ea4: 0x27a40040
    ctx->pc = 0x267ea4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x267ea8: 0x27a50050
    ctx->pc = 0x267ea8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x267eac: 0xc0b57a2
    ctx->pc = 0x267EACu;
    SET_GPR_U32(ctx, 31, 0x267EB4u);
    ctx->pc = 0x267EB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EB4u; }
    }
    if (ctx->pc != 0x267EB4u) { return; }
    ctx->pc = 0x267EB4u;
    // 0x267eb4: 0xc6000140
    ctx->pc = 0x267eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267eb8: 0xc7a10050
    ctx->pc = 0x267eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267ebc: 0x46010000
    ctx->pc = 0x267ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267ec0: 0xe6000070
    ctx->pc = 0x267ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x267ec4: 0xc6000144
    ctx->pc = 0x267ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267ec8: 0xc7a10054
    ctx->pc = 0x267ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267ecc: 0x46010000
    ctx->pc = 0x267eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267ed0: 0xe6000074
    ctx->pc = 0x267ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x267ed4: 0xc6000148
    ctx->pc = 0x267ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267ed8: 0xc7a10058
    ctx->pc = 0x267ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267edc: 0x46010000
    ctx->pc = 0x267edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267ee0: 0xe6000078
    ctx->pc = 0x267ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x267ee4: 0x26040140
    ctx->pc = 0x267ee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 320));
    // 0x267ee8: 0x26050070
    ctx->pc = 0x267ee8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x267eec: 0xc099c08
    ctx->pc = 0x267EECu;
    SET_GPR_U32(ctx, 31, 0x267EF4u);
    ctx->pc = 0x267EF0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EF4u; }
    }
    if (ctx->pc != 0x267EF4u) { return; }
    ctx->pc = 0x267EF4u;
    // 0x267ef4: 0x24020001
    ctx->pc = 0x267ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x267ef8: 0xae22eb60
    ctx->pc = 0x267ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962016), GPR_U32(ctx, 2));
    // 0x267efc: 0x3c03003c
    ctx->pc = 0x267efcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x267f00: 0x24020708
    ctx->pc = 0x267f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1800));
    // 0x267f04: 0x100000d0
    ctx->pc = 0x267F04u;
    {
        const bool branch_taken_0x267f04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267F08u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14632), GPR_U32(ctx, 2));
        if (branch_taken_0x267f04) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x267F0Cu;
label_267f0c:
    // 0x267f0c: 0x24050002
    ctx->pc = 0x267f0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x267f10: 0xc099c34
    ctx->pc = 0x267F10u;
    SET_GPR_U32(ctx, 31, 0x267F18u);
    ctx->pc = 0x267F14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F18u; }
    }
    if (ctx->pc != 0x267F18u) { return; }
    ctx->pc = 0x267F18u;
    // 0x267f18: 0x3c110034
    ctx->pc = 0x267f18u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x267f1c: 0x2630eb60
    ctx->pc = 0x267f1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294962016));
    // 0x267f20: 0x3c020032
    ctx->pc = 0x267f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x267f24: 0x2442f9f8
    ctx->pc = 0x267f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x267f28: 0xc440003c
    ctx->pc = 0x267f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267f2c: 0xe6000070
    ctx->pc = 0x267f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x267f30: 0xc4400044
    ctx->pc = 0x267f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267f34: 0xe6000078
    ctx->pc = 0x267f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x267f38: 0x3c020033
    ctx->pc = 0x267f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x267f3c: 0xc440c7cc
    ctx->pc = 0x267f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267f40: 0x3c0141c8
    ctx->pc = 0x267f40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16840 << 16));
    // 0x267f44: 0x44810800
    ctx->pc = 0x267f44u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267f48: 0x46010000
    ctx->pc = 0x267f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267f4c: 0xe6000074
    ctx->pc = 0x267f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x267f50: 0x3c0142c8
    ctx->pc = 0x267f50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x267f54: 0x44810000
    ctx->pc = 0x267f54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x267f58: 0xe60000d0
    ctx->pc = 0x267f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x267f5c: 0xc6400028
    ctx->pc = 0x267f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267f60: 0xe60000b0
    ctx->pc = 0x267f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x267f64: 0xae0000b4
    ctx->pc = 0x267f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x267f68: 0xae0000b8
    ctx->pc = 0x267f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x267f6c: 0x3a0202d
    ctx->pc = 0x267f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f70: 0xc0b5ae8
    ctx->pc = 0x267F70u;
    SET_GPR_U32(ctx, 31, 0x267F78u);
    ctx->pc = 0x267F74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F78u; }
    }
    if (ctx->pc != 0x267F78u) { return; }
    ctx->pc = 0x267F78u;
    // 0x267f78: 0xafa00040
    ctx->pc = 0x267f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x267f7c: 0xafa00044
    ctx->pc = 0x267f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x267f80: 0xc60000d0
    ctx->pc = 0x267f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267f84: 0xe7a00048
    ctx->pc = 0x267f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x267f88: 0x27a40040
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x267f8c: 0x27a50050
    ctx->pc = 0x267f8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x267f90: 0xc0b57a2
    ctx->pc = 0x267F90u;
    SET_GPR_U32(ctx, 31, 0x267F98u);
    ctx->pc = 0x267F94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F98u; }
    }
    if (ctx->pc != 0x267F98u) { return; }
    ctx->pc = 0x267F98u;
    // 0x267f98: 0xc6000070
    ctx->pc = 0x267f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267f9c: 0xc7a10050
    ctx->pc = 0x267f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fa0: 0x46010000
    ctx->pc = 0x267fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267fa4: 0xe6000140
    ctx->pc = 0x267fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x267fa8: 0xc6000074
    ctx->pc = 0x267fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267fac: 0xc7a10054
    ctx->pc = 0x267facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fb0: 0x46010000
    ctx->pc = 0x267fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267fb4: 0xe6000144
    ctx->pc = 0x267fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x267fb8: 0xc6000078
    ctx->pc = 0x267fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267fbc: 0xc7a10058
    ctx->pc = 0x267fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fc0: 0x46010000
    ctx->pc = 0x267fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267fc4: 0xe6000148
    ctx->pc = 0x267fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x267fc8: 0x26040070
    ctx->pc = 0x267fc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    // 0x267fcc: 0x26050140
    ctx->pc = 0x267fccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 320));
    // 0x267fd0: 0xc099c08
    ctx->pc = 0x267FD0u;
    SET_GPR_U32(ctx, 31, 0x267FD8u);
    ctx->pc = 0x267FD4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FD8u; }
    }
    if (ctx->pc != 0x267FD8u) { return; }
    ctx->pc = 0x267FD8u;
    // 0x267fd8: 0x24020001
    ctx->pc = 0x267fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x267fdc: 0xae22eb60
    ctx->pc = 0x267fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962016), GPR_U32(ctx, 2));
    // 0x267fe0: 0x3c03003c
    ctx->pc = 0x267fe0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x267fe4: 0x240205dc
    ctx->pc = 0x267fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1500));
    // 0x267fe8: 0x10000097
    ctx->pc = 0x267FE8u;
    {
        const bool branch_taken_0x267fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267FECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14632), GPR_U32(ctx, 2));
        if (branch_taken_0x267fe8) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x267FF0u;
label_267ff0:
    // 0x267ff0: 0x3c110034
    ctx->pc = 0x267ff0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x267ff4: 0x2632eb60
    ctx->pc = 0x267ff4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4294962016));
label_267ff8:
    // 0x267ff8: 0x3c030034
    ctx->pc = 0x267ff8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x267ffc: 0x8c628b78
    ctx->pc = 0x267ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937464)));
    // 0x268000: 0xc4400010
    ctx->pc = 0x268000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268004: 0xe6400070
    ctx->pc = 0x268004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x268008: 0x8c628b78
    ctx->pc = 0x268008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937464)));
    // 0x26800c: 0xc4400014
    ctx->pc = 0x26800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268010: 0xe6400074
    ctx->pc = 0x268010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x268014: 0x8c628b78
    ctx->pc = 0x268014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937464)));
    // 0x268018: 0xc4400018
    ctx->pc = 0x268018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26801c: 0xe6400078
    ctx->pc = 0x26801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x268020: 0x8c628b78
    ctx->pc = 0x268020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937464)));
    // 0x268024: 0xc4400020
    ctx->pc = 0x268024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268028: 0xe64000b0
    ctx->pc = 0x268028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x26802c: 0x8c628b78
    ctx->pc = 0x26802cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937464)));
    // 0x268030: 0xc4400024
    ctx->pc = 0x268030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268034: 0xe64000b4
    ctx->pc = 0x268034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
    // 0x268038: 0x8c628b78
    ctx->pc = 0x268038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937464)));
    // 0x26803c: 0xc4400028
    ctx->pc = 0x26803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268040: 0xe64000b8
    ctx->pc = 0x268040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
    // 0x268044: 0x27b00060
    ctx->pc = 0x268044u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 96));
    // 0x268048: 0x200202d
    ctx->pc = 0x268048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26804c: 0xc0b5ae8
    ctx->pc = 0x26804Cu;
    SET_GPR_U32(ctx, 31, 0x268054u);
    ctx->pc = 0x268050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268054u; }
    }
    if (ctx->pc != 0x268054u) { return; }
    ctx->pc = 0x268054u;
    // 0x268054: 0x3c0141a0
    ctx->pc = 0x268054u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x268058: 0x44810000
    ctx->pc = 0x268058u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26805c: 0xe64000d0
    ctx->pc = 0x26805cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x268060: 0xafa00040
    ctx->pc = 0x268060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x268064: 0xafa00044
    ctx->pc = 0x268064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x268068: 0xc64000d0
    ctx->pc = 0x268068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26806c: 0xe7a00048
    ctx->pc = 0x26806cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x268070: 0x27a40040
    ctx->pc = 0x268070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x268074: 0x27a50050
    ctx->pc = 0x268074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x268078: 0xc0b57a2
    ctx->pc = 0x268078u;
    SET_GPR_U32(ctx, 31, 0x268080u);
    ctx->pc = 0x26807Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268080u; }
    }
    if (ctx->pc != 0x268080u) { return; }
    ctx->pc = 0x268080u;
    // 0x268080: 0xc6400070
    ctx->pc = 0x268080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268084: 0xc7a10050
    ctx->pc = 0x268084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268088: 0x46010000
    ctx->pc = 0x268088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26808c: 0xe6400140
    ctx->pc = 0x26808cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x268090: 0xc6400074
    ctx->pc = 0x268090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268094: 0xc7a10054
    ctx->pc = 0x268094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268098: 0x46010000
    ctx->pc = 0x268098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26809c: 0xe6400144
    ctx->pc = 0x26809cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x2680a0: 0xc6400078
    ctx->pc = 0x2680a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2680a4: 0xc7a10058
    ctx->pc = 0x2680a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2680a8: 0x46010000
    ctx->pc = 0x2680a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2680ac: 0xe6400148
    ctx->pc = 0x2680acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
    // 0x2680b0: 0x202d
    ctx->pc = 0x2680b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680b4: 0x24050002
    ctx->pc = 0x2680b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2680b8: 0xc099c34
    ctx->pc = 0x2680B8u;
    SET_GPR_U32(ctx, 31, 0x2680C0u);
    ctx->pc = 0x2680BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2680C0u; }
    }
    if (ctx->pc != 0x2680C0u) { return; }
    ctx->pc = 0x2680C0u;
    // 0x2680c0: 0xae4000d4
    ctx->pc = 0x2680c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x2680c4: 0x202d
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680c8: 0xc09a760
    ctx->pc = 0x2680C8u;
    SET_GPR_U32(ctx, 31, 0x2680D0u);
    ctx->pc = 0x2680CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2680D0u; }
    }
    if (ctx->pc != 0x2680D0u) { return; }
    ctx->pc = 0x2680D0u;
    // 0x2680d0: 0x24020001
    ctx->pc = 0x2680d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2680d4: 0xae22eb60
    ctx->pc = 0x2680d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962016), GPR_U32(ctx, 2));
    // 0x2680d8: 0x3c03003c
    ctx->pc = 0x2680d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2680dc: 0x3c02003c
    ctx->pc = 0x2680dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2680e0: 0x44800000
    ctx->pc = 0x2680e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2680e4: 0xe4403930
    ctx->pc = 0x2680e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14640), bits); }
    // 0x2680e8: 0xe460392c
    ctx->pc = 0x2680e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14636), bits); }
    // 0x2680ec: 0x3c03003c
    ctx->pc = 0x2680ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2680f0: 0x3c02003c
    ctx->pc = 0x2680f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2680f4: 0xe4403944
    ctx->pc = 0x2680f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14660), bits); }
    // 0x2680f8: 0xe4603940
    ctx->pc = 0x2680f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14656), bits); }
    // 0x2680fc: 0x3c03003c
    ctx->pc = 0x2680fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x268100: 0x3c02003c
    ctx->pc = 0x268100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x268104: 0xe4403960
    ctx->pc = 0x268104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14688), bits); }
    // 0x268108: 0xe4603958
    ctx->pc = 0x268108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14680), bits); }
    // 0x26810c: 0x3c03003c
    ctx->pc = 0x26810cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x268110: 0x3c02003c
    ctx->pc = 0x268110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x268114: 0xe4403964
    ctx->pc = 0x268114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14692), bits); }
    // 0x268118: 0xe460395c
    ctx->pc = 0x268118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14684), bits); }
    // 0x26811c: 0xc09b242
    ctx->pc = 0x26811Cu;
    SET_GPR_U32(ctx, 31, 0x268124u);
    ctx->pc = 0x268120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26C908u;
    {
        const uint32_t __entryPc = ctx->pc;
        att_receive_yaw_0x26c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268124u; }
    }
    if (ctx->pc != 0x268124u) { return; }
    ctx->pc = 0x268124u;
    // 0x268124: 0xc09b1ea
    ctx->pc = 0x268124u;
    SET_GPR_U32(ctx, 31, 0x26812Cu);
    ctx->pc = 0x268128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26C7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        att_dest_pyr_0x26c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26812Cu; }
    }
    if (ctx->pc != 0x26812Cu) { return; }
    ctx->pc = 0x26812Cu;
    // 0x26812c: 0x3c03003c
    ctx->pc = 0x26812cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x268130: 0x3c02003c
    ctx->pc = 0x268130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x268134: 0xc4403950
    ctx->pc = 0x268134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268138: 0xe4603934
    ctx->pc = 0x268138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14644), bits); }
    // 0x26813c: 0x3c03003c
    ctx->pc = 0x26813cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x268140: 0x3c02003c
    ctx->pc = 0x268140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x268144: 0xc4403954
    ctx->pc = 0x268144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268148: 0xe4603938
    ctx->pc = 0x268148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14648), bits); }
    // 0x26814c: 0x3c03003c
    ctx->pc = 0x26814cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x268150: 0x3c020034
    ctx->pc = 0x268150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268154: 0xc64100b0
    ctx->pc = 0x268154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268158: 0xe441f8f8
    ctx->pc = 0x268158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965496), bits); }
    // 0x26815c: 0xe4613948
    ctx->pc = 0x26815cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14664), bits); }
    // 0x268160: 0x3c03003c
    ctx->pc = 0x268160u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x268164: 0x3c020034
    ctx->pc = 0x268164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268168: 0xc64000b4
    ctx->pc = 0x268168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26816c: 0xe440f8f4
    ctx->pc = 0x26816cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965492), bits); }
    // 0x268170: 0xe460394c
    ctx->pc = 0x268170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14668), bits); }
    // 0x268174: 0x3c02003c
    ctx->pc = 0x268174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x268178: 0x10000033
    ctx->pc = 0x268178u;
    {
        const bool branch_taken_0x268178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26817Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14576), bits); }
        if (branch_taken_0x268178) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x268180u;
label_268180:
    // 0x268180: 0x8c42e7c8
    ctx->pc = 0x268180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x268184: 0x10400030
    ctx->pc = 0x268184u;
    {
        const bool branch_taken_0x268184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268188u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268184) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x26818Cu;
    // 0x26818c: 0x8c500060
    ctx->pc = 0x26818cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x268190: 0x24050001
    ctx->pc = 0x268190u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x268194: 0xc099c34
    ctx->pc = 0x268194u;
    SET_GPR_U32(ctx, 31, 0x26819Cu);
    ctx->pc = 0x268198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26819Cu; }
    }
    if (ctx->pc != 0x26819Cu) { return; }
    ctx->pc = 0x26819Cu;
    // 0x26819c: 0x3c040034
    ctx->pc = 0x26819cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2681a0: 0x2482eb60
    ctx->pc = 0x2681a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294962016));
    // 0x2681a4: 0xac400140
    ctx->pc = 0x2681a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
    // 0x2681a8: 0xac400144
    ctx->pc = 0x2681a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x2681ac: 0xac400148
    ctx->pc = 0x2681acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
    // 0x2681b0: 0x3c01420c
    ctx->pc = 0x2681b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16908 << 16));
    // 0x2681b4: 0x44810000
    ctx->pc = 0x2681b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2681b8: 0xe44000d0
    ctx->pc = 0x2681b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2681bc: 0xac400070
    ctx->pc = 0x2681bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2681c0: 0xac400074
    ctx->pc = 0x2681c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x2681c4: 0xac400078
    ctx->pc = 0x2681c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x2681c8: 0x3c030034
    ctx->pc = 0x2681c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2681cc: 0x86020000
    ctx->pc = 0x2681ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2681d0: 0xac62f8f0
    ctx->pc = 0x2681d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965488), GPR_U32(ctx, 2));
    // 0x2681d4: 0x3c030034
    ctx->pc = 0x2681d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2681d8: 0x3c02003c
    ctx->pc = 0x2681d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2681dc: 0xc6000004
    ctx->pc = 0x2681dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2681e0: 0xe44038f0
    ctx->pc = 0x2681e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14576), bits); }
    // 0x2681e4: 0xe460f8f8
    ctx->pc = 0x2681e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965496), bits); }
    // 0x2681e8: 0x3c03003c
    ctx->pc = 0x2681e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2681ec: 0x86020002
    ctx->pc = 0x2681ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2681f0: 0xac6238ec
    ctx->pc = 0x2681f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14572), GPR_U32(ctx, 2));
    // 0x2681f4: 0x3c020034
    ctx->pc = 0x2681f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2681f8: 0xc6000008
    ctx->pc = 0x2681f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2681fc: 0xe440f908
    ctx->pc = 0x2681fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965512), bits); }
    // 0x268200: 0x3c020034
    ctx->pc = 0x268200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268204: 0xc600002c
    ctx->pc = 0x268204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268208: 0xe440f900
    ctx->pc = 0x268208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965504), bits); }
    // 0x26820c: 0x3c020034
    ctx->pc = 0x26820cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268210: 0xc6000030
    ctx->pc = 0x268210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268214: 0xe440f904
    ctx->pc = 0x268214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965508), bits); }
    // 0x268218: 0x3c030032
    ctx->pc = 0x268218u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x26821c: 0x24024650
    ctx->pc = 0x26821cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18000));
    // 0x268220: 0xac6207dc
    ctx->pc = 0x268220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2012), GPR_U32(ctx, 2));
    // 0x268224: 0x3c030033
    ctx->pc = 0x268224u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x268228: 0x86020034
    ctx->pc = 0x268228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x26822c: 0xac623c00
    ctx->pc = 0x26822cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15360), GPR_U32(ctx, 2));
    // 0x268230: 0x24150040
    ctx->pc = 0x268230u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 64));
    // 0x268234: 0x2403002a
    ctx->pc = 0x268234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 42));
    // 0x268238: 0x3ac20100
    ctx->pc = 0x268238u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 22), 256));
    // 0x26823c: 0x62a80a
    ctx->pc = 0x26823cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
    // 0x268240: 0x24020001
    ctx->pc = 0x268240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x268244: 0xac82eb60
    ctx->pc = 0x268244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294962016), GPR_U32(ctx, 2));
label_268248:
    // 0x268248: 0x3c040034
    ctx->pc = 0x268248u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x26824c: 0x3c030034
    ctx->pc = 0x26824cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x268250: 0x2463e9c0
    ctx->pc = 0x268250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961600));
    // 0x268254: 0x3c020034
    ctx->pc = 0x268254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268258: 0x8c42f8f0
    ctx->pc = 0x268258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26825c: 0x21080
    ctx->pc = 0x26825cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x268260: 0x431021
    ctx->pc = 0x268260u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268264: 0xc4400000
    ctx->pc = 0x268264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268268: 0xe480f8f4
    ctx->pc = 0x268268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294965492), bits); }
    // 0x26826c: 0x802d
    ctx->pc = 0x26826cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268270: 0x3c020034
    ctx->pc = 0x268270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268274: 0x2445eb60
    ctx->pc = 0x268274u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x268278: 0x240301a0
    ctx->pc = 0x268278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26827c: 0x2032018
    ctx->pc = 0x26827cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_268280:
    // 0x268280: 0x851021
    ctx->pc = 0x268280u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x268284: 0xc4400070
    ctx->pc = 0x268284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268288: 0xe4400040
    ctx->pc = 0x268288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x26828c: 0xc4400074
    ctx->pc = 0x26828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268290: 0xe4400044
    ctx->pc = 0x268290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x268294: 0xc4400078
    ctx->pc = 0x268294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268298: 0xe4400048
    ctx->pc = 0x268298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x26829c: 0x26100001
    ctx->pc = 0x26829cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2682a0: 0x2a020006
    ctx->pc = 0x2682a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x2682a4: 0x1440fff6
    ctx->pc = 0x2682A4u;
    {
        const bool branch_taken_0x2682a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2682A8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2682a4) {
            ctx->pc = 0x268280u;
            goto label_268280;
        }
    }
    ctx->pc = 0x2682ACu;
    // 0x2682ac: 0x802d
    ctx->pc = 0x2682acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2682b0: 0x3c02003c
    ctx->pc = 0x2682b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2682b4: 0x24433910
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14608));
label_2682b8:
    // 0x2682b8: 0x101080
    ctx->pc = 0x2682b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2682bc: 0x431021
    ctx->pc = 0x2682bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2682c0: 0xac400000
    ctx->pc = 0x2682c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2682c4: 0x26100001
    ctx->pc = 0x2682c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2682c8: 0x2a020003
    ctx->pc = 0x2682c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
    // 0x2682cc: 0x1440fffa
    ctx->pc = 0x2682CCu;
    {
        const bool branch_taken_0x2682cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2682cc) {
            ctx->pc = 0x2682B8u;
            goto label_2682b8;
        }
    }
    ctx->pc = 0x2682D4u;
    // 0x2682d4: 0x3c02003c
    ctx->pc = 0x2682d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2682d8: 0xac4039c8
    ctx->pc = 0x2682d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14792), GPR_U32(ctx, 0));
    // 0x2682dc: 0x3c02003c
    ctx->pc = 0x2682dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2682e0: 0xac5739cc
    ctx->pc = 0x2682e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14796), GPR_U32(ctx, 23));
    // 0x2682e4: 0x3c02003c
    ctx->pc = 0x2682e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2682e8: 0xac5639d0
    ctx->pc = 0x2682e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14800), GPR_U32(ctx, 22));
    // 0x2682ec: 0x3c02003c
    ctx->pc = 0x2682ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2682f0: 0xac5539d4
    ctx->pc = 0x2682f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14804), GPR_U32(ctx, 21));
    // 0x2682f4: 0x3c030034
    ctx->pc = 0x2682f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2682f8: 0x3c020034
    ctx->pc = 0x2682f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2682fc: 0x3c013f80
    ctx->pc = 0x2682fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x268300: 0x44810000
    ctx->pc = 0x268300u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x268304: 0xe440f950
    ctx->pc = 0x268304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965584), bits); }
    // 0x268308: 0xe460f94c
    ctx->pc = 0x268308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965580), bits); }
    // 0x26830c: 0x3c02003c
    ctx->pc = 0x26830cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x268310: 0xc099d38
    ctx->pc = 0x268310u;
    SET_GPR_U32(ctx, 31, 0x268318u);
    ctx->pc = 0x268314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14824), GPR_U32(ctx, 0));
    ctx->pc = 0x2674E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeWindow_0x2674e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268318u; }
    }
    if (ctx->pc != 0x268318u) { return; }
    ctx->pc = 0x268318u;
    // 0x268318: 0x3c013f86
    ctx->pc = 0x268318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16262 << 16));
    // 0x26831c: 0x34210a92
    ctx->pc = 0x26831cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x268320: 0x44816000
    ctx->pc = 0x268320u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x268324: 0xc0b4502
    ctx->pc = 0x268324u;
    SET_GPR_U32(ctx, 31, 0x26832Cu);
    ctx->pc = 0x268328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1408u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetHang_0x2d1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26832Cu; }
    }
    if (ctx->pc != 0x26832Cu) { return; }
    ctx->pc = 0x26832Cu;
    // 0x26832c: 0x3c040034
    ctx->pc = 0x26832cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x268330: 0x3c02003a
    ctx->pc = 0x268330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x268334: 0x8c431bd0
    ctx->pc = 0x268334u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x268338: 0xc4610014
    ctx->pc = 0x268338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26833c: 0x3c013f00
    ctx->pc = 0x26833cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x268340: 0x44811800
    ctx->pc = 0x268340u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x268344: 0x46030842
    ctx->pc = 0x268344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x268348: 0xc4620008
    ctx->pc = 0x268348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26834c: 0x46011001
    ctx->pc = 0x26834cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x268350: 0x46000124
    ctx->pc = 0x268350u;
    *(int32_t*)&ctx->f[4] = FPU_CVT_W_S(ctx->f[0]);
    // 0x268354: 0xe484f918
    ctx->pc = 0x268354u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294965528), bits); }
    // 0x268358: 0x3c020034
    ctx->pc = 0x268358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26835c: 0x46020840
    ctx->pc = 0x26835cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x268360: 0x46000824
    ctx->pc = 0x268360u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x268364: 0xe440f91c
    ctx->pc = 0x268364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965532), bits); }
    // 0x268368: 0x3c020034
    ctx->pc = 0x268368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26836c: 0xc4620018
    ctx->pc = 0x26836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268370: 0x46031082
    ctx->pc = 0x268370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x268374: 0xc460000c
    ctx->pc = 0x268374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268378: 0x46001040
    ctx->pc = 0x268378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26837c: 0x460008e4
    ctx->pc = 0x26837cu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[1]);
    // 0x268380: 0xe443f920
    ctx->pc = 0x268380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965536), bits); }
    // 0x268384: 0x3c020034
    ctx->pc = 0x268384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268388: 0x46020001
    ctx->pc = 0x268388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26838c: 0x46000064
    ctx->pc = 0x26838cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x268390: 0xe441f924
    ctx->pc = 0x268390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965540), bits); }
    // 0x268394: 0xc09a342
    ctx->pc = 0x268394u;
    SET_GPR_U32(ctx, 31, 0x26839Cu);
    ctx->pc = 0x268D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_targets_0x268d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26839Cu; }
    }
    if (ctx->pc != 0x26839Cu) { return; }
    ctx->pc = 0x26839Cu;
    // 0x26839c: 0x202d
    ctx->pc = 0x26839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683a0: 0xc099c48
    ctx->pc = 0x2683A0u;
    SET_GPR_U32(ctx, 31, 0x2683A8u);
    ctx->pc = 0x2683A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x267120u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcCamera_0x267120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683A8u; }
    }
    if (ctx->pc != 0x2683A8u) { return; }
    ctx->pc = 0x2683A8u;
    // 0x2683a8: 0x3c020034
    ctx->pc = 0x2683a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2683ac: 0x2452eb60
    ctx->pc = 0x2683acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294962016));
label_2683b0:
    // 0x2683b0: 0xc6400040
    ctx->pc = 0x2683b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2683b4: 0xe6400050
    ctx->pc = 0x2683b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2683b8: 0xc6400044
    ctx->pc = 0x2683b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2683bc: 0xe6400054
    ctx->pc = 0x2683bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x2683c0: 0xc6400048
    ctx->pc = 0x2683c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2683c4: 0xe6400058
    ctx->pc = 0x2683c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x2683c8: 0xae400060
    ctx->pc = 0x2683c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x2683cc: 0xae400064
    ctx->pc = 0x2683ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x2683d0: 0xae400068
    ctx->pc = 0x2683d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x2683d4: 0x26100001
    ctx->pc = 0x2683d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2683d8: 0x2a020006
    ctx->pc = 0x2683d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x2683dc: 0x1440fff4
    ctx->pc = 0x2683DCu;
    {
        const bool branch_taken_0x2683dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2683E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 416));
        if (branch_taken_0x2683dc) {
            ctx->pc = 0x2683B0u;
            goto label_2683b0;
        }
    }
    ctx->pc = 0x2683E4u;
    // 0x2683e4: 0xdfbf0120
    ctx->pc = 0x2683e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2683e8: 0xdfb70110
    ctx->pc = 0x2683e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2683ec: 0xdfb60100
    ctx->pc = 0x2683ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2683f0: 0xdfb500f0
    ctx->pc = 0x2683f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2683f4: 0xdfb400e0
    ctx->pc = 0x2683f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2683f8: 0xdfb300d0
    ctx->pc = 0x2683f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2683fc: 0xdfb200c0
    ctx->pc = 0x2683fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268400: 0xdfb100b0
    ctx->pc = 0x268400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x268404: 0xdfb000a0
    ctx->pc = 0x268404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x268408: 0xc7b40130
    ctx->pc = 0x268408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26840c: 0x3e00008
    ctx->pc = 0x26840Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268410u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x267858u: goto label_267858;
            case 0x2679DCu: goto label_2679dc;
            case 0x267A34u: goto label_267a34;
            case 0x267A54u: goto label_267a54;
            case 0x267AE4u: goto label_267ae4;
            case 0x267B64u: goto label_267b64;
            case 0x267CACu: goto label_267cac;
            case 0x267CB8u: goto label_267cb8;
            case 0x267CFCu: goto label_267cfc;
            case 0x267D00u: goto label_267d00;
            case 0x267D24u: goto label_267d24;
            case 0x267D80u: goto label_267d80;
            case 0x267D88u: goto label_267d88;
            case 0x267DD0u: goto label_267dd0;
            case 0x267DF4u: goto label_267df4;
            case 0x267DFCu: goto label_267dfc;
            case 0x267E24u: goto label_267e24;
            case 0x267F0Cu: goto label_267f0c;
            case 0x267FF0u: goto label_267ff0;
            case 0x267FF8u: goto label_267ff8;
            case 0x268180u: goto label_268180;
            case 0x268248u: goto label_268248;
            case 0x268280u: goto label_268280;
            case 0x2682B8u: goto label_2682b8;
            case 0x2683B0u: goto label_2683b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268414u;
}
