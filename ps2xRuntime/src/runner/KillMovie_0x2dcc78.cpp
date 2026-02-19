#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: KillMovie
// Address: 0x2dcc78 - 0x2dce6c
void KillMovie_0x2dcc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dcc78u;

    // 0x2dcc78: 0x27bdff90
    ctx->pc = 0x2dcc78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dcc7c: 0xffbf0060
    ctx->pc = 0x2dcc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2dcc80: 0xffb50050
    ctx->pc = 0x2dcc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2dcc84: 0xffb40040
    ctx->pc = 0x2dcc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2dcc88: 0xffb30030
    ctx->pc = 0x2dcc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2dcc8c: 0xffb20020
    ctx->pc = 0x2dcc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dcc90: 0xffb10010
    ctx->pc = 0x2dcc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dcc94: 0xffb00000
    ctx->pc = 0x2dcc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dcc98: 0x3c02003a
    ctx->pc = 0x2dcc98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcc9c: 0x24512a40
    ctx->pc = 0x2dcc9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 10816));
    // 0x2dcca0: 0x3c02003a
    ctx->pc = 0x2dcca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcca4: 0x8c422d90
    ctx->pc = 0x2dcca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11664)));
    // 0x2dcca8: 0x10400051
    ctx->pc = 0x2DCCA8u;
    {
        const bool branch_taken_0x2dcca8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCCACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcca8) {
            ctx->pc = 0x2DCDF0u;
            goto label_2dcdf0;
        }
    }
    ctx->pc = 0x2DCCB0u;
    // 0x2dccb0: 0x24020001
    ctx->pc = 0x2dccb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dccb4: 0xac6229e8
    ctx->pc = 0x2dccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10728), GPR_U32(ctx, 2));
    // 0x2dccb8: 0x3c03003a
    ctx->pc = 0x2dccb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dccbc: 0x8c622d9c
    ctx->pc = 0x2dccbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 11676)));
    // 0x2dccc0: 0x34420001
    ctx->pc = 0x2dccc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2dccc4: 0xac622d9c
    ctx->pc = 0x2dccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11676), GPR_U32(ctx, 2));
label_2dccc8:
    // 0x2dccc8: 0xc0b72fa
    ctx->pc = 0x2DCCC8u;
    SET_GPR_U32(ctx, 31, 0x2DCCD0u);
    ctx->pc = 0x2DCBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeMovie_0x2dcbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCCD0u; }
    }
    if (ctx->pc != 0x2DCCD0u) { return; }
    ctx->pc = 0x2DCCD0u;
    // 0x2dccd0: 0x1440fffd
    ctx->pc = 0x2DCCD0u;
    {
        const bool branch_taken_0x2dccd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCCD4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dccd0) {
            ctx->pc = 0x2DCCC8u;
            goto label_2dccc8;
        }
    }
    ctx->pc = 0x2DCCD8u;
    // 0x2dccd8: 0x24020002
    ctx->pc = 0x2dccd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dccdc: 0xac6229e8
    ctx->pc = 0x2dccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10728), GPR_U32(ctx, 2));
    // 0x2dcce0: 0x60802d
    ctx->pc = 0x2dcce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcce4: 0x24140015
    ctx->pc = 0x2dcce4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 21));
    // 0x2dcce8: 0x24130016
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 22));
    // 0x2dccec: 0x10000004
    ctx->pc = 0x2DCCECu;
    {
        const bool branch_taken_0x2dccec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCCF0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x2dccec) {
            ctx->pc = 0x2DCD00u;
            goto label_2dcd00;
        }
    }
    ctx->pc = 0x2DCCF4u;
    // 0x2dccf4: 0x0
    ctx->pc = 0x2dccf4u;
    // NOP
label_2dccf8:
    // 0x2dccf8: 0xc0b74d4
    ctx->pc = 0x2DCCF8u;
    SET_GPR_U32(ctx, 31, 0x2DCD00u);
    ctx->pc = 0x2DCCFCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 18));
    ctx->pc = 0x2DD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x2dd350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD00u; }
    }
    if (ctx->pc != 0x2DCD00u) { return; }
    ctx->pc = 0x2DCD00u;
