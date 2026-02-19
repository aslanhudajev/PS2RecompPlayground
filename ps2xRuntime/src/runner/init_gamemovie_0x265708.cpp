#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_gamemovie
// Address: 0x265708 - 0x265848
void init_gamemovie_0x265708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x265708u;

    // 0x265708: 0x27bdffc0
    ctx->pc = 0x265708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26570c: 0xffbf0030
    ctx->pc = 0x26570cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x265710: 0xffb20020
    ctx->pc = 0x265710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x265714: 0xffb10010
    ctx->pc = 0x265714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x265718: 0xffb00000
    ctx->pc = 0x265718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26571c: 0x80802d
    ctx->pc = 0x26571cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265720: 0x3c030031
    ctx->pc = 0x265720u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x265724: 0x2402400e
    ctx->pc = 0x265724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16398));
    // 0x265728: 0xac620018
    ctx->pc = 0x265728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x26572c: 0x3c12003c
    ctx->pc = 0x26572cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x265730: 0xc09733e
    ctx->pc = 0x265730u;
    SET_GPR_U32(ctx, 31, 0x265738u);
    ctx->pc = 0x265734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14280), GPR_U32(ctx, 0));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265738u; }
    }
    if (ctx->pc != 0x265738u) { return; }
    ctx->pc = 0x265738u;
    // 0x265738: 0xc09710c
    ctx->pc = 0x265738u;
    SET_GPR_U32(ctx, 31, 0x265740u);
    ctx->pc = 0x26573Cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265740u; }
    }
    if (ctx->pc != 0x265740u) { return; }
    ctx->pc = 0x265740u;
    // 0x265740: 0xc0b1bd4
    ctx->pc = 0x265740u;
    SET_GPR_U32(ctx, 31, 0x265748u);
    ctx->pc = 0x265744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265748u; }
    }
    if (ctx->pc != 0x265748u) { return; }
    ctx->pc = 0x265748u;
    // 0x265748: 0xc09957e
    ctx->pc = 0x265748u;
    SET_GPR_U32(ctx, 31, 0x265750u);
    ctx->pc = 0x2655F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        delete_map_blits_0x2655f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265750u; }
    }
    if (ctx->pc != 0x265750u) { return; }
    ctx->pc = 0x265750u;
    // 0x265750: 0x24020001
    ctx->pc = 0x265750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265754: 0xae2237cc
    ctx->pc = 0x265754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14284), GPR_U32(ctx, 2));
    // 0x265758: 0x3c020031
    ctx->pc = 0x265758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26575c: 0x8c42f18c
    ctx->pc = 0x26575cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963596)));
    // 0x265760: 0x14400030
    ctx->pc = 0x265760u;
    {
        const bool branch_taken_0x265760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x265764u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x265760) {
            ctx->pc = 0x265824u;
            goto label_265824;
        }
    }
    ctx->pc = 0x265768u;
    // 0x265768: 0x3c020031
    ctx->pc = 0x265768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26576c: 0xdc420e28
    ctx->pc = 0x26576cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x265770: 0x30420010
    ctx->pc = 0x265770u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x265774: 0x1440002b
    ctx->pc = 0x265774u;
    {
        const bool branch_taken_0x265774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x265778u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x265774) {
            ctx->pc = 0x265824u;
            goto label_265824;
        }
    }
    ctx->pc = 0x26577Cu;
    // 0x26577c: 0x3c020032
    ctx->pc = 0x26577cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x265780: 0x8c4207bc
    ctx->pc = 0x265780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x265784: 0x14400027
    ctx->pc = 0x265784u;
    {
        const bool branch_taken_0x265784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x265788u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x265784) {
            ctx->pc = 0x265824u;
            goto label_265824;
        }
    }
    ctx->pc = 0x26578Cu;
    // 0x26578c: 0x2402002c
    ctx->pc = 0x26578cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x265790: 0x1602000b
    ctx->pc = 0x265790u;
    {
        const bool branch_taken_0x265790 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x265794u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
        if (branch_taken_0x265790) {
            ctx->pc = 0x2657C0u;
            goto label_2657c0;
        }
    }
    ctx->pc = 0x265798u;
    // 0x265798: 0x3c04003b
    ctx->pc = 0x265798u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x26579c: 0x24849fb0
    ctx->pc = 0x26579cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942640));
    // 0x2657a0: 0x3c05003b
    ctx->pc = 0x2657a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2657a4: 0x24a59fb8
    ctx->pc = 0x2657a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942648));
    // 0x2657a8: 0xc0b724a
    ctx->pc = 0x2657A8u;
    SET_GPR_U32(ctx, 31, 0x2657B0u);
    ctx->pc = 0x2657ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DC928u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMovie_0x2dc928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657B0u; }
    }
    if (ctx->pc != 0x2657B0u) { return; }
    ctx->pc = 0x2657B0u;
    // 0x2657b0: 0xae4237c8
    ctx->pc = 0x2657b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14280), GPR_U32(ctx, 2));
    // 0x2657b4: 0x24020002
    ctx->pc = 0x2657b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2657b8: 0x10000019
    ctx->pc = 0x2657B8u;
    {
        const bool branch_taken_0x2657b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2657BCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 14284), GPR_U32(ctx, 2));
        if (branch_taken_0x2657b8) {
            ctx->pc = 0x265820u;
            goto label_265820;
        }
    }
    ctx->pc = 0x2657C0u;
