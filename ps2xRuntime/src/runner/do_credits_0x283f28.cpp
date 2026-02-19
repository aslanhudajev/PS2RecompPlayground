#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_credits
// Address: 0x283f28 - 0x284088
void do_credits_0x283f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x283f28u;

    // 0x283f28: 0x27bdffd0
    ctx->pc = 0x283f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283f2c: 0xffbf0020
    ctx->pc = 0x283f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x283f30: 0xffb10010
    ctx->pc = 0x283f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283f34: 0xffb00000
    ctx->pc = 0x283f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283f38: 0x3c020032
    ctx->pc = 0x283f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x283f3c: 0x8c430868
    ctx->pc = 0x283f3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x283f40: 0x24100001
    ctx->pc = 0x283f40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x283f44: 0x24020200
    ctx->pc = 0x283f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x283f48: 0x43800b
    ctx->pc = 0x283f48u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x283f4c: 0x3c020035
    ctx->pc = 0x283f4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283f50: 0x8c42a2d8
    ctx->pc = 0x283f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x283f54: 0x1040000c
    ctx->pc = 0x283F54u;
    {
        const bool branch_taken_0x283f54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283F58u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283f54) {
            ctx->pc = 0x283F88u;
            goto label_283f88;
        }
    }
    ctx->pc = 0x283F5Cu;
    // 0x283f5c: 0xc08839e
    ctx->pc = 0x283F5Cu;
    SET_GPR_U32(ctx, 31, 0x283F64u);
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F64u; }
    }
    if (ctx->pc != 0x283F64u) { return; }
    ctx->pc = 0x283F64u;
    // 0x283f64: 0x3c030035
    ctx->pc = 0x283f64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x283f68: 0x24020001
    ctx->pc = 0x283f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x283f6c: 0xac629bc0
    ctx->pc = 0x283f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941632), GPR_U32(ctx, 2));
    // 0x283f70: 0x2404ffff
    ctx->pc = 0x283f70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283f74: 0xdfbf0020
    ctx->pc = 0x283f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283f78: 0xdfb10010
    ctx->pc = 0x283f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283f7c: 0xdfb00000
    ctx->pc = 0x283f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283f80: 0x80a0960
    ctx->pc = 0x283F80u;
    ctx->pc = 0x283F84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x282580u;
    init_attract_mode_0x282580(rdram, ctx, runtime); return;
    ctx->pc = 0x283F88u;
label_283f88:
    // 0x283f88: 0xc081bc6
    ctx->pc = 0x283F88u;
    SET_GPR_U32(ctx, 31, 0x283F90u);
    ctx->pc = 0x283F8Cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)64 << 16));
    ctx->pc = 0x206F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_level_0x206f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F90u; }
    }
    if (ctx->pc != 0x283F90u) { return; }
    ctx->pc = 0x283F90u;
    // 0x283f90: 0x1040000f
    ctx->pc = 0x283F90u;
    {
        const bool branch_taken_0x283f90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283F94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x283f90) {
            ctx->pc = 0x283FD0u;
            goto label_283fd0;
        }
    }
    ctx->pc = 0x283F98u;
    // 0x283f98: 0xc081bc6
    ctx->pc = 0x283F98u;
    SET_GPR_U32(ctx, 31, 0x283FA0u);
    ctx->pc = 0x283F9Cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)128 << 16));
    ctx->pc = 0x206F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_level_0x206f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283FA0u; }
    }
    if (ctx->pc != 0x283FA0u) { return; }
    ctx->pc = 0x283FA0u;
    // 0x283fa0: 0x1040000a
    ctx->pc = 0x283FA0u;
    {
        const bool branch_taken_0x283fa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283FA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 292));
        if (branch_taken_0x283fa0) {
            ctx->pc = 0x283FCCu;
            goto label_283fcc;
        }
    }
    ctx->pc = 0x283FA8u;
    // 0x283fa8: 0x24050154
    ctx->pc = 0x283fa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x283fac: 0x200302d
    ctx->pc = 0x283facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fb0: 0x3c0700ff
    ctx->pc = 0x283fb0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x283fb4: 0x34e7ff80
    ctx->pc = 0x283fb4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65408));
    // 0x283fb8: 0x3c08003b
    ctx->pc = 0x283fb8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x283fbc: 0x2508d008
    ctx->pc = 0x283fbcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955016));
    // 0x283fc0: 0x3c090031
    ctx->pc = 0x283fc0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)49 << 16));
    // 0x283fc4: 0xc0804c8
    ctx->pc = 0x283FC4u;
    SET_GPR_U32(ctx, 31, 0x283FCCu);
    ctx->pc = 0x283FC8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294963584));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283FCCu; }
    }
    if (ctx->pc != 0x283FCCu) { return; }
    ctx->pc = 0x283FCCu;
