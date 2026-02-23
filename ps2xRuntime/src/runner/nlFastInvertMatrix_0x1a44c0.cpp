#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlFastInvertMatrix
// Address: 0x1a44c0 - 0x1a45ec
void nlFastInvertMatrix_0x1a44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlFastInvertMatrix");


    ctx->pc = 0x1a44c0u;

    // 0x1a44c0: 0x27bdff90
    ctx->pc = 0x1a44c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a44c4: 0x7fbf0020
    ctx->pc = 0x1a44c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a44c8: 0x7fb10010
    ctx->pc = 0x1a44c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a44cc: 0x27a40030
    ctx->pc = 0x1a44ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a44d0: 0xc06bf55
    ctx->pc = 0x1A44D0u;
    SET_GPR_U32(ctx, 31, 0x1A44D8u);
    ctx->pc = 0x1A44D4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44D8u; }
        else if (ctx->pc != 0x1A44D8u) { ctx->pc = 0x1A44D8u; }
    }
    if (ctx->pc != 0x1A44D8u) { return; }
    ctx->pc = 0x1A44D8u;
    // 0x1a44d8: 0xc06be7f
    ctx->pc = 0x1A44D8u;
    SET_GPR_U32(ctx, 31, 0x1A44E0u);
    ctx->pc = 0x1A44DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44E0u; }
        else if (ctx->pc != 0x1A44E0u) { ctx->pc = 0x1A44E0u; }
    }
    if (ctx->pc != 0x1A44E0u) { return; }
    ctx->pc = 0x1A44E0u;
    // 0x1a44e0: 0x27b00040
    ctx->pc = 0x1a44e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a44e4: 0xc06be7f
    ctx->pc = 0x1A44E4u;
    SET_GPR_U32(ctx, 31, 0x1A44ECu);
    ctx->pc = 0x1A44E8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44ECu; }
        else if (ctx->pc != 0x1A44ECu) { ctx->pc = 0x1A44ECu; }
    }
    if (ctx->pc != 0x1A44ECu) { return; }
    ctx->pc = 0x1A44ECu;
    // 0x1a44ec: 0x27b10050
    ctx->pc = 0x1a44ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a44f0: 0xc06be7f
    ctx->pc = 0x1A44F0u;
    SET_GPR_U32(ctx, 31, 0x1A44F8u);
    ctx->pc = 0x1A44F4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44F8u; }
        else if (ctx->pc != 0x1A44F8u) { ctx->pc = 0x1A44F8u; }
    }
    if (ctx->pc != 0x1A44F8u) { return; }
    ctx->pc = 0x1A44F8u;
    // 0x1a44f8: 0x27a30060
    ctx->pc = 0x1a44f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a44fc: 0xc4680000
    ctx->pc = 0x1a44fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a4500: 0xc6000000
    ctx->pc = 0x1a4500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4504: 0x27a50064
    ctx->pc = 0x1a4504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 100));
    // 0x1a4508: 0xc4a70000
    ctx->pc = 0x1a4508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a450c: 0xc7a20044
    ctx->pc = 0x1a450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4510: 0x27a60068
    ctx->pc = 0x1a4510u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 104));
    // 0x1a4514: 0x27a90048
    ctx->pc = 0x1a4514u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1a4518: 0x46004182
    ctx->pc = 0x1a4518u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1a451c: 0xc4c90000
    ctx->pc = 0x1a451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a4520: 0xc5210000
    ctx->pc = 0x1a4520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4524: 0x27aa0054
    ctx->pc = 0x1a4524u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 84));
    // 0x1a4528: 0xc5440000
    ctx->pc = 0x1a4528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a452c: 0x46023942
    ctx->pc = 0x1a452cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1a4530: 0xc6200000
    ctx->pc = 0x1a4530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4534: 0x27a70034
    ctx->pc = 0x1a4534u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 52));
    // 0x1a4538: 0xc7a30058
    ctx->pc = 0x1a4538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a453c: 0x27a80038
    ctx->pc = 0x1a453cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 56));
    // 0x1a4540: 0x46053018
    ctx->pc = 0x1a4540u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a4544: 0x4601485c
    ctx->pc = 0x1a4544u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x1a4548: 0x46000987
    ctx->pc = 0x1a4548u;
    ctx->f[6] = FPU_NEG_S(ctx->f[1]);
    // 0x1a454c: 0xc7a20030
    ctx->pc = 0x1a454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4550: 0xc4e10000
    ctx->pc = 0x1a4550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4554: 0x46004142
    ctx->pc = 0x1a4554u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1a4558: 0x3c023f80
    ctx->pc = 0x1a4558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a455c: 0x27a40030
    ctx->pc = 0x1a455cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a4560: 0x46043902
    ctx->pc = 0x1a4560u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x1a4564: 0xc5000000
    ctx->pc = 0x1a4564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4568: 0x46042818
    ctx->pc = 0x1a4568u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1a456c: 0x46024082
    ctx->pc = 0x1a456cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x1a4570: 0x46013842
    ctx->pc = 0x1a4570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x1a4574: 0x460348dc
    ctx->pc = 0x1a4574u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x1a4578: 0x46011018
    ctx->pc = 0x1a4578u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a457c: 0x4600481c
    ctx->pc = 0x1a457cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[0]));
    // 0x1a4580: 0x46000007
    ctx->pc = 0x1a4580u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a4584: 0xe4600000
    ctx->pc = 0x1a4584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a4588: 0x46001847
    ctx->pc = 0x1a4588u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1a458c: 0xe4a60000
    ctx->pc = 0x1a458cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a4590: 0xe4c10000
    ctx->pc = 0x1a4590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a4594: 0xc4e10000
    ctx->pc = 0x1a4594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4598: 0xc6000000
    ctx->pc = 0x1a4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a459c: 0xe4e00000
    ctx->pc = 0x1a459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a45a0: 0xe6010000
    ctx->pc = 0x1a45a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a45a4: 0xc5010000
    ctx->pc = 0x1a45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a45a8: 0xc6200000
    ctx->pc = 0x1a45a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a45ac: 0xe5000000
    ctx->pc = 0x1a45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1a45b0: 0xe6210000
    ctx->pc = 0x1a45b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1a45b4: 0xc5210000
    ctx->pc = 0x1a45b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a45b8: 0xc5400000
    ctx->pc = 0x1a45b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a45bc: 0xe5200000
    ctx->pc = 0x1a45bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1a45c0: 0xe5410000
    ctx->pc = 0x1a45c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1a45c4: 0xafa0003c
    ctx->pc = 0x1a45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1a45c8: 0xafa0004c
    ctx->pc = 0x1a45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1a45cc: 0xafa0005c
    ctx->pc = 0x1a45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x1a45d0: 0xc06c038
    ctx->pc = 0x1A45D0u;
    SET_GPR_U32(ctx, 31, 0x1A45D8u);
    ctx->pc = 0x1A45D4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45D8u; }
        else if (ctx->pc != 0x1A45D8u) { ctx->pc = 0x1A45D8u; }
    }
    if (ctx->pc != 0x1A45D8u) { return; }
    ctx->pc = 0x1A45D8u;
    // 0x1a45d8: 0x7bbf0020
    ctx->pc = 0x1a45d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a45dc: 0x7bb10010
    ctx->pc = 0x1a45dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a45e0: 0x7bb00000
    ctx->pc = 0x1a45e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a45e4: 0x3e00008
    ctx->pc = 0x1A45E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A45E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A45ECu;
}
