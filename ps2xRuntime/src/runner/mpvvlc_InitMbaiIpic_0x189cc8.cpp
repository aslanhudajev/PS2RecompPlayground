#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMbaiIpic
// Address: 0x189cc8 - 0x18a1c8
void mpvvlc_InitMbaiIpic_0x189cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMbaiIpic");


    ctx->pc = 0x189cc8u;

    // 0x189cc8: 0x3c020024
    ctx->pc = 0x189cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x189ccc: 0x24040240
    ctx->pc = 0x189cccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 576));
    // 0x189cd0: 0x24431a78
    ctx->pc = 0x189cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6776));
    // 0x189cd4: 0x2402000f
    ctx->pc = 0x189cd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
label_189cd8:
    // 0x189cd8: 0xa4640000
    ctx->pc = 0x189cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x189cdc: 0x2442ffff
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189ce0: 0x24630002
    ctx->pc = 0x189ce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189ce4: 0x0
    ctx->pc = 0x189ce4u;
    // NOP
    // 0x189ce8: 0x0
    ctx->pc = 0x189ce8u;
    // NOP
    // 0x189cec: 0x441fffa
    ctx->pc = 0x189CECu;
    {
        const bool branch_taken_0x189cec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189cec) {
            ctx->pc = 0x189CD8u;
            goto label_189cd8;
        }
    }
    ctx->pc = 0x189CF4u;
    // 0x189cf4: 0x2404023b
    ctx->pc = 0x189cf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 571));
    // 0x189cf8: 0x24020001
    ctx->pc = 0x189cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189cfc: 0x0
    ctx->pc = 0x189cfcu;
    // NOP
label_189d00:
    // 0x189d00: 0xa4640000
    ctx->pc = 0x189d00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x189d04: 0x2442ffff
    ctx->pc = 0x189d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189d08: 0x24630002
    ctx->pc = 0x189d08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189d0c: 0x0
    ctx->pc = 0x189d0cu;
    // NOP
    // 0x189d10: 0x0
    ctx->pc = 0x189d10u;
    // NOP
    // 0x189d14: 0x441fffa
    ctx->pc = 0x189D14u;
    {
        const bool branch_taken_0x189d14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189d14) {
            ctx->pc = 0x189D00u;
            goto label_189d00;
        }
    }
    ctx->pc = 0x189D1Cu;
    // 0x189d1c: 0x24040240
    ctx->pc = 0x189d1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 576));
    // 0x189d20: 0x2402000b
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x189d24: 0x0
    ctx->pc = 0x189d24u;
    // NOP
label_189d28:
    // 0x189d28: 0xa4640000
    ctx->pc = 0x189d28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x189d2c: 0x2442ffff
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189d30: 0x24630002
    ctx->pc = 0x189d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189d34: 0x0
    ctx->pc = 0x189d34u;
    // NOP
    // 0x189d38: 0x0
    ctx->pc = 0x189d38u;
    // NOP
    // 0x189d3c: 0x441fffa
    ctx->pc = 0x189D3Cu;
    {
        const bool branch_taken_0x189d3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189d3c) {
            ctx->pc = 0x189D28u;
            goto label_189d28;
        }
    }
    ctx->pc = 0x189D44u;
    // 0x189d44: 0x2404022b
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 555));
    // 0x189d48: 0x24020001
    ctx->pc = 0x189d48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189d4c: 0x0
    ctx->pc = 0x189d4cu;
    // NOP
label_189d50:
    // 0x189d50: 0xa4640000
    ctx->pc = 0x189d50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x189d54: 0x2442ffff
    ctx->pc = 0x189d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189d58: 0x24630002
    ctx->pc = 0x189d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189d5c: 0x0
    ctx->pc = 0x189d5cu;
    // NOP
    // 0x189d60: 0x0
    ctx->pc = 0x189d60u;
    // NOP
    // 0x189d64: 0x441fffa
    ctx->pc = 0x189D64u;
    {
        const bool branch_taken_0x189d64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189d64) {
            ctx->pc = 0x189D50u;
            goto label_189d50;
        }
    }
    ctx->pc = 0x189D6Cu;
    // 0x189d6c: 0x24040240
    ctx->pc = 0x189d6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 576));
    // 0x189d70: 0x2402000f
    ctx->pc = 0x189d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x189d74: 0x0
    ctx->pc = 0x189d74u;
    // NOP
