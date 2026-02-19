#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBEndFrame
// Address: 0x2c5e68 - 0x2c616c
void MBEndFrame_0x2c5e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5e68u;

    // 0x2c5e68: 0x27bdffc0
    ctx->pc = 0x2c5e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5e6c: 0xffbf0030
    ctx->pc = 0x2c5e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c5e70: 0xffb20020
    ctx->pc = 0x2c5e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c5e74: 0xffb10010
    ctx->pc = 0x2c5e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c5e78: 0xffb00000
    ctx->pc = 0x2c5e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5e7c: 0x3c020036
    ctx->pc = 0x2c5e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c5e80: 0x8c52dee0
    ctx->pc = 0x2c5e80u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c5e84: 0x8e44002c
    ctx->pc = 0x2c5e84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2c5e88: 0x8c820004
    ctx->pc = 0x2c5e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c5e8c: 0x3c03ffff
    ctx->pc = 0x2c5e8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c5e90: 0x3463fb5f
    ctx->pc = 0x2c5e90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64351));
    // 0x2c5e94: 0x431024
    ctx->pc = 0x2c5e94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5e98: 0xc0b01ec
    ctx->pc = 0x2C5E98u;
    SET_GPR_U32(ctx, 31, 0x2C5EA0u);
    ctx->pc = 0x2C5E9Cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x2C07B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaWaitFinished_0x2c07b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EA0u; }
    }
    if (ctx->pc != 0x2C5EA0u) { return; }
    ctx->pc = 0x2C5EA0u;
    // 0x2c5ea0: 0xc0a92b6
    ctx->pc = 0x2C5EA0u;
    SET_GPR_U32(ctx, 31, 0x2C5EA8u);
    ctx->pc = 0x2A4AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugEndFrameStart_0x2a4ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EA8u; }
    }
    if (ctx->pc != 0x2C5EA8u) { return; }
    ctx->pc = 0x2C5EA8u;
    // 0x2c5ea8: 0x8e420010
    ctx->pc = 0x2c5ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2c5eac: 0x8c430010
    ctx->pc = 0x2c5eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c5eb0: 0x24020001
    ctx->pc = 0x2c5eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5eb4: 0x14620006
    ctx->pc = 0x2C5EB4u;
    {
        const bool branch_taken_0x2c5eb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C5EB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c5eb4) {
            ctx->pc = 0x2C5ED0u;
            goto label_2c5ed0;
        }
    }
    ctx->pc = 0x2C5EBCu;
    // 0x2c5ebc: 0xdfb20020
    ctx->pc = 0x2c5ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5ec0: 0xdfb10010
    ctx->pc = 0x2c5ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5ec4: 0xdfb00000
    ctx->pc = 0x2c5ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5ec8: 0x80b15d2
    ctx->pc = 0x2C5EC8u;
    ctx->pc = 0x2C5ECCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C5748u;
    MBClearText_0x2c5748(rdram, ctx, runtime); return;
    ctx->pc = 0x2C5ED0u;
