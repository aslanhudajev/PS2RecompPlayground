#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxstmf_stat_exec
// Address: 0x170d28 - 0x170ffc
void adxstmf_stat_exec_0x170d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxstmf_stat_exec");


    ctx->pc = 0x170d28u;

label_170d28:
    // 0x170d28: 0x27bdff80
    ctx->pc = 0x170d28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_170d2c:
    // 0x170d2c: 0x24020001
    ctx->pc = 0x170d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_170d30:
    // 0x170d30: 0xffb20040
    ctx->pc = 0x170d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_170d34:
    // 0x170d34: 0xffbf0070
    ctx->pc = 0x170d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_170d38:
    // 0x170d38: 0x80902d
    ctx->pc = 0x170d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170d3c:
    // 0x170d3c: 0xffb40060
    ctx->pc = 0x170d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_170d40:
    // 0x170d40: 0xffb30050
    ctx->pc = 0x170d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_170d44:
    // 0x170d44: 0xffb10030
    ctx->pc = 0x170d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_170d48:
    // 0x170d48: 0xffb00020
    ctx->pc = 0x170d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_170d4c:
    // 0x170d4c: 0x82500002
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_170d50:
    // 0x170d50: 0x8e530004
    ctx->pc = 0x170d50u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_170d54:
    // 0x170d54: 0x16020050
label_170d58:
    if (ctx->pc == 0x170D58u) {
        ctx->pc = 0x170D58u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x170D5Cu;
        goto label_170d5c;
    }
    ctx->pc = 0x170D54u;
    {
        const bool branch_taken_0x170d54 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x170D58u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        if (branch_taken_0x170d54) {
            ctx->pc = 0x170E98u;
            goto label_170e98;
        }
    }
    ctx->pc = 0x170D5Cu;
label_170d5c:
    // 0x170d5c: 0xc05d3b8
label_170d60:
    if (ctx->pc == 0x170D60u) {
        ctx->pc = 0x170D60u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x170D64u;
        goto label_170d64;
    }
    ctx->pc = 0x170D5Cu;
    SET_GPR_U32(ctx, 31, 0x170D64u);
    ctx->pc = 0x170D60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x174EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetStat_0x174ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D64u; }
        else if (ctx->pc != 0x170D64u) { ctx->pc = 0x170D64u; }
    }
    if (ctx->pc != 0x170D64u) { return; }
    ctx->pc = 0x170D64u;
label_170d64:
    // 0x170d64: 0x40182d
    ctx->pc = 0x170d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170d68:
    // 0x170d68: 0x14700033
label_170d6c:
    if (ctx->pc == 0x170D6Cu) {
        ctx->pc = 0x170D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x170D70u;
        goto label_170d70;
    }
    ctx->pc = 0x170D68u;
    {
        const bool branch_taken_0x170d68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        ctx->pc = 0x170D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x170d68) {
            ctx->pc = 0x170E38u;
            goto label_170e38;
        }
    }
    ctx->pc = 0x170D70u;
label_170d70:
    // 0x170d70: 0x8e420020
    ctx->pc = 0x170d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_170d74:
    // 0x170d74: 0x27b00010
    ctx->pc = 0x170d74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_170d78:
    // 0x170d78: 0x26440024
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 36));
label_170d7c:
    // 0x170d7c: 0x3a0302d
    ctx->pc = 0x170d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_170d80:
    // 0x170d80: 0x28ac0
    ctx->pc = 0x170d80u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 11));
label_170d84:
    // 0x170d84: 0x200382d
    ctx->pc = 0x170d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170d88:
    // 0x170d88: 0xc05f4b0
label_170d8c:
    if (ctx->pc == 0x170D8Cu) {
        ctx->pc = 0x170D8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170D90u;
        goto label_170d90;
    }
    ctx->pc = 0x170D88u;
    SET_GPR_U32(ctx, 31, 0x170D90u);
    ctx->pc = 0x170D8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D90u; }
        else if (ctx->pc != 0x170D90u) { ctx->pc = 0x170D90u; }
    }
    if (ctx->pc != 0x170D90u) { return; }
    ctx->pc = 0x170D90u;
label_170d90:
    // 0x170d90: 0x8e630000
    ctx->pc = 0x170d90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_170d94:
    // 0x170d94: 0x260202d
    ctx->pc = 0x170d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170d98:
    // 0x170d98: 0x24050001
    ctx->pc = 0x170d98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_170d9c:
    // 0x170d9c: 0x8c620020
    ctx->pc = 0x170d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_170da0:
    // 0x170da0: 0x40f809
label_170da4:
    if (ctx->pc == 0x170DA4u) {
        ctx->pc = 0x170DA4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170DA8u;
        goto label_170da8;
    }
    ctx->pc = 0x170DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170DA8u);
        ctx->pc = 0x170DA4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170DA8u; }
            if (ctx->pc != 0x170DA8u) { return; }
        }
    }
    ctx->pc = 0x170DA8u;
