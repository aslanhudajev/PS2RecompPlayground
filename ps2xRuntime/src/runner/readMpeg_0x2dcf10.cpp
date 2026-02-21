#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readMpeg
// Address: 0x2dcf10 - 0x2dd34c
void readMpeg_0x2dcf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dcf10u;

    // 0x2dcf10: 0x27bdff90
    ctx->pc = 0x2dcf10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dcf14: 0xffbf0060
    ctx->pc = 0x2dcf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2dcf18: 0xffb40050
    ctx->pc = 0x2dcf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2dcf1c: 0xffb30040
    ctx->pc = 0x2dcf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2dcf20: 0xffb20030
    ctx->pc = 0x2dcf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dcf24: 0xffb10020
    ctx->pc = 0x2dcf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2dcf28: 0xffb00010
    ctx->pc = 0x2dcf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dcf2c: 0x80a02d
    ctx->pc = 0x2dcf2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf30: 0xa0882d
    ctx->pc = 0x2dcf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf34: 0xc0982d
    ctx->pc = 0x2dcf34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf38: 0x3c02003a
    ctx->pc = 0x2dcf38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcf3c: 0x24100001
    ctx->pc = 0x2dcf3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcf40: 0xac5029b0
    ctx->pc = 0x2dcf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10672), GPR_U32(ctx, 16));
    // 0x2dcf44: 0x3c02003a
    ctx->pc = 0x2dcf44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcf48: 0x245229cc
    ctx->pc = 0x2dcf48u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 10700));
    // 0x2dcf4c: 0x3c02003a
    ctx->pc = 0x2dcf4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcf50: 0x8c422d98
    ctx->pc = 0x2dcf50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11672)));
    // 0x2dcf54: 0x28420005
    ctx->pc = 0x2dcf54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x2dcf58: 0x14400006
    ctx->pc = 0x2DCF58u;
    {
        const bool branch_taken_0x2dcf58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCF5Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf58) {
            ctx->pc = 0x2DCF74u;
            goto label_2dcf74;
        }
    }
    ctx->pc = 0x2DCF60u;
    // 0x2dcf60: 0xc0b7850
    ctx->pc = 0x2DCF60u;
    SET_GPR_U32(ctx, 31, 0x2DCF68u);
    ctx->pc = 0x2DE140u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x2de140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF68u; }
    }
    if (ctx->pc != 0x2DCF68u) { return; }
    ctx->pc = 0x2DCF68u;
    // 0x2dcf68: 0x38420003
    ctx->pc = 0x2dcf68u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
    // 0x2dcf6c: 0x200182d
    ctx->pc = 0x2dcf6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf70: 0x2180a
    ctx->pc = 0x2dcf70u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_2dcf74:
    // 0x2dcf74: 0xc089082
    ctx->pc = 0x2DCF74u;
    SET_GPR_U32(ctx, 31, 0x2DCF7Cu);
    ctx->pc = 0x2DCF78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x224208u;
    {
        const uint32_t __entryPc = ctx->pc;
        stream_playing_0x224208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF7Cu; }
    }
    if (ctx->pc != 0x2DCF7Cu) { return; }
    ctx->pc = 0x2DCF7Cu;
    // 0x2dcf7c: 0x40182d
    ctx->pc = 0x2dcf7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf80: 0x3c02003a
    ctx->pc = 0x2dcf80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcf84: 0xac4329d0
    ctx->pc = 0x2dcf84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10704), GPR_U32(ctx, 3));
    // 0x2dcf88: 0x3c02003a
    ctx->pc = 0x2dcf88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcf8c: 0x8c4229c0
    ctx->pc = 0x2dcf8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x2dcf90: 0x1040002c
    ctx->pc = 0x2DCF90u;
    {
        const bool branch_taken_0x2dcf90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCF94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcf90) {
            ctx->pc = 0x2DD044u;
            goto label_2dd044;
        }
    }
    ctx->pc = 0x2DCF98u;
    // 0x2dcf98: 0x8c4229cc
    ctx->pc = 0x2dcf98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10700)));
    // 0x2dcf9c: 0x1440001b
    ctx->pc = 0x2DCF9Cu;
    {
        const bool branch_taken_0x2dcf9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCFA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcf9c) {
            ctx->pc = 0x2DD00Cu;
            goto label_2dd00c;
        }
    }
    ctx->pc = 0x2DCFA4u;
    // 0x2dcfa4: 0x10600019
    ctx->pc = 0x2DCFA4u;
    {
        const bool branch_taken_0x2dcfa4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCFA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcfa4) {
            ctx->pc = 0x2DD00Cu;
            goto label_2dd00c;
        }
    }
    ctx->pc = 0x2DCFACu;
    // 0x2dcfac: 0x8c6229c4
    ctx->pc = 0x2dcfacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10692)));
    // 0x2dcfb0: 0x10400008
    ctx->pc = 0x2DCFB0u;
    {
        const bool branch_taken_0x2dcfb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCFB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcfb0) {
            ctx->pc = 0x2DCFD4u;
            goto label_2dcfd4;
        }
    }
    ctx->pc = 0x2DCFB8u;
    // 0x2dcfb8: 0xac6029c4
    ctx->pc = 0x2dcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10692), GPR_U32(ctx, 0));
    // 0x2dcfbc: 0x3c03003a
    ctx->pc = 0x2dcfbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dcfc0: 0x8c4222f8
    ctx->pc = 0x2dcfc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x2dcfc4: 0xac6229c8
    ctx->pc = 0x2dcfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10696), GPR_U32(ctx, 2));
    // 0x2dcfc8: 0x3c04003a
    ctx->pc = 0x2dcfc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dcfcc: 0xc0b787c
    ctx->pc = 0x2DCFCCu;
    SET_GPR_U32(ctx, 31, 0x2DCFD4u);
    ctx->pc = 0x2DCFD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10816));
    ctx->pc = 0x2DE1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecFlush_0x2de1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFD4u; }
    }
    if (ctx->pc != 0x2DCFD4u) { return; }
    ctx->pc = 0x2DCFD4u;
