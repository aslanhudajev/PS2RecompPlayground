#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitIntRunLevel
// Address: 0x18bcf8 - 0x18c0c4
void mpvvlc_InitIntRunLevel_0x18bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitIntRunLevel");


    ctx->pc = 0x18bcf8u;

    // 0x18bcf8: 0x3c020024
    ctx->pc = 0x18bcf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18bcfc: 0x24030003
    ctx->pc = 0x18bcfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18bd00: 0x24422678
    ctx->pc = 0x18bd00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9848));
    // 0x18bd04: 0x0
    ctx->pc = 0x18bd04u;
    // NOP
label_18bd08:
    // 0x18bd08: 0xac400000
    ctx->pc = 0x18bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18bd0c: 0x2463ffff
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bd10: 0x24420004
    ctx->pc = 0x18bd10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bd14: 0x0
    ctx->pc = 0x18bd14u;
    // NOP
    // 0x18bd18: 0x0
    ctx->pc = 0x18bd18u;
    // NOP
    // 0x18bd1c: 0x461fffa
    ctx->pc = 0x18BD1Cu;
    {
        const bool branch_taken_0x18bd1c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bd1c) {
            ctx->pc = 0x18BD08u;
            goto label_18bd08;
        }
    }
    ctx->pc = 0x18BD24u;
    // 0x18bd24: 0x3c030006
    ctx->pc = 0x18bd24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)6 << 16));
    // 0x18bd28: 0x24040003
    ctx->pc = 0x18bd28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18bd2c: 0x34634040
    ctx->pc = 0x18bd2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16448));
label_18bd30:
    // 0x18bd30: 0xac430000
    ctx->pc = 0x18bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bd34: 0x2484ffff
    ctx->pc = 0x18bd34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bd38: 0x24420004
    ctx->pc = 0x18bd38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bd3c: 0x0
    ctx->pc = 0x18bd3cu;
    // NOP
    // 0x18bd40: 0x0
    ctx->pc = 0x18bd40u;
    // NOP
    // 0x18bd44: 0x481fffa
    ctx->pc = 0x18BD44u;
    {
        const bool branch_taken_0x18bd44 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bd44) {
            ctx->pc = 0x18BD30u;
            goto label_18bd30;
        }
    }
    ctx->pc = 0x18BD4Cu;
    // 0x18bd4c: 0x3c030008
    ctx->pc = 0x18bd4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x18bd50: 0x24040001
    ctx->pc = 0x18bd50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bd54: 0x34630202
    ctx->pc = 0x18bd54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 514));
label_18bd58:
    // 0x18bd58: 0xac430000
    ctx->pc = 0x18bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bd5c: 0x2484ffff
    ctx->pc = 0x18bd5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bd60: 0x24420004
    ctx->pc = 0x18bd60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bd64: 0x0
    ctx->pc = 0x18bd64u;
    // NOP
    // 0x18bd68: 0x0
    ctx->pc = 0x18bd68u;
    // NOP
    // 0x18bd6c: 0x481fffa
    ctx->pc = 0x18BD6Cu;
    {
        const bool branch_taken_0x18bd6c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bd6c) {
            ctx->pc = 0x18BD58u;
            goto label_18bd58;
        }
    }
    ctx->pc = 0x18BD74u;
    // 0x18bd74: 0x3c030008
    ctx->pc = 0x18bd74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x18bd78: 0x24040001
    ctx->pc = 0x18bd78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bd7c: 0x34630109
    ctx->pc = 0x18bd7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 265));
label_18bd80:
    // 0x18bd80: 0xac430000
    ctx->pc = 0x18bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bd84: 0x2484ffff
    ctx->pc = 0x18bd84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bd88: 0x24420004
    ctx->pc = 0x18bd88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bd8c: 0x0
    ctx->pc = 0x18bd8cu;
    // NOP
    // 0x18bd90: 0x0
    ctx->pc = 0x18bd90u;
    // NOP
    // 0x18bd94: 0x481fffa
    ctx->pc = 0x18BD94u;
    {
        const bool branch_taken_0x18bd94 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bd94) {
            ctx->pc = 0x18BD80u;
            goto label_18bd80;
        }
    }
    ctx->pc = 0x18BD9Cu;
    // 0x18bd9c: 0x3c030008
    ctx->pc = 0x18bd9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x18bda0: 0x24040001
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bda4: 0x34630400
    ctx->pc = 0x18bda4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1024));
