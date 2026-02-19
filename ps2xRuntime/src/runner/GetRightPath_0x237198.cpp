#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetRightPath
// Address: 0x237198 - 0x2372b0
void GetRightPath_0x237198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237198u;

    // 0x237198: 0x27bdffb0
    ctx->pc = 0x237198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23719c: 0xffbf0040
    ctx->pc = 0x23719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2371a0: 0xffb30030
    ctx->pc = 0x2371a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2371a4: 0xffb20020
    ctx->pc = 0x2371a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2371a8: 0xffb10010
    ctx->pc = 0x2371a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2371ac: 0xffb00000
    ctx->pc = 0x2371acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2371b0: 0x802d
    ctx->pc = 0x2371b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371b4: 0x3c02003c
    ctx->pc = 0x2371b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2371b8: 0x24441c70
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7280));
    // 0x2371bc: 0x2403ffff
    ctx->pc = 0x2371bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2371c0:
    // 0x2371c0: 0x101080
    ctx->pc = 0x2371c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2371c4: 0x441021
    ctx->pc = 0x2371c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2371c8: 0xac430000
    ctx->pc = 0x2371c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2371cc: 0x26100001
    ctx->pc = 0x2371ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2371d0: 0x2a020080
    ctx->pc = 0x2371d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 128));
    // 0x2371d4: 0x1440fffa
    ctx->pc = 0x2371D4u;
    {
        const bool branch_taken_0x2371d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2371d4) {
            ctx->pc = 0x2371C0u;
            goto label_2371c0;
        }
    }
    ctx->pc = 0x2371DCu;
    // 0x2371dc: 0x3c02003c
    ctx->pc = 0x2371dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2371e0: 0xac401e70
    ctx->pc = 0x2371e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7792), GPR_U32(ctx, 0));
    // 0x2371e4: 0x3c040033
    ctx->pc = 0x2371e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x2371e8: 0xc08de78
    ctx->pc = 0x2371E8u;
    SET_GPR_U32(ctx, 31, 0x2371F0u);
    ctx->pc = 0x2371ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952904));
    ctx->pc = 0x2379E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_closest_milestone_0x2379e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2371F0u; }
    }
    if (ctx->pc != 0x2371F0u) { return; }
    ctx->pc = 0x2371F0u;
    // 0x2371f0: 0x40202d
    ctx->pc = 0x2371f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371f4: 0x3c13003c
    ctx->pc = 0x2371f4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x2371f8: 0x260102d
    ctx->pc = 0x2371f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371fc: 0x24521c70
    ctx->pc = 0x2371fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7280));
    // 0x237200: 0x3c11003c
    ctx->pc = 0x237200u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x237204: 0x80802d
    ctx->pc = 0x237204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237208:
    // 0x237208: 0x8e221e70
    ctx->pc = 0x237208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7792)));
    // 0x23720c: 0x21880
    ctx->pc = 0x23720cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x237210: 0x721821
    ctx->pc = 0x237210u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x237214: 0xac640000
    ctx->pc = 0x237214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x237218: 0x24420001
    ctx->pc = 0x237218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23721c: 0x3c013e32
    ctx->pc = 0x23721cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15922 << 16));
    // 0x237220: 0x3421b8c3
    ctx->pc = 0x237220u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x237224: 0x44816000
    ctx->pc = 0x237224u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x237228: 0xc08deba
    ctx->pc = 0x237228u;
    SET_GPR_U32(ctx, 31, 0x237230u);
    ctx->pc = 0x23722Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7792), GPR_U32(ctx, 2));
    ctx->pc = 0x237AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_next_milestone_0x237ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237230u; }
    }
    if (ctx->pc != 0x237230u) { return; }
    ctx->pc = 0x237230u;
    // 0x237230: 0x40202d
    ctx->pc = 0x237230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237234: 0x8e221e70
    ctx->pc = 0x237234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7792)));
    // 0x237238: 0x18400014
    ctx->pc = 0x237238u;
    {
        const bool branch_taken_0x237238 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23723Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x237238) {
            ctx->pc = 0x23728Cu;
            goto label_23728c;
        }
    }
    ctx->pc = 0x237240u;
    // 0x237240: 0x8e621c70
    ctx->pc = 0x237240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 7280)));
    // 0x237244: 0x1044000d
    ctx->pc = 0x237244u;
    {
        const bool branch_taken_0x237244 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x237248u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x237244) {
            ctx->pc = 0x23727Cu;
            goto label_23727c;
        }
    }
    ctx->pc = 0x23724Cu;
    // 0x23724c: 0x8c451e70
    ctx->pc = 0x23724cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 7792)));
    // 0x237250: 0x3c02003c
    ctx->pc = 0x237250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x237254: 0x24461c70
    ctx->pc = 0x237254u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7280));
    // 0x237258: 0x24630001
    ctx->pc = 0x237258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x23725c: 0x0
    ctx->pc = 0x23725cu;
    // NOP
label_237260:
    // 0x237260: 0x65102a
    ctx->pc = 0x237260u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x237264: 0x10400009
    ctx->pc = 0x237264u;
    {
        const bool branch_taken_0x237264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x237268u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x237264) {
            ctx->pc = 0x23728Cu;
            goto label_23728c;
        }
    }
    ctx->pc = 0x23726Cu;
    // 0x23726c: 0x461021
    ctx->pc = 0x23726cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x237270: 0x8c420000
    ctx->pc = 0x237270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237274: 0x5444fffa
    ctx->pc = 0x237274u;
    {
        const bool branch_taken_0x237274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x237274) {
            ctx->pc = 0x237278u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x237260u;
            goto label_237260;
        }
    }
    ctx->pc = 0x23727Cu;
label_23727c:
    // 0x23727c: 0x8e221e70
    ctx->pc = 0x23727cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7792)));
    // 0x237280: 0x62102a
    ctx->pc = 0x237280u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x237284: 0x14400004
    ctx->pc = 0x237284u;
    {
        const bool branch_taken_0x237284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237288u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x237284) {
            ctx->pc = 0x237298u;
            goto label_237298;
        }
    }
    ctx->pc = 0x23728Cu;
label_23728c:
    // 0x23728c: 0x1604ffde
    ctx->pc = 0x23728Cu;
    {
        const bool branch_taken_0x23728c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 4));
        ctx->pc = 0x237290u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23728c) {
            ctx->pc = 0x237208u;
            goto label_237208;
        }
    }
    ctx->pc = 0x237294u;
    // 0x237294: 0xdfbf0040
    ctx->pc = 0x237294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237298:
    // 0x237298: 0xdfb30030
    ctx->pc = 0x237298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23729c: 0xdfb20020
    ctx->pc = 0x23729cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2372a0: 0xdfb10010
    ctx->pc = 0x2372a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2372a4: 0xdfb00000
    ctx->pc = 0x2372a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2372a8: 0x3e00008
    ctx->pc = 0x2372A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2372ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2371C0u: goto label_2371c0;
            case 0x237208u: goto label_237208;
            case 0x237260u: goto label_237260;
            case 0x23727Cu: goto label_23727c;
            case 0x23728Cu: goto label_23728c;
            case 0x237298u: goto label_237298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2372B0u;
}