label_2dcd00:
    // 0x2dcd00: 0xc0b7850
    ctx->pc = 0x2DCD00u;
    SET_GPR_U32(ctx, 31, 0x2DCD08u);
    ctx->pc = 0x2DCD04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE140u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x2de140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD08u; }
    }
    if (ctx->pc != 0x2DCD08u) { return; }
    ctx->pc = 0x2DCD08u;
    // 0x2dcd08: 0x14400008
    ctx->pc = 0x2DCD08u;
    {
        const bool branch_taken_0x2dcd08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCD0Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcd08) {
            ctx->pc = 0x2DCD2Cu;
            goto label_2dcd2c;
        }
    }
    ctx->pc = 0x2DCD10u;
    // 0x2dcd10: 0xae1429e8
    ctx->pc = 0x2dcd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 20));
    // 0x2dcd14: 0xc0b787c
    ctx->pc = 0x2DCD14u;
    SET_GPR_U32(ctx, 31, 0x2DCD1Cu);
    ctx->pc = 0x2DCD18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecFlush_0x2de1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD1Cu; }
    }
    if (ctx->pc != 0x2DCD1Cu) { return; }
    ctx->pc = 0x2DCD1Cu;
    // 0x2dcd1c: 0xc0b722a
    ctx->pc = 0x2DCD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCD24u);
    ctx->pc = 0x2DCD20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 19));
    ctx->pc = 0x2DC8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ThreadIsHung_0x2dc8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD24u; }
    }
    if (ctx->pc != 0x2DCD24u) { return; }
    ctx->pc = 0x2DCD24u;
    // 0x2dcd24: 0x1040fff4
    ctx->pc = 0x2DCD24u;
    {
        const bool branch_taken_0x2dcd24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCD28u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcd24) {
            ctx->pc = 0x2DCCF8u;
            goto label_2dccf8;
        }
    }
    ctx->pc = 0x2DCD2Cu;
label_2dcd2c:
    // 0x2dcd2c: 0x24020003
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dcd30: 0xac6229e8
    ctx->pc = 0x2dcd30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10728), GPR_U32(ctx, 2));
    // 0x2dcd34: 0x2415001f
    ctx->pc = 0x2dcd34u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 31));
    // 0x2dcd38: 0x24140020
    ctx->pc = 0x2dcd38u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dcd3c: 0x24130021
    ctx->pc = 0x2dcd3cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2dcd40: 0x24120003
    ctx->pc = 0x2dcd40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dcd44: 0x0
    ctx->pc = 0x2dcd44u;
    // NOP
label_2dcd48:
    // 0x2dcd48: 0xc0b78b2
    ctx->pc = 0x2DCD48u;
    SET_GPR_U32(ctx, 31, 0x2DCD50u);
    ctx->pc = 0x2DCD4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecIsFlushed_0x2de2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD50u; }
    }
    if (ctx->pc != 0x2DCD50u) { return; }
    ctx->pc = 0x2DCD50u;
    // 0x2dcd50: 0x1440000c
    ctx->pc = 0x2DCD50u;
    {
        const bool branch_taken_0x2dcd50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCD54u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcd50) {
            ctx->pc = 0x2DCD84u;
            goto label_2dcd84;
        }
    }
    ctx->pc = 0x2DCD58u;
    // 0x2dcd58: 0xc0b722a
    ctx->pc = 0x2DCD58u;
    SET_GPR_U32(ctx, 31, 0x2DCD60u);
    ctx->pc = 0x2DCD5Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 21));
    ctx->pc = 0x2DC8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ThreadIsHung_0x2dc8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD60u; }
    }
    if (ctx->pc != 0x2DCD60u) { return; }
    ctx->pc = 0x2DCD60u;
    // 0x2dcd60: 0x54400009
    ctx->pc = 0x2DCD60u;
    {
        const bool branch_taken_0x2dcd60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dcd60) {
            ctx->pc = 0x2DCD64u;
            SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
            ctx->pc = 0x2DCD88u;
            goto label_2dcd88;
        }
    }
    ctx->pc = 0x2DCD68u;
    // 0x2dcd68: 0xc0b74d4
    ctx->pc = 0x2DCD68u;
    SET_GPR_U32(ctx, 31, 0x2DCD70u);
    ctx->pc = 0x2DCD6Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 20));
    ctx->pc = 0x2DD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x2dd350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD70u; }
    }
    if (ctx->pc != 0x2DCD70u) { return; }
    ctx->pc = 0x2DCD70u;
    // 0x2dcd70: 0xae1329e8
    ctx->pc = 0x2dcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 19));
    // 0x2dcd74: 0xc0b7850
    ctx->pc = 0x2DCD74u;
    SET_GPR_U32(ctx, 31, 0x2DCD7Cu);
    ctx->pc = 0x2DCD78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE140u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x2de140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD7Cu; }
    }
    if (ctx->pc != 0x2DCD7Cu) { return; }
    ctx->pc = 0x2DCD7Cu;
    // 0x2dcd7c: 0x1452fff2
    ctx->pc = 0x2DCD7Cu;
    {
        const bool branch_taken_0x2dcd7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x2dcd7c) {
            ctx->pc = 0x2DCD48u;
            goto label_2dcd48;
        }
    }
    ctx->pc = 0x2DCD84u;
