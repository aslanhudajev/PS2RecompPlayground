#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindEffectIdx
// Address: 0x27ab60 - 0x27ac94
void FindEffectIdx_0x27ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ab60u;

    // 0x27ab60: 0x27bdffe0
    ctx->pc = 0x27ab60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ab64: 0xffbf0010
    ctx->pc = 0x27ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27ab68: 0xffb00000
    ctx->pc = 0x27ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ab6c: 0x302d
    ctx->pc = 0x27ab6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab70: 0x44801000
    ctx->pc = 0x27ab70u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x27ab74: 0x3c020034
    ctx->pc = 0x27ab74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ab78: 0x8c424ab0
    ctx->pc = 0x27ab78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 19120)));
    // 0x27ab7c: 0x1840002d
    ctx->pc = 0x27AB7Cu;
    {
        const bool branch_taken_0x27ab7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27AB80u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27ab7c) {
            ctx->pc = 0x27AC34u;
            goto label_27ac34;
        }
    }
    ctx->pc = 0x27AB84u;
    // 0x27ab84: 0x3c020034
    ctx->pc = 0x27ab84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ab88: 0xc4400f18
    ctx->pc = 0x27ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab8c: 0x46020036
    ctx->pc = 0x27ab8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ab90: 0x0
    ctx->pc = 0x27ab90u;
    // NOP
    // 0x27ab94: 0x45010028
    ctx->pc = 0x27AB94u;
    {
        const bool branch_taken_0x27ab94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AB98u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 64));
        if (branch_taken_0x27ab94) {
            ctx->pc = 0x27AC38u;
            goto label_27ac38;
        }
    }
    ctx->pc = 0x27AB9Cu;
    // 0x27ab9c: 0x3c020034
    ctx->pc = 0x27ab9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27aba0: 0x24480eb0
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27aba4: 0x240400f0
    ctx->pc = 0x27aba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27aba8: 0x3c078000
    ctx->pc = 0x27aba8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32768 << 16));
    // 0x27abac: 0x460010c6
    ctx->pc = 0x27abacu;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x27abb0: 0x3c020034
    ctx->pc = 0x27abb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27abb4: 0x8c454ab0
    ctx->pc = 0x27abb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 19120)));
    // 0x27abb8: 0x2041018
    ctx->pc = 0x27abb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27abbc: 0x0
    ctx->pc = 0x27abbcu;
    // NOP
label_27abc0:
    // 0x27abc0: 0x481821
    ctx->pc = 0x27abc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27abc4: 0x8c620064
    ctx->pc = 0x27abc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x27abc8: 0x471024
    ctx->pc = 0x27abc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27abcc: 0x5440000f
    ctx->pc = 0x27ABCCu;
    {
        const bool branch_taken_0x27abcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27abcc) {
            ctx->pc = 0x27ABD0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x27AC0Cu;
            goto label_27ac0c;
        }
    }
    ctx->pc = 0x27ABD4u;
    // 0x27abd4: 0x46031032
    ctx->pc = 0x27abd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27abd8: 0x0
    ctx->pc = 0x27abd8u;
    // NOP
    // 0x27abdc: 0x45030007
    ctx->pc = 0x27ABDCu;
    {
        const bool branch_taken_0x27abdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27abdc) {
            ctx->pc = 0x27ABE0u;
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x27ABFCu;
            goto label_27abfc;
        }
    }
    ctx->pc = 0x27ABE4u;
    // 0x27abe4: 0xc4600068
    ctx->pc = 0x27abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27abe8: 0x46020034
    ctx->pc = 0x27abe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27abec: 0x0
    ctx->pc = 0x27abecu;
    // NOP
    // 0x27abf0: 0x45020006
    ctx->pc = 0x27ABF0u;
    {
        const bool branch_taken_0x27abf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27abf0) {
            ctx->pc = 0x27ABF4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x27AC0Cu;
            goto label_27ac0c;
        }
    }
    ctx->pc = 0x27ABF8u;
    // 0x27abf8: 0x2041818
    ctx->pc = 0x27abf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27abfc:
    // 0x27abfc: 0x681021
    ctx->pc = 0x27abfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x27ac00: 0xc4420068
    ctx->pc = 0x27ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ac04: 0x200302d
    ctx->pc = 0x27ac04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac08: 0x26100001
    ctx->pc = 0x27ac08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_27ac0c:
    // 0x27ac0c: 0x205102a
    ctx->pc = 0x27ac0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 5)));
    // 0x27ac10: 0x10400008
    ctx->pc = 0x27AC10u;
    {
        const bool branch_taken_0x27ac10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AC14u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x27ac10) {
            ctx->pc = 0x27AC34u;
            goto label_27ac34;
        }
    }
    ctx->pc = 0x27AC18u;
    // 0x27ac18: 0x681021
    ctx->pc = 0x27ac18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x27ac1c: 0x44800800
    ctx->pc = 0x27ac1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x27ac20: 0xc4400068
    ctx->pc = 0x27ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac24: 0x46010036
    ctx->pc = 0x27ac24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ac28: 0x0
    ctx->pc = 0x27ac28u;
    // NOP
    // 0x27ac2c: 0x4500ffe4
    ctx->pc = 0x27AC2Cu;
    {
        const bool branch_taken_0x27ac2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AC30u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x27ac2c) {
            ctx->pc = 0x27ABC0u;
            goto label_27abc0;
        }
    }
    ctx->pc = 0x27AC34u;