label_18bda8:
    // 0x18bda8: 0xac430000
    ctx->pc = 0x18bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bdac: 0x2484ffff
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bdb0: 0x24420004
    ctx->pc = 0x18bdb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bdb4: 0x0
    ctx->pc = 0x18bdb4u;
    // NOP
    // 0x18bdb8: 0x0
    ctx->pc = 0x18bdb8u;
    // NOP
    // 0x18bdbc: 0x481fffa
    ctx->pc = 0x18BDBCu;
    {
        const bool branch_taken_0x18bdbc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bdbc) {
            ctx->pc = 0x18BDA8u;
            goto label_18bda8;
        }
    }
    ctx->pc = 0x18BDC4u;
    // 0x18bdc4: 0x3c030008
    ctx->pc = 0x18bdc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x18bdc8: 0x24040001
    ctx->pc = 0x18bdc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bdcc: 0x34630108
    ctx->pc = 0x18bdccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 264));
label_18bdd0:
    // 0x18bdd0: 0xac430000
    ctx->pc = 0x18bdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bdd4: 0x2484ffff
    ctx->pc = 0x18bdd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bdd8: 0x24420004
    ctx->pc = 0x18bdd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bddc: 0x0
    ctx->pc = 0x18bddcu;
    // NOP
    // 0x18bde0: 0x0
    ctx->pc = 0x18bde0u;
    // NOP
    // 0x18bde4: 0x481fffa
    ctx->pc = 0x18BDE4u;
    {
        const bool branch_taken_0x18bde4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bde4) {
            ctx->pc = 0x18BDD0u;
            goto label_18bdd0;
        }
    }
    ctx->pc = 0x18BDECu;
    // 0x18bdec: 0x3c030007
    ctx->pc = 0x18bdecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)7 << 16));
    // 0x18bdf0: 0x24040003
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18bdf4: 0x34630107
    ctx->pc = 0x18bdf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 263));
label_18bdf8:
    // 0x18bdf8: 0xac430000
    ctx->pc = 0x18bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bdfc: 0x2484ffff
    ctx->pc = 0x18bdfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18be00: 0x24420004
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18be04: 0x0
    ctx->pc = 0x18be04u;
    // NOP
    // 0x18be08: 0x0
    ctx->pc = 0x18be08u;
    // NOP
    // 0x18be0c: 0x481fffa
    ctx->pc = 0x18BE0Cu;
    {
        const bool branch_taken_0x18be0c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18be0c) {
            ctx->pc = 0x18BDF8u;
            goto label_18bdf8;
        }
    }
    ctx->pc = 0x18BE14u;
    // 0x18be14: 0x3c030007
    ctx->pc = 0x18be14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)7 << 16));
    // 0x18be18: 0x24040003
    ctx->pc = 0x18be18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18be1c: 0x34630106
    ctx->pc = 0x18be1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 262));
label_18be20:
    // 0x18be20: 0xac430000
    ctx->pc = 0x18be20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18be24: 0x2484ffff
    ctx->pc = 0x18be24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18be28: 0x24420004
    ctx->pc = 0x18be28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18be2c: 0x0
    ctx->pc = 0x18be2cu;
    // NOP
    // 0x18be30: 0x0
    ctx->pc = 0x18be30u;
    // NOP
    // 0x18be34: 0x481fffa
    ctx->pc = 0x18BE34u;
    {
        const bool branch_taken_0x18be34 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18be34) {
            ctx->pc = 0x18BE20u;
            goto label_18be20;
        }
    }
    ctx->pc = 0x18BE3Cu;
    // 0x18be3c: 0x3c030007
    ctx->pc = 0x18be3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)7 << 16));
    // 0x18be40: 0x24040003
    ctx->pc = 0x18be40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18be44: 0x34630201
    ctx->pc = 0x18be44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 513));