label_2c5ed0:
    // 0x2c5ed0: 0xc0aa306
    ctx->pc = 0x2C5ED0u;
    SET_GPR_U32(ctx, 31, 0x2C5ED8u);
    ctx->pc = 0x2A8C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDiagMenu_0x2a8c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5ED8u; }
    }
    if (ctx->pc != 0x2C5ED8u) { return; }
    ctx->pc = 0x2C5ED8u;
    // 0x2c5ed8: 0x3c030038
    ctx->pc = 0x2c5ed8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c5edc: 0x8c62b178
    ctx->pc = 0x2c5edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947192)));
    // 0x2c5ee0: 0x24420001
    ctx->pc = 0x2c5ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5ee4: 0x3042007f
    ctx->pc = 0x2c5ee4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 127));
    // 0x2c5ee8: 0xac62b178
    ctx->pc = 0x2c5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947192), GPR_U32(ctx, 2));
    // 0x2c5eec: 0x3c030038
    ctx->pc = 0x2c5eecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c5ef0: 0x2463b1c0
    ctx->pc = 0x2c5ef0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947264));
    // 0x2c5ef4: 0x21080
    ctx->pc = 0x2c5ef4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5ef8: 0x431021
    ctx->pc = 0x2c5ef8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5efc: 0x3c031000
    ctx->pc = 0x2c5efcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2c5f00: 0x8c630000
    ctx->pc = 0x2c5f00u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2c5f04: 0xac430000
    ctx->pc = 0x2c5f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c5f08: 0x40044800
    ctx->pc = 0x2c5f08u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
    // 0x2c5f0c: 0x3c03003a
    ctx->pc = 0x2c5f0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c5f10: 0x24632050
    ctx->pc = 0x2c5f10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8272));
    // 0x2c5f14: 0x8c620048
    ctx->pc = 0x2c5f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2c5f18: 0x822023
    ctx->pc = 0x2c5f18u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5f1c: 0x8c620040
    ctx->pc = 0x2c5f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2c5f20: 0x822021
    ctx->pc = 0x2c5f20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5f24: 0xac640040
    ctx->pc = 0x2c5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x2c5f28: 0x8c620044
    ctx->pc = 0x2c5f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2c5f2c: 0x24420001
    ctx->pc = 0x2c5f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5f30: 0xac620044
    ctx->pc = 0x2c5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x2c5f34: 0x3c030038
    ctx->pc = 0x2c5f34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
label_2c5f38:
    // 0x2c5f38: 0x8c62b17c
    ctx->pc = 0x2c5f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947196)));
    // 0x2c5f3c: 0x0
    ctx->pc = 0x2c5f3cu;
    // NOP
    // 0x2c5f40: 0x0
    ctx->pc = 0x2c5f40u;
    // NOP
    // 0x2c5f44: 0x0
    ctx->pc = 0x2c5f44u;
    // NOP
    // 0x2c5f48: 0x0
    ctx->pc = 0x2c5f48u;
    // NOP
    // 0x2c5f4c: 0x1440fffa
    ctx->pc = 0x2C5F4Cu;
    {
        const bool branch_taken_0x2c5f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c5f4c) {
            ctx->pc = 0x2C5F38u;
            goto label_2c5f38;
        }
    }
    ctx->pc = 0x2C5F54u;
    // 0x2c5f54: 0xc0aac0a
    ctx->pc = 0x2C5F54u;
    SET_GPR_U32(ctx, 31, 0x2C5F5Cu);
    ctx->pc = 0x2AB028u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetSeqCnt_0x2ab028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F5Cu; }
    }
    if (ctx->pc != 0x2C5F5Cu) { return; }
    ctx->pc = 0x2C5F5Cu;
    // 0x2c5f5c: 0x40044800
    ctx->pc = 0x2c5f5cu;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
    // 0x2c5f60: 0x3c03003a
    ctx->pc = 0x2c5f60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c5f64: 0x24632050
    ctx->pc = 0x2c5f64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8272));
    // 0x2c5f68: 0x8c620038
    ctx->pc = 0x2c5f68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2c5f6c: 0x822023
    ctx->pc = 0x2c5f6cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5f70: 0x8c620030
    ctx->pc = 0x2c5f70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2c5f74: 0x822021
    ctx->pc = 0x2c5f74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5f78: 0xac640030
    ctx->pc = 0x2c5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x2c5f7c: 0x8c620034
    ctx->pc = 0x2c5f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2c5f80: 0x24420001
    ctx->pc = 0x2c5f80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5f84: 0xac620034
    ctx->pc = 0x2c5f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x2c5f88: 0x3c020038
    ctx->pc = 0x2c5f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c5f8c: 0x8c42b19c
    ctx->pc = 0x2c5f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
    // 0x2c5f90: 0x10400006
    ctx->pc = 0x2C5F90u;
    {
        const bool branch_taken_0x2c5f90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5F94u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x2c5f90) {
            ctx->pc = 0x2C5FACu;
            goto label_2c5fac;
        }
    }
    ctx->pc = 0x2C5F98u;
    // 0x2c5f98: 0x10400004
    ctx->pc = 0x2C5F98u;
    {
        const bool branch_taken_0x2c5f98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5F9Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
        if (branch_taken_0x2c5f98) {
            ctx->pc = 0x2C5FACu;
            goto label_2c5fac;
        }
    }
    ctx->pc = 0x2C5FA0u;
    // 0x2c5fa0: 0x8c62b1a0
    ctx->pc = 0x2c5fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947232)));
    // 0x2c5fa4: 0x24420001
    ctx->pc = 0x2c5fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5fa8: 0xac62b1a0
    ctx->pc = 0x2c5fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947232), GPR_U32(ctx, 2));
