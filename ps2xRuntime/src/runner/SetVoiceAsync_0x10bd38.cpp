#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVoiceAsync
// Address: 0x10bd38 - 0x10bf40
void SetVoiceAsync_0x10bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10bd38u;

    // 0x10bd38: 0x8f838390
    ctx->pc = 0x10bd38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10bd3c: 0x27bdfff0
    ctx->pc = 0x10bd3cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bd40: 0xc0382d
    ctx->pc = 0x10bd40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd44: 0xffbf0000
    ctx->pc = 0x10bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bd48: 0x14600014
    ctx->pc = 0x10BD48u;
    {
        const bool branch_taken_0x10bd48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BD4Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bd48) {
            ctx->pc = 0x10BD9Cu;
            goto label_10bd9c;
        }
    }
    ctx->pc = 0x10BD50u;
    // 0x10bd50: 0x28a20018
    ctx->pc = 0x10bd50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
    // 0x10bd54: 0x54400004
    ctx->pc = 0x10BD54u;
    {
        const bool branch_taken_0x10bd54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bd54) {
            ctx->pc = 0x10BD58u;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294935540), GPR_U32(ctx, 0));
            ctx->pc = 0x10BD68u;
            goto label_10bd68;
        }
    }
    ctx->pc = 0x10BD5Cu;
    // 0x10bd5c: 0x24020001
    ctx->pc = 0x10bd5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bd60: 0x24a5ffe8
    ctx->pc = 0x10bd60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x10bd64: 0xaf8283f4
    ctx->pc = 0x10bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935540), GPR_U32(ctx, 2));
label_10bd68:
    // 0x10bd68: 0x8f8283f4
    ctx->pc = 0x10bd68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10bd6c: 0x53040
    ctx->pc = 0x10bd6cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bd70: 0x202d
    ctx->pc = 0x10bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd74: 0x34058010
    ctx->pc = 0x10bd74u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10bd78: 0x463025
    ctx->pc = 0x10bd78u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10bd7c: 0xc045c80
    ctx->pc = 0x10BD7Cu;
    SET_GPR_U32(ctx, 31, 0x10BD84u);
    ctx->pc = 0x10BD80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7935));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD84u; }
    }
    if (ctx->pc != 0x10BD84u) { return; }
    ctx->pc = 0x10BD84u;
    // 0x10bd84: 0x2403ffff
    ctx->pc = 0x10bd84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bd88: 0x14430063
    ctx->pc = 0x10BD88u;
    {
        const bool branch_taken_0x10bd88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10BD8Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10bd88) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BD90u;
    // 0x10bd90: 0x3c040017
    ctx->pc = 0x10bd90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bd94: 0x1000005d
    ctx->pc = 0x10BD94u;
    {
        const bool branch_taken_0x10bd94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BD98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24240));
        if (branch_taken_0x10bd94) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BD9Cu;
label_10bd9c:
    // 0x10bd9c: 0x24020001
    ctx->pc = 0x10bd9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bda0: 0x10620065
    ctx->pc = 0x10BDA0u;
    {
        const bool branch_taken_0x10bda0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BDA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x10bda0) {
            ctx->pc = 0x10BF38u;
            goto label_10bf38;
        }
    }
    ctx->pc = 0x10BDA8u;
    // 0x10bda8: 0x24020002
    ctx->pc = 0x10bda8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x10bdac: 0x1462000f
    ctx->pc = 0x10BDACu;
    {
        const bool branch_taken_0x10bdac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BDB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x10bdac) {
            ctx->pc = 0x10BDECu;
            goto label_10bdec;
        }
    }
    ctx->pc = 0x10BDB4u;
    // 0x10bdb4: 0x8f8683f4
    ctx->pc = 0x10bdb4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10bdb8: 0x51040
    ctx->pc = 0x10bdb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bdbc: 0x202d
    ctx->pc = 0x10bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdc0: 0x34058010
    ctx->pc = 0x10bdc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10bdc4: 0xc23025
    ctx->pc = 0x10bdc4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10bdc8: 0x24071eff
    ctx->pc = 0x10bdc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7935));
    // 0x10bdcc: 0xc045c80
    ctx->pc = 0x10BDCCu;
    SET_GPR_U32(ctx, 31, 0x10BDD4u);
    ctx->pc = 0x10BDD0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 256));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BDD4u; }
    }
    if (ctx->pc != 0x10BDD4u) { return; }
    ctx->pc = 0x10BDD4u;
    // 0x10bdd4: 0x2403ffff
    ctx->pc = 0x10bdd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bdd8: 0x1443004f
    ctx->pc = 0x10BDD8u;
    {
        const bool branch_taken_0x10bdd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10BDDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10bdd8) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BDE0u;
    // 0x10bde0: 0x3c040017
    ctx->pc = 0x10bde0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bde4: 0x10000049
    ctx->pc = 0x10BDE4u;
    {
        const bool branch_taken_0x10bde4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BDE8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24248));
        if (branch_taken_0x10bde4) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BDECu;