label_170da8:
    // 0x170da8: 0x8e630000
    ctx->pc = 0x170da8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_170dac:
    // 0x170dac: 0x200302d
    ctx->pc = 0x170dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170db0:
    // 0x170db0: 0x260202d
    ctx->pc = 0x170db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170db4:
    // 0x170db4: 0x8c62001c
    ctx->pc = 0x170db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_170db8:
    // 0x170db8: 0x40f809
label_170dbc:
    if (ctx->pc == 0x170DBCu) {
        ctx->pc = 0x170DBCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170DC0u;
        goto label_170dc0;
    }
    ctx->pc = 0x170DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170DC0u);
        ctx->pc = 0x170DBCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170DC0u; }
            if (ctx->pc != 0x170DC0u) { return; }
        }
    }
    ctx->pc = 0x170DC0u;
label_170dc0:
    // 0x170dc0: 0xc05c2f4
label_170dc4:
    if (ctx->pc == 0x170DC4u) {
        ctx->pc = 0x170DC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170DC8u;
        goto label_170dc8;
    }
    ctx->pc = 0x170DC0u;
    SET_GPR_U32(ctx, 31, 0x170DC8u);
    ctx->pc = 0x170DC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Tell_0x170bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DC8u; }
        else if (ctx->pc != 0x170DC8u) { ctx->pc = 0x170DC8u; }
    }
    if (ctx->pc != 0x170DC8u) { return; }
    ctx->pc = 0x170DC8u;
label_170dc8:
    // 0x170dc8: 0x8e430030
    ctx->pc = 0x170dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_170dcc:
    // 0x170dcc: 0x54430007
label_170dd0:
    if (ctx->pc == 0x170DD0u) {
        ctx->pc = 0x170DD0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->pc = 0x170DD4u;
        goto label_170dd4;
    }
    ctx->pc = 0x170DCCu;
    {
        const bool branch_taken_0x170dcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x170dcc) {
            ctx->pc = 0x170DD0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->pc = 0x170DECu;
            goto label_170dec;
        }
    }
    ctx->pc = 0x170DD4u;
label_170dd4:
    // 0x170dd4: 0x8e420038
    ctx->pc = 0x170dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_170dd8:
    // 0x170dd8: 0x50400004
label_170ddc:
    if (ctx->pc == 0x170DDCu) {
        ctx->pc = 0x170DDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->pc = 0x170DE0u;
        goto label_170de0;
    }
    ctx->pc = 0x170DD8u;
    {
        const bool branch_taken_0x170dd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x170dd8) {
            ctx->pc = 0x170DDCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->pc = 0x170DECu;
            goto label_170dec;
        }
    }
    ctx->pc = 0x170DE0u;
label_170de0:
    // 0x170de0: 0x40f809
label_170de4:
    if (ctx->pc == 0x170DE4u) {
        ctx->pc = 0x170DE4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->pc = 0x170DE8u;
        goto label_170de8;
    }
    ctx->pc = 0x170DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170DE8u);
        ctx->pc = 0x170DE4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170DE8u; }
            if (ctx->pc != 0x170DE8u) { return; }
        }
    }
    ctx->pc = 0x170DE8u;
label_170de8:
    // 0x170de8: 0x8e420034
    ctx->pc = 0x170de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_170dec:
    // 0x170dec: 0x240202d
    ctx->pc = 0x170decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170df0:
    // 0x170df0: 0xa2400002
    ctx->pc = 0x170df0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_170df4:
    // 0x170df4: 0x511021
    ctx->pc = 0x170df4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_170df8:
    // 0x170df8: 0xc05c2f4
label_170dfc:
    if (ctx->pc == 0x170DFCu) {
        ctx->pc = 0x170DFCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x170E00u;
        goto label_170e00;
    }
    ctx->pc = 0x170DF8u;
    SET_GPR_U32(ctx, 31, 0x170E00u);
    ctx->pc = 0x170DFCu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x170BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Tell_0x170bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E00u; }
        else if (ctx->pc != 0x170E00u) { ctx->pc = 0x170E00u; }
    }
    if (ctx->pc != 0x170E00u) { return; }
    ctx->pc = 0x170E00u;
label_170e00:
    // 0x170e00: 0x8e430014
    ctx->pc = 0x170e00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_170e04:
    // 0x170e04: 0x2404ffff
    ctx->pc = 0x170e04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_170e08:
    // 0x170e08: 0x246507ff
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 2047));
label_170e0c:
    // 0x170e0c: 0x24630ffe
    ctx->pc = 0x170e0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4094));
label_170e10:
    // 0x170e10: 0x85202a
    ctx->pc = 0x170e10u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
label_170e14:
    // 0x170e14: 0xa4180b
    ctx->pc = 0x170e14u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