label_189d78:
    // 0x189d78: 0xa4640000
    ctx->pc = 0x189d78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x189d7c: 0x2442ffff
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189d80: 0x24630002
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189d84: 0x0
    ctx->pc = 0x189d84u;
    // NOP
    // 0x189d88: 0x0
    ctx->pc = 0x189d88u;
    // NOP
    // 0x189d8c: 0x441fffa
    ctx->pc = 0x189D8Cu;
    {
        const bool branch_taken_0x189d8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189d8c) {
            ctx->pc = 0x189D78u;
            goto label_189d78;
        }
    }
    ctx->pc = 0x189D94u;
    // 0x189d94: 0x24040021
    ctx->pc = 0x189d94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
    // 0x189d98: 0x42900
    ctx->pc = 0x189d98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x189d9c: 0x0
    ctx->pc = 0x189d9cu;
    // NOP
label_189da0:
    // 0x189da0: 0x2486ffff
    ctx->pc = 0x189da0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189da4: 0x34a2440d
    ctx->pc = 0x189da4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17421));
    // 0x189da8: 0x202d
    ctx->pc = 0x189da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dac: 0x21400
    ctx->pc = 0x189dacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189db0: 0x21403
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189db4: 0x0
    ctx->pc = 0x189db4u;
    // NOP
label_189db8:
    // 0x189db8: 0xa4620000
    ctx->pc = 0x189db8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189dbc: 0x2484ffff
    ctx->pc = 0x189dbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189dc0: 0x24630002
    ctx->pc = 0x189dc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189dc4: 0x0
    ctx->pc = 0x189dc4u;
    // NOP
    // 0x189dc8: 0x0
    ctx->pc = 0x189dc8u;
    // NOP
    // 0x189dcc: 0x481fffa
    ctx->pc = 0x189DCCu;
    {
        const bool branch_taken_0x189dcc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189dcc) {
            ctx->pc = 0x189DB8u;
            goto label_189db8;
        }
    }
    ctx->pc = 0x189DD4u;
    // 0x189dd4: 0x34a2040c
    ctx->pc = 0x189dd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1036));
    // 0x189dd8: 0x202d
    ctx->pc = 0x189dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ddc: 0x21400
    ctx->pc = 0x189ddcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189de0: 0x21403
    ctx->pc = 0x189de0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189de4: 0x0
    ctx->pc = 0x189de4u;
    // NOP
label_189de8:
    // 0x189de8: 0xa4620000
    ctx->pc = 0x189de8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189dec: 0x2484ffff
    ctx->pc = 0x189decu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189df0: 0x24630002
    ctx->pc = 0x189df0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189df4: 0x0
    ctx->pc = 0x189df4u;
    // NOP
    // 0x189df8: 0x0
    ctx->pc = 0x189df8u;
    // NOP
    // 0x189dfc: 0x481fffa
    ctx->pc = 0x189DFCu;
    {
        const bool branch_taken_0x189dfc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189dfc) {
            ctx->pc = 0x189DE8u;
            goto label_189de8;
        }
    }
    ctx->pc = 0x189E04u;
    // 0x189e04: 0xc0202d
    ctx->pc = 0x189e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e08: 0x28820016
    ctx->pc = 0x189e08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 22));
    // 0x189e0c: 0x1040ffe4
    ctx->pc = 0x189E0Cu;
    {
        const bool branch_taken_0x189e0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x189E10u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x189e0c) {
            ctx->pc = 0x189DA0u;
            goto label_189da0;
        }
    }
    ctx->pc = 0x189E14u;
    // 0x189e14: 0x24040015
    ctx->pc = 0x189e14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x189e18: 0x42900
    ctx->pc = 0x189e18u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x189e1c: 0x0
    ctx->pc = 0x189e1cu;
    // NOP
label_189e20:
    // 0x189e20: 0x2486ffff
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189e24: 0x34a2440c
    ctx->pc = 0x189e24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17420));
    // 0x189e28: 0x24040001
    ctx->pc = 0x189e28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e2c: 0x21400
    ctx->pc = 0x189e2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189e30: 0x21403
    ctx->pc = 0x189e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189e34: 0x0
    ctx->pc = 0x189e34u;
    // NOP