label_18be48:
    // 0x18be48: 0xac430000
    ctx->pc = 0x18be48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18be4c: 0x2484ffff
    ctx->pc = 0x18be4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18be50: 0x24420004
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18be54: 0x0
    ctx->pc = 0x18be54u;
    // NOP
    // 0x18be58: 0x0
    ctx->pc = 0x18be58u;
    // NOP
    // 0x18be5c: 0x481fffa
    ctx->pc = 0x18BE5Cu;
    {
        const bool branch_taken_0x18be5c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18be5c) {
            ctx->pc = 0x18BE48u;
            goto label_18be48;
        }
    }
    ctx->pc = 0x18BE64u;
    // 0x18be64: 0x3c030007
    ctx->pc = 0x18be64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)7 << 16));
    // 0x18be68: 0x24040003
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18be6c: 0x34630105
    ctx->pc = 0x18be6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 261));
label_18be70:
    // 0x18be70: 0xac430000
    ctx->pc = 0x18be70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18be74: 0x2484ffff
    ctx->pc = 0x18be74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18be78: 0x24420004
    ctx->pc = 0x18be78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18be7c: 0x0
    ctx->pc = 0x18be7cu;
    // NOP
    // 0x18be80: 0x0
    ctx->pc = 0x18be80u;
    // NOP
    // 0x18be84: 0x481fffa
    ctx->pc = 0x18BE84u;
    {
        const bool branch_taken_0x18be84 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18be84) {
            ctx->pc = 0x18BE70u;
            goto label_18be70;
        }
    }
    ctx->pc = 0x18BE8Cu;
    // 0x18be8c: 0x3c030009
    ctx->pc = 0x18be8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18be90: 0x202d
    ctx->pc = 0x18be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be94: 0x3463010d
    ctx->pc = 0x18be94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 269));
label_18be98:
    // 0x18be98: 0xac430000
    ctx->pc = 0x18be98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18be9c: 0x2484ffff
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bea0: 0x24420004
    ctx->pc = 0x18bea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bea4: 0x0
    ctx->pc = 0x18bea4u;
    // NOP
    // 0x18bea8: 0x0
    ctx->pc = 0x18bea8u;
    // NOP
    // 0x18beac: 0x481fffa
    ctx->pc = 0x18BEACu;
    {
        const bool branch_taken_0x18beac = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18beac) {
            ctx->pc = 0x18BE98u;
            goto label_18be98;
        }
    }
    ctx->pc = 0x18BEB4u;
    // 0x18beb4: 0x3c030009
    ctx->pc = 0x18beb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18beb8: 0x202d
    ctx->pc = 0x18beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bebc: 0x34630600
    ctx->pc = 0x18bebcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1536));
label_18bec0:
    // 0x18bec0: 0xac430000
    ctx->pc = 0x18bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bec4: 0x2484ffff
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bec8: 0x24420004
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18becc: 0x0
    ctx->pc = 0x18beccu;
    // NOP
    // 0x18bed0: 0x0
    ctx->pc = 0x18bed0u;
    // NOP
    // 0x18bed4: 0x481fffa
    ctx->pc = 0x18BED4u;
    {
        const bool branch_taken_0x18bed4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bed4) {
            ctx->pc = 0x18BEC0u;
            goto label_18bec0;
        }
    }
    ctx->pc = 0x18BEDCu;
    // 0x18bedc: 0x3c030009
    ctx->pc = 0x18bedcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18bee0: 0x202d
    ctx->pc = 0x18bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bee4: 0x3463010c
    ctx->pc = 0x18bee4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 268));