label_170e18:
    // 0x170e18: 0x31ac3
    ctx->pc = 0x170e18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_170e1c:
    // 0x170e1c: 0x43102a
    ctx->pc = 0x170e1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_170e20:
    // 0x170e20: 0x5440001c
label_170e24:
    if (ctx->pc == 0x170E24u) {
        ctx->pc = 0x170E24u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x170E28u;
        goto label_170e28;
    }
    ctx->pc = 0x170E20u;
    {
        const bool branch_taken_0x170e20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170e20) {
            ctx->pc = 0x170E24u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x170E94u;
            goto label_170e94;
        }
    }
    ctx->pc = 0x170E28u;
label_170e28:
    // 0x170e28: 0x24020003
    ctx->pc = 0x170e28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_170e2c:
    // 0x170e2c: 0xa2420001
    ctx->pc = 0x170e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_170e30:
    // 0x170e30: 0x10000018
label_170e34:
    if (ctx->pc == 0x170E34u) {
        ctx->pc = 0x170E34u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x170E38u;
        goto label_170e38;
    }
    ctx->pc = 0x170E30u;
    {
        const bool branch_taken_0x170e30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170E34u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x170e30) {
            ctx->pc = 0x170E94u;
            goto label_170e94;
        }
    }
    ctx->pc = 0x170E38u;
label_170e38:
    // 0x170e38: 0x54620017
label_170e3c:
    if (ctx->pc == 0x170E3Cu) {
        ctx->pc = 0x170E3Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x170E40u;
        goto label_170e40;
    }
    ctx->pc = 0x170E38u;
    {
        const bool branch_taken_0x170e38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x170e38) {
            ctx->pc = 0x170E3Cu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x170E98u;
            goto label_170e98;
        }
    }
    ctx->pc = 0x170E40u;
label_170e40:
    // 0x170e40: 0x8e630000
    ctx->pc = 0x170e40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_170e44:
    // 0x170e44: 0x260202d
    ctx->pc = 0x170e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170e48:
    // 0x170e48: 0x282d
    ctx->pc = 0x170e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170e4c:
    // 0x170e4c: 0x8c62001c
    ctx->pc = 0x170e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_170e50:
    // 0x170e50: 0x40f809
label_170e54:
    if (ctx->pc == 0x170E54u) {
        ctx->pc = 0x170E54u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 36));
        ctx->pc = 0x170E58u;
        goto label_170e58;
    }
    ctx->pc = 0x170E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170E58u);
        ctx->pc = 0x170E54u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 36));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170E58u; }
            if (ctx->pc != 0x170E58u) { return; }
        }
    }
    ctx->pc = 0x170E58u;
label_170e58:
    // 0x170e58: 0x8f83821c
    ctx->pc = 0x170e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_170e5c:
    // 0x170e5c: 0x462000b
label_170e60:
    if (ctx->pc == 0x170E60u) {
        ctx->pc = 0x170E60u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x170E64u;
        goto label_170e64;
    }
    ctx->pc = 0x170E5Cu;
    {
        const bool branch_taken_0x170e5c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x170e5c) {
            ctx->pc = 0x170E60u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x170E8Cu;
            goto label_170e8c;
        }
    }
    ctx->pc = 0x170E64u;
label_170e64:
    // 0x170e64: 0x82420003
    ctx->pc = 0x170e64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_170e68:
    // 0x170e68: 0x43102a
    ctx->pc = 0x170e68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_170e6c:
    // 0x170e6c: 0x14400004
label_170e70:
    if (ctx->pc == 0x170E70u) {
        ctx->pc = 0x170E70u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x170E74u;
        goto label_170e74;
    }
    ctx->pc = 0x170E6Cu;
    {
        const bool branch_taken_0x170e6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170E70u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        if (branch_taken_0x170e6c) {
            ctx->pc = 0x170E80u;
            goto label_170e80;
        }
    }
    ctx->pc = 0x170E74u;
label_170e74:
    // 0x170e74: 0x24020004
    ctx->pc = 0x170e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_170e78:
    // 0x170e78: 0x10000003
label_170e7c:
    if (ctx->pc == 0x170E7Cu) {
        ctx->pc = 0x170E7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x170E80u;
        goto label_170e80;
    }
    ctx->pc = 0x170E78u;
    {
        const bool branch_taken_0x170e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170E7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x170e78) {
            ctx->pc = 0x170E88u;
            goto label_170e88;
        }
    }
    ctx->pc = 0x170E80u;
label_170e80:
    // 0x170e80: 0x24820001
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_170e84:
    // 0x170e84: 0xa2420003
    ctx->pc = 0x170e84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_170e88:
    // 0x170e88: 0xa2400002
    ctx->pc = 0x170e88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_170e8c:
    // 0x170e8c: 0x10000002
