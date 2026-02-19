#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: vmu_exists
// Address: 0x209ca0 - 0x209e3c
void vmu_exists_0x209ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209ca0u;

    // 0x209ca0: 0x27bdffe0
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209ca4: 0xffbe0010
    ctx->pc = 0x209ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x209ca8: 0x3a0f02d
    ctx->pc = 0x209ca8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cac: 0xafc00008
    ctx->pc = 0x209cacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x209cb0: 0xafc00000
    ctx->pc = 0x209cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x209cb4: 0x0
    ctx->pc = 0x209cb4u;
    // NOP
label_209cb8:
    // 0x209cb8: 0x8fc20000
    ctx->pc = 0x209cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209cbc: 0x28430002
    ctx->pc = 0x209cbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x209cc0: 0x14600003
    ctx->pc = 0x209CC0u;
    {
        const bool branch_taken_0x209cc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209cc0) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209CC8u;
    // 0x209cc8: 0x10000053
    ctx->pc = 0x209CC8u;
    {
        const bool branch_taken_0x209cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209cc8) {
            ctx->pc = 0x209E18u;
            goto label_209e18;
        }
    }
    ctx->pc = 0x209CD0u;
label_209cd0:
    // 0x209cd0: 0xafc00004
    ctx->pc = 0x209cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x209cd4: 0x0
    ctx->pc = 0x209cd4u;
    // NOP
label_209cd8:
    // 0x209cd8: 0x8fc20004
    ctx->pc = 0x209cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209cdc: 0x28430004
    ctx->pc = 0x209cdcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
    // 0x209ce0: 0x14600003
    ctx->pc = 0x209CE0u;
    {
        const bool branch_taken_0x209ce0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209ce0) {
            ctx->pc = 0x209CF0u;
            goto label_209cf0;
        }
    }
    ctx->pc = 0x209CE8u;
    // 0x209ce8: 0x10000046
    ctx->pc = 0x209CE8u;
    {
        const bool branch_taken_0x209ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209ce8) {
            ctx->pc = 0x209E04u;
            goto label_209e04;
        }
    }
    ctx->pc = 0x209CF0u;
label_209cf0:
    // 0x209cf0: 0x8fc20004
    ctx->pc = 0x209cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209cf4: 0x40182d
    ctx->pc = 0x209cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cf8: 0x31080
    ctx->pc = 0x209cf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x209cfc: 0x8fc30000
    ctx->pc = 0x209cfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209d00: 0x60202d
    ctx->pc = 0x209d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d04: 0x41900
    ctx->pc = 0x209d04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x209d08: 0x431021
    ctx->pc = 0x209d08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209d0c: 0x3c030031
    ctx->pc = 0x209d0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x209d10: 0x24632280
    ctx->pc = 0x209d10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x209d14: 0x621021
    ctx->pc = 0x209d14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209d18: 0x8c430000
    ctx->pc = 0x209d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209d1c: 0x10600034
    ctx->pc = 0x209D1Cu;
    {
        const bool branch_taken_0x209d1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x209d1c) {
            ctx->pc = 0x209DF0u;
            goto label_209df0;
        }
    }
    ctx->pc = 0x209D24u;
    // 0x209d24: 0x8fc20004
    ctx->pc = 0x209d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209d28: 0x40182d
    ctx->pc = 0x209d28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d2c: 0x31080
    ctx->pc = 0x209d2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x209d30: 0x8fc30000
    ctx->pc = 0x209d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209d34: 0x60202d
    ctx->pc = 0x209d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d38: 0x41900
    ctx->pc = 0x209d38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x209d3c: 0x431021
    ctx->pc = 0x209d3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209d40: 0x3c030031
    ctx->pc = 0x209d40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x209d44: 0x246322a0
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x209d48: 0x621021
    ctx->pc = 0x209d48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209d4c: 0x8c430000
    ctx->pc = 0x209d4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209d50: 0x24020002
    ctx->pc = 0x209d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x209d54: 0x1462000f
    ctx->pc = 0x209D54u;
    {
        const bool branch_taken_0x209d54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x209d54) {
            ctx->pc = 0x209D94u;
            goto label_209d94;
        }
    }
    ctx->pc = 0x209D5Cu;
    // 0x209d5c: 0x8fc20004
    ctx->pc = 0x209d5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209d60: 0x40182d
    ctx->pc = 0x209d60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d64: 0x31080
    ctx->pc = 0x209d64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x209d68: 0x8fc30000
    ctx->pc = 0x209d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209d6c: 0x60202d
    ctx->pc = 0x209d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d70: 0x41900
    ctx->pc = 0x209d70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x209d74: 0x431021
    ctx->pc = 0x209d74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209d78: 0x3c030031
    ctx->pc = 0x209d78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x209d7c: 0x24632280
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x209d80: 0x621021
    ctx->pc = 0x209d80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209d84: 0x8c430000
    ctx->pc = 0x209d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209d88: 0xafc30008
    ctx->pc = 0x209d88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x209d8c: 0x10000018
    ctx->pc = 0x209D8Cu;
    {
        const bool branch_taken_0x209d8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209d8c) {
            ctx->pc = 0x209DF0u;
            goto label_209df0;
        }
    }
    ctx->pc = 0x209D94u;
