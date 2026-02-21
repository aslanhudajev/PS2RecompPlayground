#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindWorldAnimNode
// Address: 0x21cd70 - 0x21ceb4
void FindWorldAnimNode_0x21cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21cd70u;

    // 0x21cd70: 0x27bdff30
    ctx->pc = 0x21cd70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21cd74: 0xffbf00b0
    ctx->pc = 0x21cd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x21cd78: 0xffb500a0
    ctx->pc = 0x21cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x21cd7c: 0xffb40090
    ctx->pc = 0x21cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x21cd80: 0xffb30080
    ctx->pc = 0x21cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x21cd84: 0xffb20070
    ctx->pc = 0x21cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x21cd88: 0xffb10060
    ctx->pc = 0x21cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x21cd8c: 0xffb00050
    ctx->pc = 0x21cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x21cd90: 0xe7b400c0
    ctx->pc = 0x21cd90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x21cd94: 0x80902d
    ctx->pc = 0x21cd94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd98: 0x46006506
    ctx->pc = 0x21cd98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21cd9c: 0x882d
    ctx->pc = 0x21cd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cda0: 0x3c020032
    ctx->pc = 0x21cda0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cda4: 0x8c42fa88
    ctx->pc = 0x21cda4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965896)));
    // 0x21cda8: 0x18400035
    ctx->pc = 0x21CDA8u;
    {
        const bool branch_taken_0x21cda8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21CDACu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21cda8) {
            ctx->pc = 0x21CE80u;
            goto label_21ce80;
        }
    }
    ctx->pc = 0x21CDB0u;
    // 0x21cdb0: 0x3c020032
    ctx->pc = 0x21cdb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cdb4: 0x2454f9f8
    ctx->pc = 0x21cdb4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21cdb8: 0x2415003c
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21cdbc: 0x8e82008c
    ctx->pc = 0x21cdbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_21cdc0:
    // 0x21cdc0: 0x111900
    ctx->pc = 0x21cdc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
    // 0x21cdc4: 0x621821
    ctx->pc = 0x21cdc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21cdc8: 0x8c62000c
    ctx->pc = 0x21cdc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21cdcc: 0x10400027
    ctx->pc = 0x21CDCCu;
    {
        const bool branch_taken_0x21cdcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CDD0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21cdcc) {
            ctx->pc = 0x21CE6Cu;
            goto label_21ce6c;
        }
    }
    ctx->pc = 0x21CDD4u;
    // 0x21cdd4: 0x84620000
    ctx->pc = 0x21cdd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21cdd8: 0x551018
    ctx->pc = 0x21cdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21cddc: 0x8e830004
    ctx->pc = 0x21cddcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21cde0: 0x438021
    ctx->pc = 0x21cde0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cde4: 0x8e040028
    ctx->pc = 0x21cde4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21cde8: 0xc0b4302
    ctx->pc = 0x21CDE8u;
    SET_GPR_U32(ctx, 31, 0x21CDF0u);
    ctx->pc = 0x21CDECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDF0u; }
    }
    if (ctx->pc != 0x21CDF0u) { return; }
    ctx->pc = 0x21CDF0u;
    // 0x21cdf0: 0xc7a30030
    ctx->pc = 0x21cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cdf4: 0xc6400000
    ctx->pc = 0x21cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cdf8: 0x460018c1
    ctx->pc = 0x21cdf8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21cdfc: 0xe7a30040
    ctx->pc = 0x21cdfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21ce00: 0xc7a20034
    ctx->pc = 0x21ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ce04: 0xc6400004
    ctx->pc = 0x21ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ce08: 0x46001081
    ctx->pc = 0x21ce08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21ce0c: 0xe7a20044
    ctx->pc = 0x21ce0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21ce10: 0xc7a00038
    ctx->pc = 0x21ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ce14: 0xc6410008
    ctx->pc = 0x21ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ce18: 0x46010001
    ctx->pc = 0x21ce18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21ce1c: 0xe7a00048
    ctx->pc = 0x21ce1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21ce20: 0x460318c2
    ctx->pc = 0x21ce20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x21ce24: 0x46021082
    ctx->pc = 0x21ce24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21ce28: 0x460218c0
    ctx->pc = 0x21ce28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x21ce2c: 0x46000002
    ctx->pc = 0x21ce2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21ce30: 0x46001b00
    ctx->pc = 0x21ce30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x21ce34: 0x0
    ctx->pc = 0x21ce34u;
    // NOP
    // 0x21ce38: 0x0
    ctx->pc = 0x21ce38u;
    // NOP
    // 0x21ce3c: 0x460c0004
    ctx->pc = 0x21ce3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21ce40: 0x46000032
    ctx->pc = 0x21ce40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ce44: 0x45010003
    ctx->pc = 0x21CE44u;
    {
        const bool branch_taken_0x21ce44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ce44) {
            ctx->pc = 0x21CE54u;
            goto label_21ce54;
        }
    }
    ctx->pc = 0x21CE4Cu;
    // 0x21ce4c: 0xc0ba284
    ctx->pc = 0x21CE4Cu;
    SET_GPR_U32(ctx, 31, 0x21CE54u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE54u; }
    }
    if (ctx->pc != 0x21CE54u) { return; }
    ctx->pc = 0x21CE54u;