label_2dcfd4:
    // 0x2dcfd4: 0x3c02003a
    ctx->pc = 0x2dcfd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcfd8: 0x3c03003a
    ctx->pc = 0x2dcfd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dcfdc: 0x8c4222f8
    ctx->pc = 0x2dcfdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x2dcfe0: 0x8c6329c8
    ctx->pc = 0x2dcfe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10696)));
    // 0x2dcfe4: 0x431023
    ctx->pc = 0x2dcfe4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dcfe8: 0x2c4202ef
    ctx->pc = 0x2dcfe8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 751));
    // 0x2dcfec: 0x14400019
    ctx->pc = 0x2DCFECu;
    {
        const bool branch_taken_0x2dcfec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCFF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcfec) {
            ctx->pc = 0x2DD054u;
            goto label_2dd054;
        }
    }
    ctx->pc = 0x2DCFF4u;
    // 0x2dcff4: 0x3c04003c
    ctx->pc = 0x2dcff4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dcff8: 0xc0b492e
    ctx->pc = 0x2DCFF8u;
    SET_GPR_U32(ctx, 31, 0x2DD000u);
    ctx->pc = 0x2DCFFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935688));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD000u; }
    }
    if (ctx->pc != 0x2DD000u) { return; }
    ctx->pc = 0x2DD000u;
    // 0x2dd000: 0x3c02003a
    ctx->pc = 0x2dd000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd004: 0x10000012
    ctx->pc = 0x2DD004u;
    {
        const bool branch_taken_0x2dd004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD008u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 10704), GPR_U32(ctx, 0));
        if (branch_taken_0x2dd004) {
            ctx->pc = 0x2DD050u;
            goto label_2dd050;
        }
    }
    ctx->pc = 0x2DD00Cu;
label_2dd00c:
    // 0x2dd00c: 0x8c4229c0
    ctx->pc = 0x2dd00cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x2dd010: 0x1040000c
    ctx->pc = 0x2DD010u;
    {
        const bool branch_taken_0x2dd010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD014u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd010) {
            ctx->pc = 0x2DD044u;
            goto label_2dd044;
        }
    }
    ctx->pc = 0x2DD018u;
    // 0x2dd018: 0x8c4229cc
    ctx->pc = 0x2dd018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10700)));
    // 0x2dd01c: 0x10400009
    ctx->pc = 0x2DD01Cu;
    {
        const bool branch_taken_0x2dd01c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD020u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd01c) {
            ctx->pc = 0x2DD044u;
            goto label_2dd044;
        }
    }
    ctx->pc = 0x2DD024u;
    // 0x2dd024: 0x8c4229d0
    ctx->pc = 0x2dd024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10704)));
    // 0x2dd028: 0x14400007
    ctx->pc = 0x2DD028u;
    {
        const bool branch_taken_0x2dd028 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD02Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd028) {
            ctx->pc = 0x2DD048u;
            goto label_2dd048;
        }
    }
    ctx->pc = 0x2DD030u;
    // 0x2dd030: 0x8c6229c4
    ctx->pc = 0x2dd030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10692)));
    // 0x2dd034: 0x54400006
    ctx->pc = 0x2DD034u;
    {
        const bool branch_taken_0x2dd034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dd034) {
            ctx->pc = 0x2DD038u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 10692), GPR_U32(ctx, 0));
            ctx->pc = 0x2DD050u;
            goto label_2dd050;
        }
    }
    ctx->pc = 0x2DD03Cu;
    // 0x2dd03c: 0x10000005
    ctx->pc = 0x2DD03Cu;
    {
        const bool branch_taken_0x2dd03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD040u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd03c) {
            ctx->pc = 0x2DD054u;
            goto label_2dd054;
        }
    }
    ctx->pc = 0x2DD044u;