label_170e90:
    if (ctx->pc == 0x170E90u) {
        ctx->pc = 0x170E90u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170E94u;
        goto label_170e94;
    }
    ctx->pc = 0x170E8Cu;
    {
        const bool branch_taken_0x170e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170E90u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170e8c) {
            ctx->pc = 0x170E98u;
            goto label_170e98;
        }
    }
    ctx->pc = 0x170E94u;
label_170e94:
    // 0x170e94: 0x92430002
    ctx->pc = 0x170e94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_170e98:
    // 0x170e98: 0x14600051
label_170e9c:
    if (ctx->pc == 0x170E9Cu) {
        ctx->pc = 0x170E9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x170EA0u;
        goto label_170ea0;
    }
    ctx->pc = 0x170E98u;
    {
        const bool branch_taken_0x170e98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x170E9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x170e98) {
            ctx->pc = 0x170FE0u;
            goto label_170fe0;
        }
    }
    ctx->pc = 0x170EA0u;
label_170ea0:
    // 0x170ea0: 0x12600004
label_170ea4:
    if (ctx->pc == 0x170EA4u) {
        ctx->pc = 0x170EA8u;
        goto label_170ea8;
    }
    ctx->pc = 0x170EA0u;
    {
        const bool branch_taken_0x170ea0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x170ea0) {
            ctx->pc = 0x170EB4u;
            goto label_170eb4;
        }
    }
    ctx->pc = 0x170EA8u;
label_170ea8:
    // 0x170ea8: 0x8e620000
    ctx->pc = 0x170ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_170eac:
    // 0x170eac: 0x54400005
label_170eb0:
    if (ctx->pc == 0x170EB0u) {
        ctx->pc = 0x170EB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->pc = 0x170EB4u;
        goto label_170eb4;
    }
    ctx->pc = 0x170EACu;
    {
        const bool branch_taken_0x170eac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170eac) {
            ctx->pc = 0x170EB0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->pc = 0x170EC4u;
            goto label_170ec4;
        }
    }
    ctx->pc = 0x170EB4u;
label_170eb4:
    // 0x170eb4: 0xc05c346
label_170eb8:
    if (ctx->pc == 0x170EB8u) {
        ctx->pc = 0x170EBCu;
        goto label_170ebc;
    }
    ctx->pc = 0x170EB4u;
    SET_GPR_U32(ctx, 31, 0x170EBCu);
    ctx->pc = 0x170D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxstm_sj_internal_error_0x170d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170EBCu; }
        else if (ctx->pc != 0x170EBCu) { ctx->pc = 0x170EBCu; }
    }
    if (ctx->pc != 0x170EBCu) { return; }
    ctx->pc = 0x170EBCu;
label_170ebc:
    // 0x170ebc: 0x10000048
label_170ec0:
    if (ctx->pc == 0x170EC0u) {
        ctx->pc = 0x170EC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x170EC4u;
        goto label_170ec4;
    }
    ctx->pc = 0x170EBCu;
    {
        const bool branch_taken_0x170ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170EC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x170ebc) {
            ctx->pc = 0x170FE0u;
            goto label_170fe0;
        }
    }
    ctx->pc = 0x170EC4u;
label_170ec4:
    // 0x170ec4: 0x260202d
    ctx->pc = 0x170ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170ec8:
    // 0x170ec8: 0x40f809
label_170ecc:
    if (ctx->pc == 0x170ECCu) {
        ctx->pc = 0x170ECCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x170ED0u;
        goto label_170ed0;
    }
    ctx->pc = 0x170EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170ED0u);
        ctx->pc = 0x170ECCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170ED0u; }
            if (ctx->pc != 0x170ED0u) { return; }
        }
    }
    ctx->pc = 0x170ED0u;
label_170ed0:
    // 0x170ed0: 0x8e43001c
    ctx->pc = 0x170ed0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_170ed4:
    // 0x170ed4: 0x43102a
    ctx->pc = 0x170ed4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_170ed8:
    // 0x170ed8: 0x10400040
label_170edc:
    if (ctx->pc == 0x170EDCu) {
        ctx->pc = 0x170EDCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 36));
        ctx->pc = 0x170EE0u;
        goto label_170ee0;
    }
    ctx->pc = 0x170ED8u;
    {
        const bool branch_taken_0x170ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170EDCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 36));
        if (branch_taken_0x170ed8) {
            ctx->pc = 0x170FDCu;
            goto label_170fdc;
        }
    }
    ctx->pc = 0x170EE0u;
label_170ee0:
    // 0x170ee0: 0x8e630000
    ctx->pc = 0x170ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_170ee4:
    // 0x170ee4: 0x8e460018
    ctx->pc = 0x170ee4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_170ee8:
    // 0x170ee8: 0x260202d
    ctx->pc = 0x170ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170eec:
    // 0x170eec: 0x8c620018
    ctx->pc = 0x170eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_170ef0:
    // 0x170ef0: 0x282d
    ctx->pc = 0x170ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170ef4:
    // 0x170ef4: 0x40f809