label_189e38:
    // 0x189e38: 0xa4620000
    ctx->pc = 0x189e38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189e3c: 0x2484ffff
    ctx->pc = 0x189e3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189e40: 0x24630002
    ctx->pc = 0x189e40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189e44: 0x0
    ctx->pc = 0x189e44u;
    // NOP
    // 0x189e48: 0x0
    ctx->pc = 0x189e48u;
    // NOP
    // 0x189e4c: 0x481fffa
    ctx->pc = 0x189E4Cu;
    {
        const bool branch_taken_0x189e4c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189e4c) {
            ctx->pc = 0x189E38u;
            goto label_189e38;
        }
    }
    ctx->pc = 0x189E54u;
    // 0x189e54: 0x34a2040b
    ctx->pc = 0x189e54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1035));
    // 0x189e58: 0x24040001
    ctx->pc = 0x189e58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e5c: 0x21400
    ctx->pc = 0x189e5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189e60: 0x21403
    ctx->pc = 0x189e60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189e64: 0x0
    ctx->pc = 0x189e64u;
    // NOP
label_189e68:
    // 0x189e68: 0xa4620000
    ctx->pc = 0x189e68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189e6c: 0x2484ffff
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189e70: 0x24630002
    ctx->pc = 0x189e70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189e74: 0x0
    ctx->pc = 0x189e74u;
    // NOP
    // 0x189e78: 0x0
    ctx->pc = 0x189e78u;
    // NOP
    // 0x189e7c: 0x481fffa
    ctx->pc = 0x189E7Cu;
    {
        const bool branch_taken_0x189e7c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189e7c) {
            ctx->pc = 0x189E68u;
            goto label_189e68;
        }
    }
    ctx->pc = 0x189E84u;
    // 0x189e84: 0xc0202d
    ctx->pc = 0x189e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e88: 0x28820010
    ctx->pc = 0x189e88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x189e8c: 0x1040ffe4
    ctx->pc = 0x189E8Cu;
    {
        const bool branch_taken_0x189e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x189E90u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x189e8c) {
            ctx->pc = 0x189E20u;
            goto label_189e20;
        }
    }
    ctx->pc = 0x189E94u;
    // 0x189e94: 0x2404000f
    ctx->pc = 0x189e94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x189e98: 0x42900
    ctx->pc = 0x189e98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x189e9c: 0x0
    ctx->pc = 0x189e9cu;
    // NOP
label_189ea0:
    // 0x189ea0: 0x2486ffff
    ctx->pc = 0x189ea0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189ea4: 0x34a2440a
    ctx->pc = 0x189ea4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17418));
    // 0x189ea8: 0x24040007
    ctx->pc = 0x189ea8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x189eac: 0x21400
    ctx->pc = 0x189eacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189eb0: 0x21403
    ctx->pc = 0x189eb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189eb4: 0x0
    ctx->pc = 0x189eb4u;
    // NOP
label_189eb8:
    // 0x189eb8: 0xa4620000
    ctx->pc = 0x189eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189ebc: 0x2484ffff
    ctx->pc = 0x189ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189ec0: 0x24630002
    ctx->pc = 0x189ec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189ec4: 0x0
    ctx->pc = 0x189ec4u;
    // NOP
    // 0x189ec8: 0x0
    ctx->pc = 0x189ec8u;
    // NOP
    // 0x189ecc: 0x481fffa
    ctx->pc = 0x189ECCu;
    {
        const bool branch_taken_0x189ecc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189ecc) {
            ctx->pc = 0x189EB8u;
            goto label_189eb8;
        }
    }
    ctx->pc = 0x189ED4u;
    // 0x189ed4: 0x34a20409
    ctx->pc = 0x189ed4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1033));
    // 0x189ed8: 0x24040007
    ctx->pc = 0x189ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x189edc: 0x21400
    ctx->pc = 0x189edcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189ee0: 0x21403
    ctx->pc = 0x189ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189ee4: 0x0
    ctx->pc = 0x189ee4u;
    // NOP