label_18bee8:
    // 0x18bee8: 0xac430000
    ctx->pc = 0x18bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18beec: 0x2484ffff
    ctx->pc = 0x18beecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bef0: 0x24420004
    ctx->pc = 0x18bef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bef4: 0x0
    ctx->pc = 0x18bef4u;
    // NOP
    // 0x18bef8: 0x0
    ctx->pc = 0x18bef8u;
    // NOP
    // 0x18befc: 0x481fffa
    ctx->pc = 0x18BEFCu;
    {
        const bool branch_taken_0x18befc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18befc) {
            ctx->pc = 0x18BEE8u;
            goto label_18bee8;
        }
    }
    ctx->pc = 0x18BF04u;
    // 0x18bf04: 0x3c030009
    ctx->pc = 0x18bf04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18bf08: 0x202d
    ctx->pc = 0x18bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf0c: 0x3463010b
    ctx->pc = 0x18bf0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 267));
label_18bf10:
    // 0x18bf10: 0xac430000
    ctx->pc = 0x18bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bf14: 0x2484ffff
    ctx->pc = 0x18bf14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bf18: 0x24420004
    ctx->pc = 0x18bf18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bf1c: 0x0
    ctx->pc = 0x18bf1cu;
    // NOP
    // 0x18bf20: 0x0
    ctx->pc = 0x18bf20u;
    // NOP
    // 0x18bf24: 0x481fffa
    ctx->pc = 0x18BF24u;
    {
        const bool branch_taken_0x18bf24 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bf24) {
            ctx->pc = 0x18BF10u;
            goto label_18bf10;
        }
    }
    ctx->pc = 0x18BF2Cu;
    // 0x18bf2c: 0x3c030009
    ctx->pc = 0x18bf2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18bf30: 0x202d
    ctx->pc = 0x18bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf34: 0x34630203
    ctx->pc = 0x18bf34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 515));
label_18bf38:
    // 0x18bf38: 0xac430000
    ctx->pc = 0x18bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bf3c: 0x2484ffff
    ctx->pc = 0x18bf3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bf40: 0x24420004
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bf44: 0x0
    ctx->pc = 0x18bf44u;
    // NOP
    // 0x18bf48: 0x0
    ctx->pc = 0x18bf48u;
    // NOP
    // 0x18bf4c: 0x481fffa
    ctx->pc = 0x18BF4Cu;
    {
        const bool branch_taken_0x18bf4c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bf4c) {
            ctx->pc = 0x18BF38u;
            goto label_18bf38;
        }
    }
    ctx->pc = 0x18BF54u;
    // 0x18bf54: 0x3c030009
    ctx->pc = 0x18bf54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18bf58: 0x202d
    ctx->pc = 0x18bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf5c: 0x34630301
    ctx->pc = 0x18bf5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 769));
label_18bf60:
    // 0x18bf60: 0xac430000
    ctx->pc = 0x18bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bf64: 0x2484ffff
    ctx->pc = 0x18bf64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bf68: 0x24420004
    ctx->pc = 0x18bf68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bf6c: 0x0
    ctx->pc = 0x18bf6cu;
    // NOP
    // 0x18bf70: 0x0
    ctx->pc = 0x18bf70u;
    // NOP
    // 0x18bf74: 0x481fffa
    ctx->pc = 0x18BF74u;
    {
        const bool branch_taken_0x18bf74 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bf74) {
            ctx->pc = 0x18BF60u;
            goto label_18bf60;
        }
    }
    ctx->pc = 0x18BF7Cu;
    // 0x18bf7c: 0x3c030009
    ctx->pc = 0x18bf7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18bf80: 0x202d
    ctx->pc = 0x18bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf84: 0x34630500
    ctx->pc = 0x18bf84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1280));
label_18bf88:
    // 0x18bf88: 0xac430000
    ctx->pc = 0x18bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bf8c: 0x2484ffff
    ctx->pc = 0x18bf8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bf90: 0x24420004
    ctx->pc = 0x18bf90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bf94: 0x0
    ctx->pc = 0x18bf94u;
    // NOP
    // 0x18bf98: 0x0
    ctx->pc = 0x18bf98u;
    // NOP
    // 0x18bf9c: 0x481fffa
    ctx->pc = 0x18BF9Cu;
    {
        const bool branch_taken_0x18bf9c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bf9c) {
            ctx->pc = 0x18BF88u;
            goto label_18bf88;
        }
    }
    ctx->pc = 0x18BFA4u;
    // 0x18bfa4: 0x3c030009
    ctx->pc = 0x18bfa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x18bfa8: 0x202d
    ctx->pc = 0x18bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfac: 0x3463010a
    ctx->pc = 0x18bfacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 266));