label_10bdec:
    // 0x10bdec: 0x10620012
    ctx->pc = 0x10BDECu;
    {
        const bool branch_taken_0x10bdec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BDF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x10bdec) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BDF4u;
    // 0x10bdf4: 0x1462000e
    ctx->pc = 0x10BDF4u;
    {
        const bool branch_taken_0x10bdf4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BDF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x10bdf4) {
            ctx->pc = 0x10BE30u;
            goto label_10be30;
        }
    }
    ctx->pc = 0x10BDFCu;
    // 0x10bdfc: 0x8f8683f4
    ctx->pc = 0x10bdfcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10be00: 0x51040
    ctx->pc = 0x10be00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x10be04: 0x202d
    ctx->pc = 0x10be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be08: 0x34058010
    ctx->pc = 0x10be08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10be0c: 0xc23025
    ctx->pc = 0x10be0cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10be10: 0xc045c80
    ctx->pc = 0x10BE10u;
    SET_GPR_U32(ctx, 31, 0x10BE18u);
    ctx->pc = 0x10BE14u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 512));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE18u; }
    }
    if (ctx->pc != 0x10BE18u) { return; }
    ctx->pc = 0x10BE18u;
    // 0x10be18: 0x2403ffff
    ctx->pc = 0x10be18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10be1c: 0x1443003e
    ctx->pc = 0x10BE1Cu;
    {
        const bool branch_taken_0x10be1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10BE20u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10be1c) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BE24u;
    // 0x10be24: 0x3c040017
    ctx->pc = 0x10be24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10be28: 0x10000038
    ctx->pc = 0x10BE28u;
    {
        const bool branch_taken_0x10be28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BE2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24256));
        if (branch_taken_0x10be28) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BE30u;
label_10be30:
    // 0x10be30: 0x14620003
    ctx->pc = 0x10BE30u;
    {
        const bool branch_taken_0x10be30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BE34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x10be30) {
            ctx->pc = 0x10BE40u;
            goto label_10be40;
        }
    }
    ctx->pc = 0x10BE38u;
label_10be38:
    // 0x10be38: 0x1000003e
    ctx->pc = 0x10BE38u;
    {
        const bool branch_taken_0x10be38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BE3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10be38) {
            ctx->pc = 0x10BF34u;
            goto label_10bf34;
        }
    }
    ctx->pc = 0x10BE40u;
label_10be40:
    // 0x10be40: 0x1462000f
    ctx->pc = 0x10BE40u;
    {
        const bool branch_taken_0x10be40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BE44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x10be40) {
            ctx->pc = 0x10BE80u;
            goto label_10be80;
        }
    }
    ctx->pc = 0x10BE48u;
    // 0x10be48: 0x8f8683f4
    ctx->pc = 0x10be48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10be4c: 0x51040
    ctx->pc = 0x10be4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x10be50: 0x80382d
    ctx->pc = 0x10be50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be54: 0x34058050
    ctx->pc = 0x10be54u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32848));
    // 0x10be58: 0xc23025
    ctx->pc = 0x10be58u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10be5c: 0x202d
    ctx->pc = 0x10be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be60: 0xc045c80
    ctx->pc = 0x10BE60u;
    SET_GPR_U32(ctx, 31, 0x10BE68u);
    ctx->pc = 0x10BE64u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 8256));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE68u; }
    }
    if (ctx->pc != 0x10BE68u) { return; }
    ctx->pc = 0x10BE68u;
    // 0x10be68: 0x2403ffff
    ctx->pc = 0x10be68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10be6c: 0x1443002a
    ctx->pc = 0x10BE6Cu;
    {
        const bool branch_taken_0x10be6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10BE70u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10be6c) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BE74u;
    // 0x10be74: 0x3c040017
    ctx->pc = 0x10be74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10be78: 0x10000024
    ctx->pc = 0x10BE78u;
    {
        const bool branch_taken_0x10be78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BE7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24264));
        if (branch_taken_0x10be78) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BE80u;
