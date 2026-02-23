#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrFunc
// Address: 0x17e1d0 - 0x17e28c
void SVM_ExecSvrFunc_0x17e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrFunc");


    ctx->pc = 0x17e1d0u;

label_17e1d0:
    // 0x17e1d0: 0x27bdff90
    ctx->pc = 0x17e1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_17e1d4:
    // 0x17e1d4: 0x3c03002e
    ctx->pc = 0x17e1d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
label_17e1d8:
    // 0x17e1d8: 0xffb50050
    ctx->pc = 0x17e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_17e1dc:
    // 0x17e1dc: 0x3c020024
    ctx->pc = 0x17e1dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17e1e0:
    // 0x17e1e0: 0x4a880
    ctx->pc = 0x17e1e0u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 4), 2));
label_17e1e4:
    // 0x17e1e4: 0xffb40040
    ctx->pc = 0x17e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_17e1e8:
    // 0x17e1e8: 0xffb30030
    ctx->pc = 0x17e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17e1ec:
    // 0x17e1ec: 0x24631ae0
    ctx->pc = 0x17e1ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6880));
label_17e1f0:
    // 0x17e1f0: 0xffb20020
    ctx->pc = 0x17e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17e1f4:
    // 0x17e1f4: 0x24421398
    ctx->pc = 0x17e1f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5016));
label_17e1f8:
    // 0x17e1f8: 0xffb10010
    ctx->pc = 0x17e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17e1fc:
    // 0x17e1fc: 0x42140
    ctx->pc = 0x17e1fcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
label_17e200:
    // 0x17e200: 0xffb00000
    ctx->pc = 0x17e200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17e204:
    // 0x17e204: 0x2a29021
    ctx->pc = 0x17e204u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_17e208:
    // 0x17e208: 0xffbf0060
    ctx->pc = 0x17e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17e20c:
    // 0x17e20c: 0x838021
    ctx->pc = 0x17e20cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17e210:
    // 0x17e210: 0x982d
    ctx->pc = 0x17e210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e214:
    // 0x17e214: 0x24140001
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_17e218:
    // 0x17e218: 0x24110003
    ctx->pc = 0x17e218u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
label_17e21c:
    // 0x17e21c: 0x0
    ctx->pc = 0x17e21cu;
    // NOP
label_17e220:
    // 0x17e220: 0x8e020000
    ctx->pc = 0x17e220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e224:
    // 0x17e224: 0x50400007
label_17e228:
    if (ctx->pc == 0x17E228u) {
        ctx->pc = 0x17E228u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x17E22Cu;
        goto label_17e22c;
    }
    ctx->pc = 0x17E224u;
    {
        const bool branch_taken_0x17e224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17e224) {
            ctx->pc = 0x17E228u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x17E244u;
            goto label_17e244;
        }
    }
    ctx->pc = 0x17E22Cu;
label_17e22c:
    // 0x17e22c: 0xae540000
    ctx->pc = 0x17e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_17e230:
    // 0x17e230: 0x40f809
label_17e234:
    if (ctx->pc == 0x17E234u) {
        ctx->pc = 0x17E234u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x17E238u;
        goto label_17e238;
    }
    ctx->pc = 0x17E230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E238u);
        ctx->pc = 0x17E234u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E1D0u: goto label_17e1d0;
            case 0x17E1D4u: goto label_17e1d4;
            case 0x17E1D8u: goto label_17e1d8;
            case 0x17E1DCu: goto label_17e1dc;
            case 0x17E1E0u: goto label_17e1e0;
            case 0x17E1E4u: goto label_17e1e4;
            case 0x17E1E8u: goto label_17e1e8;
            case 0x17E1ECu: goto label_17e1ec;
            case 0x17E1F0u: goto label_17e1f0;
            case 0x17E1F4u: goto label_17e1f4;
            case 0x17E1F8u: goto label_17e1f8;
            case 0x17E1FCu: goto label_17e1fc;
            case 0x17E200u: goto label_17e200;
            case 0x17E204u: goto label_17e204;
            case 0x17E208u: goto label_17e208;
            case 0x17E20Cu: goto label_17e20c;
            case 0x17E210u: goto label_17e210;
            case 0x17E214u: goto label_17e214;
            case 0x17E218u: goto label_17e218;
            case 0x17E21Cu: goto label_17e21c;
            case 0x17E220u: goto label_17e220;
            case 0x17E224u: goto label_17e224;
            case 0x17E228u: goto label_17e228;
            case 0x17E22Cu: goto label_17e22c;
            case 0x17E230u: goto label_17e230;
            case 0x17E234u: goto label_17e234;
            case 0x17E238u: goto label_17e238;
            case 0x17E23Cu: goto label_17e23c;
            case 0x17E240u: goto label_17e240;
            case 0x17E244u: goto label_17e244;
            case 0x17E248u: goto label_17e248;
            case 0x17E24Cu: goto label_17e24c;
            case 0x17E250u: goto label_17e250;
            case 0x17E254u: goto label_17e254;
            case 0x17E258u: goto label_17e258;
            case 0x17E25Cu: goto label_17e25c;
            case 0x17E260u: goto label_17e260;
            case 0x17E264u: goto label_17e264;
            case 0x17E268u: goto label_17e268;
            case 0x17E26Cu: goto label_17e26c;
            case 0x17E270u: goto label_17e270;
            case 0x17E274u: goto label_17e274;
            case 0x17E278u: goto label_17e278;
            case 0x17E27Cu: goto label_17e27c;
            case 0x17E280u: goto label_17e280;
            case 0x17E284u: goto label_17e284;
            case 0x17E288u: goto label_17e288;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E238u; }
            if (ctx->pc != 0x17E238u) { return; }
        }
    }
    ctx->pc = 0x17E238u;