label_189ee8:
    // 0x189ee8: 0xa4620000
    ctx->pc = 0x189ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189eec: 0x2484ffff
    ctx->pc = 0x189eecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189ef0: 0x24630002
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189ef4: 0x0
    ctx->pc = 0x189ef4u;
    // NOP
    // 0x189ef8: 0x0
    ctx->pc = 0x189ef8u;
    // NOP
    // 0x189efc: 0x481fffa
    ctx->pc = 0x189EFCu;
    {
        const bool branch_taken_0x189efc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189efc) {
            ctx->pc = 0x189EE8u;
            goto label_189ee8;
        }
    }
    ctx->pc = 0x189F04u;
    // 0x189f04: 0xc0202d
    ctx->pc = 0x189f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f08: 0x2882000a
    ctx->pc = 0x189f08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x189f0c: 0x1040ffe4
    ctx->pc = 0x189F0Cu;
    {
        const bool branch_taken_0x189f0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x189F10u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x189f0c) {
            ctx->pc = 0x189EA0u;
            goto label_189ea0;
        }
    }
    ctx->pc = 0x189F14u;
    // 0x189f14: 0x24040009
    ctx->pc = 0x189f14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x189f18: 0x42900
    ctx->pc = 0x189f18u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x189f1c: 0x0
    ctx->pc = 0x189f1cu;
    // NOP
label_189f20:
    // 0x189f20: 0x2486ffff
    ctx->pc = 0x189f20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189f24: 0x34a24409
    ctx->pc = 0x189f24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17417));
    // 0x189f28: 0x2404000f
    ctx->pc = 0x189f28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x189f2c: 0x21400
    ctx->pc = 0x189f2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189f30: 0x21403
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189f34: 0x0
    ctx->pc = 0x189f34u;
    // NOP
label_189f38:
    // 0x189f38: 0xa4620000
    ctx->pc = 0x189f38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189f3c: 0x2484ffff
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189f40: 0x24630002
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189f44: 0x0
    ctx->pc = 0x189f44u;
    // NOP
    // 0x189f48: 0x0
    ctx->pc = 0x189f48u;
    // NOP
    // 0x189f4c: 0x481fffa
    ctx->pc = 0x189F4Cu;
    {
        const bool branch_taken_0x189f4c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189f4c) {
            ctx->pc = 0x189F38u;
            goto label_189f38;
        }
    }
    ctx->pc = 0x189F54u;
    // 0x189f54: 0x34a20408
    ctx->pc = 0x189f54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1032));
    // 0x189f58: 0x2404000f
    ctx->pc = 0x189f58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x189f5c: 0x21400
    ctx->pc = 0x189f5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189f60: 0x21403
    ctx->pc = 0x189f60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189f64: 0x0
    ctx->pc = 0x189f64u;
    // NOP
label_189f68:
    // 0x189f68: 0xa4620000
    ctx->pc = 0x189f68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189f6c: 0x2484ffff
    ctx->pc = 0x189f6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189f70: 0x24630002
    ctx->pc = 0x189f70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189f74: 0x0
    ctx->pc = 0x189f74u;
    // NOP
    // 0x189f78: 0x0
    ctx->pc = 0x189f78u;
    // NOP
    // 0x189f7c: 0x481fffa
    ctx->pc = 0x189F7Cu;
    {
        const bool branch_taken_0x189f7c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189f7c) {
            ctx->pc = 0x189F68u;
            goto label_189f68;
        }
    }
    ctx->pc = 0x189F84u;
    // 0x189f84: 0xc0202d
    ctx->pc = 0x189f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f88: 0x28820008
    ctx->pc = 0x189f88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x189f8c: 0x1040ffe4
    ctx->pc = 0x189F8Cu;
    {
        const bool branch_taken_0x189f8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x189F90u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x189f8c) {
            ctx->pc = 0x189F20u;
            goto label_189f20;
        }
    }
    ctx->pc = 0x189F94u;
    // 0x189f94: 0x3c020024
    ctx->pc = 0x189f94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x189f98: 0x24040240
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 576));
    // 0x189f9c: 0x24431c78
    ctx->pc = 0x189f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7288));
    // 0x189fa0: 0x24020003
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x189fa4: 0x0
    ctx->pc = 0x189fa4u;
    // NOP
label_189fa8:
    // 0x189fa8: 0xa4640000
    ctx->pc = 0x189fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x189fac: 0x2442ffff
    ctx->pc = 0x189facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189fb0: 0x24630002
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189fb4: 0x0
    ctx->pc = 0x189fb4u;
    // NOP
    // 0x189fb8: 0x0
    ctx->pc = 0x189fb8u;
    // NOP
    // 0x189fbc: 0x441fffa
    ctx->pc = 0x189FBCu;
    {
        const bool branch_taken_0x189fbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189fbc) {
            ctx->pc = 0x189FA8u;
            goto label_189fa8;
        }
    }
    ctx->pc = 0x189FC4u;
    // 0x189fc4: 0x24040007
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x189fc8: 0x42900
    ctx->pc = 0x189fc8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x189fcc: 0x0
    ctx->pc = 0x189fccu;
    // NOP