label_2657c0:
    // 0x2657c0: 0x1602000d
    ctx->pc = 0x2657C0u;
    {
        const bool branch_taken_0x2657c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2657C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2657c0) {
            ctx->pc = 0x2657F8u;
            goto label_2657f8;
        }
    }
    ctx->pc = 0x2657C8u;
    // 0x2657c8: 0x3c04003b
    ctx->pc = 0x2657c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2657cc: 0x24849fb0
    ctx->pc = 0x2657ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942640));
    // 0x2657d0: 0x3c05003b
    ctx->pc = 0x2657d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2657d4: 0x24a59fc0
    ctx->pc = 0x2657d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942656));
    // 0x2657d8: 0xc0b724a
    ctx->pc = 0x2657D8u;
    SET_GPR_U32(ctx, 31, 0x2657E0u);
    ctx->pc = 0x2657DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DC928u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMovie_0x2dc928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657E0u; }
    }
    if (ctx->pc != 0x2657E0u) { return; }
    ctx->pc = 0x2657E0u;
    // 0x2657e0: 0x3c03003c
    ctx->pc = 0x2657e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2657e4: 0xac6237c8
    ctx->pc = 0x2657e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14280), GPR_U32(ctx, 2));
    // 0x2657e8: 0x3c03003c
    ctx->pc = 0x2657e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2657ec: 0x24020002
    ctx->pc = 0x2657ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2657f0: 0x1000000b
    ctx->pc = 0x2657F0u;
    {
        const bool branch_taken_0x2657f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2657F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14284), GPR_U32(ctx, 2));
        if (branch_taken_0x2657f0) {
            ctx->pc = 0x265820u;
            goto label_265820;
        }
    }
    ctx->pc = 0x2657F8u;
label_2657f8:
    // 0x2657f8: 0x8c45e7c8
    ctx->pc = 0x2657f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2657fc: 0x80a20034
    ctx->pc = 0x2657fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x265800: 0x10400007
    ctx->pc = 0x265800u;
    {
        const bool branch_taken_0x265800 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x265804u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x265800) {
            ctx->pc = 0x265820u;
            goto label_265820;
        }
    }
    ctx->pc = 0x265808u;
    // 0x265808: 0x24849fb0
    ctx->pc = 0x265808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942640));
    // 0x26580c: 0x24a50034
    ctx->pc = 0x26580cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 52));
    // 0x265810: 0xc0b724a
    ctx->pc = 0x265810u;
    SET_GPR_U32(ctx, 31, 0x265818u);
    ctx->pc = 0x265814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DC928u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMovie_0x2dc928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265818u; }
    }
    if (ctx->pc != 0x265818u) { return; }
    ctx->pc = 0x265818u;
    // 0x265818: 0x3c03003c
    ctx->pc = 0x265818u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26581c: 0xac6237c8
    ctx->pc = 0x26581cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14280), GPR_U32(ctx, 2));
label_265820:
    // 0x265820: 0x3c02003c
    ctx->pc = 0x265820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_265824:
    // 0x265824: 0xac4037d0
    ctx->pc = 0x265824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14288), GPR_U32(ctx, 0));
    // 0x265828: 0x3c02003c
    ctx->pc = 0x265828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26582c: 0x8c4237c8
    ctx->pc = 0x26582cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14280)));
    // 0x265830: 0xdfbf0030
    ctx->pc = 0x265830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265834: 0xdfb20020
    ctx->pc = 0x265834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265838: 0xdfb10010
    ctx->pc = 0x265838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26583c: 0xdfb00000
    ctx->pc = 0x26583cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265840: 0x3e00008
    ctx->pc = 0x265840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265844u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2657C0u: goto label_2657c0;
            case 0x2657F8u: goto label_2657f8;
            case 0x265820u: goto label_265820;
            case 0x265824u: goto label_265824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x265848u;
}
