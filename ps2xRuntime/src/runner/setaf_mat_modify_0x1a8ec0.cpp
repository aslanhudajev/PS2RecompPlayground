#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setaf_mat_modify
// Address: 0x1a8ec0 - 0x1a9014
void setaf_mat_modify_0x1a8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setaf_mat_modify");


    ctx->pc = 0x1a8ec0u;

    // 0x1a8ec0: 0x8c830064
    ctx->pc = 0x1a8ec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1a8ec4: 0x318c2
    ctx->pc = 0x1a8ec4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 3));
    // 0x1a8ec8: 0x30650003
    ctx->pc = 0x1a8ec8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 3));
    // 0x1a8ecc: 0x38a30001
    ctx->pc = 0x1a8eccu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), 1));
    // 0x1a8ed0: 0x2c680001
    ctx->pc = 0x1a8ed0u;
    SET_GPR_U32(ctx, 8, SLTU32(GPR_U32(ctx, 3), 1));
    // 0x1a8ed4: 0x15000002
    ctx->pc = 0x1A8ED4u;
    {
        const bool branch_taken_0x1a8ed4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8ED8u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x1a8ed4) {
            ctx->pc = 0x1A8EE0u;
            goto label_1a8ee0;
        }
    }
    ctx->pc = 0x1A8EDCu;
    // 0x1a8edc: 0x2c680001
    ctx->pc = 0x1a8edcu;
    SET_GPR_U32(ctx, 8, SLTU32(GPR_U32(ctx, 3), 1));
label_1a8ee0:
    // 0x1a8ee0: 0x8cc90004
    ctx->pc = 0x1a8ee0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a8ee4: 0x1120000d
    ctx->pc = 0x1A8EE4u;
    {
        const bool branch_taken_0x1a8ee4 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8EE8u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a8ee4) {
            ctx->pc = 0x1A8F1Cu;
            goto label_1a8f1c;
        }
    }
    ctx->pc = 0x1A8EECu;
    // 0x1a8eec: 0x8cc70008
    ctx->pc = 0x1a8eecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a8ef0: 0x4e00007
    ctx->pc = 0x1A8EF0u;
    {
        const bool branch_taken_0x1a8ef0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1A8EF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8ef0) {
            ctx->pc = 0x1A8F10u;
            goto label_1a8f10;
        }
    }
    ctx->pc = 0x1A8EF8u;
    // 0x1a8ef8: 0x8cc3000c
    ctx->pc = 0x1a8ef8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a8efc: 0x24e50004
    ctx->pc = 0x1a8efcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a8f00: 0x65082a
    ctx->pc = 0x1a8f00u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1a8f04: 0x10200004
    ctx->pc = 0x1A8F04u;
    {
        const bool branch_taken_0x1a8f04 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F08u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 3));
        if (branch_taken_0x1a8f04) {
            ctx->pc = 0x1A8F18u;
            goto label_1a8f18;
        }
    }
    ctx->pc = 0x1A8F0Cu;
    // 0x1a8f0c: 0x2403ffff
    ctx->pc = 0x1a8f0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8f10:
    // 0x1a8f10: 0x1000003e
    ctx->pc = 0x1A8F10u;
    {
        const bool branch_taken_0x1a8f10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F14u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1a8f10) {
            ctx->pc = 0x1A900Cu;
            goto label_1a900c;
        }
    }
    ctx->pc = 0x1A8F18u;
label_1a8f18:
    // 0x1a8f18: 0x1233821
    ctx->pc = 0x1a8f18u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1a8f1c:
    // 0x1a8f1c: 0x8c850070
    ctx->pc = 0x1a8f1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1a8f20: 0x2403002a
    ctx->pc = 0x1a8f20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 42));
    // 0x1a8f24: 0x14a3000d
    ctx->pc = 0x1A8F24u;
    {
        const bool branch_taken_0x1a8f24 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a8f24) {
            ctx->pc = 0x1A8F5Cu;
            goto label_1a8f5c;
        }
    }
    ctx->pc = 0x1A8F2Cu;
    // 0x1a8f2c: 0x10e0000a
    ctx->pc = 0x1A8F2Cu;
    {
        const bool branch_taken_0x1a8f2c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F30u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
        if (branch_taken_0x1a8f2c) {
            ctx->pc = 0x1A8F58u;
            goto label_1a8f58;
        }
    }
    ctx->pc = 0x1A8F34u;
    // 0x1a8f34: 0x24830070
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 112));
    // 0x1a8f38: 0xace30000
    ctx->pc = 0x1a8f38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1a8f3c: 0x8c830070
    ctx->pc = 0x1a8f3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1a8f40: 0xace30004
    ctx->pc = 0x1a8f40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1a8f44: 0x8cc30008
    ctx->pc = 0x1a8f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a8f48: 0x24e70008
    ctx->pc = 0x1a8f48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1a8f4c: 0x24630001
    ctx->pc = 0x1a8f4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a8f50: 0xacc30008
    ctx->pc = 0x1a8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1a8f54: 0x24030044
    ctx->pc = 0x1a8f54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
label_1a8f58:
    // 0x1a8f58: 0xac830070
    ctx->pc = 0x1a8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