label_189fd0:
    // 0x189fd0: 0x2486ffff
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189fd4: 0x34a24407
    ctx->pc = 0x189fd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17415));
    // 0x189fd8: 0x202d
    ctx->pc = 0x189fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fdc: 0x21400
    ctx->pc = 0x189fdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x189fe0: 0x21403
    ctx->pc = 0x189fe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x189fe4: 0x0
    ctx->pc = 0x189fe4u;
    // NOP
label_189fe8:
    // 0x189fe8: 0xa4620000
    ctx->pc = 0x189fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x189fec: 0x2484ffff
    ctx->pc = 0x189fecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x189ff0: 0x24630002
    ctx->pc = 0x189ff0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x189ff4: 0x0
    ctx->pc = 0x189ff4u;
    // NOP
    // 0x189ff8: 0x0
    ctx->pc = 0x189ff8u;
    // NOP
    // 0x189ffc: 0x481fffa
    ctx->pc = 0x189FFCu;
    {
        const bool branch_taken_0x189ffc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x189ffc) {
            ctx->pc = 0x189FE8u;
            goto label_189fe8;
        }
    }
    ctx->pc = 0x18A004u;
    // 0x18a004: 0x34a20406
    ctx->pc = 0x18a004u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1030));
    // 0x18a008: 0x202d
    ctx->pc = 0x18a008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a00c: 0x21400
    ctx->pc = 0x18a00cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a010: 0x21403
    ctx->pc = 0x18a010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18a014: 0x0
    ctx->pc = 0x18a014u;
    // NOP
label_18a018:
    // 0x18a018: 0xa4620000
    ctx->pc = 0x18a018u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a01c: 0x2484ffff
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a020: 0x24630002
    ctx->pc = 0x18a020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x18a024: 0x0
    ctx->pc = 0x18a024u;
    // NOP
    // 0x18a028: 0x0
    ctx->pc = 0x18a028u;
    // NOP
    // 0x18a02c: 0x481fffa
    ctx->pc = 0x18A02Cu;
    {
        const bool branch_taken_0x18a02c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18a02c) {
            ctx->pc = 0x18A018u;
            goto label_18a018;
        }
    }
    ctx->pc = 0x18A034u;
    // 0x18a034: 0xc0202d
    ctx->pc = 0x18a034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a038: 0x28820006
    ctx->pc = 0x18a038u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6));
    // 0x18a03c: 0x1040ffe4
    ctx->pc = 0x18A03Cu;
    {
        const bool branch_taken_0x18a03c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A040u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x18a03c) {
            ctx->pc = 0x189FD0u;
            goto label_189fd0;
        }
    }
    ctx->pc = 0x18A044u;
    // 0x18a044: 0x24040005
    ctx->pc = 0x18a044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a048: 0x42900
    ctx->pc = 0x18a048u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a04c: 0x0
    ctx->pc = 0x18a04cu;
    // NOP
label_18a050:
    // 0x18a050: 0x2486ffff
    ctx->pc = 0x18a050u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a054: 0x34a24406
    ctx->pc = 0x18a054u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17414));
    // 0x18a058: 0x24040001
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a05c: 0x21400
    ctx->pc = 0x18a05cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a060: 0x21403
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18a064: 0x0
    ctx->pc = 0x18a064u;
    // NOP
label_18a068:
    // 0x18a068: 0xa4620000
    ctx->pc = 0x18a068u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a06c: 0x2484ffff
    ctx->pc = 0x18a06cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a070: 0x24630002
    ctx->pc = 0x18a070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x18a074: 0x0
    ctx->pc = 0x18a074u;
    // NOP
    // 0x18a078: 0x0
    ctx->pc = 0x18a078u;
    // NOP
    // 0x18a07c: 0x481fffa
    ctx->pc = 0x18A07Cu;
    {
        const bool branch_taken_0x18a07c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18a07c) {
            ctx->pc = 0x18A068u;
            goto label_18a068;
        }
    }
    ctx->pc = 0x18A084u;
    // 0x18a084: 0x34a20405
    ctx->pc = 0x18a084u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1029));
    // 0x18a088: 0x24040001
    ctx->pc = 0x18a088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a08c: 0x21400
    ctx->pc = 0x18a08cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a090: 0x21403
    ctx->pc = 0x18a090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18a094: 0x0
    ctx->pc = 0x18a094u;
    // NOP
