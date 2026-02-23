#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPowOnInitSet
// Address: 0x1af5a0 - 0x1af6bc
void nlPowOnInitSet_0x1af5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPowOnInitSet");


    ctx->pc = 0x1af5a0u;

    // 0x1af5a0: 0x27bdfff0
    ctx->pc = 0x1af5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af5a4: 0x7fbf0000
    ctx->pc = 0x1af5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1af5a8:
    // 0x1af5a8: 0x3c011001
    ctx->pc = 0x1af5a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1af5ac: 0x8c22d000
    ctx->pc = 0x1af5acu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1af5b0: 0x30420100
    ctx->pc = 0x1af5b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1af5b4: 0x0
    ctx->pc = 0x1af5b4u;
    // NOP
    // 0x1af5b8: 0x0
    ctx->pc = 0x1af5b8u;
    // NOP
    // 0x1af5bc: 0x1440fffa
    ctx->pc = 0x1AF5BCu;
    {
        const bool branch_taken_0x1af5bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af5bc) {
            ctx->pc = 0x1AF5A8u;
            goto label_1af5a8;
        }
    }
    ctx->pc = 0x1AF5C4u;
    // 0x1af5c4: 0xc069528
    ctx->pc = 0x1AF5C4u;
    SET_GPR_U32(ctx, 31, 0x1AF5CCu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5CCu; }
        else if (ctx->pc != 0x1AF5CCu) { ctx->pc = 0x1AF5CCu; }
    }
    if (ctx->pc != 0x1AF5CCu) { return; }
    ctx->pc = 0x1AF5CCu;
    // 0x1af5cc: 0x3c031000
    ctx->pc = 0x1af5ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1af5d0: 0x34640009
    ctx->pc = 0x1af5d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 9));
    // 0x1af5d4: 0xac440000
    ctx->pc = 0x1af5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1af5d8: 0xac400004
    ctx->pc = 0x1af5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1af5dc: 0xac400008
    ctx->pc = 0x1af5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1af5e0: 0xac43000c
    ctx->pc = 0x1af5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1af5e4: 0x3203c
    ctx->pc = 0x1af5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af5e8: 0x3c030100
    ctx->pc = 0x1af5e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x1af5ec: 0x34630404
    ctx->pc = 0x1af5ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1028));
    // 0x1af5f0: 0xac430010
    ctx->pc = 0x1af5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1af5f4: 0x3c032000
    ctx->pc = 0x1af5f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x1af5f8: 0xac430014
    ctx->pc = 0x1af5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1af5fc: 0x3c030500
    ctx->pc = 0x1af5fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1280 << 16));
    // 0x1af600: 0xac430018
    ctx->pc = 0x1af600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1af604: 0x3c035100
    ctx->pc = 0x1af604u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1af608: 0x34630008
    ctx->pc = 0x1af608u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
    // 0x1af60c: 0xac43001c
    ctx->pc = 0x1af60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1af610: 0x34038007
    ctx->pc = 0x1af610u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32775));
    // 0x1af614: 0x641825
    ctx->pc = 0x1af614u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af618: 0xfc430020
    ctx->pc = 0x1af618u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1af61c: 0x2403000e
    ctx->pc = 0x1af61cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1af620: 0xfc430028
    ctx->pc = 0x1af620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1af624: 0x24050001
    ctx->pc = 0x1af624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af628: 0xfc450030
    ctx->pc = 0x1af628u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
    // 0x1af62c: 0x24030046
    ctx->pc = 0x1af62cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 70));
    // 0x1af630: 0xfc430038
    ctx->pc = 0x1af630u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1af634: 0x3c0300df
    ctx->pc = 0x1af634u;
    SET_GPR_U32(ctx, 3, ((uint32_t)223 << 16));
    // 0x1af638: 0x3203c
    ctx->pc = 0x1af638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af63c: 0x3c03027f
    ctx->pc = 0x1af63cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)639 << 16));
    // 0x1af640: 0x642025
    ctx->pc = 0x1af640u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af644: 0xfc440040
    ctx->pc = 0x1af644u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 4));
    // 0x1af648: 0x24030040
    ctx->pc = 0x1af648u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1af64c: 0xfc430048
    ctx->pc = 0x1af64cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x1af650: 0xfc440050
    ctx->pc = 0x1af650u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 4));
    // 0x1af654: 0x24030041
    ctx->pc = 0x1af654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 65));
    // 0x1af658: 0xfc430058
    ctx->pc = 0x1af658u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 3));
    // 0x1af65c: 0xfc450060
    ctx->pc = 0x1af65cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 5));
    // 0x1af660: 0x2403001a
    ctx->pc = 0x1af660u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1af664: 0xfc430068
    ctx->pc = 0x1af664u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 3));
    // 0x1af668: 0x24030080
    ctx->pc = 0x1af668u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1af66c: 0x3203c
    ctx->pc = 0x1af66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af670: 0x34038080
    ctx->pc = 0x1af670u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32896));
    // 0x1af674: 0x641825
    ctx->pc = 0x1af674u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af678: 0xfc430070
    ctx->pc = 0x1af678u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 3));
    // 0x1af67c: 0x2403003b
    ctx->pc = 0x1af67cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 59));
    // 0x1af680: 0xfc430078
    ctx->pc = 0x1af680u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 3));
    // 0x1af684: 0x24030061
    ctx->pc = 0x1af684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 97));
    // 0x1af688: 0xfc430080
    ctx->pc = 0x1af688u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 3));
    // 0x1af68c: 0x24030014
    ctx->pc = 0x1af68cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1af690: 0xfc430088
    ctx->pc = 0x1af690u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 136), GPR_U64(ctx, 3));
    // 0x1af694: 0x3c0300c8
    ctx->pc = 0x1af694u;
    SET_GPR_U32(ctx, 3, ((uint32_t)200 << 16));
    // 0x1af698: 0x3463c8c8
    ctx->pc = 0x1af698u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 51400));
    // 0x1af69c: 0xfc430090
    ctx->pc = 0x1af69cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 144), GPR_U64(ctx, 3));
    // 0x1af6a0: 0x2403003d
    ctx->pc = 0x1af6a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 61));
    // 0x1af6a4: 0xfc430098
    ctx->pc = 0x1af6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 152), GPR_U64(ctx, 3));
    // 0x1af6a8: 0xc06952c
    ctx->pc = 0x1AF6A8u;
    SET_GPR_U32(ctx, 31, 0x1AF6B0u);
    ctx->pc = 0x1AF6ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6B0u; }
        else if (ctx->pc != 0x1AF6B0u) { ctx->pc = 0x1AF6B0u; }
    }
    if (ctx->pc != 0x1AF6B0u) { return; }
    ctx->pc = 0x1AF6B0u;
    // 0x1af6b0: 0x7bbf0000
    ctx->pc = 0x1af6b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af6b4: 0x3e00008
    ctx->pc = 0x1AF6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF6B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF5A8u: goto label_1af5a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF6BCu;
}
