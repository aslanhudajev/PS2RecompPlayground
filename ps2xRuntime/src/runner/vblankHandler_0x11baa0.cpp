#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: vblankHandler
// Address: 0x11baa0 - 0x11bbc8
void vblankHandler_0x11baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11baa0u;

    // 0x11baa0: 0x27bdffd0
    ctx->pc = 0x11baa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11baa4: 0x3c021200
    ctx->pc = 0x11baa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x11baa8: 0xffbf0020
    ctx->pc = 0x11baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11baac: 0x34421000
    ctx->pc = 0x11baacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
    // 0x11bab0: 0xffb10010
    ctx->pc = 0x11bab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11bab4: 0xffb00000
    ctx->pc = 0x11bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bab8: 0xdc430000
    ctx->pc = 0x11bab8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11babc: 0x31b7a
    ctx->pc = 0x11babcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x11bac0: 0x30630001
    ctx->pc = 0x11bac0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x11bac4: 0x3183c
    ctx->pc = 0x11bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11bac8: 0x3183f
    ctx->pc = 0x11bac8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11bacc: 0xaf838448
    ctx->pc = 0x11baccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 3));
    // 0x11bad0: 0x8f82843c
    ctx->pc = 0x11bad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935612)));
    // 0x11bad4: 0x10400034
    ctx->pc = 0x11BAD4u;
    {
        const bool branch_taken_0x11bad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11bad4) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BADCu;
    // 0x11badc: 0x8f828440
    ctx->pc = 0x11badcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935616)));
    // 0x11bae0: 0x24040001
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bae4: 0x282d
    ctx->pc = 0x11bae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bae8: 0x24420001
    ctx->pc = 0x11bae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11baec: 0xaf828440
    ctx->pc = 0x11baecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 2));
    // 0x11baf0: 0xc043322
    ctx->pc = 0x11BAF0u;
    SET_GPR_U32(ctx, 31, 0x11BAF8u);
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAF8u; }
    }
    if (ctx->pc != 0x11BAF8u) { return; }
    ctx->pc = 0x11BAF8u;
    // 0x11baf8: 0xaf82844c
    ctx->pc = 0x11baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 2));
    // 0x11bafc: 0x8f82844c
    ctx->pc = 0x11bafcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x11bb00: 0x14400029
    ctx->pc = 0x11BB00u;
    {
        const bool branch_taken_0x11bb00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11bb00) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB08u;
    // 0x11bb08: 0x3c040075
    ctx->pc = 0x11bb08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11bb0c: 0xc046a84
    ctx->pc = 0x11BB0Cu;
    SET_GPR_U32(ctx, 31, 0x11BB14u);
    ctx->pc = 0x11BB10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960408));
    ctx->pc = 0x11AA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufGetTag_0x11aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB14u; }
    }
    if (ctx->pc != 0x11BB14u) { return; }
    ctx->pc = 0x11BB14u;
    // 0x11bb14: 0x40802d
    ctx->pc = 0x11bb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb18: 0x16000006
    ctx->pc = 0x11BB18u;
    {
        const bool branch_taken_0x11bb18 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x11BB1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935752)));
        if (branch_taken_0x11bb18) {
            ctx->pc = 0x11BB34u;
            goto label_11bb34;
        }
    }
    ctx->pc = 0x11BB20u;
    // 0x11bb20: 0x24420001
    ctx->pc = 0x11bb20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bb24: 0xc045400
    ctx->pc = 0x11BB24u;
    SET_GPR_U32(ctx, 31, 0x11BB2Cu);
    ctx->pc = 0x11BB28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 2));
    ctx->pc = 0x115000u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB2Cu; }
    }
    if (ctx->pc != 0x11BB2Cu) { return; }
    ctx->pc = 0x11BB2Cu;
    // 0x11bb2c: 0x10000021
    ctx->pc = 0x11BB2Cu;
    {
        const bool branch_taken_0x11bb2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BB30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11bb2c) {
            ctx->pc = 0x11BBB4u;
            goto label_11bbb4;
        }
    }
    ctx->pc = 0x11BB34u;