label_18a098:
    // 0x18a098: 0xa4620000
    ctx->pc = 0x18a098u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a09c: 0x2484ffff
    ctx->pc = 0x18a09cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a0a0: 0x24630002
    ctx->pc = 0x18a0a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x18a0a4: 0x0
    ctx->pc = 0x18a0a4u;
    // NOP
    // 0x18a0a8: 0x0
    ctx->pc = 0x18a0a8u;
    // NOP
    // 0x18a0ac: 0x481fffa
    ctx->pc = 0x18A0ACu;
    {
        const bool branch_taken_0x18a0ac = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18a0ac) {
            ctx->pc = 0x18A098u;
            goto label_18a098;
        }
    }
    ctx->pc = 0x18A0B4u;
    // 0x18a0b4: 0xc0202d
    ctx->pc = 0x18a0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0b8: 0x28820004
    ctx->pc = 0x18a0b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x18a0bc: 0x1040ffe4
    ctx->pc = 0x18A0BCu;
    {
        const bool branch_taken_0x18a0bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A0C0u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x18a0bc) {
            ctx->pc = 0x18A050u;
            goto label_18a050;
        }
    }
    ctx->pc = 0x18A0C4u;
    // 0x18a0c4: 0x24040003
    ctx->pc = 0x18a0c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a0c8: 0x42900
    ctx->pc = 0x18a0c8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a0cc: 0x0
    ctx->pc = 0x18a0ccu;
    // NOP
label_18a0d0:
    // 0x18a0d0: 0x2486ffff
    ctx->pc = 0x18a0d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a0d4: 0x34a24405
    ctx->pc = 0x18a0d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17413));
    // 0x18a0d8: 0x24040003
    ctx->pc = 0x18a0d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a0dc: 0x21400
    ctx->pc = 0x18a0dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a0e0: 0x21403
    ctx->pc = 0x18a0e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18a0e4: 0x0
    ctx->pc = 0x18a0e4u;
    // NOP
label_18a0e8:
    // 0x18a0e8: 0xa4620000
    ctx->pc = 0x18a0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a0ec: 0x2484ffff
    ctx->pc = 0x18a0ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a0f0: 0x24630002
    ctx->pc = 0x18a0f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x18a0f4: 0x0
    ctx->pc = 0x18a0f4u;
    // NOP
    // 0x18a0f8: 0x0
    ctx->pc = 0x18a0f8u;
    // NOP
    // 0x18a0fc: 0x481fffa
    ctx->pc = 0x18A0FCu;
    {
        const bool branch_taken_0x18a0fc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18a0fc) {
            ctx->pc = 0x18A0E8u;
            goto label_18a0e8;
        }
    }
    ctx->pc = 0x18A104u;
    // 0x18a104: 0x34a20404
    ctx->pc = 0x18a104u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1028));
    // 0x18a108: 0x24040003
    ctx->pc = 0x18a108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a10c: 0x21400
    ctx->pc = 0x18a10cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a110: 0x21403
    ctx->pc = 0x18a110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18a114: 0x0
    ctx->pc = 0x18a114u;
    // NOP
label_18a118:
    // 0x18a118: 0xa4620000
    ctx->pc = 0x18a118u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a11c: 0x2484ffff
    ctx->pc = 0x18a11cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a120: 0x24630002
    ctx->pc = 0x18a120u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x18a124: 0x0
    ctx->pc = 0x18a124u;
    // NOP
    // 0x18a128: 0x0
    ctx->pc = 0x18a128u;
    // NOP
    // 0x18a12c: 0x481fffa
    ctx->pc = 0x18A12Cu;
    {
        const bool branch_taken_0x18a12c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18a12c) {
            ctx->pc = 0x18A118u;
            goto label_18a118;
        }
    }
    ctx->pc = 0x18A134u;
    // 0x18a134: 0xc0202d
    ctx->pc = 0x18a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a138: 0x28820002
    ctx->pc = 0x18a138u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x18a13c: 0x1040ffe4
    ctx->pc = 0x18A13Cu;
    {
        const bool branch_taken_0x18a13c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A140u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x18a13c) {
            ctx->pc = 0x18A0D0u;
            goto label_18a0d0;
        }
    }
    ctx->pc = 0x18A144u;
    // 0x18a144: 0x24020001
    ctx->pc = 0x18a144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a148: 0x22900
    ctx->pc = 0x18a148u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 4));
    // 0x18a14c: 0x0
    ctx->pc = 0x18a14cu;
    // NOP