label_10be80:
    // 0x10be80: 0x1062ffed
    ctx->pc = 0x10BE80u;
    {
        const bool branch_taken_0x10be80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BE84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x10be80) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BE88u;
    // 0x10be88: 0x1462000f
    ctx->pc = 0x10BE88u;
    {
        const bool branch_taken_0x10be88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BE8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x10be88) {
            ctx->pc = 0x10BEC8u;
            goto label_10bec8;
        }
    }
    ctx->pc = 0x10BE90u;
    // 0x10be90: 0x8f8683f4
    ctx->pc = 0x10be90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10be94: 0x51040
    ctx->pc = 0x10be94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x10be98: 0x202d
    ctx->pc = 0x10be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be9c: 0x34058010
    ctx->pc = 0x10be9cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10bea0: 0xc23025
    ctx->pc = 0x10bea0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10bea4: 0x2407000f
    ctx->pc = 0x10bea4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    // 0x10bea8: 0xc045c80
    ctx->pc = 0x10BEA8u;
    SET_GPR_U32(ctx, 31, 0x10BEB0u);
    ctx->pc = 0x10BEACu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 768));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BEB0u; }
    }
    if (ctx->pc != 0x10BEB0u) { return; }
    ctx->pc = 0x10BEB0u;
    // 0x10beb0: 0x2403ffff
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10beb4: 0x14430018
    ctx->pc = 0x10BEB4u;
    {
        const bool branch_taken_0x10beb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10BEB8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10beb4) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BEBCu;
    // 0x10bebc: 0x3c040017
    ctx->pc = 0x10bebcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bec0: 0x10000012
    ctx->pc = 0x10BEC0u;
    {
        const bool branch_taken_0x10bec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BEC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24272));
        if (branch_taken_0x10bec0) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BEC8u;
label_10bec8:
    // 0x10bec8: 0x1062ffdb
    ctx->pc = 0x10BEC8u;
    {
        const bool branch_taken_0x10bec8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BECCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x10bec8) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BED0u;
    // 0x10bed0: 0x14c20015
    ctx->pc = 0x10BED0u;
    {
        const bool branch_taken_0x10bed0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BED4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x10bed0) {
            ctx->pc = 0x10BF28u;
            goto label_10bf28;
        }
    }
    ctx->pc = 0x10BED8u;
    // 0x10bed8: 0x8f8683f4
    ctx->pc = 0x10bed8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10bedc: 0x51040
    ctx->pc = 0x10bedcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bee0: 0x202d
    ctx->pc = 0x10bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bee4: 0x34058010
    ctx->pc = 0x10bee4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10bee8: 0xc23025
    ctx->pc = 0x10bee8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10beec: 0x24071fc0
    ctx->pc = 0x10beecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8128));
    // 0x10bef0: 0xc045c80
    ctx->pc = 0x10BEF0u;
    SET_GPR_U32(ctx, 31, 0x10BEF8u);
    ctx->pc = 0x10BEF4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 1024));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BEF8u; }
    }
    if (ctx->pc != 0x10BEF8u) { return; }
    ctx->pc = 0x10BEF8u;
    // 0x10bef8: 0x2403ffff
    ctx->pc = 0x10bef8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10befc: 0x14430006
    ctx->pc = 0x10BEFCu;
    {
        const bool branch_taken_0x10befc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10BF00u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10befc) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BF04u;
    // 0x10bf04: 0x3c040017
    ctx->pc = 0x10bf04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bf08: 0x24845ed8
    ctx->pc = 0x10bf08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24280));
label_10bf0c:
    // 0x10bf0c: 0xc04ace4
    ctx->pc = 0x10BF0Cu;
    SET_GPR_U32(ctx, 31, 0x10BF14u);
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF14u; }
    }
    if (ctx->pc != 0x10BF14u) { return; }
    ctx->pc = 0x10BF14u;
    // 0x10bf14: 0x8f838390
    ctx->pc = 0x10bf14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10bf18:
    // 0x10bf18: 0x24020001
    ctx->pc = 0x10bf18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bf1c: 0x24630001
    ctx->pc = 0x10bf1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10bf20: 0x10000004
    ctx->pc = 0x10BF20u;
    {
        const bool branch_taken_0x10bf20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BF24u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        if (branch_taken_0x10bf20) {
            ctx->pc = 0x10BF34u;
            goto label_10bf34;
        }
    }
    ctx->pc = 0x10BF28u;
label_10bf28:
    // 0x10bf28: 0x1062ffc3
    ctx->pc = 0x10BF28u;
    {
        const bool branch_taken_0x10bf28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BF2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bf28) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BF30u;
    // 0x10bf30: 0xaf808390
    ctx->pc = 0x10bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10bf34:
    // 0x10bf34: 0xdfbf0000
    ctx->pc = 0x10bf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bf38:
    // 0x10bf38: 0x3e00008
    ctx->pc = 0x10BF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BD68u: goto label_10bd68;
            case 0x10BD9Cu: goto label_10bd9c;
            case 0x10BDECu: goto label_10bdec;
            case 0x10BE30u: goto label_10be30;
            case 0x10BE38u: goto label_10be38;
            case 0x10BE40u: goto label_10be40;
            case 0x10BE80u: goto label_10be80;
            case 0x10BEC8u: goto label_10bec8;
            case 0x10BF0Cu: goto label_10bf0c;
            case 0x10BF18u: goto label_10bf18;
            case 0x10BF28u: goto label_10bf28;
            case 0x10BF34u: goto label_10bf34;
            case 0x10BF38u: goto label_10bf38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10BF40u;
}