label_2dd044:
    // 0x2dd044: 0x3c03003a
    ctx->pc = 0x2dd044u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2dd048:
    // 0x2dd048: 0x24020001
    ctx->pc = 0x2dd048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd04c: 0xac6229c4
    ctx->pc = 0x2dd04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10692), GPR_U32(ctx, 2));
label_2dd050:
    // 0x2dd050: 0x3c02003a
    ctx->pc = 0x2dd050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2dd054:
    // 0x2dd054: 0x8c4229cc
    ctx->pc = 0x2dd054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10700)));
    // 0x2dd058: 0x14400005
    ctx->pc = 0x2DD058u;
    {
        const bool branch_taken_0x2dd058 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD05Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd058) {
            ctx->pc = 0x2DD070u;
            goto label_2dd070;
        }
    }
    ctx->pc = 0x2DD060u;
    // 0x2dd060: 0x3c02003a
    ctx->pc = 0x2dd060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd064: 0x8c4229d0
    ctx->pc = 0x2dd064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10704)));
    // 0x2dd068: 0x104000ad
    ctx->pc = 0x2DD068u;
    {
        const bool branch_taken_0x2dd068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD06Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd068) {
            ctx->pc = 0x2DD320u;
            goto label_2dd320;
        }
    }
    ctx->pc = 0x2DD070u;