label_1a8f5c:
    // 0x1a8f5c: 0x11000010
    ctx->pc = 0x1A8F5Cu;
    {
        const bool branch_taken_0x1a8f5c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8f5c) {
            ctx->pc = 0x1A8FA0u;
            goto label_1a8fa0;
        }
    }
    ctx->pc = 0x1A8F64u;
    // 0x1a8f64: 0x8c85007c
    ctx->pc = 0x1a8f64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1a8f68: 0x8cc30000
    ctx->pc = 0x1a8f68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8f6c: 0x10a3000c
    ctx->pc = 0x1A8F6Cu;
    {
        const bool branch_taken_0x1a8f6c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a8f6c) {
            ctx->pc = 0x1A8FA0u;
            goto label_1a8fa0;
        }
    }
    ctx->pc = 0x1A8F74u;
    // 0x1a8f74: 0x10e00008
    ctx->pc = 0x1A8F74u;
    {
        const bool branch_taken_0x1a8f74 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 124));
        if (branch_taken_0x1a8f74) {
            ctx->pc = 0x1A8F98u;
            goto label_1a8f98;
        }
    }
    ctx->pc = 0x1A8F7Cu;
    // 0x1a8f7c: 0xace30000
    ctx->pc = 0x1a8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1a8f80: 0x8c83007c
    ctx->pc = 0x1a8f80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1a8f84: 0xace30004
    ctx->pc = 0x1a8f84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1a8f88: 0x8cc30008
    ctx->pc = 0x1a8f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a8f8c: 0x24e70008
    ctx->pc = 0x1a8f8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1a8f90: 0x24630001
    ctx->pc = 0x1a8f90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a8f94: 0xacc30008
    ctx->pc = 0x1a8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1a8f98:
    // 0x1a8f98: 0x8cc30000
    ctx->pc = 0x1a8f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8f9c: 0xac83007c
    ctx->pc = 0x1a8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_1a8fa0:
    // 0x1a8fa0: 0x8cc30010
    ctx->pc = 0x1a8fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a8fa4: 0x10600019
    ctx->pc = 0x1A8FA4u;
    {
        const bool branch_taken_0x1a8fa4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8fa4) {
            ctx->pc = 0x1A900Cu;
            goto label_1a900c;
        }
    }
    ctx->pc = 0x1A8FACu;
    // 0x1a8fac: 0x15000017
    ctx->pc = 0x1A8FACu;
    {
        const bool branch_taken_0x1a8fac = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8FB0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 196));
        if (branch_taken_0x1a8fac) {
            ctx->pc = 0x1A900Cu;
            goto label_1a900c;
        }
    }
    ctx->pc = 0x1A8FB4u;
    // 0x1a8fb4: 0x8c8400c4
    ctx->pc = 0x1a8fb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1a8fb8: 0x8cc50000
    ctx->pc = 0x1a8fb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8fbc: 0x3c03ff00
    ctx->pc = 0x1a8fbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65280 << 16));
    // 0x1a8fc0: 0x831824
    ctx->pc = 0x1a8fc0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a8fc4: 0x52600
    ctx->pc = 0x1a8fc4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1a8fc8: 0x10640010
    ctx->pc = 0x1A8FC8u;
    {
        const bool branch_taken_0x1a8fc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1a8fc8) {
            ctx->pc = 0x1A900Cu;
            goto label_1a900c;
        }
    }
    ctx->pc = 0x1A8FD0u;
    // 0x1a8fd0: 0x10e00007
    ctx->pc = 0x1A8FD0u;
    {
        const bool branch_taken_0x1a8fd0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8fd0) {
            ctx->pc = 0x1A8FF0u;
            goto label_1a8ff0;
        }
    }
    ctx->pc = 0x1A8FD8u;
    // 0x1a8fd8: 0xace80000
    ctx->pc = 0x1a8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x1a8fdc: 0x8d030000
    ctx->pc = 0x1a8fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a8fe0: 0xace30004
    ctx->pc = 0x1a8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1a8fe4: 0x8cc30008
    ctx->pc = 0x1a8fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a8fe8: 0x24630001
    ctx->pc = 0x1a8fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a8fec: 0xacc30008
    ctx->pc = 0x1a8fecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1a8ff0:
    // 0x1a8ff0: 0x8d030000
    ctx->pc = 0x1a8ff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a8ff4: 0x31a3c
    ctx->pc = 0x1a8ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a8ff8: 0x31a3e
    ctx->pc = 0x1a8ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a8ffc: 0xad030000
    ctx->pc = 0x1a8ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1a9000: 0x8d030000
    ctx->pc = 0x1a9000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a9004: 0x641825
    ctx->pc = 0x1a9004u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a9008: 0xad030000
    ctx->pc = 0x1a9008u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1a900c:
    // 0x1a900c: 0x3e00008
    ctx->pc = 0x1A900Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8EE0u: goto label_1a8ee0;
            case 0x1A8F10u: goto label_1a8f10;
            case 0x1A8F18u: goto label_1a8f18;
            case 0x1A8F1Cu: goto label_1a8f1c;
            case 0x1A8F58u: goto label_1a8f58;
            case 0x1A8F5Cu: goto label_1a8f5c;
            case 0x1A8F98u: goto label_1a8f98;
            case 0x1A8FA0u: goto label_1a8fa0;
            case 0x1A8FF0u: goto label_1a8ff0;
            case 0x1A900Cu: goto label_1a900c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9014u;
}
