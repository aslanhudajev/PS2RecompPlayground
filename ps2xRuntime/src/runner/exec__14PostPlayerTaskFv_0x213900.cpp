#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__14PostPlayerTaskFv
// Address: 0x213900 - 0x21397c
void exec__14PostPlayerTaskFv_0x213900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__14PostPlayerTaskFv");


    ctx->pc = 0x213900u;

    // 0x213900: 0x27bdfff0
    ctx->pc = 0x213900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213904: 0x7fbf0000
    ctx->pc = 0x213904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x213908: 0xc084e60
    ctx->pc = 0x213908u;
    SET_GPR_U32(ctx, 31, 0x213910u);
    ctx->pc = 0x213980u;
    {
        const uint32_t __entryPc = ctx->pc;
        dmgEftPlayer__14PostPlayerTaskFv_0x213980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213910u; }
        else if (ctx->pc != 0x213910u) { ctx->pc = 0x213910u; }
    }
    if (ctx->pc != 0x213910u) { return; }
    ctx->pc = 0x213910u;
    // 0x213910: 0x3c010050
    ctx->pc = 0x213910u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213914: 0x8425e3e8
    ctx->pc = 0x213914u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x213918: 0x24030002
    ctx->pc = 0x213918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21391c: 0x10a30013
    ctx->pc = 0x21391Cu;
    {
        const bool branch_taken_0x21391c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x213920u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21391c) {
            ctx->pc = 0x21396Cu;
            goto label_21396c;
        }
    }
    ctx->pc = 0x213924u;
    // 0x213924: 0x10a40007
    ctx->pc = 0x213924u;
    {
        const bool branch_taken_0x213924 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x213928u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x213924) {
            ctx->pc = 0x213944u;
            goto label_213944;
        }
    }
    ctx->pc = 0x21392Cu;
    // 0x21392c: 0x10a00003
    ctx->pc = 0x21392Cu;
    {
        const bool branch_taken_0x21392c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x213930u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21392c) {
            ctx->pc = 0x21393Cu;
            goto label_21393c;
        }
    }
    ctx->pc = 0x213934u;
    // 0x213934: 0x1000000f
    ctx->pc = 0x213934u;
    {
        const bool branch_taken_0x213934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213938u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x213934) {
            ctx->pc = 0x213974u;
            goto label_213974;
        }
    }
    ctx->pc = 0x21393Cu;
label_21393c:
    // 0x21393c: 0x1000000c
    ctx->pc = 0x21393Cu;
    {
        const bool branch_taken_0x21393c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213940u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937484), GPR_U32(ctx, 3));
        if (branch_taken_0x21393c) {
            ctx->pc = 0x213970u;
            goto label_213970;
        }
    }
    ctx->pc = 0x213944u;
label_213944:
    // 0x213944: 0x8c25dd24
    ctx->pc = 0x213944u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294958372)));
    // 0x213948: 0x24030005
    ctx->pc = 0x213948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21394c: 0x10a30003
    ctx->pc = 0x21394Cu;
    {
        const bool branch_taken_0x21394c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x213950u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x21394c) {
            ctx->pc = 0x21395Cu;
            goto label_21395c;
        }
    }
    ctx->pc = 0x213954u;
    // 0x213954: 0x14a30003
    ctx->pc = 0x213954u;
    {
        const bool branch_taken_0x213954 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x213954) {
            ctx->pc = 0x213964u;
            goto label_213964;
        }
    }
    ctx->pc = 0x21395Cu;
label_21395c:
    // 0x21395c: 0x10000004
    ctx->pc = 0x21395Cu;
    {
        const bool branch_taken_0x21395c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213960u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937484), GPR_U32(ctx, 0));
        if (branch_taken_0x21395c) {
            ctx->pc = 0x213970u;
            goto label_213970;
        }
    }
    ctx->pc = 0x213964u;
label_213964:
    // 0x213964: 0x10000002
    ctx->pc = 0x213964u;
    {
        const bool branch_taken_0x213964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213968u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937484), GPR_U32(ctx, 4));
        if (branch_taken_0x213964) {
            ctx->pc = 0x213970u;
            goto label_213970;
        }
    }
    ctx->pc = 0x21396Cu;
label_21396c:
    // 0x21396c: 0xaf838b8c
    ctx->pc = 0x21396cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937484), GPR_U32(ctx, 3));
label_213970:
    // 0x213970: 0x7bbf0000
    ctx->pc = 0x213970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_213974:
    // 0x213974: 0x3e00008
    ctx->pc = 0x213974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213978u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21393Cu: goto label_21393c;
            case 0x213944u: goto label_213944;
            case 0x21395Cu: goto label_21395c;
            case 0x213964u: goto label_213964;
            case 0x21396Cu: goto label_21396c;
            case 0x213970u: goto label_213970;
            case 0x213974u: goto label_213974;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21397Cu;
}