label_2c5fac:
    // 0x2c5fac: 0x3c021000
    ctx->pc = 0x2c5facu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2c5fb0: 0xac400000
    ctx->pc = 0x2c5fb0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2c5fb4: 0x3c021000
    ctx->pc = 0x2c5fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2c5fb8: 0x34420800
    ctx->pc = 0x2c5fb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
    // 0x2c5fbc: 0xac400000
    ctx->pc = 0x2c5fbcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2c5fc0: 0xc0b4a86
    ctx->pc = 0x2C5FC0u;
    SET_GPR_U32(ctx, 31, 0x2C5FC8u);
    ctx->pc = 0x2C5FC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FC8u; }
    }
    if (ctx->pc != 0x2C5FC8u) { return; }
    ctx->pc = 0x2C5FC8u;
    // 0x2c5fc8: 0x40024800
    ctx->pc = 0x2c5fc8u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2c5fcc: 0x3c11003a
    ctx->pc = 0x2c5fccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2c5fd0: 0x26312050
    ctx->pc = 0x2c5fd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8272));
    // 0x2c5fd4: 0xae220058
    ctx->pc = 0x2c5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x2c5fd8: 0xc0b4a86
    ctx->pc = 0x2C5FD8u;
    SET_GPR_U32(ctx, 31, 0x2C5FE0u);
    ctx->pc = 0x2C5FDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FE0u; }
    }
    if (ctx->pc != 0x2C5FE0u) { return; }
    ctx->pc = 0x2C5FE0u;
    // 0x2c5fe0: 0x40024800
    ctx->pc = 0x2c5fe0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2c5fe4: 0xae220048
    ctx->pc = 0x2c5fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2c5fe8: 0xc0b4a86
    ctx->pc = 0x2C5FE8u;
    SET_GPR_U32(ctx, 31, 0x2C5FF0u);
    ctx->pc = 0x2C5FECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FF0u; }
    }
    if (ctx->pc != 0x2C5FF0u) { return; }
    ctx->pc = 0x2C5FF0u;
    // 0x2c5ff0: 0x40024800
    ctx->pc = 0x2c5ff0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2c5ff4: 0xae220038
    ctx->pc = 0x2c5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x2c5ff8: 0x8e430010
    ctx->pc = 0x2c5ff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2c5ffc: 0x8c620004
    ctx->pc = 0x2c5ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c6000: 0x24420001
    ctx->pc = 0x2c6000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6004: 0xc0aaa34
    ctx->pc = 0x2C6004u;
    SET_GPR_U32(ctx, 31, 0x2C600Cu);
    ctx->pc = 0x2C6008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x2AA8D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetupFrame_0x2aa8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C600Cu; }
    }
    if (ctx->pc != 0x2C600Cu) { return; }
    ctx->pc = 0x2C600Cu;
    // 0x2c600c: 0xc0c0e18
    ctx->pc = 0x2C600Cu;
    SET_GPR_U32(ctx, 31, 0x2C6014u);
    ctx->pc = 0x2C6010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6014u; }
    }
    if (ctx->pc != 0x2C6014u) { return; }
    ctx->pc = 0x2C6014u;
    // 0x2c6014: 0x202d
    ctx->pc = 0x2c6014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6018: 0x282d
    ctx->pc = 0x2c6018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c601c: 0x3c10003b
    ctx->pc = 0x2c601cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
    // 0x2c6020: 0xc0aa02e
    ctx->pc = 0x2C6020u;
    SET_GPR_U32(ctx, 31, 0x2C6028u);
    ctx->pc = 0x2C6024u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 28624));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6028u; }
    }
    if (ctx->pc != 0x2C6028u) { return; }
    ctx->pc = 0x2C6028u;
    // 0x2c6028: 0xc0aafee
    ctx->pc = 0x2C6028u;
    SET_GPR_U32(ctx, 31, 0x2C6030u);
    ctx->pc = 0x2ABFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbWinSetup_0x2abfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6030u; }
    }
    if (ctx->pc != 0x2C6030u) { return; }
    ctx->pc = 0x2C6030u;
    // 0x2c6030: 0x202d
    ctx->pc = 0x2c6030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6034: 0x282d
    ctx->pc = 0x2c6034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6038: 0xc0aa02e
    ctx->pc = 0x2C6038u;
    SET_GPR_U32(ctx, 31, 0x2C6040u);
    ctx->pc = 0x2C603Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 28624));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6040u; }
    }
    if (ctx->pc != 0x2C6040u) { return; }
    ctx->pc = 0x2C6040u;
    // 0x2c6040: 0xc0abbf8
    ctx->pc = 0x2C6040u;
    SET_GPR_U32(ctx, 31, 0x2C6048u);
    ctx->pc = 0x2AEFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetTime_0x2aefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6048u; }
    }
    if (ctx->pc != 0x2C6048u) { return; }
    ctx->pc = 0x2C6048u;
    // 0x2c6048: 0xc0b24f2
    ctx->pc = 0x2C6048u;
    SET_GPR_U32(ctx, 31, 0x2C6050u);
    ctx->pc = 0x2C93C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysStartFrame_0x2c93c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6050u; }
    }
    if (ctx->pc != 0x2C6050u) { return; }
    ctx->pc = 0x2C6050u;
    // 0x2c6050: 0xc0b4a86
    ctx->pc = 0x2C6050u;
    SET_GPR_U32(ctx, 31, 0x2C6058u);
    ctx->pc = 0x2C6054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6058u; }
    }
    if (ctx->pc != 0x2C6058u) { return; }
    ctx->pc = 0x2C6058u;
    // 0x2c6058: 0xc0b4a86
    ctx->pc = 0x2C6058u;
    SET_GPR_U32(ctx, 31, 0x2C6060u);
    ctx->pc = 0x2C605Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6060u; }
    }
    if (ctx->pc != 0x2C6060u) { return; }
    ctx->pc = 0x2C6060u;
    // 0x2c6060: 0xc0b4a86
    ctx->pc = 0x2C6060u;
    SET_GPR_U32(ctx, 31, 0x2C6068u);
    ctx->pc = 0x2C6064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6068u; }
    }
    if (ctx->pc != 0x2C6068u) { return; }
    ctx->pc = 0x2C6068u;
    // 0x2c6068: 0xc0b4a86
    ctx->pc = 0x2C6068u;
    SET_GPR_U32(ctx, 31, 0x2C6070u);
    ctx->pc = 0x2C606Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6070u; }
    }
    if (ctx->pc != 0x2C6070u) { return; }
    ctx->pc = 0x2C6070u;
    // 0x2c6070: 0xc0b4a86
    ctx->pc = 0x2C6070u;
    SET_GPR_U32(ctx, 31, 0x2C6078u);
    ctx->pc = 0x2C6074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6078u; }
    }
    if (ctx->pc != 0x2C6078u) { return; }
    ctx->pc = 0x2C6078u;
    // 0x2c6078: 0xc0b4a86
    ctx->pc = 0x2C6078u;
    SET_GPR_U32(ctx, 31, 0x2C6080u);
    ctx->pc = 0x2C607Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6080u; }
    }
    if (ctx->pc != 0x2C6080u) { return; }
    ctx->pc = 0x2C6080u;
    // 0x2c6080: 0xc0b4a86
    ctx->pc = 0x2C6080u;
    SET_GPR_U32(ctx, 31, 0x2C6088u);
    ctx->pc = 0x2C6084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6088u; }
    }
    if (ctx->pc != 0x2C6088u) { return; }
    ctx->pc = 0x2C6088u;
    // 0x2c6088: 0xc0b4a86
    ctx->pc = 0x2C6088u;
    SET_GPR_U32(ctx, 31, 0x2C6090u);
    ctx->pc = 0x2C608Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6090u; }
    }
    if (ctx->pc != 0x2C6090u) { return; }
    ctx->pc = 0x2C6090u;
    // 0x2c6090: 0xc0b4a86
    ctx->pc = 0x2C6090u;
    SET_GPR_U32(ctx, 31, 0x2C6098u);
    ctx->pc = 0x2C6094u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6098u; }
    }
    if (ctx->pc != 0x2C6098u) { return; }
    ctx->pc = 0x2C6098u;
    // 0x2c6098: 0xc0b4a86
    ctx->pc = 0x2C6098u;
    SET_GPR_U32(ctx, 31, 0x2C60A0u);
    ctx->pc = 0x2C609Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60A0u; }
    }
    if (ctx->pc != 0x2C60A0u) { return; }
    ctx->pc = 0x2C60A0u;
    // 0x2c60a0: 0xc0b4a86
    ctx->pc = 0x2C60A0u;
    SET_GPR_U32(ctx, 31, 0x2C60A8u);
    ctx->pc = 0x2C60A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60A8u; }
    }
    if (ctx->pc != 0x2C60A8u) { return; }
    ctx->pc = 0x2C60A8u;
    // 0x2c60a8: 0xc0b4a86
    ctx->pc = 0x2C60A8u;
    SET_GPR_U32(ctx, 31, 0x2C60B0u);
    ctx->pc = 0x2C60ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60B0u; }
    }
    if (ctx->pc != 0x2C60B0u) { return; }
    ctx->pc = 0x2C60B0u;
    // 0x2c60b0: 0xc0b4a86
    ctx->pc = 0x2C60B0u;
    SET_GPR_U32(ctx, 31, 0x2C60B8u);
    ctx->pc = 0x2C60B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60B8u; }
    }
    if (ctx->pc != 0x2C60B8u) { return; }
    ctx->pc = 0x2C60B8u;
    // 0x2c60b8: 0xc0b4a86
    ctx->pc = 0x2C60B8u;
    SET_GPR_U32(ctx, 31, 0x2C60C0u);
    ctx->pc = 0x2C60BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60C0u; }
    }
    if (ctx->pc != 0x2C60C0u) { return; }
    ctx->pc = 0x2C60C0u;
    // 0x2c60c0: 0xc0b4a86
    ctx->pc = 0x2C60C0u;
    SET_GPR_U32(ctx, 31, 0x2C60C8u);
    ctx->pc = 0x2C60C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60C8u; }
    }
    if (ctx->pc != 0x2C60C8u) { return; }
    ctx->pc = 0x2C60C8u;
    // 0x2c60c8: 0xc0b4a86
    ctx->pc = 0x2C60C8u;
    SET_GPR_U32(ctx, 31, 0x2C60D0u);
    ctx->pc = 0x2C60CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60D0u; }
    }
    if (ctx->pc != 0x2C60D0u) { return; }
    ctx->pc = 0x2C60D0u;
    // 0x2c60d0: 0xc0b4a86
    ctx->pc = 0x2C60D0u;
    SET_GPR_U32(ctx, 31, 0x2C60D8u);
    ctx->pc = 0x2C60D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60D8u; }
    }
    if (ctx->pc != 0x2C60D8u) { return; }
    ctx->pc = 0x2C60D8u;
    // 0x2c60d8: 0xc0b4a86
    ctx->pc = 0x2C60D8u;
    SET_GPR_U32(ctx, 31, 0x2C60E0u);
    ctx->pc = 0x2C60DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60E0u; }
    }
    if (ctx->pc != 0x2C60E0u) { return; }
    ctx->pc = 0x2C60E0u;
    // 0x2c60e0: 0xc0b4a86
    ctx->pc = 0x2C60E0u;
    SET_GPR_U32(ctx, 31, 0x2C60E8u);
    ctx->pc = 0x2C60E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60E8u; }
    }
    if (ctx->pc != 0x2C60E8u) { return; }
    ctx->pc = 0x2C60E8u;
    // 0x2c60e8: 0xc0ab9f8
    ctx->pc = 0x2C60E8u;
    SET_GPR_U32(ctx, 31, 0x2C60F0u);
    ctx->pc = 0x2AE7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetTextures_0x2ae7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60F0u; }
    }
    if (ctx->pc != 0x2C60F0u) { return; }
    ctx->pc = 0x2C60F0u;
    // 0x2c60f0: 0x3c02003a
    ctx->pc = 0x2c60f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c60f4: 0x8c441bd0
    ctx->pc = 0x2c60f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2c60f8: 0xc0b208e
    ctx->pc = 0x2C60F8u;
    SET_GPR_U32(ctx, 31, 0x2C6100u);
    ctx->pc = 0x2C60FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 144));
    ctx->pc = 0x2C8238u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitFrontFaceYaw_0x2c8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6100u; }
    }
    if (ctx->pc != 0x2C6100u) { return; }
    ctx->pc = 0x2C6100u;
    // 0x2c6100: 0xc0b0474
    ctx->pc = 0x2C6100u;
    SET_GPR_U32(ctx, 31, 0x2C6108u);
    ctx->pc = 0x2C11D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTreeTraverse_0x2c11d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6108u; }
    }
    if (ctx->pc != 0x2C6108u) { return; }
    ctx->pc = 0x2C6108u;
    // 0x2c6108: 0xc0b15d2
    ctx->pc = 0x2C6108u;
    SET_GPR_U32(ctx, 31, 0x2C6110u);
    ctx->pc = 0x2C5748u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBClearText_0x2c5748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6110u; }
    }
    if (ctx->pc != 0x2C6110u) { return; }
    ctx->pc = 0x2C6110u;
    // 0x2c6110: 0xc0b0a82
    ctx->pc = 0x2C6110u;
    SET_GPR_U32(ctx, 31, 0x2C6118u);
    ctx->pc = 0x2C2A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBResetBlits_0x2c2a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6118u; }
    }
    if (ctx->pc != 0x2C6118u) { return; }
    ctx->pc = 0x2C6118u;
    // 0x2c6118: 0xc0abbf8
    ctx->pc = 0x2C6118u;
    SET_GPR_U32(ctx, 31, 0x2C6120u);
    ctx->pc = 0x2AEFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetTime_0x2aefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6120u; }
    }
    if (ctx->pc != 0x2C6120u) { return; }
    ctx->pc = 0x2C6120u;
    // 0x2c6120: 0xc0a92c0
    ctx->pc = 0x2C6120u;
    SET_GPR_U32(ctx, 31, 0x2C6128u);
    ctx->pc = 0x2A4B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugEndFrameEnd_0x2a4b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6128u; }
    }
    if (ctx->pc != 0x2C6128u) { return; }
    ctx->pc = 0x2C6128u;
    // 0x2c6128: 0x8e42002c
    ctx->pc = 0x2c6128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2c612c: 0xac400068
    ctx->pc = 0x2c612cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2c6130: 0x40024800
    ctx->pc = 0x2c6130u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2c6134: 0x8e230058
    ctx->pc = 0x2c6134u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2c6138: 0x431023
    ctx->pc = 0x2c6138u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c613c: 0x8e230050
    ctx->pc = 0x2c613cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2c6140: 0x431021
    ctx->pc = 0x2c6140u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6144: 0xae220050
    ctx->pc = 0x2c6144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2c6148: 0x8e220054
    ctx->pc = 0x2c6148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2c614c: 0x24420001
    ctx->pc = 0x2c614cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6150: 0xae220054
    ctx->pc = 0x2c6150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x2c6154: 0xdfbf0030
    ctx->pc = 0x2c6154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6158: 0xdfb20020
    ctx->pc = 0x2c6158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c615c: 0xdfb10010
    ctx->pc = 0x2c615cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6160: 0xdfb00000
    ctx->pc = 0x2c6160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6164: 0x3e00008
    ctx->pc = 0x2C6164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5ED0u: goto label_2c5ed0;
            case 0x2C5F38u: goto label_2c5f38;
            case 0x2C5FACu: goto label_2c5fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C616Cu;
}