label_27ac34:
    // 0x27ac34: 0x2a020040
    ctx->pc = 0x27ac34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 64));
label_27ac38:
    // 0x27ac38: 0x14400003
    ctx->pc = 0x27AC38u;
    {
        const bool branch_taken_0x27ac38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27AC3Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27ac38) {
            ctx->pc = 0x27AC48u;
            goto label_27ac48;
        }
    }
    ctx->pc = 0x27AC40u;
    // 0x27ac40: 0x10000006
    ctx->pc = 0x27AC40u;
    {
        const bool branch_taken_0x27ac40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AC44u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27ac40) {
            ctx->pc = 0x27AC5Cu;
            goto label_27ac5c;
        }
    }
    ctx->pc = 0x27AC48u;
label_27ac48:
    // 0x27ac48: 0x8c624ab0
    ctx->pc = 0x27ac48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 19120)));
    // 0x27ac4c: 0x56020004
    ctx->pc = 0x27AC4Cu;
    {
        const bool branch_taken_0x27ac4c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x27ac4c) {
            ctx->pc = 0x27AC50u;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x27AC60u;
            goto label_27ac60;
        }
    }
    ctx->pc = 0x27AC54u;
    // 0x27ac54: 0x26020001
    ctx->pc = 0x27ac54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x27ac58: 0xac624ab0
    ctx->pc = 0x27ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19120), GPR_U32(ctx, 2));
label_27ac5c:
    // 0x27ac5c: 0x3c030034
    ctx->pc = 0x27ac5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27ac60:
    // 0x27ac60: 0x24630eb0
    ctx->pc = 0x27ac60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27ac64: 0x240200f0
    ctx->pc = 0x27ac64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27ac68: 0x2021018
    ctx->pc = 0x27ac68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ac6c: 0x431021
    ctx->pc = 0x27ac6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ac70: 0xac400060
    ctx->pc = 0x27ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x27ac74: 0x200202d
    ctx->pc = 0x27ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac78: 0xc09e964
    ctx->pc = 0x27AC78u;
    SET_GPR_U32(ctx, 31, 0x27AC80u);
    ctx->pc = 0x27AC7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC80u; }
    }
    if (ctx->pc != 0x27AC80u) { return; }
    ctx->pc = 0x27AC80u;
    // 0x27ac80: 0x200102d
    ctx->pc = 0x27ac80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac84: 0xdfbf0010
    ctx->pc = 0x27ac84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ac88: 0xdfb00000
    ctx->pc = 0x27ac88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac8c: 0x3e00008
    ctx->pc = 0x27AC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27ABC0u: goto label_27abc0;
            case 0x27ABFCu: goto label_27abfc;
            case 0x27AC0Cu: goto label_27ac0c;
            case 0x27AC34u: goto label_27ac34;
            case 0x27AC38u: goto label_27ac38;
            case 0x27AC48u: goto label_27ac48;
            case 0x27AC5Cu: goto label_27ac5c;
            case 0x27AC60u: goto label_27ac60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27AC94u;
}