label_11bb34:
    // 0x11bb34: 0x8f828448
    ctx->pc = 0x11bb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
    // 0x11bb38: 0x1440000e
    ctx->pc = 0x11BB38u;
    {
        const bool branch_taken_0x11bb38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11BB3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x11bb38) {
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB40u;
    // 0x11bb40: 0x8e030000
    ctx->pc = 0x11bb40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bb44: 0x1462000b
    ctx->pc = 0x11BB44u;
    {
        const bool branch_taken_0x11bb44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x11BB48u;
        SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
        if (branch_taken_0x11bb44) {
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB4Cu;
    // 0x11bb4c: 0x282d
    ctx->pc = 0x11bb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb50: 0xc046c66
    ctx->pc = 0x11BB50u;
    SET_GPR_U32(ctx, 31, 0x11BB58u);
    ctx->pc = 0x11BB54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960432));
    ctx->pc = 0x11B198u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispSwitch_0x11b198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB58u; }
    }
    if (ctx->pc != 0x11BB58u) { return; }
    ctx->pc = 0x11BB58u;
    // 0x11bb58: 0x3c040002
    ctx->pc = 0x11bb58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
    // 0x11bb5c: 0x34842340
    ctx->pc = 0x11bb5cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 9024));
    // 0x11bb60: 0xc046e9a
    ctx->pc = 0x11BB60u;
    SET_GPR_U32(ctx, 31, 0x11BB68u);
    ctx->pc = 0x11BB64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->pc = 0x11BA68u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadImage_0x11ba68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB68u; }
    }
    if (ctx->pc != 0x11BB68u) { return; }
    ctx->pc = 0x11BB68u;
    // 0x11bb68: 0x24020001
    ctx->pc = 0x11bb68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bb6c: 0x1000000e
    ctx->pc = 0x11BB6Cu;
    {
        const bool branch_taken_0x11bb6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BB70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x11bb6c) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB74u;
label_11bb74:
    // 0x11bb74: 0x8f828448
    ctx->pc = 0x11bb74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
    // 0x11bb78: 0x1040000b
    ctx->pc = 0x11BB78u;
    {
        const bool branch_taken_0x11bb78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BB7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11bb78) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB80u;
    // 0x11bb80: 0x8e110000
    ctx->pc = 0x11bb80u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bb84: 0x16220008
    ctx->pc = 0x11BB84u;
    {
        const bool branch_taken_0x11bb84 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x11BB88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11bb84) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB8Cu;
    // 0x11bb8c: 0x3c040075
    ctx->pc = 0x11bb8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11bb90: 0xc046c66
    ctx->pc = 0x11BB90u;
    SET_GPR_U32(ctx, 31, 0x11BB98u);
    ctx->pc = 0x11BB94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960432));
    ctx->pc = 0x11B198u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispSwitch_0x11b198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB98u; }
    }
    if (ctx->pc != 0x11BB98u) { return; }
    ctx->pc = 0x11BB98u;
    // 0x11bb98: 0xc046e9a
    ctx->pc = 0x11BB98u;
    SET_GPR_U32(ctx, 31, 0x11BBA0u);
    ctx->pc = 0x11BB9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x11BA68u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadImage_0x11ba68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBA0u; }
    }
    if (ctx->pc != 0x11BBA0u) { return; }
    ctx->pc = 0x11BBA0u;
    // 0x11bba0: 0xae000000
    ctx->pc = 0x11bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11bba4: 0xaf918444
    ctx->pc = 0x11bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 17));
label_11bba8:
    // 0x11bba8: 0xf
    ctx->pc = 0x11bba8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11bbac: 0x42000038
    ctx->pc = 0x11bbacu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x11bbb0: 0x102d
    ctx->pc = 0x11bbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bbb4:
    // 0x11bbb4: 0xdfbf0020
    ctx->pc = 0x11bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bbb8: 0xdfb10010
    ctx->pc = 0x11bbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bbbc: 0xdfb00000
    ctx->pc = 0x11bbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bbc0: 0x3e00008
    ctx->pc = 0x11BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BB34u: goto label_11bb34;
            case 0x11BB74u: goto label_11bb74;
            case 0x11BBA8u: goto label_11bba8;
            case 0x11BBB4u: goto label_11bbb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BBC8u;
}
