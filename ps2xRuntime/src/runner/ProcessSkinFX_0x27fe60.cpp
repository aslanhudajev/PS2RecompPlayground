#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcessSkinFX
// Address: 0x27fe60 - 0x27ff14
void ProcessSkinFX_0x27fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fe60u;

    // 0x27fe60: 0x27bdfff0
    ctx->pc = 0x27fe60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27fe64: 0xffbf0000
    ctx->pc = 0x27fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fe68: 0xc4810000
    ctx->pc = 0x27fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fe6c: 0x44800000
    ctx->pc = 0x27fe6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27fe70: 0x46010034
    ctx->pc = 0x27fe70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fe74: 0x0
    ctx->pc = 0x27fe74u;
    // NOP
    // 0x27fe78: 0x45000022
    ctx->pc = 0x27FE78u;
    {
        const bool branch_taken_0x27fe78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FE7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27fe78) {
            ctx->pc = 0x27FF04u;
            goto label_27ff04;
        }
    }
    ctx->pc = 0x27FE80u;
    // 0x27fe80: 0x8c42ffbc
    ctx->pc = 0x27fe80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x27fe84: 0x21842
    ctx->pc = 0x27fe84u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
    // 0x27fe88: 0x4600005
    ctx->pc = 0x27FE88u;
    {
        const bool branch_taken_0x27fe88 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27FE8Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x27fe88) {
            ctx->pc = 0x27FEA0u;
            goto label_27fea0;
        }
    }
    ctx->pc = 0x27FE90u;
    // 0x27fe90: 0x44830800
    ctx->pc = 0x27fe90u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x27fe94: 0x46800860
    ctx->pc = 0x27fe94u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x27fe98: 0x10000007
    ctx->pc = 0x27FE98u;
    {
        const bool branch_taken_0x27fe98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FE9Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27fe98) {
            ctx->pc = 0x27FEB8u;
            goto label_27feb8;
        }
    }
    ctx->pc = 0x27FEA0u;
label_27fea0:
    // 0x27fea0: 0x31842
    ctx->pc = 0x27fea0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x27fea4: 0x431025
    ctx->pc = 0x27fea4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27fea8: 0x44820800
    ctx->pc = 0x27fea8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x27feac: 0x46800860
    ctx->pc = 0x27feacu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x27feb0: 0x46010840
    ctx->pc = 0x27feb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x27feb4: 0xc4800008
    ctx->pc = 0x27feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27feb8:
    // 0x27feb8: 0x46000802
    ctx->pc = 0x27feb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27febc: 0xc4810004
    ctx->pc = 0x27febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fec0: 0x46010000
    ctx->pc = 0x27fec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27fec4: 0xe4800004
    ctx->pc = 0x27fec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x27fec8: 0xc4810000
    ctx->pc = 0x27fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fecc: 0x46000836
    ctx->pc = 0x27feccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fed0: 0x45000008
    ctx->pc = 0x27FED0u;
    {
        const bool branch_taken_0x27fed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fed0) {
            ctx->pc = 0x27FEF4u;
            goto label_27fef4;
        }
    }
    ctx->pc = 0x27FED8u;
    // 0x27fed8: 0x8c820010
    ctx->pc = 0x27fed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x27fedc: 0x10400004
    ctx->pc = 0x27FEDCu;
    {
        const bool branch_taken_0x27fedc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FEE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x27fedc) {
            ctx->pc = 0x27FEF0u;
            goto label_27fef0;
        }
    }
    ctx->pc = 0x27FEE4u;
    // 0x27fee4: 0xac800004
    ctx->pc = 0x27fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x27fee8: 0x10000002
    ctx->pc = 0x27FEE8u;
    {
        const bool branch_taken_0x27fee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FEECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x27fee8) {
            ctx->pc = 0x27FEF4u;
            goto label_27fef4;
        }
    }
    ctx->pc = 0x27FEF0u;
label_27fef0:
    // 0x27fef0: 0xac800000
    ctx->pc = 0x27fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_27fef4:
    // 0x27fef4: 0xc09ff5a
    ctx->pc = 0x27FEF4u;
    SET_GPR_U32(ctx, 31, 0x27FEFCu);
    ctx->pc = 0x27FD68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoProcessSkinFX_0x27fd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FEFCu; }
    }
    if (ctx->pc != 0x27FEFCu) { return; }
    ctx->pc = 0x27FEFCu;
    // 0x27fefc: 0x10000002
    ctx->pc = 0x27FEFCu;
    {
        const bool branch_taken_0x27fefc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FF00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27fefc) {
            ctx->pc = 0x27FF08u;
            goto label_27ff08;
        }
    }
    ctx->pc = 0x27FF04u;
label_27ff04:
    // 0x27ff04: 0x102d
    ctx->pc = 0x27ff04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ff08:
    // 0x27ff08: 0xdfbf0000
    ctx->pc = 0x27ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ff0c: 0x3e00008
    ctx->pc = 0x27FF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FF10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FEA0u: goto label_27fea0;
            case 0x27FEB8u: goto label_27feb8;
            case 0x27FEF0u: goto label_27fef0;
            case 0x27FEF4u: goto label_27fef4;
            case 0x27FF04u: goto label_27ff04;
            case 0x27FF08u: goto label_27ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27FF14u;
}