label_2dd070:
    // 0x2dd070: 0x8c422d9c
    ctx->pc = 0x2dd070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11676)));
    // 0x2dd074: 0x1040000c
    ctx->pc = 0x2DD074u;
    {
        const bool branch_taken_0x2dd074 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD078u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd074) {
            ctx->pc = 0x2DD0A8u;
            goto label_2dd0a8;
        }
    }
    ctx->pc = 0x2DD07Cu;
    // 0x2dd07c: 0x8e820008
    ctx->pc = 0x2dd07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2dd080: 0x2842000b
    ctx->pc = 0x2dd080u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x2dd084: 0x14400009
    ctx->pc = 0x2DD084u;
    {
        const bool branch_taken_0x2dd084 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD088u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2dd084) {
            ctx->pc = 0x2DD0ACu;
            goto label_2dd0ac;
        }
    }
    ctx->pc = 0x2DD08Cu;
    // 0x2dd08c: 0x3c04003a
    ctx->pc = 0x2dd08cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd090: 0xc0b784c
    ctx->pc = 0x2DD090u;
    SET_GPR_U32(ctx, 31, 0x2DD098u);
    ctx->pc = 0x2DD094u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10816));
    ctx->pc = 0x2DE130u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecAbort_0x2de130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD098u; }
    }
    if (ctx->pc != 0x2DD098u) { return; }
    ctx->pc = 0x2DD098u;
    // 0x2dd098: 0x3c04003a
    ctx->pc = 0x2dd098u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd09c: 0xc0b7ac8
    ctx->pc = 0x2DD09Cu;
    SET_GPR_U32(ctx, 31, 0x2DD0A4u);
    ctx->pc = 0x2DD0A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11000));
    ctx->pc = 0x2DEB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecReset_0x2deb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0A4u; }
    }
    if (ctx->pc != 0x2DD0A4u) { return; }
    ctx->pc = 0x2DD0A4u;
    // 0x2dd0a4: 0x3c03003a
    ctx->pc = 0x2dd0a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2dd0a8:
    // 0x2dd0a8: 0x24020002
    ctx->pc = 0x2dd0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2dd0ac:
    // 0x2dd0ac: 0xac6229b0
    ctx->pc = 0x2dd0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10672), GPR_U32(ctx, 2));
    // 0x2dd0b0: 0x220202d
    ctx->pc = 0x2dd0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd0b4: 0xc0b76ba
    ctx->pc = 0x2DD0B4u;
    SET_GPR_U32(ctx, 31, 0x2DD0BCu);
    ctx->pc = 0x2DD0B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DDAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginPut_0x2ddae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0BCu; }
    }
    if (ctx->pc != 0x2DD0BCu) { return; }
    ctx->pc = 0x2DD0BCu;
    // 0x2dd0bc: 0x40802d
    ctx->pc = 0x2dd0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd0c0: 0xc0b73ae
    ctx->pc = 0x2DD0C0u;
    SET_GPR_U32(ctx, 31, 0x2DD0C8u);
    ctx->pc = 0x2DD0C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DCEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckReadBuf_0x2dceb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0C8u; }
    }
    if (ctx->pc != 0x2DD0C8u) { return; }
    ctx->pc = 0x2DD0C8u;
    // 0x2dd0c8: 0x14400098
    ctx->pc = 0x2DD0C8u;
    {
        const bool branch_taken_0x2dd0c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD0CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd0c8) {
            ctx->pc = 0x2DD32Cu;
            goto label_2dd32c;
        }
    }
    ctx->pc = 0x2DD0D0u;
    // 0x2dd0d0: 0x3c03003a
    ctx->pc = 0x2dd0d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd0d4: 0x24020003
    ctx->pc = 0x2dd0d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dd0d8: 0xac6229b0
    ctx->pc = 0x2dd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10672), GPR_U32(ctx, 2));
    // 0x2dd0dc: 0x3c02003a
    ctx->pc = 0x2dd0dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd0e0: 0x8c422d94
    ctx->pc = 0x2dd0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11668)));
    // 0x2dd0e4: 0x1840003f
    ctx->pc = 0x2DD0E4u;
    {
        const bool branch_taken_0x2dd0e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DD0E8u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2dd0e4) {
            ctx->pc = 0x2DD1E4u;
            goto label_2dd1e4;
        }
    }
    ctx->pc = 0x2DD0ECu;
    // 0x2dd0ec: 0xf0102a
    ctx->pc = 0x2dd0ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x2dd0f0: 0x1040003c
    ctx->pc = 0x2DD0F0u;
    {
        const bool branch_taken_0x2dd0f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD0F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
        if (branch_taken_0x2dd0f0) {
            ctx->pc = 0x2DD1E4u;
            goto label_2dd1e4;
        }
    }
    ctx->pc = 0x2DD0F8u;
    // 0x2dd0f8: 0x3c030005
    ctx->pc = 0x2dd0f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x2dd0fc: 0x2231821
    ctx->pc = 0x2dd0fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2dd100: 0x8c650008
    ctx->pc = 0x2dd100u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dd104: 0xac458000
    ctx->pc = 0x2dd104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934528), GPR_U32(ctx, 5));
    // 0x2dd108: 0x3c04003e
    ctx->pc = 0x2dd108u;
    SET_GPR_U32(ctx, 4, ((uint32_t)62 << 16));
    // 0x2dd10c: 0x8c620004
    ctx->pc = 0x2dd10cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dd110: 0xac828004
    ctx->pc = 0x2dd110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294934532), GPR_U32(ctx, 2));
    // 0x2dd114: 0x3c04003e
    ctx->pc = 0x2dd114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)62 << 16));
    // 0x2dd118: 0x8c620000
    ctx->pc = 0x2dd118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd11c: 0xac828008
    ctx->pc = 0x2dd11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294934536), GPR_U32(ctx, 2));
    // 0x2dd120: 0xa23023
    ctx->pc = 0x2dd120u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2dd124: 0xe6102a
    ctx->pc = 0x2dd124u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x2dd128: 0x1440000b
    ctx->pc = 0x2DD128u;
    {
        const bool branch_taken_0x2dd128 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD12Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd128) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DD130u;
    // 0x2dd130: 0xc0b77c4
    ctx->pc = 0x2DD130u;
    SET_GPR_U32(ctx, 31, 0x2DD138u);
    ctx->pc = 0x2DD134u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2DDF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        strFileRead_0x2ddf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD138u; }
    }
    if (ctx->pc != 0x2DD138u) { return; }
    ctx->pc = 0x2DD138u;
    // 0x2dd138: 0x40802d
    ctx->pc = 0x2dd138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd13c: 0x3c060001
    ctx->pc = 0x2dd13cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x2dd140: 0x260202d
    ctx->pc = 0x2dd140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd144: 0x220282d
    ctx->pc = 0x2dd144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd148: 0xc0b77c4
    ctx->pc = 0x2DD148u;
    SET_GPR_U32(ctx, 31, 0x2DD150u);
    ctx->pc = 0x2DD14Cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->pc = 0x2DDF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        strFileRead_0x2ddf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD150u; }
    }
    if (ctx->pc != 0x2DD150u) { return; }
    ctx->pc = 0x2DD150u;
    // 0x2dd150: 0x10000005
    ctx->pc = 0x2DD150u;
    {
        const bool branch_taken_0x2dd150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD154u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x2dd150) {
            ctx->pc = 0x2DD168u;
            goto label_2dd168;
        }
    }
    ctx->pc = 0x2DD158u;
