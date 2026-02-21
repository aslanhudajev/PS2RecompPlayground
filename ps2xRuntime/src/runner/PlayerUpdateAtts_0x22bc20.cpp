#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerUpdateAtts
// Address: 0x22bc20 - 0x22becc
void PlayerUpdateAtts_0x22bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22bc20u;

    // 0x22bc20: 0x27bdffc0
    ctx->pc = 0x22bc20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22bc24: 0xffbf0030
    ctx->pc = 0x22bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22bc28: 0xffb20020
    ctx->pc = 0x22bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22bc2c: 0xffb10010
    ctx->pc = 0x22bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22bc30: 0xffb00000
    ctx->pc = 0x22bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bc34: 0x80802d
    ctx->pc = 0x22bc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc38: 0xc0902d
    ctx->pc = 0x22bc38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc3c: 0x8e03000c
    ctx->pc = 0x22bc3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22bc40: 0x24020002
    ctx->pc = 0x22bc40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22bc44: 0x1462000d
    ctx->pc = 0x22BC44u;
    {
        const bool branch_taken_0x22bc44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22BC48u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x22bc44) {
            ctx->pc = 0x22BC7Cu;
            goto label_22bc7c;
        }
    }
    ctx->pc = 0x22BC4Cu;
    // 0x22bc4c: 0x3c020032
    ctx->pc = 0x22bc4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22bc50: 0x8e030104
    ctx->pc = 0x22bc50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x22bc54: 0x8c421540
    ctx->pc = 0x22bc54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x22bc58: 0x14620008
    ctx->pc = 0x22BC58u;
    {
        const bool branch_taken_0x22bc58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22bc58) {
            ctx->pc = 0x22BC7Cu;
            goto label_22bc7c;
        }
    }
    ctx->pc = 0x22BC60u;
    // 0x22bc60: 0x3c014479
    ctx->pc = 0x22bc60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x22bc64: 0x3421c000
    ctx->pc = 0x22bc64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x22bc68: 0x44810000
    ctx->pc = 0x22bc68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22bc6c: 0xe6000108
    ctx->pc = 0x22bc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x22bc70: 0xe600010c
    ctx->pc = 0x22bc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x22bc74: 0x1000008e
    ctx->pc = 0x22BC74u;
    {
        const bool branch_taken_0x22bc74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22BC78u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        if (branch_taken_0x22bc74) {
            ctx->pc = 0x22BEB0u;
            goto label_22beb0;
        }
    }
    ctx->pc = 0x22BC7Cu;