label_18bfb0:
    // 0x18bfb0: 0xac430000
    ctx->pc = 0x18bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bfb4: 0x2484ffff
    ctx->pc = 0x18bfb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bfb8: 0x24420004
    ctx->pc = 0x18bfb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bfbc: 0x0
    ctx->pc = 0x18bfbcu;
    // NOP
    // 0x18bfc0: 0x0
    ctx->pc = 0x18bfc0u;
    // NOP
    // 0x18bfc4: 0x481fffa
    ctx->pc = 0x18BFC4u;
    {
        const bool branch_taken_0x18bfc4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bfc4) {
            ctx->pc = 0x18BFB0u;
            goto label_18bfb0;
        }
    }
    ctx->pc = 0x18BFCCu;
    // 0x18bfcc: 0x3c030006
    ctx->pc = 0x18bfccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)6 << 16));
    // 0x18bfd0: 0x24040007
    ctx->pc = 0x18bfd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bfd4: 0x34630300
    ctx->pc = 0x18bfd4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 768));
label_18bfd8:
    // 0x18bfd8: 0xac430000
    ctx->pc = 0x18bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18bfdc: 0x2484ffff
    ctx->pc = 0x18bfdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18bfe0: 0x24420004
    ctx->pc = 0x18bfe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bfe4: 0x0
    ctx->pc = 0x18bfe4u;
    // NOP
    // 0x18bfe8: 0x0
    ctx->pc = 0x18bfe8u;
    // NOP
    // 0x18bfec: 0x481fffa
    ctx->pc = 0x18BFECu;
    {
        const bool branch_taken_0x18bfec = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18bfec) {
            ctx->pc = 0x18BFD8u;
            goto label_18bfd8;
        }
    }
    ctx->pc = 0x18BFF4u;
    // 0x18bff4: 0x3c030006
    ctx->pc = 0x18bff4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)6 << 16));
    // 0x18bff8: 0x24040007
    ctx->pc = 0x18bff8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bffc: 0x34630104
    ctx->pc = 0x18bffcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 260));
label_18c000:
    // 0x18c000: 0xac430000
    ctx->pc = 0x18c000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c004: 0x2484ffff
    ctx->pc = 0x18c004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c008: 0x24420004
    ctx->pc = 0x18c008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18c00c: 0x0
    ctx->pc = 0x18c00cu;
    // NOP
    // 0x18c010: 0x0
    ctx->pc = 0x18c010u;
    // NOP
    // 0x18c014: 0x481fffa
    ctx->pc = 0x18C014u;
    {
        const bool branch_taken_0x18c014 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18c014) {
            ctx->pc = 0x18C000u;
            goto label_18c000;
        }
    }
    ctx->pc = 0x18C01Cu;
    // 0x18c01c: 0x3c030006
    ctx->pc = 0x18c01cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)6 << 16));
    // 0x18c020: 0x24040007
    ctx->pc = 0x18c020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18c024: 0x34630103
    ctx->pc = 0x18c024u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 259));
label_18c028:
    // 0x18c028: 0xac430000
    ctx->pc = 0x18c028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c02c: 0x2484ffff
    ctx->pc = 0x18c02cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c030: 0x24420004
    ctx->pc = 0x18c030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18c034: 0x0
    ctx->pc = 0x18c034u;
    // NOP
    // 0x18c038: 0x0
    ctx->pc = 0x18c038u;
    // NOP
    // 0x18c03c: 0x481fffa
    ctx->pc = 0x18C03Cu;
    {
        const bool branch_taken_0x18c03c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18c03c) {
            ctx->pc = 0x18C028u;
            goto label_18c028;
        }
    }
    ctx->pc = 0x18C044u;
    // 0x18c044: 0x3c030005
    ctx->pc = 0x18c044u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x18c048: 0x2404000f
    ctx->pc = 0x18c048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18c04c: 0x34630200
    ctx->pc = 0x18c04cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 512));