label_2dd158:
    // 0x2dd158: 0x8fa50000
    ctx->pc = 0x2dd158u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd15c: 0xc0b77c4
    ctx->pc = 0x2DD15Cu;
    SET_GPR_U32(ctx, 31, 0x2DD164u);
    ctx->pc = 0x2DD160u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    ctx->pc = 0x2DDF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        strFileRead_0x2ddf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD164u; }
    }
    if (ctx->pc != 0x2DD164u) { return; }
    ctx->pc = 0x2DD164u;
    // 0x2dd164: 0x40802d
    ctx->pc = 0x2dd164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd168:
    // 0x2dd168: 0xc0b73ae
    ctx->pc = 0x2DD168u;
    SET_GPR_U32(ctx, 31, 0x2DD170u);
    ctx->pc = 0x2DD16Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DCEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckReadBuf_0x2dceb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD170u; }
    }
    if (ctx->pc != 0x2DD170u) { return; }
    ctx->pc = 0x2DD170u;
    // 0x2dd170: 0x1440006e
    ctx->pc = 0x2DD170u;
    {
        const bool branch_taken_0x2dd170 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD174u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd170) {
            ctx->pc = 0x2DD32Cu;
            goto label_2dd32c;
        }
    }
    ctx->pc = 0x2DD178u;
    // 0x2dd178: 0x3c03003a
    ctx->pc = 0x2dd178u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd17c: 0x24020004
    ctx->pc = 0x2dd17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd180: 0xac6229b0
    ctx->pc = 0x2dd180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10672), GPR_U32(ctx, 2));
    // 0x2dd184: 0x3c04003e
    ctx->pc = 0x2dd184u;
    SET_GPR_U32(ctx, 4, ((uint32_t)62 << 16));
    // 0x2dd188: 0x3c030005
    ctx->pc = 0x2dd188u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x2dd18c: 0x2231821
    ctx->pc = 0x2dd18cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2dd190: 0x8c620008
    ctx->pc = 0x2dd190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dd194: 0xac828000
    ctx->pc = 0x2dd194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294934528), GPR_U32(ctx, 2));
    // 0x2dd198: 0x3c04003e
    ctx->pc = 0x2dd198u;
    SET_GPR_U32(ctx, 4, ((uint32_t)62 << 16));
    // 0x2dd19c: 0x8c620004
    ctx->pc = 0x2dd19cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dd1a0: 0xac828004
    ctx->pc = 0x2dd1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294934532), GPR_U32(ctx, 2));
    // 0x2dd1a4: 0x3c04003e
    ctx->pc = 0x2dd1a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)62 << 16));
    // 0x2dd1a8: 0x8c620000
    ctx->pc = 0x2dd1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd1ac: 0xac828008
    ctx->pc = 0x2dd1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294934536), GPR_U32(ctx, 2));
    // 0x2dd1b0: 0x220202d
    ctx->pc = 0x2dd1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1b4: 0xc0b76c6
    ctx->pc = 0x2DD1B4u;
    SET_GPR_U32(ctx, 31, 0x2DD1BCu);
    ctx->pc = 0x2DD1B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DDB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        readBufEndPut_0x2ddb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD1BCu; }
    }
    if (ctx->pc != 0x2DD1BCu) { return; }
    ctx->pc = 0x2DD1BCu;
    // 0x2dd1bc: 0x3c03003e
    ctx->pc = 0x2dd1bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x2dd1c0: 0xac62800c
    ctx->pc = 0x2dd1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294934540), GPR_U32(ctx, 2));
    // 0x2dd1c4: 0xc0b73ae
    ctx->pc = 0x2DD1C4u;
    SET_GPR_U32(ctx, 31, 0x2DD1CCu);
    ctx->pc = 0x2DD1C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DCEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckReadBuf_0x2dceb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD1CCu; }
    }
    if (ctx->pc != 0x2DD1CCu) { return; }
    ctx->pc = 0x2DD1CCu;
    // 0x2dd1cc: 0x14400057
    ctx->pc = 0x2DD1CCu;
    {
        const bool branch_taken_0x2dd1cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD1D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd1cc) {
            ctx->pc = 0x2DD32Cu;
            goto label_2dd32c;
        }
    }
    ctx->pc = 0x2DD1D4u;
    // 0x2dd1d4: 0x3c03003a
    ctx->pc = 0x2dd1d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd1d8: 0x8c622d94
    ctx->pc = 0x2dd1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 11668)));
    // 0x2dd1dc: 0x501023
    ctx->pc = 0x2dd1dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dd1e0: 0xac622d94
    ctx->pc = 0x2dd1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11668), GPR_U32(ctx, 2));
