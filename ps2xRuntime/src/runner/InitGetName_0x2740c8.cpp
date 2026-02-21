#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitGetName
// Address: 0x2740c8 - 0x274170
void InitGetName_0x2740c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2740c8u;

    // 0x2740c8: 0x24022b00
    ctx->pc = 0x2740c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2740cc: 0x822018
    ctx->pc = 0x2740ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2740d0: 0x3c020032
    ctx->pc = 0x2740d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2740d4: 0x24421bc0
    ctx->pc = 0x2740d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2740d8: 0x822021
    ctx->pc = 0x2740d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2740dc: 0xac802ac8
    ctx->pc = 0x2740dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10952), GPR_U32(ctx, 0));
    // 0x2740e0: 0xac802acc
    ctx->pc = 0x2740e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10956), GPR_U32(ctx, 0));
    // 0x2740e4: 0x182d
    ctx->pc = 0x2740e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740e8: 0x2485099c
    ctx->pc = 0x2740e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 2460));
    // 0x2740ec: 0xa31021
    ctx->pc = 0x2740ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2740f0:
    // 0x2740f0: 0x80420000
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2740f4: 0x10400004
    ctx->pc = 0x2740F4u;
    {
        const bool branch_taken_0x2740f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2740F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2740f4) {
            ctx->pc = 0x274108u;
            goto label_274108;
        }
    }
    ctx->pc = 0x2740FCu;
    // 0x2740fc: 0x8c822acc
    ctx->pc = 0x2740fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 10956)));
    // 0x274100: 0x24420001
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x274104: 0xac822acc
    ctx->pc = 0x274104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10956), GPR_U32(ctx, 2));
label_274108:
    // 0x274108: 0x28620007
    ctx->pc = 0x274108u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 7));
    // 0x27410c: 0x1440fff8
    ctx->pc = 0x27410Cu;
    {
        const bool branch_taken_0x27410c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x274110u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x27410c) {
            ctx->pc = 0x2740F0u;
            goto label_2740f0;
        }
    }
    ctx->pc = 0x274114u;
    // 0x274114: 0x8c822acc
    ctx->pc = 0x274114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 10956)));
    // 0x274118: 0x28420005
    ctx->pc = 0x274118u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x27411c: 0x14400007
    ctx->pc = 0x27411Cu;
    {
        const bool branch_taken_0x27411c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x274120u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x27411c) {
            ctx->pc = 0x27413Cu;
            goto label_27413c;
        }
    }
    ctx->pc = 0x274124u;
    // 0x274124: 0x24020005
    ctx->pc = 0x274124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x274128: 0xac822acc
    ctx->pc = 0x274128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10956), GPR_U32(ctx, 2));
    // 0x27412c: 0x808209a1
    ctx->pc = 0x27412cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2465)));
    // 0x274130: 0xac822ad0
    ctx->pc = 0x274130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10960), GPR_U32(ctx, 2));
    // 0x274134: 0x10000002
    ctx->pc = 0x274134u;
    {
        const bool branch_taken_0x274134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274138u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 2465), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x274134) {
            ctx->pc = 0x274140u;
            goto label_274140;
        }
    }
    ctx->pc = 0x27413Cu;
label_27413c:
    // 0x27413c: 0xac822ad0
    ctx->pc = 0x27413cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10960), GPR_U32(ctx, 2));
label_274140:
    // 0x274140: 0x3c020031
    ctx->pc = 0x274140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x274144: 0x8c430018
    ctx->pc = 0x274144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x274148: 0x2402400b
    ctx->pc = 0x274148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
    // 0x27414c: 0x14620006
    ctx->pc = 0x27414Cu;
    {
        const bool branch_taken_0x27414c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x274150u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27414c) {
            ctx->pc = 0x274168u;
            goto label_274168;
        }
    }
    ctx->pc = 0x274154u;
    // 0x274154: 0xdc420e28
    ctx->pc = 0x274154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x274158: 0x30420004
    ctx->pc = 0x274158u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x27415c: 0x10400002
    ctx->pc = 0x27415Cu;
    {
        const bool branch_taken_0x27415c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274160u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27415c) {
            ctx->pc = 0x274168u;
            goto label_274168;
        }
    }
    ctx->pc = 0x274164u;
    // 0x274164: 0xac8200fc
    ctx->pc = 0x274164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 2));
label_274168:
    // 0x274168: 0x3e00008
    ctx->pc = 0x274168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2740F0u: goto label_2740f0;
            case 0x274108u: goto label_274108;
            case 0x27413Cu: goto label_27413c;
            case 0x274140u: goto label_274140;
            case 0x274168u: goto label_274168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274170u;
}