label_170ef8:
    if (ctx->pc == 0x170EF8u) {
        ctx->pc = 0x170EF8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170EFCu;
        goto label_170efc;
    }
    ctx->pc = 0x170EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170EFCu);
        ctx->pc = 0x170EF8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170EFCu; }
            if (ctx->pc != 0x170EFCu) { return; }
        }
    }
    ctx->pc = 0x170EFCu;
label_170efc:
    // 0x170efc: 0x8e450028
    ctx->pc = 0x170efcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_170f00:
    // 0x170f00: 0x2403ffff
    ctx->pc = 0x170f00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_170f04:
    // 0x170f04: 0x8e500030
    ctx->pc = 0x170f04u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_170f08:
    // 0x170f08: 0x240202d
    ctx->pc = 0x170f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170f0c:
    // 0x170f0c: 0x65182a
    ctx->pc = 0x170f0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
label_170f10:
    // 0x170f10: 0x24a207ff
    ctx->pc = 0x170f10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2047));
label_170f14:
    // 0x170f14: 0xa3100b
    ctx->pc = 0x170f14u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
label_170f18:
    // 0x170f18: 0xc05c2f4
label_170f1c:
    if (ctx->pc == 0x170F1Cu) {
        ctx->pc = 0x170F1Cu;
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 11));
        ctx->pc = 0x170F20u;
        goto label_170f20;
    }
    ctx->pc = 0x170F18u;
    SET_GPR_U32(ctx, 31, 0x170F20u);
    ctx->pc = 0x170F1Cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 11));
    ctx->pc = 0x170BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Tell_0x170bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F20u; }
        else if (ctx->pc != 0x170F20u) { ctx->pc = 0x170F20u; }
    }
    if (ctx->pc != 0x170F20u) { return; }
    ctx->pc = 0x170F20u;
label_170f20:
    // 0x170f20: 0x2028023
    ctx->pc = 0x170f20u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_170f24:
    // 0x170f24: 0x8e44002c
    ctx->pc = 0x170f24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_170f28:
    // 0x170f28: 0x230102a
    ctx->pc = 0x170f28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
label_170f2c:
    // 0x170f2c: 0x202880a
    ctx->pc = 0x170f2cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
label_170f30:
    // 0x170f30: 0x224182a
    ctx->pc = 0x170f30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
label_170f34:
    // 0x170f34: 0x83880a
    ctx->pc = 0x170f34u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 4));
label_170f38:
    // 0x170f38: 0x56200009
label_170f3c:
    if (ctx->pc == 0x170F3Cu) {
        ctx->pc = 0x170F3Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x170F40u;
        goto label_170f40;
    }
    ctx->pc = 0x170F38u;
    {
        const bool branch_taken_0x170f38 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x170f38) {
            ctx->pc = 0x170F3Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x170F60u;
            goto label_170f60;
        }
    }
    ctx->pc = 0x170F40u;
label_170f40:
    // 0x170f40: 0x8e630000
    ctx->pc = 0x170f40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_170f44:
    // 0x170f44: 0x260202d
    ctx->pc = 0x170f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170f48:
    // 0x170f48: 0x280302d
    ctx->pc = 0x170f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_170f4c:
    // 0x170f4c: 0x8c62001c
    ctx->pc = 0x170f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_170f50:
    // 0x170f50: 0x40f809
label_170f54:
    if (ctx->pc == 0x170F54u) {
        ctx->pc = 0x170F54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170F58u;
        goto label_170f58;
    }
    ctx->pc = 0x170F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170F58u);
        ctx->pc = 0x170F54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170F58u; }
            if (ctx->pc != 0x170F58u) { return; }
        }
    }
    ctx->pc = 0x170F58u;
label_170f58:
    // 0x170f58: 0x10000021
label_170f5c:
    if (ctx->pc == 0x170F5Cu) {
        ctx->pc = 0x170F5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x170F60u;
        goto label_170f60;
    }
    ctx->pc = 0x170F58u;
    {
        const bool branch_taken_0x170f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170F5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x170f58) {
            ctx->pc = 0x170FE0u;
            goto label_170fe0;
        }
    }
    ctx->pc = 0x170F60u;
label_170f60:
    // 0x170f60: 0x220282d
    ctx->pc = 0x170f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170f64:
    // 0x170f64: 0xc05d356
label_170f68:
    if (ctx->pc == 0x170F68u) {
        ctx->pc = 0x170F68u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x170F6Cu;
        goto label_170f6c;
    }
    ctx->pc = 0x170F64u;
    SET_GPR_U32(ctx, 31, 0x170F6Cu);
    ctx->pc = 0x170F68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->pc = 0x174D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsReqRd_0x174d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F6Cu; }
        else if (ctx->pc != 0x170F6Cu) { ctx->pc = 0x170F6Cu; }
    }
    if (ctx->pc != 0x170F6Cu) { return; }
    ctx->pc = 0x170F6Cu;
label_170f6c:
    // 0x170f6c: 0x1c400019