label_2dcd84:
    // 0x2dcd84: 0x3c10003a
    ctx->pc = 0x2dcd84u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2dcd88:
    // 0x2dcd88: 0x24020004
    ctx->pc = 0x2dcd88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dcd8c: 0xc0b720c
    ctx->pc = 0x2DCD8Cu;
    SET_GPR_U32(ctx, 31, 0x2DCD94u);
    ctx->pc = 0x2DCD90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 2));
    ctx->pc = 0x2DC830u;
    {
        const uint32_t __entryPc = ctx->pc;
        endDisplay_0x2dc830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD94u; }
    }
    if (ctx->pc != 0x2DCD94u) { return; }
    ctx->pc = 0x2DCD94u;
    // 0x2dcd94: 0x202d
    ctx->pc = 0x2dcd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd98: 0xc0b8338
    ctx->pc = 0x2DCD98u;
    SET_GPR_U32(ctx, 31, 0x2DCDA0u);
    ctx->pc = 0x2DCD9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDA0u; }
    }
    if (ctx->pc != 0x2DCDA0u) { return; }
    ctx->pc = 0x2DCDA0u;
    // 0x2dcda0: 0x24020005
    ctx->pc = 0x2dcda0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dcda4: 0xae0229e8
    ctx->pc = 0x2dcda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 2));
    // 0x2dcda8: 0x3c020031
    ctx->pc = 0x2dcda8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2dcdac: 0x8c42f190
    ctx->pc = 0x2dcdacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x2dcdb0: 0x14400005
    ctx->pc = 0x2DCDB0u;
    {
        const bool branch_taken_0x2dcdb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCDB4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcdb0) {
            ctx->pc = 0x2DCDC8u;
            goto label_2dcdc8;
        }
    }
    ctx->pc = 0x2DCDB8u;
    // 0x2dcdb8: 0x3c04003a
    ctx->pc = 0x2dcdb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dcdbc: 0xc0b7ac8
    ctx->pc = 0x2DCDBCu;
    SET_GPR_U32(ctx, 31, 0x2DCDC4u);
    ctx->pc = 0x2DCDC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11000));
    ctx->pc = 0x2DEB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecReset_0x2deb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDC4u; }
    }
    if (ctx->pc != 0x2DCDC4u) { return; }
    ctx->pc = 0x2DCDC4u;
    // 0x2dcdc4: 0x3c03003a
    ctx->pc = 0x2dcdc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2dcdc8:
    // 0x2dcdc8: 0x24020006
    ctx->pc = 0x2dcdc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dcdcc: 0xc0b759c
    ctx->pc = 0x2DCDCCu;
    SET_GPR_U32(ctx, 31, 0x2DCDD4u);
    ctx->pc = 0x2DCDD0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10728), GPR_U32(ctx, 2));
    ctx->pc = 0x2DD670u;
    {
        const uint32_t __entryPc = ctx->pc;
        termAll_0x2dd670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDD4u; }
    }
    if (ctx->pc != 0x2DCDD4u) { return; }
    ctx->pc = 0x2DCDD4u;
    // 0x2dcdd4: 0xc0aa366
    ctx->pc = 0x2DCDD4u;
    SET_GPR_U32(ctx, 31, 0x2DCDDCu);
    ctx->pc = 0x2A8D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOpenDisplay_0x2a8d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDDCu; }
    }
    if (ctx->pc != 0x2DCDDCu) { return; }
    ctx->pc = 0x2DCDDCu;
    // 0x2dcddc: 0x3c02003a
    ctx->pc = 0x2dcddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcde0: 0xac402d90
    ctx->pc = 0x2dcde0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11664), GPR_U32(ctx, 0));
    // 0x2dcde4: 0x3c03003a
    ctx->pc = 0x2dcde4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dcde8: 0x24020001
    ctx->pc = 0x2dcde8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcdec: 0xac6229bc
    ctx->pc = 0x2dcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10684), GPR_U32(ctx, 2));