label_2dd1e4:
    // 0x2dd1e4: 0x3c10003a
    ctx->pc = 0x2dd1e4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dd1e8: 0x24020005
    ctx->pc = 0x2dd1e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dd1ec: 0xc0b74d4
    ctx->pc = 0x2DD1ECu;
    SET_GPR_U32(ctx, 31, 0x2DD1F4u);
    ctx->pc = 0x2DD1F0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    ctx->pc = 0x2DD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x2dd350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD1F4u; }
    }
    if (ctx->pc != 0x2DD1F4u) { return; }
    ctx->pc = 0x2DD1F4u;
    // 0x2dd1f4: 0x24020006
    ctx->pc = 0x2dd1f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dd1f8: 0xae0229b0
    ctx->pc = 0x2dd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    // 0x2dd1fc: 0x220202d
    ctx->pc = 0x2dd1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd200: 0xc0b76d8
    ctx->pc = 0x2DD200u;
    SET_GPR_U32(ctx, 31, 0x2DD208u);
    ctx->pc = 0x2DD204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x2DDB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginGet_0x2ddb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD208u; }
    }
    if (ctx->pc != 0x2DD208u) { return; }
    ctx->pc = 0x2DD208u;
    // 0x2dd208: 0x40802d
    ctx->pc = 0x2dd208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd20c: 0xc0b73ae
    ctx->pc = 0x2DD20Cu;
    SET_GPR_U32(ctx, 31, 0x2DD214u);
    ctx->pc = 0x2DD210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DCEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckReadBuf_0x2dceb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD214u; }
    }
    if (ctx->pc != 0x2DD214u) { return; }
    ctx->pc = 0x2DD214u;
    // 0x2dd214: 0x14400045
    ctx->pc = 0x2DD214u;
    {
        const bool branch_taken_0x2dd214 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD218u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd214) {
            ctx->pc = 0x2DD32Cu;
            goto label_2dd32c;
        }
    }
    ctx->pc = 0x2DD21Cu;
    // 0x2dd21c: 0x3c12003a
    ctx->pc = 0x2dd21cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2dd220: 0x24020007
    ctx->pc = 0x2dd220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dd224: 0x1a000017
    ctx->pc = 0x2DD224u;
    {
        const bool branch_taken_0x2dd224 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2DD228u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 10672), GPR_U32(ctx, 2));
        if (branch_taken_0x2dd224) {
            ctx->pc = 0x2DD284u;
            goto label_2dd284;
        }
    }
    ctx->pc = 0x2DD22Cu;
    // 0x2dd22c: 0x3c020005
    ctx->pc = 0x2dd22cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2dd230: 0x2221021
    ctx->pc = 0x2dd230u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dd234: 0x280202d
    ctx->pc = 0x2dd234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd238: 0x8fa50004
    ctx->pc = 0x2dd238u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2dd23c: 0x200302d
    ctx->pc = 0x2dd23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd240: 0x220382d
    ctx->pc = 0x2dd240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd244: 0xc0bb414
    ctx->pc = 0x2DD244u;
    SET_GPR_U32(ctx, 31, 0x2DD24Cu);
    ctx->pc = 0x2DD248u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x2ED050u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDemuxPssRing_0x2ed050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD24Cu; }
    }
    if (ctx->pc != 0x2DD24Cu) { return; }
    ctx->pc = 0x2DD24Cu;
    // 0x2dd24c: 0x40802d
    ctx->pc = 0x2dd24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd250: 0x24020008
    ctx->pc = 0x2dd250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dd254: 0xae4229b0
    ctx->pc = 0x2dd254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10672), GPR_U32(ctx, 2));
    // 0x2dd258: 0x220202d
    ctx->pc = 0x2dd258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd25c: 0xc0b76ec
    ctx->pc = 0x2DD25Cu;
    SET_GPR_U32(ctx, 31, 0x2DD264u);
    ctx->pc = 0x2DD260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DDBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        readBufEndGet_0x2ddbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD264u; }
    }
    if (ctx->pc != 0x2DD264u) { return; }
    ctx->pc = 0x2DD264u;
    // 0x2dd264: 0xc0b73ae
    ctx->pc = 0x2DD264u;
    SET_GPR_U32(ctx, 31, 0x2DD26Cu);
    ctx->pc = 0x2DD268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DCEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckReadBuf_0x2dceb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD26Cu; }
    }
    if (ctx->pc != 0x2DD26Cu) { return; }
    ctx->pc = 0x2DD26Cu;
    // 0x2dd26c: 0x1440002f
    ctx->pc = 0x2DD26Cu;
    {
        const bool branch_taken_0x2dd26c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD270u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd26c) {
            ctx->pc = 0x2DD32Cu;
            goto label_2dd32c;
        }
    }
    ctx->pc = 0x2DD274u;
    // 0x2dd274: 0x3c03003a
    ctx->pc = 0x2dd274u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd278: 0x8c622d98
    ctx->pc = 0x2dd278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 11672)));
    // 0x2dd27c: 0x501023
    ctx->pc = 0x2dd27cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dd280: 0xac622d98
    ctx->pc = 0x2dd280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11672), GPR_U32(ctx, 2));
