#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_enemy_slot
// Address: 0x238ee0 - 0x23902c
void find_enemy_slot_0x238ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x238ee0u;

    // 0x238ee0: 0x27bdffe0
    ctx->pc = 0x238ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238ee4: 0xffbf0010
    ctx->pc = 0x238ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238ee8: 0xffb00000
    ctx->pc = 0x238ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238eec: 0x44800800
    ctx->pc = 0x238eecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x238ef0: 0x24090001
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ef4: 0x382d
    ctx->pc = 0x238ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ef8: 0x3c020033
    ctx->pc = 0x238ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238efc: 0x2443dfd0
    ctx->pc = 0x238efcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x238f00: 0x3c020033
    ctx->pc = 0x238f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238f04: 0x8c423c00
    ctx->pc = 0x238f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    // 0x238f08: 0x1840002b
    ctx->pc = 0x238F08u;
    {
        const bool branch_taken_0x238f08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x238F0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x238f08) {
            ctx->pc = 0x238FB8u;
            goto label_238fb8;
        }
    }
    ctx->pc = 0x238F10u;
    // 0x238f10: 0x240c001f
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 31));
    // 0x238f14: 0x240b0008
    ctx->pc = 0x238f14u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 8));
    // 0x238f18: 0x240a0006
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 6));
    // 0x238f1c: 0x3c013c23
    ctx->pc = 0x238f1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x238f20: 0x3421d70a
    ctx->pc = 0x238f20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x238f24: 0x44811800
    ctx->pc = 0x238f24u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x238f28: 0x3c01461c
    ctx->pc = 0x238f28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x238f2c: 0x34214000
    ctx->pc = 0x238f2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x238f30: 0x44811000
    ctx->pc = 0x238f30u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x238f34: 0x3c020033
    ctx->pc = 0x238f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238f38: 0x8c483c00
    ctx->pc = 0x238f38u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    // 0x238f3c: 0x0
    ctx->pc = 0x238f3cu;
    // NOP
label_238f40:
    // 0x238f40: 0x8c6200c8
    ctx->pc = 0x238f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x238f44: 0x10400035
    ctx->pc = 0x238F44u;
    {
        const bool branch_taken_0x238f44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238F48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x238f44) {
            ctx->pc = 0x23901Cu;
            goto label_23901c;
        }
    }
    ctx->pc = 0x238F4Cu;
    // 0x238f4c: 0x8c620000
    ctx->pc = 0x238f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238f50: 0x504c0016
    ctx->pc = 0x238F50u;
    {
        const bool branch_taken_0x238f50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 12));
        if (branch_taken_0x238f50) {
            ctx->pc = 0x238F54u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x238FACu;
            goto label_238fac;
        }
    }
    ctx->pc = 0x238F58u;
    // 0x238f58: 0xc4600290
    ctx->pc = 0x238f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238f5c: 0x8c6200c8
    ctx->pc = 0x238f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x238f60: 0x104b0006
    ctx->pc = 0x238F60u;
    {
        const bool branch_taken_0x238f60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 11));
        ctx->pc = 0x238F64u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 752)));
        if (branch_taken_0x238f60) {
            ctx->pc = 0x238F7Cu;
            goto label_238f7c;
        }
    }
    ctx->pc = 0x238F68u;
    // 0x238f68: 0x504a0008
    ctx->pc = 0x238F68u;
    {
        const bool branch_taken_0x238f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 10));
        if (branch_taken_0x238f68) {
            ctx->pc = 0x238F6Cu;
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
            ctx->pc = 0x238F8Cu;
            goto label_238f8c;
        }
    }
    ctx->pc = 0x238F70u;
    // 0x238f70: 0x846202ec
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 748)));
    // 0x238f74: 0x10400003
    ctx->pc = 0x238F74u;
    {
        const bool branch_taken_0x238f74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x238f74) {
            ctx->pc = 0x238F84u;
            goto label_238f84;
        }
    }
    ctx->pc = 0x238F7Cu;
label_238f7c:
    // 0x238f7c: 0x10000003
    ctx->pc = 0x238F7Cu;
    {
        const bool branch_taken_0x238f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238F80u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        if (branch_taken_0x238f7c) {
            ctx->pc = 0x238F8Cu;
            goto label_238f8c;
        }
    }
    ctx->pc = 0x238F84u;
label_238f84:
    // 0x238f84: 0x50c00001
    ctx->pc = 0x238F84u;
    {
        const bool branch_taken_0x238f84 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x238f84) {
            ctx->pc = 0x238F88u;
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->pc = 0x238F8Cu;
            goto label_238f8c;
        }
    }
    ctx->pc = 0x238F8Cu;