label_18a150:
    // 0x18a150: 0x2446ffff
    ctx->pc = 0x18a150u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a154: 0x34a24403
    ctx->pc = 0x18a154u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 17411));
    // 0x18a158: 0x2404000f
    ctx->pc = 0x18a158u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18a15c: 0x21400
    ctx->pc = 0x18a15cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a160: 0x21403
    ctx->pc = 0x18a160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18a164: 0x0
    ctx->pc = 0x18a164u;
    // NOP
label_18a168:
    // 0x18a168: 0xa4620000
    ctx->pc = 0x18a168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a16c: 0x2484ffff
    ctx->pc = 0x18a16cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a170: 0x24630002
    ctx->pc = 0x18a170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x18a174: 0x0
    ctx->pc = 0x18a174u;
    // NOP
    // 0x18a178: 0x0
    ctx->pc = 0x18a178u;
    // NOP
    // 0x18a17c: 0x481fffa
    ctx->pc = 0x18A17Cu;
    {
        const bool branch_taken_0x18a17c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18a17c) {
            ctx->pc = 0x18A168u;
            goto label_18a168;
        }
    }
    ctx->pc = 0x18A184u;
    // 0x18a184: 0x34a20402
    ctx->pc = 0x18a184u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1026));
    // 0x18a188: 0x2404000f
    ctx->pc = 0x18a188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18a18c: 0x21400
    ctx->pc = 0x18a18cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a190: 0x21403
    ctx->pc = 0x18a190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18a194: 0x0
    ctx->pc = 0x18a194u;
    // NOP
label_18a198:
    // 0x18a198: 0xa4620000
    ctx->pc = 0x18a198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a19c: 0x2484ffff
    ctx->pc = 0x18a19cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a1a0: 0x24630002
    ctx->pc = 0x18a1a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x18a1a4: 0x0
    ctx->pc = 0x18a1a4u;
    // NOP
    // 0x18a1a8: 0x0
    ctx->pc = 0x18a1a8u;
    // NOP
    // 0x18a1ac: 0x481fffa
    ctx->pc = 0x18A1ACu;
    {
        const bool branch_taken_0x18a1ac = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18a1ac) {
            ctx->pc = 0x18A198u;
            goto label_18a198;
        }
    }
    ctx->pc = 0x18A1B4u;
    // 0x18a1b4: 0xc0102d
    ctx->pc = 0x18a1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1b8: 0x1c40ffe5
    ctx->pc = 0x18A1B8u;
    {
        const bool branch_taken_0x18a1b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18A1BCu;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x18a1b8) {
            ctx->pc = 0x18A150u;
            goto label_18a150;
        }
    }
    ctx->pc = 0x18A1C0u;
    // 0x18a1c0: 0x3e00008
    ctx->pc = 0x18A1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189CD8u: goto label_189cd8;
            case 0x189D00u: goto label_189d00;
            case 0x189D28u: goto label_189d28;
            case 0x189D50u: goto label_189d50;
            case 0x189D78u: goto label_189d78;
            case 0x189DA0u: goto label_189da0;
            case 0x189DB8u: goto label_189db8;
            case 0x189DE8u: goto label_189de8;
            case 0x189E20u: goto label_189e20;
            case 0x189E38u: goto label_189e38;
            case 0x189E68u: goto label_189e68;
            case 0x189EA0u: goto label_189ea0;
            case 0x189EB8u: goto label_189eb8;
            case 0x189EE8u: goto label_189ee8;
            case 0x189F20u: goto label_189f20;
            case 0x189F38u: goto label_189f38;
            case 0x189F68u: goto label_189f68;
            case 0x189FA8u: goto label_189fa8;
            case 0x189FD0u: goto label_189fd0;
            case 0x189FE8u: goto label_189fe8;
            case 0x18A018u: goto label_18a018;
            case 0x18A050u: goto label_18a050;
            case 0x18A068u: goto label_18a068;
            case 0x18A098u: goto label_18a098;
            case 0x18A0D0u: goto label_18a0d0;
            case 0x18A0E8u: goto label_18a0e8;
            case 0x18A118u: goto label_18a118;
            case 0x18A150u: goto label_18a150;
            case 0x18A168u: goto label_18a168;
            case 0x18A198u: goto label_18a198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A1C8u;
}
