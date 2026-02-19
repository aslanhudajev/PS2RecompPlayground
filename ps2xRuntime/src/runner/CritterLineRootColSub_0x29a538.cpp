#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLineRootColSub
// Address: 0x29a538 - 0x29a5c8
void CritterLineRootColSub_0x29a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a538u;

    // 0x29a538: 0x27bdfff0
    ctx->pc = 0x29a538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a53c: 0xffbf0000
    ctx->pc = 0x29a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a540: 0x8c820004
    ctx->pc = 0x29a540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a544: 0xc4400078
    ctx->pc = 0x29a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a548: 0x460060c0
    ctx->pc = 0x29a548u;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x29a54c: 0xc440007c
    ctx->pc = 0x29a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a550: 0x46006300
    ctx->pc = 0x29a550u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x29a554: 0xc4810060
    ctx->pc = 0x29a554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a558: 0xc4c00000
    ctx->pc = 0x29a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a55c: 0x46000841
    ctx->pc = 0x29a55cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a560: 0xc4800068
    ctx->pc = 0x29a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a564: 0xc4c20008
    ctx->pc = 0x29a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a568: 0x46020001
    ctx->pc = 0x29a568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29a56c: 0x46010842
    ctx->pc = 0x29a56cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x29a570: 0x46000002
    ctx->pc = 0x29a570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x29a574: 0x46000840
    ctx->pc = 0x29a574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a578: 0x460c6002
    ctx->pc = 0x29a578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x29a57c: 0x460d0000
    ctx->pc = 0x29a57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x29a580: 0x46010034
    ctx->pc = 0x29a580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a584: 0x0
    ctx->pc = 0x29a584u;
    // NOP
    // 0x29a588: 0x4501000c
    ctx->pc = 0x29A588u;
    {
        const bool branch_taken_0x29a588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A58Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a588) {
            ctx->pc = 0x29A5BCu;
            goto label_29a5bc;
        }
    }
    ctx->pc = 0x29A590u;
    // 0x29a590: 0xc4800064
    ctx->pc = 0x29a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a594: 0xc4c10004
    ctx->pc = 0x29a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a598: 0x46010001
    ctx->pc = 0x29a598u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a59c: 0x460e1840
    ctx->pc = 0x29a59cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[14]);
    // 0x29a5a0: 0x46000834
    ctx->pc = 0x29a5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a5a4: 0x0
    ctx->pc = 0x29a5a4u;
    // NOP
    // 0x29a5a8: 0x45010004
    ctx->pc = 0x29A5A8u;
    {
        const bool branch_taken_0x29a5a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A5ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
        if (branch_taken_0x29a5a8) {
            ctx->pc = 0x29A5BCu;
            goto label_29a5bc;
        }
    }
    ctx->pc = 0x29A5B0u;
    // 0x29a5b0: 0xc0a4202
    ctx->pc = 0x29A5B0u;
    SET_GPR_U32(ctx, 31, 0x29A5B8u);
    ctx->pc = 0x29A5B4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[3]);
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A5B8u; }
    }
    if (ctx->pc != 0x29A5B8u) { return; }
    ctx->pc = 0x29A5B8u;
    // 0x29a5b8: 0x2102b
    ctx->pc = 0x29a5b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_29a5bc:
    // 0x29a5bc: 0xdfbf0000
    ctx->pc = 0x29a5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a5c0: 0x3e00008
    ctx->pc = 0x29A5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A5C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A5BCu: goto label_29a5bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A5C8u;
}