label_22bc7c:
    // 0x22bc7c: 0x16400005
    ctx->pc = 0x22BC7Cu;
    {
        const bool branch_taken_0x22bc7c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x22BC80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22bc7c) {
            ctx->pc = 0x22BC94u;
            goto label_22bc94;
        }
    }
    ctx->pc = 0x22BC84u;
    // 0x22bc84: 0x24020018
    ctx->pc = 0x22bc84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22bc88: 0xa21018
    ctx->pc = 0x22bc88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22bc8c: 0x244209ac
    ctx->pc = 0x22bc8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2476));
    // 0x22bc90: 0x2029021
    ctx->pc = 0x22bc90u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22bc94:
    // 0x22bc94: 0xc093692
    ctx->pc = 0x22BC94u;
    SET_GPR_U32(ctx, 31, 0x22BC9Cu);
    ctx->pc = 0x22BC98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC9Cu; }
    }
    if (ctx->pc != 0x22BC9Cu) { return; }
    ctx->pc = 0x22BC9Cu;
    // 0x22bc9c: 0x3c030033
    ctx->pc = 0x22bc9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22bca0: 0x24634910
    ctx->pc = 0x22bca0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x22bca4: 0x111080
    ctx->pc = 0x22bca4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22bca8: 0x431021
    ctx->pc = 0x22bca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bcac: 0x8c440000
    ctx->pc = 0x22bcacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bcb0: 0x8e032ac0
    ctx->pc = 0x22bcb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x22bcb4: 0x2463ffff
    ctx->pc = 0x22bcb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22bcb8: 0x31080
    ctx->pc = 0x22bcb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22bcbc: 0x431021
    ctx->pc = 0x22bcbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bcc0: 0x44820800
    ctx->pc = 0x22bcc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x22bcc4: 0x46800860
    ctx->pc = 0x22bcc4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x22bcc8: 0xc4800028
    ctx->pc = 0x22bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bccc: 0x46000840
    ctx->pc = 0x22bcccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bcd0: 0xc480002c
    ctx->pc = 0x22bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bcd4: 0x46000834
    ctx->pc = 0x22bcd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bcd8: 0x0
    ctx->pc = 0x22bcd8u;
    // NOP
    // 0x22bcdc: 0x45010007
    ctx->pc = 0x22BCDCu;
    {
        const bool branch_taken_0x22bcdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BCE0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x22bcdc) {
            ctx->pc = 0x22BCFCu;
            goto label_22bcfc;
        }
    }
    ctx->pc = 0x22BCE4u;
    // 0x22bce4: 0x3c020033
    ctx->pc = 0x22bce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22bce8: 0x24424910
    ctx->pc = 0x22bce8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x22bcec: 0x111880
    ctx->pc = 0x22bcecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22bcf0: 0x621821
    ctx->pc = 0x22bcf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bcf4: 0x8c620000
    ctx->pc = 0x22bcf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22bcf8: 0xc441002c
    ctx->pc = 0x22bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bcfc:
    // 0x22bcfc: 0x46000840
    ctx->pc = 0x22bcfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bd00: 0x3c014479
    ctx->pc = 0x22bd00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x22bd04: 0x3421c000
    ctx->pc = 0x22bd04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x22bd08: 0x44810000
    ctx->pc = 0x22bd08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22bd0c: 0x46000834
    ctx->pc = 0x22bd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bd10: 0x0
    ctx->pc = 0x22bd10u;
    // NOP
    // 0x22bd14: 0x45020002
    ctx->pc = 0x22BD14u;
    {
        const bool branch_taken_0x22bd14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bd14) {
            ctx->pc = 0x22BD18u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
            ctx->pc = 0x22BD20u;
            goto label_22bd20;
        }
    }
    ctx->pc = 0x22BD1Cu;
    // 0x22bd1c: 0xe6010108
    ctx->pc = 0x22bd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_22bd20:
    // 0x22bd20: 0x3c030033
    ctx->pc = 0x22bd20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22bd24: 0x24634910
    ctx->pc = 0x22bd24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x22bd28: 0x111080
    ctx->pc = 0x22bd28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22bd2c: 0x431021
    ctx->pc = 0x22bd2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bd30: 0x8c440000
    ctx->pc = 0x22bd30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bd34: 0x8e032ac0
    ctx->pc = 0x22bd34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x22bd38: 0x2463ffff
    ctx->pc = 0x22bd38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22bd3c: 0x31080
    ctx->pc = 0x22bd3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22bd40: 0x431021
    ctx->pc = 0x22bd40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bd44: 0x44820800
    ctx->pc = 0x22bd44u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x22bd48: 0x46800860
    ctx->pc = 0x22bd48u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x22bd4c: 0xc4800038
    ctx->pc = 0x22bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bd50: 0x46000840
    ctx->pc = 0x22bd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bd54: 0xc480003c
    ctx->pc = 0x22bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bd58: 0x46000834
    ctx->pc = 0x22bd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bd5c: 0x0
    ctx->pc = 0x22bd5cu;
    // NOP
    // 0x22bd60: 0x45010007
    ctx->pc = 0x22BD60u;
    {
        const bool branch_taken_0x22bd60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BD64u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x22bd60) {
            ctx->pc = 0x22BD80u;
            goto label_22bd80;
        }
    }
    ctx->pc = 0x22BD68u;
    // 0x22bd68: 0x3c020033
    ctx->pc = 0x22bd68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22bd6c: 0x24424910
    ctx->pc = 0x22bd6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x22bd70: 0x111880
    ctx->pc = 0x22bd70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22bd74: 0x621821
    ctx->pc = 0x22bd74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bd78: 0x8c620000
    ctx->pc = 0x22bd78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22bd7c: 0xc441003c
    ctx->pc = 0x22bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bd80:
    // 0x22bd80: 0x46000840
    ctx->pc = 0x22bd80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bd84: 0x3c014479
    ctx->pc = 0x22bd84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x22bd88: 0x3421c000
    ctx->pc = 0x22bd88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x22bd8c: 0x44810000
    ctx->pc = 0x22bd8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22bd90: 0x46000834
    ctx->pc = 0x22bd90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bd94: 0x0
    ctx->pc = 0x22bd94u;
    // NOP
    // 0x22bd98: 0x45020002
    ctx->pc = 0x22BD98u;
    {
        const bool branch_taken_0x22bd98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bd98) {
            ctx->pc = 0x22BD9Cu;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
            ctx->pc = 0x22BDA4u;
            goto label_22bda4;
        }
    }
    ctx->pc = 0x22BDA0u;
    // 0x22bda0: 0xe601010c
    ctx->pc = 0x22bda0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_22bda4:
    // 0x22bda4: 0x3c030033
    ctx->pc = 0x22bda4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22bda8: 0x24634910
    ctx->pc = 0x22bda8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x22bdac: 0x111080
    ctx->pc = 0x22bdacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22bdb0: 0x431021
    ctx->pc = 0x22bdb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bdb4: 0x8c440000
    ctx->pc = 0x22bdb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bdb8: 0x8e032ac0
    ctx->pc = 0x22bdb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x22bdbc: 0x2463ffff
    ctx->pc = 0x22bdbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22bdc0: 0x31080
    ctx->pc = 0x22bdc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22bdc4: 0x431021
    ctx->pc = 0x22bdc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bdc8: 0x44820800
    ctx->pc = 0x22bdc8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x22bdcc: 0x46800860
    ctx->pc = 0x22bdccu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x22bdd0: 0xc4800040
    ctx->pc = 0x22bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bdd4: 0x46000840
    ctx->pc = 0x22bdd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bdd8: 0xc4800044
    ctx->pc = 0x22bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bddc: 0x46000834
    ctx->pc = 0x22bddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bde0: 0x0
    ctx->pc = 0x22bde0u;
    // NOP
    // 0x22bde4: 0x45010007
    ctx->pc = 0x22BDE4u;
    {
        const bool branch_taken_0x22bde4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BDE8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x22bde4) {
            ctx->pc = 0x22BE04u;
            goto label_22be04;
        }
    }
    ctx->pc = 0x22BDECu;
    // 0x22bdec: 0x3c020033
    ctx->pc = 0x22bdecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22bdf0: 0x24424910
    ctx->pc = 0x22bdf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x22bdf4: 0x111880
    ctx->pc = 0x22bdf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22bdf8: 0x621821
    ctx->pc = 0x22bdf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bdfc: 0x8c620000
    ctx->pc = 0x22bdfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22be00: 0xc4410044
    ctx->pc = 0x22be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22be04:
    // 0x22be04: 0x46000840
    ctx->pc = 0x22be04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22be08: 0x3c014479
    ctx->pc = 0x22be08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x22be0c: 0x3421c000
    ctx->pc = 0x22be0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x22be10: 0x44810000
    ctx->pc = 0x22be10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22be14: 0x46000834
    ctx->pc = 0x22be14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22be18: 0x0
    ctx->pc = 0x22be18u;
    // NOP
    // 0x22be1c: 0x45020002
    ctx->pc = 0x22BE1Cu;
    {
        const bool branch_taken_0x22be1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22be1c) {
            ctx->pc = 0x22BE20u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
            ctx->pc = 0x22BE28u;
            goto label_22be28;
        }
    }
    ctx->pc = 0x22BE24u;
    // 0x22be24: 0xe6010110
    ctx->pc = 0x22be24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_22be28:
    // 0x22be28: 0x3c030033
    ctx->pc = 0x22be28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22be2c: 0x24634910
    ctx->pc = 0x22be2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x22be30: 0x111080
    ctx->pc = 0x22be30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22be34: 0x431021
    ctx->pc = 0x22be34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22be38: 0x8c440000
    ctx->pc = 0x22be38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22be3c: 0x8e032ac0
    ctx->pc = 0x22be3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x22be40: 0x2463ffff
    ctx->pc = 0x22be40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22be44: 0x31080
    ctx->pc = 0x22be44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22be48: 0x431021
    ctx->pc = 0x22be48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22be4c: 0x44820800
    ctx->pc = 0x22be4cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x22be50: 0x46800860
    ctx->pc = 0x22be50u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x22be54: 0xc4800030
    ctx->pc = 0x22be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22be58: 0x46000840
    ctx->pc = 0x22be58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22be5c: 0xc4800034
    ctx->pc = 0x22be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22be60: 0x46000834
    ctx->pc = 0x22be60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22be64: 0x0
    ctx->pc = 0x22be64u;
    // NOP
    // 0x22be68: 0x45010007
    ctx->pc = 0x22BE68u;
    {
        const bool branch_taken_0x22be68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BE6Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x22be68) {
            ctx->pc = 0x22BE88u;
            goto label_22be88;
        }
    }
    ctx->pc = 0x22BE70u;
    // 0x22be70: 0x3c020033
    ctx->pc = 0x22be70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22be74: 0x24424910
    ctx->pc = 0x22be74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x22be78: 0x111880
    ctx->pc = 0x22be78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22be7c: 0x621821
    ctx->pc = 0x22be7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22be80: 0x8c620000
    ctx->pc = 0x22be80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22be84: 0xc4410034
    ctx->pc = 0x22be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22be88:
    // 0x22be88: 0x46000840
    ctx->pc = 0x22be88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22be8c: 0x3c014479
    ctx->pc = 0x22be8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x22be90: 0x3421c000
    ctx->pc = 0x22be90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x22be94: 0x44810000
    ctx->pc = 0x22be94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22be98: 0x46000834
    ctx->pc = 0x22be98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22be9c: 0x0
    ctx->pc = 0x22be9cu;
    // NOP
    // 0x22bea0: 0x45020004
    ctx->pc = 0x22BEA0u;
    {
        const bool branch_taken_0x22bea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bea0) {
            ctx->pc = 0x22BEA4u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
            ctx->pc = 0x22BEB4u;
            goto label_22beb4;
        }
    }
    ctx->pc = 0x22BEA8u;
    // 0x22bea8: 0x10000002
    ctx->pc = 0x22BEA8u;
    {
        const bool branch_taken_0x22bea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22BEACu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        if (branch_taken_0x22bea8) {
            ctx->pc = 0x22BEB4u;
            goto label_22beb4;
        }
    }
    ctx->pc = 0x22BEB0u;
label_22beb0:
    // 0x22beb0: 0xe6000114
    ctx->pc = 0x22beb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_22beb4:
    // 0x22beb4: 0xdfbf0030
    ctx->pc = 0x22beb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22beb8: 0xdfb20020
    ctx->pc = 0x22beb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bebc: 0xdfb10010
    ctx->pc = 0x22bebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bec0: 0xdfb00000
    ctx->pc = 0x22bec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bec4: 0x3e00008
    ctx->pc = 0x22BEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BEC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BC7Cu: goto label_22bc7c;
            case 0x22BC94u: goto label_22bc94;
            case 0x22BCFCu: goto label_22bcfc;
            case 0x22BD20u: goto label_22bd20;
            case 0x22BD80u: goto label_22bd80;
            case 0x22BDA4u: goto label_22bda4;
            case 0x22BE04u: goto label_22be04;
            case 0x22BE28u: goto label_22be28;
            case 0x22BE88u: goto label_22be88;
            case 0x22BEB0u: goto label_22beb0;
            case 0x22BEB4u: goto label_22beb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BECCu;
}