label_21ce54:
    // 0x21ce54: 0x46140034
    ctx->pc = 0x21ce54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ce58: 0x0
    ctx->pc = 0x21ce58u;
    // NOP
    // 0x21ce5c: 0x45020004
    ctx->pc = 0x21CE5Cu;
    {
        const bool branch_taken_0x21ce5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ce5c) {
            ctx->pc = 0x21CE60u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x21CE70u;
            goto label_21ce70;
        }
    }
    ctx->pc = 0x21CE64u;
    // 0x21ce64: 0x200982d
    ctx->pc = 0x21ce64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce68: 0x46000506
    ctx->pc = 0x21ce68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_21ce6c:
    // 0x21ce6c: 0x26310001
    ctx->pc = 0x21ce6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_21ce70:
    // 0x21ce70: 0x8e820090
    ctx->pc = 0x21ce70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x21ce74: 0x222102a
    ctx->pc = 0x21ce74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x21ce78: 0x5440ffd1
    ctx->pc = 0x21CE78u;
    {
        const bool branch_taken_0x21ce78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21ce78) {
            ctx->pc = 0x21CE7Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 140)));
            ctx->pc = 0x21CDC0u;
            goto label_21cdc0;
        }
    }
    ctx->pc = 0x21CE80u;
label_21ce80:
    // 0x21ce80: 0x12600002
    ctx->pc = 0x21CE80u;
    {
        const bool branch_taken_0x21ce80 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CE84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21ce80) {
            ctx->pc = 0x21CE8Cu;
            goto label_21ce8c;
        }
    }
    ctx->pc = 0x21CE88u;
    // 0x21ce88: 0x8e620028
    ctx->pc = 0x21ce88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_21ce8c:
    // 0x21ce8c: 0xdfbf00b0
    ctx->pc = 0x21ce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21ce90: 0xdfb500a0
    ctx->pc = 0x21ce90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21ce94: 0xdfb40090
    ctx->pc = 0x21ce94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ce98: 0xdfb30080
    ctx->pc = 0x21ce98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ce9c: 0xdfb20070
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21cea0: 0xdfb10060
    ctx->pc = 0x21cea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21cea4: 0xdfb00050
    ctx->pc = 0x21cea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21cea8: 0xc7b400c0
    ctx->pc = 0x21cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21ceac: 0x3e00008
    ctx->pc = 0x21CEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CEB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CDC0u: goto label_21cdc0;
            case 0x21CE54u: goto label_21ce54;
            case 0x21CE6Cu: goto label_21ce6c;
            case 0x21CE70u: goto label_21ce70;
            case 0x21CE80u: goto label_21ce80;
            case 0x21CE8Cu: goto label_21ce8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CEB4u;
}
