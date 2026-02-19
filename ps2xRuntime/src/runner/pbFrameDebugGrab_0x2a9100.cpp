#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbFrameDebugGrab
// Address: 0x2a9100 - 0x2a9374
void pbFrameDebugGrab_0x2a9100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a9100u;

    // 0x2a9100: 0x3c020037
    ctx->pc = 0x2a9100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a9104: 0x8c428330
    ctx->pc = 0x2a9104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2a9108: 0x24440018
    ctx->pc = 0x2a9108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24));
    // 0x2a910c: 0x8c850010
    ctx->pc = 0x2a910cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a9110: 0x10a00096
    ctx->pc = 0x2A9110u;
    {
        const bool branch_taken_0x2a9110 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a9110) {
            ctx->pc = 0x2A936Cu;
            goto label_2a936c;
        }
    }
    ctx->pc = 0x2A9118u;
    // 0x2a9118: 0x8c830014
    ctx->pc = 0x2a9118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a911c: 0x8c6201e0
    ctx->pc = 0x2a911cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x2a9120: 0x304201ff
    ctx->pc = 0x2a9120u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x2a9124: 0xac82001c
    ctx->pc = 0x2a9124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2a9128: 0x8c6203e0
    ctx->pc = 0x2a9128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x2a912c: 0x304201ff
    ctx->pc = 0x2a912cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x2a9130: 0xac820020
    ctx->pc = 0x2a9130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2a9134: 0xdc6201e0
    ctx->pc = 0x2a9134u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x2a9138: 0x215f8
    ctx->pc = 0x2a9138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x2a913c: 0x2103f
    ctx->pc = 0x2a913cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9140: 0x3042003f
    ctx->pc = 0x2a9140u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
    // 0x2a9144: 0xac820024
    ctx->pc = 0x2a9144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x2a9148: 0xdc6201e0
    ctx->pc = 0x2a9148u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x2a914c: 0x21478
    ctx->pc = 0x2a914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2a9150: 0x2103f
    ctx->pc = 0x2a9150u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9154: 0x3042001f
    ctx->pc = 0x2a9154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x2a9158: 0xac820028
    ctx->pc = 0x2a9158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2a915c: 0x8c6201e4
    ctx->pc = 0x2a915cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2a9160: 0x304207ff
    ctx->pc = 0x2a9160u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a9164: 0xac82002c
    ctx->pc = 0x2a9164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2a9168: 0xdc6201e0
    ctx->pc = 0x2a9168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x2a916c: 0x212fe
    ctx->pc = 0x2a916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 11));
    // 0x2a9170: 0x304207ff
    ctx->pc = 0x2a9170u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a9174: 0xac820030
    ctx->pc = 0x2a9174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2a9178: 0x8c6201e8
    ctx->pc = 0x2a9178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2a917c: 0x30420fff
    ctx->pc = 0x2a917cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x2a9180: 0xac820034
    ctx->pc = 0x2a9180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x2a9184: 0xdc6201e8
    ctx->pc = 0x2a9184u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2a9188: 0x21538
    ctx->pc = 0x2a9188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x2a918c: 0x2103f
    ctx->pc = 0x2a918cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9190: 0x304207ff
    ctx->pc = 0x2a9190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a9194: 0xac820038
    ctx->pc = 0x2a9194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x2a9198: 0xdc6201e8
    ctx->pc = 0x2a9198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2a919c: 0x21278
    ctx->pc = 0x2a919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x2a91a0: 0x2103f
    ctx->pc = 0x2a91a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a91a4: 0x3042000f
    ctx->pc = 0x2a91a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x2a91a8: 0xac82003c
    ctx->pc = 0x2a91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x2a91ac: 0xdc6201e8
    ctx->pc = 0x2a91acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2a91b0: 0x21178
    ctx->pc = 0x2a91b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x2a91b4: 0x2103f
    ctx->pc = 0x2a91b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a91b8: 0x30420003
    ctx->pc = 0x2a91b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a91bc: 0xac820040
    ctx->pc = 0x2a91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2a91c0: 0x8c6201ec
    ctx->pc = 0x2a91c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x2a91c4: 0x30420fff
    ctx->pc = 0x2a91c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x2a91c8: 0xac820044
    ctx->pc = 0x2a91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x2a91cc: 0xdc6201e8
    ctx->pc = 0x2a91ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2a91d0: 0x2133e
    ctx->pc = 0x2a91d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 12));
    // 0x2a91d4: 0x304207ff
    ctx->pc = 0x2a91d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a91d8: 0xac820048
    ctx->pc = 0x2a91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2a91dc: 0x8c6201f0
    ctx->pc = 0x2a91dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x2a91e0: 0x304201ff
    ctx->pc = 0x2a91e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x2a91e4: 0xac820058
    ctx->pc = 0x2a91e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x2a91e8: 0x8c6203f0
    ctx->pc = 0x2a91e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1008)));
    // 0x2a91ec: 0x304201ff
    ctx->pc = 0x2a91ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x2a91f0: 0xac82005c
    ctx->pc = 0x2a91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x2a91f4: 0xdc6201f0
    ctx->pc = 0x2a91f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x2a91f8: 0x215f8
    ctx->pc = 0x2a91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x2a91fc: 0x2103f
    ctx->pc = 0x2a91fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9200: 0x3042003f
    ctx->pc = 0x2a9200u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
    // 0x2a9204: 0xac820060
    ctx->pc = 0x2a9204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x2a9208: 0xdc6201f0
    ctx->pc = 0x2a9208u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x2a920c: 0x21478
    ctx->pc = 0x2a920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2a9210: 0x2103f
    ctx->pc = 0x2a9210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9214: 0x3042001f
    ctx->pc = 0x2a9214u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x2a9218: 0xac820064
    ctx->pc = 0x2a9218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x2a921c: 0x8c6201f4
    ctx->pc = 0x2a921cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 500)));
    // 0x2a9220: 0x304207ff
    ctx->pc = 0x2a9220u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a9224: 0xac820068
    ctx->pc = 0x2a9224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x2a9228: 0xdc6201f0
    ctx->pc = 0x2a9228u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x2a922c: 0x212fe
    ctx->pc = 0x2a922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 11));
    // 0x2a9230: 0x304207ff
    ctx->pc = 0x2a9230u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a9234: 0xac82006c
    ctx->pc = 0x2a9234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x2a9238: 0x8c6201f8
    ctx->pc = 0x2a9238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x2a923c: 0x30420fff
    ctx->pc = 0x2a923cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x2a9240: 0xac820070
    ctx->pc = 0x2a9240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x2a9244: 0xdc6201f8
    ctx->pc = 0x2a9244u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x2a9248: 0x21538
    ctx->pc = 0x2a9248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x2a924c: 0x2103f
    ctx->pc = 0x2a924cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9250: 0x304207ff
    ctx->pc = 0x2a9250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a9254: 0xac820074
    ctx->pc = 0x2a9254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x2a9258: 0xdc6201f8
    ctx->pc = 0x2a9258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x2a925c: 0x21278
    ctx->pc = 0x2a925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x2a9260: 0x2103f
    ctx->pc = 0x2a9260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9264: 0x3042000f
    ctx->pc = 0x2a9264u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x2a9268: 0xac820078
    ctx->pc = 0x2a9268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x2a926c: 0xdc6201f8
    ctx->pc = 0x2a926cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x2a9270: 0x21178
    ctx->pc = 0x2a9270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x2a9274: 0x2103f
    ctx->pc = 0x2a9274u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a9278: 0x30420003
    ctx->pc = 0x2a9278u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a927c: 0xac82007c
    ctx->pc = 0x2a927cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x2a9280: 0x8c6201fc
    ctx->pc = 0x2a9280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x2a9284: 0x30420fff
    ctx->pc = 0x2a9284u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x2a9288: 0xac820080
    ctx->pc = 0x2a9288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a928c: 0xdc6201f8
    ctx->pc = 0x2a928cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x2a9290: 0x2133e
    ctx->pc = 0x2a9290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 12));
    // 0x2a9294: 0x304207ff
    ctx->pc = 0x2a9294u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2a9298: 0xac820084
    ctx->pc = 0x2a9298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x2a929c: 0x8c6201c0
    ctx->pc = 0x2a929cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2a92a0: 0x30420001
    ctx->pc = 0x2a92a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a92a4: 0xac820018
    ctx->pc = 0x2a92a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2a92a8: 0xdc6201c0
    ctx->pc = 0x2a92a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2a92ac: 0x217f8
    ctx->pc = 0x2a92acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x2a92b0: 0x2103f
    ctx->pc = 0x2a92b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a92b4: 0x30420001
    ctx->pc = 0x2a92b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a92b8: 0xac820054
    ctx->pc = 0x2a92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x2a92bc: 0x906201c1
    ctx->pc = 0x2a92bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 449)));
    // 0x2a92c0: 0xa0820004
    ctx->pc = 0x2a92c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a92c4: 0xdca201d0
    ctx->pc = 0x2a92c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x2a92c8: 0x30420001
    ctx->pc = 0x2a92c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a92cc: 0x2103c
    ctx->pc = 0x2a92ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a92d0: 0x2103f
    ctx->pc = 0x2a92d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a92d4: 0xac820008
    ctx->pc = 0x2a92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a92d8: 0xdca201d0
    ctx->pc = 0x2a92d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x2a92dc: 0x30420002
    ctx->pc = 0x2a92dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2a92e0: 0x2103c
    ctx->pc = 0x2a92e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a92e4: 0x2103f
    ctx->pc = 0x2a92e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a92e8: 0xac82000c
    ctx->pc = 0x2a92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2a92ec: 0xc4800044
    ctx->pc = 0x2a92ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a92f0: 0x46800020
    ctx->pc = 0x2a92f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a92f4: 0xc481003c
    ctx->pc = 0x2a92f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a92f8: 0x46800860
    ctx->pc = 0x2a92f8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a92fc: 0x0
    ctx->pc = 0x2a92fcu;
    // NOP
    // 0x2a9300: 0x0
    ctx->pc = 0x2a9300u;
    // NOP
    // 0x2a9304: 0x46010003
    ctx->pc = 0x2a9304u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a9308: 0xe480004c
    ctx->pc = 0x2a9308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2a930c: 0xc4800048
    ctx->pc = 0x2a930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9310: 0x46800020
    ctx->pc = 0x2a9310u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a9314: 0xc4810040
    ctx->pc = 0x2a9314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9318: 0x46800860
    ctx->pc = 0x2a9318u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a931c: 0x0
    ctx->pc = 0x2a931cu;
    // NOP
    // 0x2a9320: 0x0
    ctx->pc = 0x2a9320u;
    // NOP
    // 0x2a9324: 0x46010003
    ctx->pc = 0x2a9324u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a9328: 0xe4800050
    ctx->pc = 0x2a9328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2a932c: 0xc4800080
    ctx->pc = 0x2a932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9330: 0x46800020
    ctx->pc = 0x2a9330u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a9334: 0xc4810078
    ctx->pc = 0x2a9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9338: 0x46800860
    ctx->pc = 0x2a9338u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a933c: 0x0
    ctx->pc = 0x2a933cu;
    // NOP
    // 0x2a9340: 0x0
    ctx->pc = 0x2a9340u;
    // NOP
    // 0x2a9344: 0x46010003
    ctx->pc = 0x2a9344u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a9348: 0xe4800088
    ctx->pc = 0x2a9348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x2a934c: 0xc4800084
    ctx->pc = 0x2a934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9350: 0x46800020
    ctx->pc = 0x2a9350u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a9354: 0xc481007c
    ctx->pc = 0x2a9354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9358: 0x46800860
    ctx->pc = 0x2a9358u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a935c: 0x0
    ctx->pc = 0x2a935cu;
    // NOP
    // 0x2a9360: 0x0
    ctx->pc = 0x2a9360u;
    // NOP
    // 0x2a9364: 0x46010003
    ctx->pc = 0x2a9364u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a9368: 0xe480008c
    ctx->pc = 0x2a9368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_2a936c:
    // 0x2a936c: 0x3e00008
    ctx->pc = 0x2A936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A936Cu: goto label_2a936c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A9374u;
}