label_170f70:
    if (ctx->pc == 0x170F70u) {
        ctx->pc = 0x170F70u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x170F74u;
        goto label_170f74;
    }
    ctx->pc = 0x170F6Cu;
    {
        const bool branch_taken_0x170f6c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x170F70u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x170f6c) {
            ctx->pc = 0x170FD4u;
            goto label_170fd4;
        }
    }
    ctx->pc = 0x170F74u;
label_170f74:
    // 0x170f74: 0x8e620000
    ctx->pc = 0x170f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_170f78:
    // 0x170f78: 0x260202d
    ctx->pc = 0x170f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170f7c:
    // 0x170f7c: 0x280302d
    ctx->pc = 0x170f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_170f80:
    // 0x170f80: 0x8c43001c
    ctx->pc = 0x170f80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_170f84:
    // 0x170f84: 0x60f809
label_170f88:
    if (ctx->pc == 0x170F88u) {
        ctx->pc = 0x170F88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170F8Cu;
        goto label_170f8c;
    }
    ctx->pc = 0x170F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x170F8Cu);
        ctx->pc = 0x170F88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170F8Cu; }
            if (ctx->pc != 0x170F8Cu) { return; }
        }
    }
    ctx->pc = 0x170F8Cu;
label_170f8c:
    // 0x170f8c: 0xc05d3b8
label_170f90:
    if (ctx->pc == 0x170F90u) {
        ctx->pc = 0x170F90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x170F94u;
        goto label_170f94;
    }
    ctx->pc = 0x170F8Cu;
    SET_GPR_U32(ctx, 31, 0x170F94u);
    ctx->pc = 0x170F90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x174EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetStat_0x174ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F94u; }
        else if (ctx->pc != 0x170F94u) { ctx->pc = 0x170F94u; }
    }
    if (ctx->pc != 0x170F94u) { return; }
    ctx->pc = 0x170F94u;
label_170f94:
    // 0x170f94: 0x24030003
    ctx->pc = 0x170f94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_170f98:
    // 0x170f98: 0x14430011
label_170f9c:
    if (ctx->pc == 0x170F9Cu) {
        ctx->pc = 0x170F9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x170FA0u;
        goto label_170fa0;
    }
    ctx->pc = 0x170F98u;
    {
        const bool branch_taken_0x170f98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x170F9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x170f98) {
            ctx->pc = 0x170FE0u;
            goto label_170fe0;
        }
    }
    ctx->pc = 0x170FA0u;
label_170fa0:
    // 0x170fa0: 0x8f83821c
    ctx->pc = 0x170fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_170fa4:
    // 0x170fa4: 0x460000f
label_170fa8:
    if (ctx->pc == 0x170FA8u) {
        ctx->pc = 0x170FA8u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x170FACu;
        goto label_170fac;
    }
    ctx->pc = 0x170FA4u;
    {
        const bool branch_taken_0x170fa4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x170FA8u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x170fa4) {
            ctx->pc = 0x170FE4u;
            goto label_170fe4;
        }
    }
    ctx->pc = 0x170FACu;
label_170fac:
    // 0x170fac: 0x82420003
    ctx->pc = 0x170facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_170fb0:
    // 0x170fb0: 0x43102a
    ctx->pc = 0x170fb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_170fb4:
    // 0x170fb4: 0x14400004
label_170fb8:
    if (ctx->pc == 0x170FB8u) {
        ctx->pc = 0x170FB8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x170FBCu;
        goto label_170fbc;
    }
    ctx->pc = 0x170FB4u;
    {
        const bool branch_taken_0x170fb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170FB8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        if (branch_taken_0x170fb4) {
            ctx->pc = 0x170FC8u;
            goto label_170fc8;
        }
    }
    ctx->pc = 0x170FBCu;
label_170fbc:
    // 0x170fbc: 0x24020004
    ctx->pc = 0x170fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_170fc0:
    // 0x170fc0: 0x10000008
label_170fc4:
    if (ctx->pc == 0x170FC4u) {
        ctx->pc = 0x170FC4u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x170FC8u;
        goto label_170fc8;
    }
    ctx->pc = 0x170FC0u;
    {
        const bool branch_taken_0x170fc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170FC4u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x170fc0) {
            ctx->pc = 0x170FE4u;
            goto label_170fe4;
        }
    }
    ctx->pc = 0x170FC8u;
label_170fc8:
    // 0x170fc8: 0x24820001
    ctx->pc = 0x170fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_170fcc:
    // 0x170fcc: 0x10000003
label_170fd0:
    if (ctx->pc == 0x170FD0u) {
        ctx->pc = 0x170FD0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x170FD4u;
        goto label_170fd4;
    }
    ctx->pc = 0x170FCCu;
    {
        const bool branch_taken_0x170fcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170FD0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x170fcc) {
            ctx->pc = 0x170FDCu;
            goto label_170fdc;
        }
    }
    ctx->pc = 0x170FD4u;