label_238f8c:
    // 0x238f8c: 0x46000834
    ctx->pc = 0x238f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238f90: 0x0
    ctx->pc = 0x238f90u;
    // NOP
    // 0x238f94: 0x45020005
    ctx->pc = 0x238F94u;
    {
        const bool branch_taken_0x238f94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238f94) {
            ctx->pc = 0x238F98u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x238FACu;
            goto label_238fac;
        }
    }
    ctx->pc = 0x238F9Cu;
    // 0x238f9c: 0x46000046
    ctx->pc = 0x238f9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x238fa0: 0xe0802d
    ctx->pc = 0x238fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fa4: 0xc0482d
    ctx->pc = 0x238fa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fa8: 0x24e70001
    ctx->pc = 0x238fa8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_238fac:
    // 0x238fac: 0xe8102a
    ctx->pc = 0x238facu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
    // 0x238fb0: 0x1440ffe3
    ctx->pc = 0x238FB0u;
    {
        const bool branch_taken_0x238fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x238FB4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 944));
        if (branch_taken_0x238fb0) {
            ctx->pc = 0x238F40u;
            goto label_238f40;
        }
    }
    ctx->pc = 0x238FB8u;
label_238fb8:
    // 0x238fb8: 0x3c020034
    ctx->pc = 0x238fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x238fbc: 0x24030001
    ctx->pc = 0x238fbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x238fc0: 0xac43cdbc
    ctx->pc = 0x238fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954428), GPR_U32(ctx, 3));
    // 0x238fc4: 0x2c82001c
    ctx->pc = 0x238fc4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
    // 0x238fc8: 0x10400003
    ctx->pc = 0x238FC8u;
    {
        const bool branch_taken_0x238fc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238FCCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
        if (branch_taken_0x238fc8) {
            ctx->pc = 0x238FD8u;
            goto label_238fd8;
        }
    }
    ctx->pc = 0x238FD0u;
    // 0x238fd0: 0x14400012
    ctx->pc = 0x238FD0u;
    {
        const bool branch_taken_0x238fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x238FD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x238fd0) {
            ctx->pc = 0x23901Cu;
            goto label_23901c;
        }
    }
    ctx->pc = 0x238FD8u;
label_238fd8:
    // 0x238fd8: 0x11200004
    ctx->pc = 0x238FD8u;
    {
        const bool branch_taken_0x238fd8 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x238FDCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x238fd8) {
            ctx->pc = 0x238FECu;
            goto label_238fec;
        }
    }
    ctx->pc = 0x238FE0u;
    // 0x238fe0: 0x8c62dedc
    ctx->pc = 0x238fe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294958812)));
    // 0x238fe4: 0x24420001
    ctx->pc = 0x238fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x238fe8: 0xac62dedc
    ctx->pc = 0x238fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958812), GPR_U32(ctx, 2));
label_238fec:
    // 0x238fec: 0xc08e734
    ctx->pc = 0x238FECu;
    SET_GPR_U32(ctx, 31, 0x238FF4u);
    ctx->pc = 0x238FF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_enemy_0x239cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FF4u; }
    }
    if (ctx->pc != 0x238FF4u) { return; }
    ctx->pc = 0x238FF4u;
    // 0x238ff4: 0x240303b0
    ctx->pc = 0x238ff4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x238ff8: 0x2031818
    ctx->pc = 0x238ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x238ffc: 0x3c020033
    ctx->pc = 0x238ffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x239000: 0x2442dfd0
    ctx->pc = 0x239000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x239004: 0x621821
    ctx->pc = 0x239004u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239008: 0x3c013f80
    ctx->pc = 0x239008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23900c: 0x44810000
    ctx->pc = 0x23900cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x239010: 0xe460028c
    ctx->pc = 0x239010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 652), bits); }
    // 0x239014: 0xe4600290
    ctx->pc = 0x239014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 656), bits); }
    // 0x239018: 0x200102d
    ctx->pc = 0x239018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23901c:
    // 0x23901c: 0xdfbf0010
    ctx->pc = 0x23901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239020: 0xdfb00000
    ctx->pc = 0x239020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239024: 0x3e00008
    ctx->pc = 0x239024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238F40u: goto label_238f40;
            case 0x238F7Cu: goto label_238f7c;
            case 0x238F84u: goto label_238f84;
            case 0x238F8Cu: goto label_238f8c;
            case 0x238FACu: goto label_238fac;
            case 0x238FB8u: goto label_238fb8;
            case 0x238FD8u: goto label_238fd8;
            case 0x238FECu: goto label_238fec;
            case 0x23901Cu: goto label_23901c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23902Cu;
}