label_283fcc:
    // 0x283fcc: 0x3c020031
    ctx->pc = 0x283fccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_283fd0:
    // 0x283fd0: 0x8c42ff9c
    ctx->pc = 0x283fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x283fd4: 0x5440000b
    ctx->pc = 0x283FD4u;
    {
        const bool branch_taken_0x283fd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x283fd4) {
            ctx->pc = 0x283FD8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
            ctx->pc = 0x284004u;
            goto label_284004;
        }
    }
    ctx->pc = 0x283FDCu;
    // 0x283fdc: 0xc0a0f06
    ctx->pc = 0x283FDCu;
    SET_GPR_U32(ctx, 31, 0x283FE4u);
    ctx->pc = 0x283C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        scroll_credits_0x283c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283FE4u; }
    }
    if (ctx->pc != 0x283FE4u) { return; }
    ctx->pc = 0x283FE4u;
    // 0x283fe4: 0x40882d
    ctx->pc = 0x283fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fe8: 0x3c040031
    ctx->pc = 0x283fe8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x283fec: 0x3c030031
    ctx->pc = 0x283fecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x283ff0: 0x8c82001c
    ctx->pc = 0x283ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x283ff4: 0x8c63ffbc
    ctx->pc = 0x283ff4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x283ff8: 0x431021
    ctx->pc = 0x283ff8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283ffc: 0xac82001c
    ctx->pc = 0x283ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x284000: 0x3c040001
    ctx->pc = 0x284000u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
label_284004:
    // 0x284004: 0xc088290
    ctx->pc = 0x284004u;
    SET_GPR_U32(ctx, 31, 0x28400Cu);
    ctx->pc = 0x284008u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 34464));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28400Cu; }
    }
    if (ctx->pc != 0x28400Cu) { return; }
    ctx->pc = 0x28400Cu;
    // 0x28400c: 0x2403ffff
    ctx->pc = 0x28400cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284010: 0x62880b
    ctx->pc = 0x284010u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
    // 0x284014: 0x3c020035
    ctx->pc = 0x284014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x284018: 0x8c42a2d8
    ctx->pc = 0x284018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x28401c: 0x54400015
    ctx->pc = 0x28401Cu;
    {
        const bool branch_taken_0x28401c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28401c) {
            ctx->pc = 0x284020u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x284074u;
            goto label_284074;
        }
    }
    ctx->pc = 0x284024u;
    // 0x284024: 0x3c020031
    ctx->pc = 0x284024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x284028: 0x8c42ff9c
    ctx->pc = 0x284028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x28402c: 0x54400011
    ctx->pc = 0x28402Cu;
    {
        const bool branch_taken_0x28402c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28402c) {
            ctx->pc = 0x284030u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x284074u;
            goto label_284074;
        }
    }
    ctx->pc = 0x284034u;
    // 0x284034: 0x3c020031
    ctx->pc = 0x284034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x284038: 0xdc420e28
    ctx->pc = 0x284038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x28403c: 0x30420004
    ctx->pc = 0x28403cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x284040: 0x5440000c
    ctx->pc = 0x284040u;
    {
        const bool branch_taken_0x284040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x284040) {
            ctx->pc = 0x284044u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x284074u;
            goto label_284074;
        }
    }
    ctx->pc = 0x284048u;
    // 0x284048: 0x6200009
    ctx->pc = 0x284048u;
    {
        const bool branch_taken_0x284048 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x28404Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x284048) {
            ctx->pc = 0x284070u;
            goto label_284070;
        }
    }
    ctx->pc = 0x284050u;
    // 0x284050: 0x8c42001c
    ctx->pc = 0x284050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x284054: 0x28421518
    ctx->pc = 0x284054u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5400));
    // 0x284058: 0x10400003
    ctx->pc = 0x284058u;
    {
        const bool branch_taken_0x284058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28405Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x284058) {
            ctx->pc = 0x284068u;
            goto label_284068;
        }
    }
    ctx->pc = 0x284060u;
    // 0x284060: 0x12200004
    ctx->pc = 0x284060u;
    {
        const bool branch_taken_0x284060 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x284064u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x284060) {
            ctx->pc = 0x284074u;
            goto label_284074;
        }
    }
    ctx->pc = 0x284068u;
label_284068:
    // 0x284068: 0x24020001
    ctx->pc = 0x284068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28406c: 0xac62a2d8
    ctx->pc = 0x28406cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943448), GPR_U32(ctx, 2));
label_284070:
    // 0x284070: 0x202d
    ctx->pc = 0x284070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284074:
    // 0x284074: 0xdfbf0020
    ctx->pc = 0x284074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284078: 0xdfb10010
    ctx->pc = 0x284078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28407c: 0xdfb00000
    ctx->pc = 0x28407cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284080: 0x80a08ca
    ctx->pc = 0x284080u;
    ctx->pc = 0x284084u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x282328u;
    attract_advance_0x282328(rdram, ctx, runtime); return;
    ctx->pc = 0x284088u;
}