label_170fd4:
    // 0x170fd4: 0x24020001
    ctx->pc = 0x170fd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_170fd8:
    // 0x170fd8: 0xa2420002
    ctx->pc = 0x170fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_170fdc:
    // 0x170fdc: 0xdfbf0070
    ctx->pc = 0x170fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_170fe0:
    // 0x170fe0: 0xdfb40060
    ctx->pc = 0x170fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_170fe4:
    // 0x170fe4: 0xdfb30050
    ctx->pc = 0x170fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_170fe8:
    // 0x170fe8: 0xdfb20040
    ctx->pc = 0x170fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_170fec:
    // 0x170fec: 0xdfb10030
    ctx->pc = 0x170fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_170ff0:
    // 0x170ff0: 0xdfb00020
    ctx->pc = 0x170ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_170ff4:
    // 0x170ff4: 0x3e00008
label_170ff8:
    if (ctx->pc == 0x170FF8u) {
        ctx->pc = 0x170FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x170FFCu;
        goto label_fallthrough_0x170ff4;
    }
    ctx->pc = 0x170FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170D28u: goto label_170d28;
            case 0x170D2Cu: goto label_170d2c;
            case 0x170D30u: goto label_170d30;
            case 0x170D34u: goto label_170d34;
            case 0x170D38u: goto label_170d38;
            case 0x170D3Cu: goto label_170d3c;
            case 0x170D40u: goto label_170d40;
            case 0x170D44u: goto label_170d44;
            case 0x170D48u: goto label_170d48;
            case 0x170D4Cu: goto label_170d4c;
            case 0x170D50u: goto label_170d50;
            case 0x170D54u: goto label_170d54;
            case 0x170D58u: goto label_170d58;
            case 0x170D5Cu: goto label_170d5c;
            case 0x170D60u: goto label_170d60;
            case 0x170D64u: goto label_170d64;
            case 0x170D68u: goto label_170d68;
            case 0x170D6Cu: goto label_170d6c;
            case 0x170D70u: goto label_170d70;
            case 0x170D74u: goto label_170d74;
            case 0x170D78u: goto label_170d78;
            case 0x170D7Cu: goto label_170d7c;
            case 0x170D80u: goto label_170d80;
            case 0x170D84u: goto label_170d84;
            case 0x170D88u: goto label_170d88;
            case 0x170D8Cu: goto label_170d8c;
            case 0x170D90u: goto label_170d90;
            case 0x170D94u: goto label_170d94;
            case 0x170D98u: goto label_170d98;
            case 0x170D9Cu: goto label_170d9c;
            case 0x170DA0u: goto label_170da0;
            case 0x170DA4u: goto label_170da4;
            case 0x170DA8u: goto label_170da8;
            case 0x170DACu: goto label_170dac;
            case 0x170DB0u: goto label_170db0;
            case 0x170DB4u: goto label_170db4;
            case 0x170DB8u: goto label_170db8;
            case 0x170DBCu: goto label_170dbc;
            case 0x170DC0u: goto label_170dc0;
            case 0x170DC4u: goto label_170dc4;
            case 0x170DC8u: goto label_170dc8;
            case 0x170DCCu: goto label_170dcc;
            case 0x170DD0u: goto label_170dd0;
            case 0x170DD4u: goto label_170dd4;
            case 0x170DD8u: goto label_170dd8;
            case 0x170DDCu: goto label_170ddc;
            case 0x170DE0u: goto label_170de0;
            case 0x170DE4u: goto label_170de4;
            case 0x170DE8u: goto label_170de8;
            case 0x170DECu: goto label_170dec;
            case 0x170DF0u: goto label_170df0;
            case 0x170DF4u: goto label_170df4;
            case 0x170DF8u: goto label_170df8;
            case 0x170DFCu: goto label_170dfc;
            case 0x170E00u: goto label_170e00;
            case 0x170E04u: goto label_170e04;
            case 0x170E08u: goto label_170e08;
            case 0x170E0Cu: goto label_170e0c;
            case 0x170E10u: goto label_170e10;
            case 0x170E14u: goto label_170e14;
            case 0x170E18u: goto label_170e18;
            case 0x170E1Cu: goto label_170e1c;
            case 0x170E20u: goto label_170e20;
            case 0x170E24u: goto label_170e24;
            case 0x170E28u: goto label_170e28;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E30u: goto label_170e30;
            case 0x170E34u: goto label_170e34;
            case 0x170E38u: goto label_170e38;
            case 0x170E3Cu: goto label_170e3c;
            case 0x170E40u: goto label_170e40;
            case 0x170E44u: goto label_170e44;
            case 0x170E48u: goto label_170e48;
            case 0x170E4Cu: goto label_170e4c;
            case 0x170E50u: goto label_170e50;
            case 0x170E54u: goto label_170e54;
            case 0x170E58u: goto label_170e58;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E60u: goto label_170e60;
            case 0x170E64u: goto label_170e64;
            case 0x170E68u: goto label_170e68;
            case 0x170E6Cu: goto label_170e6c;
            case 0x170E70u: goto label_170e70;
            case 0x170E74u: goto label_170e74;
            case 0x170E78u: goto label_170e78;
            case 0x170E7Cu: goto label_170e7c;
            case 0x170E80u: goto label_170e80;
            case 0x170E84u: goto label_170e84;
            case 0x170E88u: goto label_170e88;
            case 0x170E8Cu: goto label_170e8c;
            case 0x170E90u: goto label_170e90;
            case 0x170E94u: goto label_170e94;
            case 0x170E98u: goto label_170e98;
            case 0x170E9Cu: goto label_170e9c;
            case 0x170EA0u: goto label_170ea0;
            case 0x170EA4u: goto label_170ea4;
            case 0x170EA8u: goto label_170ea8;
            case 0x170EACu: goto label_170eac;
            case 0x170EB0u: goto label_170eb0;
            case 0x170EB4u: goto label_170eb4;
            case 0x170EB8u: goto label_170eb8;
            case 0x170EBCu: goto label_170ebc;
            case 0x170EC0u: goto label_170ec0;
            case 0x170EC4u: goto label_170ec4;
            case 0x170EC8u: goto label_170ec8;
            case 0x170ECCu: goto label_170ecc;
            case 0x170ED0u: goto label_170ed0;
            case 0x170ED4u: goto label_170ed4;
            case 0x170ED8u: goto label_170ed8;
            case 0x170EDCu: goto label_170edc;
            case 0x170EE0u: goto label_170ee0;
            case 0x170EE4u: goto label_170ee4;
            case 0x170EE8u: goto label_170ee8;
            case 0x170EECu: goto label_170eec;
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170EF8u: goto label_170ef8;
            case 0x170EFCu: goto label_170efc;
            case 0x170F00u: goto label_170f00;
            case 0x170F04u: goto label_170f04;
            case 0x170F08u: goto label_170f08;
            case 0x170F0Cu: goto label_170f0c;
            case 0x170F10u: goto label_170f10;
            case 0x170F14u: goto label_170f14;
            case 0x170F18u: goto label_170f18;
            case 0x170F1Cu: goto label_170f1c;
            case 0x170F20u: goto label_170f20;
            case 0x170F24u: goto label_170f24;
            case 0x170F28u: goto label_170f28;
            case 0x170F2Cu: goto label_170f2c;
            case 0x170F30u: goto label_170f30;
            case 0x170F34u: goto label_170f34;
            case 0x170F38u: goto label_170f38;
            case 0x170F3Cu: goto label_170f3c;
            case 0x170F40u: goto label_170f40;
            case 0x170F44u: goto label_170f44;
            case 0x170F48u: goto label_170f48;
            case 0x170F4Cu: goto label_170f4c;
            case 0x170F50u: goto label_170f50;
            case 0x170F54u: goto label_170f54;
            case 0x170F58u: goto label_170f58;
            case 0x170F5Cu: goto label_170f5c;
            case 0x170F60u: goto label_170f60;
            case 0x170F64u: goto label_170f64;
            case 0x170F68u: goto label_170f68;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170F70u: goto label_170f70;
            case 0x170F74u: goto label_170f74;
            case 0x170F78u: goto label_170f78;
            case 0x170F7Cu: goto label_170f7c;
            case 0x170F80u: goto label_170f80;
            case 0x170F84u: goto label_170f84;
            case 0x170F88u: goto label_170f88;
            case 0x170F8Cu: goto label_170f8c;
            case 0x170F90u: goto label_170f90;
            case 0x170F94u: goto label_170f94;
            case 0x170F98u: goto label_170f98;
            case 0x170F9Cu: goto label_170f9c;
            case 0x170FA0u: goto label_170fa0;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FACu: goto label_170fac;
            case 0x170FB0u: goto label_170fb0;
            case 0x170FB4u: goto label_170fb4;
            case 0x170FB8u: goto label_170fb8;
            case 0x170FBCu: goto label_170fbc;
            case 0x170FC0u: goto label_170fc0;
            case 0x170FC4u: goto label_170fc4;
            case 0x170FC8u: goto label_170fc8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FD0u: goto label_170fd0;
            case 0x170FD4u: goto label_170fd4;
            case 0x170FD8u: goto label_170fd8;
            case 0x170FDCu: goto label_170fdc;
            case 0x170FE0u: goto label_170fe0;
            case 0x170FE4u: goto label_170fe4;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            case 0x170FF0u: goto label_170ff0;
            case 0x170FF4u: goto label_170ff4;
            case 0x170FF8u: goto label_170ff8;
            default: break;
        }
        return;
    }
label_fallthrough_0x170ff4:
    ctx->pc = 0x170FFCu;
}