label_2dd284:
    // 0x2dd284: 0x3c10003a
    ctx->pc = 0x2dd284u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dd288: 0x24020009
    ctx->pc = 0x2dd288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dd28c: 0xc0b75dc
    ctx->pc = 0x2DD28Cu;
    SET_GPR_U32(ctx, 31, 0x2DD294u);
    ctx->pc = 0x2DD290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    ctx->pc = 0x2DD770u;
    {
        const uint32_t __entryPc = ctx->pc;
        proceedAudio_0x2dd770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD294u; }
    }
    if (ctx->pc != 0x2DD294u) { return; }
    ctx->pc = 0x2DD294u;
    // 0x2dd294: 0x2402000a
    ctx->pc = 0x2dd294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dd298: 0xae0229b0
    ctx->pc = 0x2dd298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    // 0x2dd29c: 0x3c02003a
    ctx->pc = 0x2dd29cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd2a0: 0x8c4229c0
    ctx->pc = 0x2dd2a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x2dd2a4: 0x1440001b
    ctx->pc = 0x2DD2A4u;
    {
        const bool branch_taken_0x2dd2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD2A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd2a4) {
            ctx->pc = 0x2DD314u;
            goto label_2dd314;
        }
    }
    ctx->pc = 0x2DD2ACu;
    // 0x2dd2ac: 0x3c04003a
    ctx->pc = 0x2dd2acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd2b0: 0xc0b7a1c
    ctx->pc = 0x2DD2B0u;
    SET_GPR_U32(ctx, 31, 0x2DD2B8u);
    ctx->pc = 0x2DD2B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10736));
    ctx->pc = 0x2DE870u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull_0x2de870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD2B8u; }
    }
    if (ctx->pc != 0x2DD2B8u) { return; }
    ctx->pc = 0x2DD2B8u;
    // 0x2dd2b8: 0x10400016
    ctx->pc = 0x2DD2B8u;
    {
        const bool branch_taken_0x2dd2b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD2BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd2b8) {
            ctx->pc = 0x2DD314u;
            goto label_2dd314;
        }
    }
    ctx->pc = 0x2DD2C0u;
    // 0x2dd2c0: 0xc0b74d8
    ctx->pc = 0x2DD2C0u;
    SET_GPR_U32(ctx, 31, 0x2DD2C8u);
    ctx->pc = 0x2DD360u;
    {
        const uint32_t __entryPc = ctx->pc;
        isAudioOK_0x2dd360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD2C8u; }
    }
    if (ctx->pc != 0x2DD2C8u) { return; }
    ctx->pc = 0x2DD2C8u;
    // 0x2dd2c8: 0x10400012
    ctx->pc = 0x2DD2C8u;
    {
        const bool branch_taken_0x2dd2c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD2CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd2c8) {
            ctx->pc = 0x2DD314u;
            goto label_2dd314;
        }
    }
    ctx->pc = 0x2DD2D0u;
    // 0x2dd2d0: 0x2402000b
    ctx->pc = 0x2dd2d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dd2d4: 0xae0229b0
    ctx->pc = 0x2dd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    // 0x2dd2d8: 0xc0b71fe
    ctx->pc = 0x2DD2D8u;
    SET_GPR_U32(ctx, 31, 0x2DD2E0u);
    ctx->pc = 0x2DD2DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2DC7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        startDisplay_0x2dc7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD2E0u; }
    }
    if (ctx->pc != 0x2DD2E0u) { return; }
    ctx->pc = 0x2DD2E0u;
    // 0x2dd2e0: 0x3c020031
    ctx->pc = 0x2dd2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2dd2e4: 0x8c42f190
    ctx->pc = 0x2dd2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x2dd2e8: 0x14400007
    ctx->pc = 0x2DD2E8u;
    {
        const bool branch_taken_0x2dd2e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD2ECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd2e8) {
            ctx->pc = 0x2DD308u;
            goto label_2dd308;
        }
    }
    ctx->pc = 0x2DD2F0u;
    // 0x2dd2f0: 0x2402000c
    ctx->pc = 0x2dd2f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dd2f4: 0xae0229b0
    ctx->pc = 0x2dd2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    // 0x2dd2f8: 0x3c04003a
    ctx->pc = 0x2dd2f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd2fc: 0xc0b7ac6
    ctx->pc = 0x2DD2FCu;
    SET_GPR_U32(ctx, 31, 0x2DD304u);
    ctx->pc = 0x2DD300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11000));
    ctx->pc = 0x2DEB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecStart_0x2deb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD304u; }
    }
    if (ctx->pc != 0x2DD304u) { return; }
    ctx->pc = 0x2DD304u;
    // 0x2dd304: 0x3c03003a
    ctx->pc = 0x2dd304u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2dd308:
    // 0x2dd308: 0x24020001
    ctx->pc = 0x2dd308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd30c: 0xac6229c0
    ctx->pc = 0x2dd30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10688), GPR_U32(ctx, 2));
    // 0x2dd310: 0x3c02003a
    ctx->pc = 0x2dd310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2dd314:
    // 0x2dd314: 0xac4029b0
    ctx->pc = 0x2dd314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10672), GPR_U32(ctx, 0));
    // 0x2dd318: 0x10000004
    ctx->pc = 0x2DD318u;
    {
        const bool branch_taken_0x2dd318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD31Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2dd318) {
            ctx->pc = 0x2DD32Cu;
            goto label_2dd32c;
        }
    }
    ctx->pc = 0x2DD320u;