label_2dcdf0:
    // 0x2dcdf0: 0x24110001
    ctx->pc = 0x2dcdf0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcdf4: 0x3c10003a
    ctx->pc = 0x2dcdf4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dcdf8: 0x24020009
    ctx->pc = 0x2dcdf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dcdfc: 0xae0229e8
    ctx->pc = 0x2dcdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 2));
    // 0x2dce00: 0x3c02003e
    ctx->pc = 0x2dce00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dce04: 0xac408014
    ctx->pc = 0x2dce04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934548), GPR_U32(ctx, 0));
    // 0x2dce08: 0x3c02003e
    ctx->pc = 0x2dce08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dce0c: 0xac408018
    ctx->pc = 0x2dce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934552), GPR_U32(ctx, 0));
    // 0x2dce10: 0x3c02003e
    ctx->pc = 0x2dce10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dce14: 0xac409050
    ctx->pc = 0x2dce14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938704), GPR_U32(ctx, 0));
    // 0x2dce18: 0x3c02003e
    ctx->pc = 0x2dce18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dce1c: 0xac409054
    ctx->pc = 0x2dce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938708), GPR_U32(ctx, 0));
    // 0x2dce20: 0x3c02003a
    ctx->pc = 0x2dce20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dce24: 0xac402a04
    ctx->pc = 0x2dce24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10756), GPR_U32(ctx, 0));
    // 0x2dce28: 0x3c02003e
    ctx->pc = 0x2dce28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dce2c: 0xac409058
    ctx->pc = 0x2dce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938712), GPR_U32(ctx, 0));
    // 0x2dce30: 0x3c02003e
    ctx->pc = 0x2dce30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dce34: 0xc0a8afe
    ctx->pc = 0x2DCE34u;
    SET_GPR_U32(ctx, 31, 0x2DCE3Cu);
    ctx->pc = 0x2DCE38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938716), GPR_U32(ctx, 0));
    ctx->pc = 0x2A2BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetGlobal_0x2a2bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE3Cu; }
    }
    if (ctx->pc != 0x2DCE3Cu) { return; }
    ctx->pc = 0x2DCE3Cu;
    // 0x2dce3c: 0x240203e7
    ctx->pc = 0x2dce3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 999));
    // 0x2dce40: 0xae0229e8
    ctx->pc = 0x2dce40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10728), GPR_U32(ctx, 2));
    // 0x2dce44: 0x220102d
    ctx->pc = 0x2dce44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce48: 0xdfbf0060
    ctx->pc = 0x2dce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dce4c: 0xdfb50050
    ctx->pc = 0x2dce4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dce50: 0xdfb40040
    ctx->pc = 0x2dce50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dce54: 0xdfb30030
    ctx->pc = 0x2dce54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dce58: 0xdfb20020
    ctx->pc = 0x2dce58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dce5c: 0xdfb10010
    ctx->pc = 0x2dce5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dce60: 0xdfb00000
    ctx->pc = 0x2dce60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce64: 0x3e00008
    ctx->pc = 0x2DCE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCE68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCCC8u: goto label_2dccc8;
            case 0x2DCCF8u: goto label_2dccf8;
            case 0x2DCD00u: goto label_2dcd00;
            case 0x2DCD2Cu: goto label_2dcd2c;
            case 0x2DCD48u: goto label_2dcd48;
            case 0x2DCD84u: goto label_2dcd84;
            case 0x2DCD88u: goto label_2dcd88;
            case 0x2DCDC8u: goto label_2dcdc8;
            case 0x2DCDF0u: goto label_2dcdf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DCE6Cu;
}