label_17e238:
    // 0x17e238: 0xae400000
    ctx->pc = 0x17e238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_17e23c:
    // 0x17e23c: 0x2629825
    ctx->pc = 0x17e23cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_17e240:
    // 0x17e240: 0x2631ffff
    ctx->pc = 0x17e240u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_17e244:
    // 0x17e244: 0x621fff6
label_17e248:
    if (ctx->pc == 0x17E248u) {
        ctx->pc = 0x17E248u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x17E24Cu;
        goto label_17e24c;
    }
    ctx->pc = 0x17E244u;
    {
        const bool branch_taken_0x17e244 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17E248u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x17e244) {
            ctx->pc = 0x17E220u;
            goto label_17e220;
        }
    }
    ctx->pc = 0x17E24Cu;
label_17e24c:
    // 0x17e24c: 0x3c040024
    ctx->pc = 0x17e24cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_17e250:
    // 0x17e250: 0x260102d
    ctx->pc = 0x17e250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17e254:
    // 0x17e254: 0x24841378
    ctx->pc = 0x17e254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4984));
label_17e258:
    // 0x17e258: 0xdfbf0060
    ctx->pc = 0x17e258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17e25c:
    // 0x17e25c: 0x2a42021
    ctx->pc = 0x17e25cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_17e260:
    // 0x17e260: 0xdfb40040
    ctx->pc = 0x17e260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17e264:
    // 0x17e264: 0x8c830000
    ctx->pc = 0x17e264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e268:
    // 0x17e268: 0xdfb50050
    ctx->pc = 0x17e268u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17e26c:
    // 0x17e26c: 0x24630001
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_17e270:
    // 0x17e270: 0xdfb30030
    ctx->pc = 0x17e270u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17e274:
    // 0x17e274: 0xdfb20020
    ctx->pc = 0x17e274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e278:
    // 0x17e278: 0xdfb10010
    ctx->pc = 0x17e278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e27c:
    // 0x17e27c: 0xdfb00000
    ctx->pc = 0x17e27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e280:
    // 0x17e280: 0xac830000
    ctx->pc = 0x17e280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_17e284:
    // 0x17e284: 0x3e00008
label_17e288:
    if (ctx->pc == 0x17E288u) {
        ctx->pc = 0x17E288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17E28Cu;
        goto label_fallthrough_0x17e284;
    }
    ctx->pc = 0x17E284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E1D0u: goto label_17e1d0;
            case 0x17E1D4u: goto label_17e1d4;
            case 0x17E1D8u: goto label_17e1d8;
            case 0x17E1DCu: goto label_17e1dc;
            case 0x17E1E0u: goto label_17e1e0;
            case 0x17E1E4u: goto label_17e1e4;
            case 0x17E1E8u: goto label_17e1e8;
            case 0x17E1ECu: goto label_17e1ec;
            case 0x17E1F0u: goto label_17e1f0;
            case 0x17E1F4u: goto label_17e1f4;
            case 0x17E1F8u: goto label_17e1f8;
            case 0x17E1FCu: goto label_17e1fc;
            case 0x17E200u: goto label_17e200;
            case 0x17E204u: goto label_17e204;
            case 0x17E208u: goto label_17e208;
            case 0x17E20Cu: goto label_17e20c;
            case 0x17E210u: goto label_17e210;
            case 0x17E214u: goto label_17e214;
            case 0x17E218u: goto label_17e218;
            case 0x17E21Cu: goto label_17e21c;
            case 0x17E220u: goto label_17e220;
            case 0x17E224u: goto label_17e224;
            case 0x17E228u: goto label_17e228;
            case 0x17E22Cu: goto label_17e22c;
            case 0x17E230u: goto label_17e230;
            case 0x17E234u: goto label_17e234;
            case 0x17E238u: goto label_17e238;
            case 0x17E23Cu: goto label_17e23c;
            case 0x17E240u: goto label_17e240;
            case 0x17E244u: goto label_17e244;
            case 0x17E248u: goto label_17e248;
            case 0x17E24Cu: goto label_17e24c;
            case 0x17E250u: goto label_17e250;
            case 0x17E254u: goto label_17e254;
            case 0x17E258u: goto label_17e258;
            case 0x17E25Cu: goto label_17e25c;
            case 0x17E260u: goto label_17e260;
            case 0x17E264u: goto label_17e264;
            case 0x17E268u: goto label_17e268;
            case 0x17E26Cu: goto label_17e26c;
            case 0x17E270u: goto label_17e270;
            case 0x17E274u: goto label_17e274;
            case 0x17E278u: goto label_17e278;
            case 0x17E27Cu: goto label_17e27c;
            case 0x17E280u: goto label_17e280;
            case 0x17E284u: goto label_17e284;
            case 0x17E288u: goto label_17e288;
            default: break;
        }
        return;
    }
label_fallthrough_0x17e284:
    ctx->pc = 0x17E28Cu;
}
