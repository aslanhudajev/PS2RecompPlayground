#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawTextMLines
// Address: 0x201468 - 0x201544
void DrawTextMLines_0x201468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201468u;

    // 0x201468: 0x27bdff30
    ctx->pc = 0x201468u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20146c: 0xffbf00b0
    ctx->pc = 0x20146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x201470: 0xffb600a0
    ctx->pc = 0x201470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x201474: 0xffb50090
    ctx->pc = 0x201474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x201478: 0xffb40080
    ctx->pc = 0x201478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x20147c: 0xffb30070
    ctx->pc = 0x20147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x201480: 0xffb20060
    ctx->pc = 0x201480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x201484: 0xffb10050
    ctx->pc = 0x201484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x201488: 0xffb00040
    ctx->pc = 0x201488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x20148c: 0xe7b400c0
    ctx->pc = 0x20148cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x201490: 0x80b02d
    ctx->pc = 0x201490u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201494: 0xa0902d
    ctx->pc = 0x201494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201498: 0xc0a02d
    ctx->pc = 0x201498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20149c: 0xe0a82d
    ctx->pc = 0x20149cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014a0: 0x46006506
    ctx->pc = 0x2014a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2014a4: 0x100802d
    ctx->pc = 0x2014a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014a8: 0xc080570
    ctx->pc = 0x2014A8u;
    SET_GPR_U32(ctx, 31, 0x2014B0u);
    ctx->pc = 0x2014ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014B0u; }
    }
    if (ctx->pc != 0x2014B0u) { return; }
    ctx->pc = 0x2014B0u;
    // 0x2014b0: 0x40982d
    ctx->pc = 0x2014b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014b4: 0x200202d
    ctx->pc = 0x2014b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014b8: 0x3c050031
    ctx->pc = 0x2014b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x2014bc: 0x24a5f2a8
    ctx->pc = 0x2014bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963880));
    // 0x2014c0: 0xc0803e0
    ctx->pc = 0x2014C0u;
    SET_GPR_U32(ctx, 31, 0x2014C8u);
    ctx->pc = 0x2014C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixMLineText_0x200f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014C8u; }
    }
    if (ctx->pc != 0x2014C8u) { return; }
    ctx->pc = 0x2014C8u;
    // 0x2014c8: 0x40882d
    ctx->pc = 0x2014c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014cc: 0x1a200011
    ctx->pc = 0x2014CCu;
    {
        const bool branch_taken_0x2014cc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2014D0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2014cc) {
            ctx->pc = 0x201514u;
            goto label_201514;
        }
    }
    ctx->pc = 0x2014D4u;
    // 0x2014d4: 0x0
    ctx->pc = 0x2014d4u;
    // NOP
label_2014d8:
    // 0x2014d8: 0x101080
    ctx->pc = 0x2014d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2014dc: 0x3a21021
    ctx->pc = 0x2014dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2014e0: 0x2c0202d
    ctx->pc = 0x2014e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014e4: 0x240282d
    ctx->pc = 0x2014e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014e8: 0x280302d
    ctx->pc = 0x2014e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014ec: 0x2a0382d
    ctx->pc = 0x2014ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014f0: 0x4600a306
    ctx->pc = 0x2014f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2014f4: 0x3c013f80
    ctx->pc = 0x2014f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2014f8: 0x44816800
    ctx->pc = 0x2014f8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2014fc: 0xc08041c
    ctx->pc = 0x2014FCu;
    SET_GPR_U32(ctx, 31, 0x201504u);
    ctx->pc = 0x201500u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201504u; }
    }
    if (ctx->pc != 0x201504u) { return; }
    ctx->pc = 0x201504u;
    // 0x201504: 0x26100001
    ctx->pc = 0x201504u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x201508: 0x211102a
    ctx->pc = 0x201508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x20150c: 0x1440fff2
    ctx->pc = 0x20150Cu;
    {
        const bool branch_taken_0x20150c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x201510u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        if (branch_taken_0x20150c) {
            ctx->pc = 0x2014D8u;
            goto label_2014d8;
        }
    }
    ctx->pc = 0x201514u;
label_201514:
    // 0x201514: 0x2331018
    ctx->pc = 0x201514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201518: 0xdfbf00b0
    ctx->pc = 0x201518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20151c: 0xdfb600a0
    ctx->pc = 0x20151cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x201520: 0xdfb50090
    ctx->pc = 0x201520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x201524: 0xdfb40080
    ctx->pc = 0x201524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x201528: 0xdfb30070
    ctx->pc = 0x201528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20152c: 0xdfb20060
    ctx->pc = 0x20152cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201530: 0xdfb10050
    ctx->pc = 0x201530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201534: 0xdfb00040
    ctx->pc = 0x201534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201538: 0xc7b400c0
    ctx->pc = 0x201538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20153c: 0x3e00008
    ctx->pc = 0x20153Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201540u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2014D8u: goto label_2014d8;
            case 0x201514u: goto label_201514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201544u;
}
