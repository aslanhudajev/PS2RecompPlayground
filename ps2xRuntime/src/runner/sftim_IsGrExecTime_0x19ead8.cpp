#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_IsGrExecTime
// Address: 0x19ead8 - 0x19ebc8
void sftim_IsGrExecTime_0x19ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_IsGrExecTime");


    ctx->pc = 0x19ead8u;

    // 0x19ead8: 0x80382d
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eadc: 0xc4e10a4c
    ctx->pc = 0x19eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19eae0: 0x46800860
    ctx->pc = 0x19eae0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x19eae4: 0x46016800
    ctx->pc = 0x19eae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x19eae8: 0x460c0034
    ctx->pc = 0x19eae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eaec: 0x0
    ctx->pc = 0x19eaecu;
    // NOP
    // 0x19eaf0: 0x45000003
    ctx->pc = 0x19EAF0u;
    {
        const bool branch_taken_0x19eaf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19EAF4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 2708));
        if (branch_taken_0x19eaf0) {
            ctx->pc = 0x19EB00u;
            goto label_19eb00;
        }
    }
    ctx->pc = 0x19EAF8u;
    // 0x19eaf8: 0x3e00008
    ctx->pc = 0x19EAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EAFCu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EB00u: goto label_19eb00;
            case 0x19EB4Cu: goto label_19eb4c;
            case 0x19EB7Cu: goto label_19eb7c;
            case 0x19EB80u: goto label_19eb80;
            case 0x19EB94u: goto label_19eb94;
            case 0x19EBACu: goto label_19ebac;
            case 0x19EBB0u: goto label_19ebb0;
            case 0x19EBC0u: goto label_19ebc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EB00u;
label_19eb00:
    // 0x19eb00: 0x46016801
    ctx->pc = 0x19eb00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x19eb04: 0x46006036
    ctx->pc = 0x19eb04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eb08: 0x0
    ctx->pc = 0x19eb08u;
    // NOP
    // 0x19eb0c: 0x4500000f
    ctx->pc = 0x19EB0Cu;
    {
        const bool branch_taken_0x19eb0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19EB10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19eb0c) {
            ctx->pc = 0x19EB4Cu;
            goto label_19eb4c;
        }
    }
    ctx->pc = 0x19EB14u;
    // 0x19eb14: 0xc4c00274
    ctx->pc = 0x19eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eb18: 0x460c0032
    ctx->pc = 0x19eb18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eb1c: 0x0
    ctx->pc = 0x19eb1cu;
    // NOP
    // 0x19eb20: 0x45010027
    ctx->pc = 0x19EB20u;
    {
        const bool branch_taken_0x19eb20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19EB24u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19eb20) {
            ctx->pc = 0x19EBC0u;
            goto label_19ebc0;
        }
    }
    ctx->pc = 0x19EB28u;
    // 0x19eb28: 0xc4c0026c
    ctx->pc = 0x19eb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eb2c: 0x460c0032
    ctx->pc = 0x19eb2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eb30: 0x45010023
    ctx->pc = 0x19EB30u;
    {
        const bool branch_taken_0x19eb30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eb30) {
            ctx->pc = 0x19EBC0u;
            goto label_19ebc0;
        }
    }
    ctx->pc = 0x19EB38u;
    // 0x19eb38: 0x8cc20268
    ctx->pc = 0x19eb38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 616)));
    // 0x19eb3c: 0xe4cc026c
    ctx->pc = 0x19eb3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 620), bits); }
    // 0x19eb40: 0x24420001
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x19eb44: 0x3e00008
    ctx->pc = 0x19EB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB48u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 616), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EB00u: goto label_19eb00;
            case 0x19EB4Cu: goto label_19eb4c;
            case 0x19EB7Cu: goto label_19eb7c;
            case 0x19EB80u: goto label_19eb80;
            case 0x19EB94u: goto label_19eb94;
            case 0x19EBACu: goto label_19ebac;
            case 0x19EBB0u: goto label_19ebb0;
            case 0x19EBC0u: goto label_19ebc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EB4Cu;