label_18c050:
    // 0x18c050: 0xac430000
    ctx->pc = 0x18c050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c054: 0x2484ffff
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c058: 0x24420004
    ctx->pc = 0x18c058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18c05c: 0x0
    ctx->pc = 0x18c05cu;
    // NOP
    // 0x18c060: 0x0
    ctx->pc = 0x18c060u;
    // NOP
    // 0x18c064: 0x481fffa
    ctx->pc = 0x18C064u;
    {
        const bool branch_taken_0x18c064 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18c064) {
            ctx->pc = 0x18C050u;
            goto label_18c050;
        }
    }
    ctx->pc = 0x18C06Cu;
    // 0x18c06c: 0x3c030005
    ctx->pc = 0x18c06cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x18c070: 0x2404000f
    ctx->pc = 0x18c070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18c074: 0x34630102
    ctx->pc = 0x18c074u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 258));
label_18c078:
    // 0x18c078: 0xac430000
    ctx->pc = 0x18c078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c07c: 0x2484ffff
    ctx->pc = 0x18c07cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c080: 0x24420004
    ctx->pc = 0x18c080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18c084: 0x0
    ctx->pc = 0x18c084u;
    // NOP
    // 0x18c088: 0x0
    ctx->pc = 0x18c088u;
    // NOP
    // 0x18c08c: 0x481fffa
    ctx->pc = 0x18C08Cu;
    {
        const bool branch_taken_0x18c08c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18c08c) {
            ctx->pc = 0x18C078u;
            goto label_18c078;
        }
    }
    ctx->pc = 0x18C094u;
    // 0x18c094: 0x3c030004
    ctx->pc = 0x18c094u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x18c098: 0x2404001f
    ctx->pc = 0x18c098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18c09c: 0x34630101
    ctx->pc = 0x18c09cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 257));
label_18c0a0:
    // 0x18c0a0: 0xac430000
    ctx->pc = 0x18c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c0a4: 0x2484ffff
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c0a8: 0x24420004
    ctx->pc = 0x18c0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18c0ac: 0x0
    ctx->pc = 0x18c0acu;
    // NOP
    // 0x18c0b0: 0x0
    ctx->pc = 0x18c0b0u;
    // NOP
    // 0x18c0b4: 0x481fffa
    ctx->pc = 0x18C0B4u;
    {
        const bool branch_taken_0x18c0b4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18c0b4) {
            ctx->pc = 0x18C0A0u;
            goto label_18c0a0;
        }
    }
    ctx->pc = 0x18C0BCu;
    // 0x18c0bc: 0x3e00008
    ctx->pc = 0x18C0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BD08u: goto label_18bd08;
            case 0x18BD30u: goto label_18bd30;
            case 0x18BD58u: goto label_18bd58;
            case 0x18BD80u: goto label_18bd80;
            case 0x18BDA8u: goto label_18bda8;
            case 0x18BDD0u: goto label_18bdd0;
            case 0x18BDF8u: goto label_18bdf8;
            case 0x18BE20u: goto label_18be20;
            case 0x18BE48u: goto label_18be48;
            case 0x18BE70u: goto label_18be70;
            case 0x18BE98u: goto label_18be98;
            case 0x18BEC0u: goto label_18bec0;
            case 0x18BEE8u: goto label_18bee8;
            case 0x18BF10u: goto label_18bf10;
            case 0x18BF38u: goto label_18bf38;
            case 0x18BF60u: goto label_18bf60;
            case 0x18BF88u: goto label_18bf88;
            case 0x18BFB0u: goto label_18bfb0;
            case 0x18BFD8u: goto label_18bfd8;
            case 0x18C000u: goto label_18c000;
            case 0x18C028u: goto label_18c028;
            case 0x18C050u: goto label_18c050;
            case 0x18C078u: goto label_18c078;
            case 0x18C0A0u: goto label_18c0a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C0C4u;
}
