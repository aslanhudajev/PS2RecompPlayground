#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sbrk
// Address: 0x154f38 - 0x154fe4
void sbrk_0x154f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sbrk");


    ctx->pc = 0x154f38u;

    // 0x154f38: 0x27bdffc0
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x154f3c: 0xffbf0030
    ctx->pc = 0x154f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x154f40: 0xffb20020
    ctx->pc = 0x154f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x154f44: 0xffb10010
    ctx->pc = 0x154f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x154f48: 0xffb00000
    ctx->pc = 0x154f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x154f4c: 0x40116000
    ctx->pc = 0x154f4cu;
    SET_GPR_U32(ctx, 17, ctx->cop0_status);
    // 0x154f50: 0x3c020001
    ctx->pc = 0x154f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x154f54: 0x2228824
    ctx->pc = 0x154f54u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x154f58: 0x1220000a
    ctx->pc = 0x154F58u;
    {
        const bool branch_taken_0x154f58 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x154F5Cu;
        SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
        if (branch_taken_0x154f58) {
            ctx->pc = 0x154F84u;
            goto label_154f84;
        }
    }
    ctx->pc = 0x154F60u;
label_154f60:
    // 0x154f60: 0x42000039
    ctx->pc = 0x154f60u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x154f64: 0x40f
    ctx->pc = 0x154f64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x154f68: 0x40026000
    ctx->pc = 0x154f68u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x154f6c: 0x3c030001
    ctx->pc = 0x154f6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x154f70: 0x431024
    ctx->pc = 0x154f70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154f74: 0x1440fffa
    ctx->pc = 0x154F74u;
    {
        const bool branch_taken_0x154f74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x154f74) {
            ctx->pc = 0x154F60u;
            goto label_154f60;
        }
    }
    ctx->pc = 0x154F7Cu;
    // 0x154f7c: 0x10000002
    ctx->pc = 0x154F7Cu;
    {
        const bool branch_taken_0x154f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154F80u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294940788)));
        if (branch_taken_0x154f7c) {
            ctx->pc = 0x154F88u;
            goto label_154f88;
        }
    }
    ctx->pc = 0x154F84u;
label_154f84:
    // 0x154f84: 0x8e429874
    ctx->pc = 0x154f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294940788)));
label_154f88:
    // 0x154f88: 0xc055230
    ctx->pc = 0x154F88u;
    SET_GPR_U32(ctx, 31, 0x154F90u);
    ctx->pc = 0x154F8Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x1548C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndOfHeap_0x1548c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F90u; }
        else if (ctx->pc != 0x154F90u) { ctx->pc = 0x154F90u; }
    }
    if (ctx->pc != 0x154F90u) { return; }
    ctx->pc = 0x154F90u;
    // 0x154f90: 0x50102b
    ctx->pc = 0x154f90u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x154f94: 0x1040000a
    ctx->pc = 0x154F94u;
    {
        const bool branch_taken_0x154f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x154F98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294940788)));
        if (branch_taken_0x154f94) {
            ctx->pc = 0x154FC0u;
            goto label_154fc0;
        }
    }
    ctx->pc = 0x154F9Cu;
    // 0x154f9c: 0xc05058a
    ctx->pc = 0x154F9Cu;
    SET_GPR_U32(ctx, 31, 0x154FA4u);
    ctx->pc = 0x141628u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x141628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FA4u; }
        else if (ctx->pc != 0x154FA4u) { ctx->pc = 0x154FA4u; }
    }
    if (ctx->pc != 0x154FA4u) { return; }
    ctx->pc = 0x154FA4u;
    // 0x154fa4: 0x2403000c
    ctx->pc = 0x154fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x154fa8: 0x12200002
    ctx->pc = 0x154FA8u;
    {
        const bool branch_taken_0x154fa8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x154FACu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x154fa8) {
            ctx->pc = 0x154FB4u;
            goto label_154fb4;
        }
    }
    ctx->pc = 0x154FB0u;
    // 0x154fb0: 0x42000038
    ctx->pc = 0x154fb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_154fb4:
    // 0x154fb4: 0x3c02ffff
    ctx->pc = 0x154fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x154fb8: 0x10000004
    ctx->pc = 0x154FB8u;
    {
        const bool branch_taken_0x154fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154FBCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x154fb8) {
            ctx->pc = 0x154FCCu;
            goto label_154fcc;
        }
    }
    ctx->pc = 0x154FC0u;
label_154fc0:
    // 0x154fc0: 0x12200002
    ctx->pc = 0x154FC0u;
    {
        const bool branch_taken_0x154fc0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x154FC4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294940788), GPR_U32(ctx, 16));
        if (branch_taken_0x154fc0) {
            ctx->pc = 0x154FCCu;
            goto label_154fcc;
        }
    }
    ctx->pc = 0x154FC8u;
    // 0x154fc8: 0x42000038
    ctx->pc = 0x154fc8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_154fcc:
    // 0x154fcc: 0xdfbf0030
    ctx->pc = 0x154fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154fd0: 0xdfb20020
    ctx->pc = 0x154fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154fd4: 0xdfb10010
    ctx->pc = 0x154fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154fd8: 0xdfb00000
    ctx->pc = 0x154fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154fdc: 0x3e00008
    ctx->pc = 0x154FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154FE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154F60u: goto label_154f60;
            case 0x154F84u: goto label_154f84;
            case 0x154F88u: goto label_154f88;
            case 0x154FB4u: goto label_154fb4;
            case 0x154FC0u: goto label_154fc0;
            case 0x154FCCu: goto label_154fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154FE4u;
}