label_209d94:
    // 0x209d94: 0x8fc20008
    ctx->pc = 0x209d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x209d98: 0x14400015
    ctx->pc = 0x209D98u;
    {
        const bool branch_taken_0x209d98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x209d98) {
            ctx->pc = 0x209DF0u;
            goto label_209df0;
        }
    }
    ctx->pc = 0x209DA0u;
    // 0x209da0: 0x8fc20004
    ctx->pc = 0x209da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209da4: 0x40182d
    ctx->pc = 0x209da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209da8: 0x31080
    ctx->pc = 0x209da8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x209dac: 0x8fc30000
    ctx->pc = 0x209dacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209db0: 0x60202d
    ctx->pc = 0x209db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209db4: 0x41900
    ctx->pc = 0x209db4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x209db8: 0x431021
    ctx->pc = 0x209db8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209dbc: 0x3c030031
    ctx->pc = 0x209dbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x209dc0: 0x246322a0
    ctx->pc = 0x209dc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x209dc4: 0x621021
    ctx->pc = 0x209dc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209dc8: 0x8c430000
    ctx->pc = 0x209dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209dcc: 0x24020001
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x209dd0: 0x14620005
    ctx->pc = 0x209DD0u;
    {
        const bool branch_taken_0x209dd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x209dd0) {
            ctx->pc = 0x209DE8u;
            goto label_209de8;
        }
    }
    ctx->pc = 0x209DD8u;
    // 0x209dd8: 0x2402ffff
    ctx->pc = 0x209dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209ddc: 0xafc20008
    ctx->pc = 0x209ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x209de0: 0x10000003
    ctx->pc = 0x209DE0u;
    {
        const bool branch_taken_0x209de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209de0) {
            ctx->pc = 0x209DF0u;
            goto label_209df0;
        }
    }
    ctx->pc = 0x209DE8u;
label_209de8:
    // 0x209de8: 0x2402fffe
    ctx->pc = 0x209de8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x209dec: 0xafc20008
    ctx->pc = 0x209decu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_209df0:
    // 0x209df0: 0x8fc20004
    ctx->pc = 0x209df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209df4: 0x24430001
    ctx->pc = 0x209df4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x209df8: 0xafc30004
    ctx->pc = 0x209df8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x209dfc: 0x1000ffb6
    ctx->pc = 0x209DFCu;
    {
        const bool branch_taken_0x209dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209dfc) {
            ctx->pc = 0x209CD8u;
            goto label_209cd8;
        }
    }
    ctx->pc = 0x209E04u;
label_209e04:
    // 0x209e04: 0x8fc20000
    ctx->pc = 0x209e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209e08: 0x24430001
    ctx->pc = 0x209e08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x209e0c: 0xafc30000
    ctx->pc = 0x209e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x209e10: 0x1000ffa9
    ctx->pc = 0x209E10u;
    {
        const bool branch_taken_0x209e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209e10) {
            ctx->pc = 0x209CB8u;
            goto label_209cb8;
        }
    }
    ctx->pc = 0x209E18u;
label_209e18:
    // 0x209e18: 0x8fc30008
    ctx->pc = 0x209e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x209e1c: 0x60102d
    ctx->pc = 0x209e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e20: 0x10000001
    ctx->pc = 0x209E20u;
    {
        const bool branch_taken_0x209e20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209e20) {
            ctx->pc = 0x209E28u;
            goto label_209e28;
        }
    }
    ctx->pc = 0x209E28u;
label_209e28:
    // 0x209e28: 0x3c0e82d
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e2c: 0xdfbe0010
    ctx->pc = 0x209e2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e30: 0x27bd0020
    ctx->pc = 0x209e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x209e34: 0x3e00008
    ctx->pc = 0x209E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209CB8u: goto label_209cb8;
            case 0x209CD0u: goto label_209cd0;
            case 0x209CD8u: goto label_209cd8;
            case 0x209CF0u: goto label_209cf0;
            case 0x209D94u: goto label_209d94;
            case 0x209DE8u: goto label_209de8;
            case 0x209DF0u: goto label_209df0;
            case 0x209E04u: goto label_209e04;
            case 0x209E18u: goto label_209e18;
            case 0x209E28u: goto label_209e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209E3Cu;
}
