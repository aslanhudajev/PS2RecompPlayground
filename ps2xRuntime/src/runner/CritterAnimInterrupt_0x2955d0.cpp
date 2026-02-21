#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterAnimInterrupt
// Address: 0x2955d0 - 0x2956a0
void CritterAnimInterrupt_0x2955d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2955d0u;

    // 0x2955d0: 0x8c870008
    ctx->pc = 0x2955d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2955d4: 0x8ca60008
    ctx->pc = 0x2955d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2955d8: 0x84830056
    ctx->pc = 0x2955d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
    // 0x2955dc: 0x24020028
    ctx->pc = 0x2955dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x2955e0: 0x10620020
    ctx->pc = 0x2955E0u;
    {
        const bool branch_taken_0x2955e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2955E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2955e0) {
            ctx->pc = 0x295664u;
            goto label_295664;
        }
    }
    ctx->pc = 0x2955E8u;
    // 0x2955e8: 0x28620029
    ctx->pc = 0x2955e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 41));
    // 0x2955ec: 0x10400007
    ctx->pc = 0x2955ECu;
    {
        const bool branch_taken_0x2955ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2955F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x2955ec) {
            ctx->pc = 0x29560Cu;
            goto label_29560c;
        }
    }
    ctx->pc = 0x2955F4u;
    // 0x2955f4: 0x10600012
    ctx->pc = 0x2955F4u;
    {
        const bool branch_taken_0x2955f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2955F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x2955f4) {
            ctx->pc = 0x295640u;
            goto label_295640;
        }
    }
    ctx->pc = 0x2955FCu;
    // 0x2955fc: 0x10620012
    ctx->pc = 0x2955FCu;
    {
        const bool branch_taken_0x2955fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x295600u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
        if (branch_taken_0x2955fc) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x295604u;
    // 0x295604: 0x10000019
    ctx->pc = 0x295604u;
    {
        const bool branch_taken_0x295604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x295604) {
            ctx->pc = 0x29566Cu;
            goto label_29566c;
        }
    }
    ctx->pc = 0x29560Cu;
label_29560c:
    // 0x29560c: 0x1062001d
    ctx->pc = 0x29560Cu;
    {
        const bool branch_taken_0x29560c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x295610u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 81));
        if (branch_taken_0x29560c) {
            ctx->pc = 0x295684u;
            goto label_295684;
        }
    }
    ctx->pc = 0x295614u;
    // 0x295614: 0x10400005
    ctx->pc = 0x295614u;
    {
        const bool branch_taken_0x295614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295618u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x295614) {
            ctx->pc = 0x29562Cu;
            goto label_29562c;
        }
    }
    ctx->pc = 0x29561Cu;
    // 0x29561c: 0x10620015
    ctx->pc = 0x29561Cu;
    {
        const bool branch_taken_0x29561c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x295620u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
        if (branch_taken_0x29561c) {
            ctx->pc = 0x295674u;
            goto label_295674;
        }
    }
    ctx->pc = 0x295624u;
    // 0x295624: 0x10000011
    ctx->pc = 0x295624u;
    {
        const bool branch_taken_0x295624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295628u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x295624) {
            ctx->pc = 0x29566Cu;
            goto label_29566c;
        }
    }
    ctx->pc = 0x29562Cu;
label_29562c:
    // 0x29562c: 0x2402005a
    ctx->pc = 0x29562cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
    // 0x295630: 0x10620018
    ctx->pc = 0x295630u;
    {
        const bool branch_taken_0x295630 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x295634u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
        if (branch_taken_0x295630) {
            ctx->pc = 0x295694u;
            goto label_295694;
        }
    }
    ctx->pc = 0x295638u;
    // 0x295638: 0x1000000c
    ctx->pc = 0x295638u;
    {
        const bool branch_taken_0x295638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29563Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x295638) {
            ctx->pc = 0x29566Cu;
            goto label_29566c;
        }
    }
    ctx->pc = 0x295640u;
label_295640:
    // 0x295640: 0x10000015
    ctx->pc = 0x295640u;
    {
        const bool branch_taken_0x295640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295644u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295640) {
            ctx->pc = 0x295698u;
            goto label_295698;
        }
    }
    ctx->pc = 0x295648u;
label_295648:
    // 0x295648: 0x2402ff00
    ctx->pc = 0x295648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x29564c: 0xc21824
    ctx->pc = 0x29564cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x295650: 0xe21024
    ctx->pc = 0x295650u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x295654: 0x43102a
    ctx->pc = 0x295654u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x295658: 0x24030002
    ctx->pc = 0x295658u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x29565c: 0x1000000e
    ctx->pc = 0x29565Cu;
    {
        const bool branch_taken_0x29565c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295660u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x29565c) {
            ctx->pc = 0x295698u;
            goto label_295698;
        }
    }
    ctx->pc = 0x295664u;
label_295664:
    // 0x295664: 0xe6182a
    ctx->pc = 0x295664u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x295668: 0x24020002
    ctx->pc = 0x295668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_29566c:
    // 0x29566c: 0x1000000a
    ctx->pc = 0x29566Cu;
    {
        const bool branch_taken_0x29566c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295670u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x29566c) {
            ctx->pc = 0x295698u;
            goto label_295698;
        }
    }
    ctx->pc = 0x295674u;
label_295674:
    // 0x295674: 0xc7182a
    ctx->pc = 0x295674u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x295678: 0x24020002
    ctx->pc = 0x295678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x29567c: 0x10000006
    ctx->pc = 0x29567Cu;
    {
        const bool branch_taken_0x29567c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295680u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x29567c) {
            ctx->pc = 0x295698u;
            goto label_295698;
        }
    }
    ctx->pc = 0x295684u;
label_295684:
    // 0x295684: 0x24030002
    ctx->pc = 0x295684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x295688: 0x28c20001
    ctx->pc = 0x295688u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 1));
    // 0x29568c: 0x10000002
    ctx->pc = 0x29568Cu;
    {
        const bool branch_taken_0x29568c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295690u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x29568c) {
            ctx->pc = 0x295698u;
            goto label_295698;
        }
    }
    ctx->pc = 0x295694u;
label_295694:
    // 0x295694: 0x24050002
    ctx->pc = 0x295694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_295698:
    // 0x295698: 0x3e00008
    ctx->pc = 0x295698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29569Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29560Cu: goto label_29560c;
            case 0x29562Cu: goto label_29562c;
            case 0x295640u: goto label_295640;
            case 0x295648u: goto label_295648;
            case 0x295664u: goto label_295664;
            case 0x29566Cu: goto label_29566c;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x295694u: goto label_295694;
            case 0x295698u: goto label_295698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2956A0u;
}