label_19eb4c:
    // 0x19eb4c: 0x3c020026
    ctx->pc = 0x19eb4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19eb50: 0x8c44def0
    ctx->pc = 0x19eb50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958832)));
    // 0x19eb54: 0x3403ea24
    ctx->pc = 0x19eb54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 59940));
    // 0x19eb58: 0x14830008
    ctx->pc = 0x19EB58u;
    {
        const bool branch_taken_0x19eb58 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x19EB5Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19eb58) {
            ctx->pc = 0x19EB7Cu;
            goto label_19eb7c;
        }
    }
    ctx->pc = 0x19EB60u;
    // 0x19eb60: 0x8ce20914
    ctx->pc = 0x19eb60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 2324)));
    // 0x19eb64: 0x28420003
    ctx->pc = 0x19eb64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x19eb68: 0x50400005
    ctx->pc = 0x19EB68u;
    {
        const bool branch_taken_0x19eb68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19eb68) {
            ctx->pc = 0x19EB6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 616)));
            ctx->pc = 0x19EB80u;
            goto label_19eb80;
        }
    }
    ctx->pc = 0x19EB70u;
    // 0x19eb70: 0x8cc20258
    ctx->pc = 0x19eb70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 600)));
    // 0x19eb74: 0x384203e8
    ctx->pc = 0x19eb74u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1000));
    // 0x19eb78: 0x2c480001
    ctx->pc = 0x19eb78u;
    SET_GPR_U32(ctx, 8, SLTU32(GPR_U32(ctx, 2), 1));
label_19eb7c:
    // 0x19eb7c: 0x8cc20268
    ctx->pc = 0x19eb7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 616)));
label_19eb80:
    // 0x19eb80: 0x102102a
    ctx->pc = 0x19eb80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x19eb84: 0x14400003
    ctx->pc = 0x19EB84u;
    {
        const bool branch_taken_0x19eb84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19eb84) {
            ctx->pc = 0x19EB94u;
            goto label_19eb94;
        }
    }
    ctx->pc = 0x19EB8Cu;
    // 0x19eb8c: 0x10000007
    ctx->pc = 0x19EB8Cu;
    {
        const bool branch_taken_0x19eb8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EB90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 624)));
        if (branch_taken_0x19eb8c) {
            ctx->pc = 0x19EBACu;
            goto label_19ebac;
        }
    }
    ctx->pc = 0x19EB94u;
label_19eb94:
    // 0x19eb94: 0x460c6834
    ctx->pc = 0x19eb94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eb98: 0x0
    ctx->pc = 0x19eb98u;
    // NOP
    // 0x19eb9c: 0x45000003
    ctx->pc = 0x19EB9Cu;
    {
        const bool branch_taken_0x19eb9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19EBA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19eb9c) {
            ctx->pc = 0x19EBACu;
            goto label_19ebac;
        }
    }
    ctx->pc = 0x19EBA4u;
    // 0x19eba4: 0x10000002
    ctx->pc = 0x19EBA4u;
    {
        const bool branch_taken_0x19eba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EBA8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x19eba4) {
            ctx->pc = 0x19EBB0u;
            goto label_19ebb0;
        }
    }
    ctx->pc = 0x19EBACu;
label_19ebac:
    // 0x19ebac: 0xaca20000
    ctx->pc = 0x19ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_19ebb0:
    // 0x19ebb0: 0xacc00268
    ctx->pc = 0x19ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 616), GPR_U32(ctx, 0));
    // 0x19ebb4: 0xe4cc0274
    ctx->pc = 0x19ebb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 628), bits); }
    // 0x19ebb8: 0x8ca20000
    ctx->pc = 0x19ebb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ebbc: 0xacc20270
    ctx->pc = 0x19ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
label_19ebc0:
    // 0x19ebc0: 0x3e00008
    ctx->pc = 0x19EBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EB00u: goto label_19eb00;
            case 0x19EB4Cu: goto label_19eb4c;
            case 0x19EB7Cu: goto label_19eb7c;
            case 0x19EB80u: goto label_19eb80;
            case 0x19EB94u: goto label_19eb94;
            case 0x19EBACu: goto label_19ebac;
            case 0x19EBB0u: goto label_19ebb0;
            case 0x19EBC0u: goto label_19ebc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EBC8u;
}