label_2dd320:
    // 0x2dd320: 0x3c03003a
    ctx->pc = 0x2dd320u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd324: 0x2402ffff
    ctx->pc = 0x2dd324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dd328: 0xac6229b0
    ctx->pc = 0x2dd328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10672), GPR_U32(ctx, 2));
label_2dd32c:
    // 0x2dd32c: 0xdfbf0060
    ctx->pc = 0x2dd32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd330: 0xdfb40050
    ctx->pc = 0x2dd330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd334: 0xdfb30040
    ctx->pc = 0x2dd334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd338: 0xdfb20030
    ctx->pc = 0x2dd338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd33c: 0xdfb10020
    ctx->pc = 0x2dd33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd340: 0xdfb00010
    ctx->pc = 0x2dd340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd344: 0x3e00008
    ctx->pc = 0x2DD344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCF74u: goto label_2dcf74;
            case 0x2DCFD4u: goto label_2dcfd4;
            case 0x2DD00Cu: goto label_2dd00c;
            case 0x2DD044u: goto label_2dd044;
            case 0x2DD048u: goto label_2dd048;
            case 0x2DD050u: goto label_2dd050;
            case 0x2DD054u: goto label_2dd054;
            case 0x2DD070u: goto label_2dd070;
            case 0x2DD0A8u: goto label_2dd0a8;
            case 0x2DD0ACu: goto label_2dd0ac;
            case 0x2DD158u: goto label_2dd158;
            case 0x2DD168u: goto label_2dd168;
            case 0x2DD1E4u: goto label_2dd1e4;
            case 0x2DD284u: goto label_2dd284;
            case 0x2DD308u: goto label_2dd308;
            case 0x2DD314u: goto label_2dd314;
            case 0x2DD320u: goto label_2dd320;
            case 0x2DD32Cu: goto label_2dd32c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DD34Cu;
}
