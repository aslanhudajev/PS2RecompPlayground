#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <iostream>

// Function: inflate
// Address: 0x2d8ca8 - 0x2d91b0
void inflate_0x2d8ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d8ca8u;
    {
        static int s_inflateEntry = 0;
        if (s_inflateEntry++ < 30) {
            const uint32_t state = GPR_U32(ctx, 4);
            std::cerr << "[inflate] ENTRY #" << s_inflateEntry << " reg4(state)=0x" << std::hex << state << " reg5=0x" << GPR_U32(ctx, 5);
            if (state) {
                std::cerr << " state+0=0x" << READ32(ADD32(state, 0)) << " +4=0x" << READ32(ADD32(state, 4)) << " +8=0x" << READ32(ADD32(state, 8))
                          << " +12=0x" << READ32(ADD32(state, 12)) << " +28=0x" << READ32(ADD32(state, 28));
                const uint32_t z = READ32(ADD32(state, 28));
                if (z) std::cerr << " z+0(next_in)=0x" << READ32(ADD32(z, 0)) << " z+4(avail_in)=0x" << READ32(ADD32(z, 4));
            }
            std::cerr << std::dec << "\n";
        }
    }

label_2d8ca8:
    // 0x2d8ca8: 0x27bdffd0
    ctx->pc = 0x2d8ca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d8cac:
    // 0x2d8cac: 0xffbf0020
    ctx->pc = 0x2d8cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8cb0:
    // 0x2d8cb0: 0xffb10010
    ctx->pc = 0x2d8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2d8cb4:
    // 0x2d8cb4: 0xffb00000
    ctx->pc = 0x2d8cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d8cb8:
    // 0x2d8cb8: 0x80802d
    ctx->pc = 0x2d8cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8cbc:
    // 0x2d8cbc: 0x12000137
label_2d8cc0:
    if (ctx->pc == 0x2D8CC0u) {
        ctx->pc = 0x2D8CC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8CC4u;
        goto label_2d8cc4;
    }
    ctx->pc = 0x2D8CBCu;
    {
        const bool branch_taken_0x2d8cbc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8CC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8cbc) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D8CC4u;
label_2d8cc4:
    // 0x2d8cc4: 0x8e02001c
    ctx->pc = 0x2d8cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8cc8:
    // 0x2d8cc8: 0x10400134
label_2d8ccc:
    if (ctx->pc == 0x2D8CCCu) {
        ctx->pc = 0x2D8CCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8CD0u;
        goto label_2d8cd0;
    }
    ctx->pc = 0x2D8CC8u;
    {
        const bool branch_taken_0x2d8cc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8CCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8cc8) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D8CD0u;
label_2d8cd0:
    // 0x2d8cd0: 0x8e020000
    ctx->pc = 0x2d8cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8cd4:
    // 0x2d8cd4: 0x10400131
label_2d8cd8:
    if (ctx->pc == 0x2D8CD8u) {
        ctx->pc = 0x2D8CD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8CDCu;
        goto label_2d8cdc;
    }
    ctx->pc = 0x2D8CD4u;
    {
        const bool branch_taken_0x2d8cd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8CD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8cd4) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D8CDCu;
label_2d8cdc:
    // 0x2d8cdc: 0x4a0012f
label_2d8ce0:
    if (ctx->pc == 0x2D8CE0u) {
        ctx->pc = 0x2D8CE0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x2D8CE4u;
        goto label_2d8ce4;
    }
    ctx->pc = 0x2D8CDCu;
    {
        const bool branch_taken_0x2d8cdc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D8CE0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x2d8cdc) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D8CE4u;
label_2d8ce4:
    // 0x2d8ce4: 0x0
    ctx->pc = 0x2d8ce4u;
    // NOP
label_2d8ce8:
    // 0x2d8ce8: 0x8e02001c
    ctx->pc = 0x2d8ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8cec:
    // 0x2d8cec: 0x8c430000
    ctx->pc = 0x2d8cecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d8cf0:
    // 0x2d8cf0: 0x2c62000e
    ctx->pc = 0x2d8cf0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_2d8cf4:
    // 0x2d8cf4: 0x10400128
label_2d8cf8:
    if (ctx->pc == 0x2D8CF8u) {
        ctx->pc = 0x2D8CF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2D8CFCu;
        goto label_2d8cfc;
    }
    ctx->pc = 0x2D8CF4u;
    {
        const bool branch_taken_0x2d8cf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8CF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2d8cf4) {
            ctx->pc = 0x2D9198u;
            goto label_2d9198;
        }
    }
    ctx->pc = 0x2D8CFCu;
label_2d8cfc:
    // 0x2d8cfc: 0x24428040
    ctx->pc = 0x2d8cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934592));
label_2d8d00:
    // 0x2d8d00: 0x31880
    ctx->pc = 0x2d8d00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2d8d04:
    // 0x2d8d04: 0x621821
    ctx->pc = 0x2d8d04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d8d08:
    // 0x2d8d08: 0x8c620000
    ctx->pc = 0x2d8d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d8d0c:
    // 0x2d8d0c: 0x400008
label_2d8d10:
    if (ctx->pc == 0x2D8D10u) {
        ctx->pc = 0x2D8D14u;
        goto label_2d8d14;
    }
    ctx->pc = 0x2D8D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8CA8u: goto label_2d8ca8;
            case 0x2D8CACu: goto label_2d8cac;
            case 0x2D8CB0u: goto label_2d8cb0;
            case 0x2D8CB4u: goto label_2d8cb4;
            case 0x2D8CB8u: goto label_2d8cb8;
            case 0x2D8CBCu: goto label_2d8cbc;
            case 0x2D8CC0u: goto label_2d8cc0;
            case 0x2D8CC4u: goto label_2d8cc4;
            case 0x2D8CC8u: goto label_2d8cc8;
            case 0x2D8CCCu: goto label_2d8ccc;
            case 0x2D8CD0u: goto label_2d8cd0;
            case 0x2D8CD4u: goto label_2d8cd4;
            case 0x2D8CD8u: goto label_2d8cd8;
            case 0x2D8CDCu: goto label_2d8cdc;
            case 0x2D8CE0u: goto label_2d8ce0;
            case 0x2D8CE4u: goto label_2d8ce4;
            case 0x2D8CE8u: goto label_2d8ce8;
            case 0x2D8CECu: goto label_2d8cec;
            case 0x2D8CF0u: goto label_2d8cf0;
            case 0x2D8CF4u: goto label_2d8cf4;
            case 0x2D8CF8u: goto label_2d8cf8;
            case 0x2D8CFCu: goto label_2d8cfc;
            case 0x2D8D00u: goto label_2d8d00;
            case 0x2D8D04u: goto label_2d8d04;
            case 0x2D8D08u: goto label_2d8d08;
            case 0x2D8D0Cu: goto label_2d8d0c;
            case 0x2D8D10u: goto label_2d8d10;
            case 0x2D8D14u: goto label_2d8d14;
            case 0x2D8D18u: goto label_2d8d18;
            case 0x2D8D1Cu: goto label_2d8d1c;
            case 0x2D8D20u: goto label_2d8d20;
            case 0x2D8D24u: goto label_2d8d24;
            case 0x2D8D28u: goto label_2d8d28;
            case 0x2D8D2Cu: goto label_2d8d2c;
            case 0x2D8D30u: goto label_2d8d30;
            case 0x2D8D34u: goto label_2d8d34;
            case 0x2D8D38u: goto label_2d8d38;
            case 0x2D8D3Cu: goto label_2d8d3c;
            case 0x2D8D40u: goto label_2d8d40;
            case 0x2D8D44u: goto label_2d8d44;
            case 0x2D8D48u: goto label_2d8d48;
            case 0x2D8D4Cu: goto label_2d8d4c;
            case 0x2D8D50u: goto label_2d8d50;
            case 0x2D8D54u: goto label_2d8d54;
            case 0x2D8D58u: goto label_2d8d58;
            case 0x2D8D5Cu: goto label_2d8d5c;
            case 0x2D8D60u: goto label_2d8d60;
            case 0x2D8D64u: goto label_2d8d64;
            case 0x2D8D68u: goto label_2d8d68;
            case 0x2D8D6Cu: goto label_2d8d6c;
            case 0x2D8D70u: goto label_2d8d70;
            case 0x2D8D74u: goto label_2d8d74;
            case 0x2D8D78u: goto label_2d8d78;
            case 0x2D8D7Cu: goto label_2d8d7c;
            case 0x2D8D80u: goto label_2d8d80;
            case 0x2D8D84u: goto label_2d8d84;
            case 0x2D8D88u: goto label_2d8d88;
            case 0x2D8D8Cu: goto label_2d8d8c;
            case 0x2D8D90u: goto label_2d8d90;
            case 0x2D8D94u: goto label_2d8d94;
            case 0x2D8D98u: goto label_2d8d98;
            case 0x2D8D9Cu: goto label_2d8d9c;
            case 0x2D8DA0u: goto label_2d8da0;
            case 0x2D8DA4u: goto label_2d8da4;
            case 0x2D8DA8u: goto label_2d8da8;
            case 0x2D8DACu: goto label_2d8dac;
            case 0x2D8DB0u: goto label_2d8db0;
            case 0x2D8DB4u: goto label_2d8db4;
            case 0x2D8DB8u: goto label_2d8db8;
            case 0x2D8DBCu: goto label_2d8dbc;
            case 0x2D8DC0u: goto label_2d8dc0;
            case 0x2D8DC4u: goto label_2d8dc4;
            case 0x2D8DC8u: goto label_2d8dc8;
            case 0x2D8DCCu: goto label_2d8dcc;
            case 0x2D8DD0u: goto label_2d8dd0;
            case 0x2D8DD4u: goto label_2d8dd4;
            case 0x2D8DD8u: goto label_2d8dd8;
            case 0x2D8DDCu: goto label_2d8ddc;
            case 0x2D8DE0u: goto label_2d8de0;
            case 0x2D8DE4u: goto label_2d8de4;
            case 0x2D8DE8u: goto label_2d8de8;
            case 0x2D8DECu: goto label_2d8dec;
            case 0x2D8DF0u: goto label_2d8df0;
            case 0x2D8DF4u: goto label_2d8df4;
            case 0x2D8DF8u: goto label_2d8df8;
            case 0x2D8DFCu: goto label_2d8dfc;
            case 0x2D8E00u: goto label_2d8e00;
            case 0x2D8E04u: goto label_2d8e04;
            case 0x2D8E08u: goto label_2d8e08;
            case 0x2D8E0Cu: goto label_2d8e0c;
            case 0x2D8E10u: goto label_2d8e10;
            case 0x2D8E14u: goto label_2d8e14;
            case 0x2D8E18u: goto label_2d8e18;
            case 0x2D8E1Cu: goto label_2d8e1c;
            case 0x2D8E20u: goto label_2d8e20;
            case 0x2D8E24u: goto label_2d8e24;
            case 0x2D8E28u: goto label_2d8e28;
            case 0x2D8E2Cu: goto label_2d8e2c;
            case 0x2D8E30u: goto label_2d8e30;
            case 0x2D8E34u: goto label_2d8e34;
            case 0x2D8E38u: goto label_2d8e38;
            case 0x2D8E3Cu: goto label_2d8e3c;
            case 0x2D8E40u: goto label_2d8e40;
            case 0x2D8E44u: goto label_2d8e44;
            case 0x2D8E48u: goto label_2d8e48;
            case 0x2D8E4Cu: goto label_2d8e4c;
            case 0x2D8E50u: goto label_2d8e50;
            case 0x2D8E54u: goto label_2d8e54;
            case 0x2D8E58u: goto label_2d8e58;
            case 0x2D8E5Cu: goto label_2d8e5c;
            case 0x2D8E60u: goto label_2d8e60;
            case 0x2D8E64u: goto label_2d8e64;
            case 0x2D8E68u: goto label_2d8e68;
            case 0x2D8E6Cu: goto label_2d8e6c;
            case 0x2D8E70u: goto label_2d8e70;
            case 0x2D8E74u: goto label_2d8e74;
            case 0x2D8E78u: goto label_2d8e78;
            case 0x2D8E7Cu: goto label_2d8e7c;
            case 0x2D8E80u: goto label_2d8e80;
            case 0x2D8E84u: goto label_2d8e84;
            case 0x2D8E88u: goto label_2d8e88;
            case 0x2D8E8Cu: goto label_2d8e8c;
            case 0x2D8E90u: goto label_2d8e90;
            case 0x2D8E94u: goto label_2d8e94;
            case 0x2D8E98u: goto label_2d8e98;
            case 0x2D8E9Cu: goto label_2d8e9c;
            case 0x2D8EA0u: goto label_2d8ea0;
            case 0x2D8EA4u: goto label_2d8ea4;
            case 0x2D8EA8u: goto label_2d8ea8;
            case 0x2D8EACu: goto label_2d8eac;
            case 0x2D8EB0u: goto label_2d8eb0;
            case 0x2D8EB4u: goto label_2d8eb4;
            case 0x2D8EB8u: goto label_2d8eb8;
            case 0x2D8EBCu: goto label_2d8ebc;
            case 0x2D8EC0u: goto label_2d8ec0;
            case 0x2D8EC4u: goto label_2d8ec4;
            case 0x2D8EC8u: goto label_2d8ec8;
            case 0x2D8ECCu: goto label_2d8ecc;
            case 0x2D8ED0u: goto label_2d8ed0;
            case 0x2D8ED4u: goto label_2d8ed4;
            case 0x2D8ED8u: goto label_2d8ed8;
            case 0x2D8EDCu: goto label_2d8edc;
            case 0x2D8EE0u: goto label_2d8ee0;
            case 0x2D8EE4u: goto label_2d8ee4;
            case 0x2D8EE8u: goto label_2d8ee8;
            case 0x2D8EECu: goto label_2d8eec;
            case 0x2D8EF0u: goto label_2d8ef0;
            case 0x2D8EF4u: goto label_2d8ef4;
            case 0x2D8EF8u: goto label_2d8ef8;
            case 0x2D8EFCu: goto label_2d8efc;
            case 0x2D8F00u: goto label_2d8f00;
            case 0x2D8F04u: goto label_2d8f04;
            case 0x2D8F08u: goto label_2d8f08;
            case 0x2D8F0Cu: goto label_2d8f0c;
            case 0x2D8F10u: goto label_2d8f10;
            case 0x2D8F14u: goto label_2d8f14;
            case 0x2D8F18u: goto label_2d8f18;
            case 0x2D8F1Cu: goto label_2d8f1c;
            case 0x2D8F20u: goto label_2d8f20;
            case 0x2D8F24u: goto label_2d8f24;
            case 0x2D8F28u: goto label_2d8f28;
            case 0x2D8F2Cu: goto label_2d8f2c;
            case 0x2D8F30u: goto label_2d8f30;
            case 0x2D8F34u: goto label_2d8f34;
            case 0x2D8F38u: goto label_2d8f38;
            case 0x2D8F3Cu: goto label_2d8f3c;
            case 0x2D8F40u: goto label_2d8f40;
            case 0x2D8F44u: goto label_2d8f44;
            case 0x2D8F48u: goto label_2d8f48;
            case 0x2D8F4Cu: goto label_2d8f4c;
            case 0x2D8F50u: goto label_2d8f50;
            case 0x2D8F54u: goto label_2d8f54;
            case 0x2D8F58u: goto label_2d8f58;
            case 0x2D8F5Cu: goto label_2d8f5c;
            case 0x2D8F60u: goto label_2d8f60;
            case 0x2D8F64u: goto label_2d8f64;
            case 0x2D8F68u: goto label_2d8f68;
            case 0x2D8F6Cu: goto label_2d8f6c;
            case 0x2D8F70u: goto label_2d8f70;
            case 0x2D8F74u: goto label_2d8f74;
            case 0x2D8F78u: goto label_2d8f78;
            case 0x2D8F7Cu: goto label_2d8f7c;
            case 0x2D8F80u: goto label_2d8f80;
            case 0x2D8F84u: goto label_2d8f84;
            case 0x2D8F88u: goto label_2d8f88;
            case 0x2D8F8Cu: goto label_2d8f8c;
            case 0x2D8F90u: goto label_2d8f90;
            case 0x2D8F94u: goto label_2d8f94;
            case 0x2D8F98u: goto label_2d8f98;
            case 0x2D8F9Cu: goto label_2d8f9c;
            case 0x2D8FA0u: goto label_2d8fa0;
            case 0x2D8FA4u: goto label_2d8fa4;
            case 0x2D8FA8u: goto label_2d8fa8;
            case 0x2D8FACu: goto label_2d8fac;
            case 0x2D8FB0u: goto label_2d8fb0;
            case 0x2D8FB4u: goto label_2d8fb4;
            case 0x2D8FB8u: goto label_2d8fb8;
            case 0x2D8FBCu: goto label_2d8fbc;
            case 0x2D8FC0u: goto label_2d8fc0;
            case 0x2D8FC4u: goto label_2d8fc4;
            case 0x2D8FC8u: goto label_2d8fc8;
            case 0x2D8FCCu: goto label_2d8fcc;
            case 0x2D8FD0u: goto label_2d8fd0;
            case 0x2D8FD4u: goto label_2d8fd4;
            case 0x2D8FD8u: goto label_2d8fd8;
            case 0x2D8FDCu: goto label_2d8fdc;
            case 0x2D8FE0u: goto label_2d8fe0;
            case 0x2D8FE4u: goto label_2d8fe4;
            case 0x2D8FE8u: goto label_2d8fe8;
            case 0x2D8FECu: goto label_2d8fec;
            case 0x2D8FF0u: goto label_2d8ff0;
            case 0x2D8FF4u: goto label_2d8ff4;
            case 0x2D8FF8u: goto label_2d8ff8;
            case 0x2D8FFCu: goto label_2d8ffc;
            case 0x2D9000u: goto label_2d9000;
            case 0x2D9004u: goto label_2d9004;
            case 0x2D9008u: goto label_2d9008;
            case 0x2D900Cu: goto label_2d900c;
            case 0x2D9010u: goto label_2d9010;
            case 0x2D9014u: goto label_2d9014;
            case 0x2D9018u: goto label_2d9018;
            case 0x2D901Cu: goto label_2d901c;
            case 0x2D9020u: goto label_2d9020;
            case 0x2D9024u: goto label_2d9024;
            case 0x2D9028u: goto label_2d9028;
            case 0x2D902Cu: goto label_2d902c;
            case 0x2D9030u: goto label_2d9030;
            case 0x2D9034u: goto label_2d9034;
            case 0x2D9038u: goto label_2d9038;
            case 0x2D903Cu: goto label_2d903c;
            case 0x2D9040u: goto label_2d9040;
            case 0x2D9044u: goto label_2d9044;
            case 0x2D9048u: goto label_2d9048;
            case 0x2D904Cu: goto label_2d904c;
            case 0x2D9050u: goto label_2d9050;
            case 0x2D9054u: goto label_2d9054;
            case 0x2D9058u: goto label_2d9058;
            case 0x2D905Cu: goto label_2d905c;
            case 0x2D9060u: goto label_2d9060;
            case 0x2D9064u: goto label_2d9064;
            case 0x2D9068u: goto label_2d9068;
            case 0x2D906Cu: goto label_2d906c;
            case 0x2D9070u: goto label_2d9070;
            case 0x2D9074u: goto label_2d9074;
            case 0x2D9078u: goto label_2d9078;
            case 0x2D907Cu: goto label_2d907c;
            case 0x2D9080u: goto label_2d9080;
            case 0x2D9084u: goto label_2d9084;
            case 0x2D9088u: goto label_2d9088;
            case 0x2D908Cu: goto label_2d908c;
            case 0x2D9090u: goto label_2d9090;
            case 0x2D9094u: goto label_2d9094;
            case 0x2D9098u: goto label_2d9098;
            case 0x2D909Cu: goto label_2d909c;
            case 0x2D90A0u: goto label_2d90a0;
            case 0x2D90A4u: goto label_2d90a4;
            case 0x2D90A8u: goto label_2d90a8;
            case 0x2D90ACu: goto label_2d90ac;
            case 0x2D90B0u: goto label_2d90b0;
            case 0x2D90B4u: goto label_2d90b4;
            case 0x2D90B8u: goto label_2d90b8;
            case 0x2D90BCu: goto label_2d90bc;
            case 0x2D90C0u: goto label_2d90c0;
            case 0x2D90C4u: goto label_2d90c4;
            case 0x2D90C8u: goto label_2d90c8;
            case 0x2D90CCu: goto label_2d90cc;
            case 0x2D90D0u: goto label_2d90d0;
            case 0x2D90D4u: goto label_2d90d4;
            case 0x2D90D8u: goto label_2d90d8;
            case 0x2D90DCu: goto label_2d90dc;
            case 0x2D90E0u: goto label_2d90e0;
            case 0x2D90E4u: goto label_2d90e4;
            case 0x2D90E8u: goto label_2d90e8;
            case 0x2D90ECu: goto label_2d90ec;
            case 0x2D90F0u: goto label_2d90f0;
            case 0x2D90F4u: goto label_2d90f4;
            case 0x2D90F8u: goto label_2d90f8;
            case 0x2D90FCu: goto label_2d90fc;
            case 0x2D9100u: goto label_2d9100;
            case 0x2D9104u: goto label_2d9104;
            case 0x2D9108u: goto label_2d9108;
            case 0x2D910Cu: goto label_2d910c;
            case 0x2D9110u: goto label_2d9110;
            case 0x2D9114u: goto label_2d9114;
            case 0x2D9118u: goto label_2d9118;
            case 0x2D911Cu: goto label_2d911c;
            case 0x2D9120u: goto label_2d9120;
            case 0x2D9124u: goto label_2d9124;
            case 0x2D9128u: goto label_2d9128;
            case 0x2D912Cu: goto label_2d912c;
            case 0x2D9130u: goto label_2d9130;
            case 0x2D9134u: goto label_2d9134;
            case 0x2D9138u: goto label_2d9138;
            case 0x2D913Cu: goto label_2d913c;
            case 0x2D9140u: goto label_2d9140;
            case 0x2D9144u: goto label_2d9144;
            case 0x2D9148u: goto label_2d9148;
            case 0x2D914Cu: goto label_2d914c;
            case 0x2D9150u: goto label_2d9150;
            case 0x2D9154u: goto label_2d9154;
            case 0x2D9158u: goto label_2d9158;
            case 0x2D915Cu: goto label_2d915c;
            case 0x2D9160u: goto label_2d9160;
            case 0x2D9164u: goto label_2d9164;
            case 0x2D9168u: goto label_2d9168;
            case 0x2D916Cu: goto label_2d916c;
            case 0x2D9170u: goto label_2d9170;
            case 0x2D9174u: goto label_2d9174;
            case 0x2D9178u: goto label_2d9178;
            case 0x2D917Cu: goto label_2d917c;
            case 0x2D9180u: goto label_2d9180;
            case 0x2D9184u: goto label_2d9184;
            case 0x2D9188u: goto label_2d9188;
            case 0x2D918Cu: goto label_2d918c;
            case 0x2D9190u: goto label_2d9190;
            case 0x2D9194u: goto label_2d9194;
            case 0x2D9198u: goto label_2d9198;
            case 0x2D919Cu: goto label_2d919c;
            case 0x2D91A0u: goto label_2d91a0;
            case 0x2D91A4u: goto label_2d91a4;
            case 0x2D91A8u: goto label_2d91a8;
            case 0x2D91ACu: goto label_2d91ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D8D14u;
label_2d8d14:
    // 0x2d8d14: 0x8e020004
    ctx->pc = 0x2d8d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8d18:
    // 0x2d8d18: 0x104000fc
label_2d8d1c:
    if (ctx->pc == 0x2D8D1Cu) {
        ctx->pc = 0x2D8D1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D8D20u;
        goto label_2d8d20;
    }
    ctx->pc = 0x2D8D18u;
    {
        const bool branch_taken_0x2d8d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8D1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d8d18) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D8D20u;
label_2d8d20:
    // 0x2d8d20: 0xae020004
    ctx->pc = 0x2d8d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d8d24:
    // 0x2d8d24: 0x8e020008
    ctx->pc = 0x2d8d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d8d28:
    // 0x2d8d28: 0x24420001
    ctx->pc = 0x2d8d28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d8d2c:
    // 0x2d8d2c: 0xae020008
    ctx->pc = 0x2d8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d8d30:
    // 0x2d8d30: 0x8e04001c
    ctx->pc = 0x2d8d30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8d34:
    // 0x2d8d34: 0x8e030000
    ctx->pc = 0x2d8d34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8d38:
    // 0x2d8d38: 0x90620000
    ctx->pc = 0x2d8d38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2d8d3c:
    // 0x2d8d3c: 0xac820004
    ctx->pc = 0x2d8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2d8d40:
    // 0x2d8d40: 0x24630001
    ctx->pc = 0x2d8d40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2d8d44:
    // 0x2d8d44: 0xae030000
    ctx->pc = 0x2d8d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d8d48:
    // 0x2d8d48: 0x8e04001c
    ctx->pc = 0x2d8d48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8d4c:
    // 0x2d8d4c: 0x8c820004
    ctx->pc = 0x2d8d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d8d50:
    // 0x2d8d50: 0x3042000f
    ctx->pc = 0x2d8d50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_2d8d54:
    // 0x2d8d54: 0x24030008
    ctx->pc = 0x2d8d54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_2d8d58:
    // 0x2d8d58: 0x10430006
label_2d8d5c:
    if (ctx->pc == 0x2D8D5Cu) {
        ctx->pc = 0x2D8D5Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D60u;
        goto label_2d8d60;
    }
    ctx->pc = 0x2D8D58u;
    {
        const bool branch_taken_0x2d8d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2D8D5Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d58) {
            ctx->pc = 0x2D8D74u;
            goto label_2d8d74;
        }
    }
    ctx->pc = 0x2D8D60u;
label_2d8d60:
    // 0x2d8d60: 0x2402000d
    ctx->pc = 0x2d8d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_2d8d64:
    // 0x2d8d64: 0xac820000 — do not overwrite z/state+0 with error code (reg2=13)
    ctx->pc = 0x2d8d64u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d8d68:
    // 0x2d8d68: 0x3c02003b
    ctx->pc = 0x2d8d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2d8d6c:
    // 0x2d8d6c: 0x100000fe
label_2d8d70:
    if (ctx->pc == 0x2D8D70u) {
        ctx->pc = 0x2D8D70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32704));
        ctx->pc = 0x2D8D74u;
        goto label_2d8d74;
    }
    ctx->pc = 0x2D8D6Cu;
    {
        const bool branch_taken_0x2d8d6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8D70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32704));
        if (branch_taken_0x2d8d6c) {
            ctx->pc = 0x2D9168u;
            goto label_2d9168;
        }
    }
    ctx->pc = 0x2D8D74u;
label_2d8d74:
    // 0x2d8d74: 0x8c830004
    ctx->pc = 0x2d8d74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d8d78:
    // 0x2d8d78: 0x31902
    ctx->pc = 0x2d8d78u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
label_2d8d7c:
    // 0x2d8d7c: 0x24630008
    ctx->pc = 0x2d8d7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_2d8d80:
    // 0x2d8d80: 0x8c820010
    ctx->pc = 0x2d8d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2d8d84:
    // 0x2d8d84: 0x43102b
    ctx->pc = 0x2d8d84u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d8d88:
    // 0x2d8d88: 0x10400005
label_2d8d8c:
    if (ctx->pc == 0x2D8D8Cu) {
        ctx->pc = 0x2D8D8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2D8D90u;
        goto label_2d8d90;
    }
    ctx->pc = 0x2D8D88u;
    {
        const bool branch_taken_0x2d8d88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8D8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x2d8d88) {
            ctx->pc = 0x2D8DA0u;
            goto label_2d8da0;
        }
    }
    ctx->pc = 0x2D8D90u;
label_2d8d90:
    // 0x2d8d90: 0xac820000 — do not overwrite z/state+0 with error code
    ctx->pc = 0x2d8d90u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d8d94:
    // 0x2d8d94: 0x3c02003b
    ctx->pc = 0x2d8d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2d8d98:
    // 0x2d8d98: 0x100000f3
label_2d8d9c:
    if (ctx->pc == 0x2D8D9Cu) {
        ctx->pc = 0x2D8D9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32736));
        ctx->pc = 0x2D8DA0u;
        goto label_2d8da0;
    }
    ctx->pc = 0x2D8D98u;
    {
        const bool branch_taken_0x2d8d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8D9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32736));
        if (branch_taken_0x2d8d98) {
            ctx->pc = 0x2D9168u;
            goto label_2d9168;
        }
    }
    ctx->pc = 0x2D8DA0u;
label_2d8da0:
    // 0x2d8da0: 0x8e03001c
    ctx->pc = 0x2d8da0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8da4:
    // 0x2d8da4: 0x24020001
    ctx->pc = 0x2d8da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2d8da8:
    // 0x2d8da8: 0xac620000
    ctx->pc = 0x2d8da8u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d8dac:
    // 0x2d8dac: 0x8e020004
    ctx->pc = 0x2d8dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8db0:
    // 0x2d8db0: 0x104000d6
label_2d8db4:
    if (ctx->pc == 0x2D8DB4u) {
        ctx->pc = 0x2D8DB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D8DB8u;
        goto label_2d8db8;
    }
    ctx->pc = 0x2D8DB0u;
    {
        const bool branch_taken_0x2d8db0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8DB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d8db0) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D8DB8u;
label_2d8db8:
    // 0x2d8db8: 0xae020004
    ctx->pc = 0x2d8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d8dbc:
    // 0x2d8dbc: 0x8e020008
    ctx->pc = 0x2d8dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d8dc0:
    // 0x2d8dc0: 0x24420001
    ctx->pc = 0x2d8dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d8dc4:
    // 0x2d8dc4: 0xae020008
    ctx->pc = 0x2d8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d8dc8:
    // 0x2d8dc8: 0x8e020000
    ctx->pc = 0x2d8dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8dcc:
    // 0x2d8dcc: 0x90450000
    ctx->pc = 0x2d8dccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2d8dd0:
    // 0x2d8dd0: 0x24420001
    ctx->pc = 0x2d8dd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d8dd4:
    // 0x2d8dd4: 0xae020000
    ctx->pc = 0x2d8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d8dd8:
    // 0x2d8dd8: 0x8e04001c
    ctx->pc = 0x2d8dd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8ddc:
    // 0x2d8ddc: 0x8c830004
    ctx->pc = 0x2d8ddcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d8de0:
    // 0x2d8de0: 0x31a00
    ctx->pc = 0x2d8de0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_2d8de4:
    // 0x2d8de4: 0x651821
    ctx->pc = 0x2d8de4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d8de8:
    // 0x2d8de8: 0x2402001f
    ctx->pc = 0x2d8de8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_2d8dec:
    // 0x2d8dec: 0x62001b
    ctx->pc = 0x2d8decu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
label_2d8df0:
    // 0x2d8df0: 0x1810
    ctx->pc = 0x2d8df0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_2d8df4:
    // 0x2d8df4: 0x50400001
label_2d8df8:
    if (ctx->pc == 0x2D8DF8u) {
        ctx->pc = 0x2D8DF8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2D8DFCu;
        goto label_2d8dfc;
    }
    ctx->pc = 0x2D8DF4u;
    {
        const bool branch_taken_0x2d8df4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8df4) {
            ctx->pc = 0x2D8DF8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2D8DFCu;
            goto label_2d8dfc;
        }
    }
    ctx->pc = 0x2D8DFCu;
label_2d8dfc:
    // 0x2d8dfc: 0x10600006
label_2d8e00:
    if (ctx->pc == 0x2D8E00u) {
        ctx->pc = 0x2D8E00u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E04u;
        goto label_2d8e04;
    }
    ctx->pc = 0x2D8DFCu;
    {
        const bool branch_taken_0x2d8dfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8E00u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8dfc) {
            ctx->pc = 0x2D8E18u;
            goto label_2d8e18;
        }
    }
    ctx->pc = 0x2D8E04u;
label_2d8e04:
    // 0x2d8e04: 0x2402000d
    ctx->pc = 0x2d8e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_2d8e08:
    // 0x2d8e08: 0xac820000 — do not overwrite z/state+0 with error code
    ctx->pc = 0x2d8e08u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d8e0c:
    // 0x2d8e0c: 0x3c02003b
    ctx->pc = 0x2d8e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2d8e10:
    // 0x2d8e10: 0x100000d5
label_2d8e14:
    if (ctx->pc == 0x2D8E14u) {
        ctx->pc = 0x2D8E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32760));
        ctx->pc = 0x2D8E18u;
        goto label_2d8e18;
    }
    ctx->pc = 0x2D8E10u;
    {
        const bool branch_taken_0x2d8e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32760));
        if (branch_taken_0x2d8e10) {
            ctx->pc = 0x2D9168u;
            goto label_2d9168;
        }
    }
    ctx->pc = 0x2D8E18u;
label_2d8e18:
    // 0x2d8e18: 0x30a20020
    ctx->pc = 0x2d8e18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 32));
label_2d8e1c:
    // 0x2d8e1c: 0x14400004
label_2d8e20:
    if (ctx->pc == 0x2D8E20u) {
        ctx->pc = 0x2D8E20u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x2D8E24u;
        goto label_2d8e24;
    }
    ctx->pc = 0x2D8E1Cu;
    {
        // reg2 = (reg5 & 32); reg5 is first byte of input (e.g. zlib CMF 0x78). Do not return Z_STREAM_END(2) just because CMF has bit 5 set — only when we have produced output.
        const bool bit5_set = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8E20u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (bit5_set) {
            const uint32_t z = GPR_U32(ctx, 3);
            const uint32_t total_out = z ? READ32(ADD32(z, 8)) : 0;
            if (total_out != 0) {
                ctx->pc = 0x2D8E30u;
                goto label_2d8e30;
            }
        }
    }
    ctx->pc = 0x2D8E24u;
label_2d8e24:
    // 0x2d8e24: 0x24020007
    ctx->pc = 0x2d8e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2d8e28:
    // 0x2d8e28: 0x1000ffaf
label_2d8e2c:
    if (ctx->pc == 0x2D8E2Cu) {
        ctx->pc = 0x2D8E2Cu;
        if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        // Only return Z_STREAM_END(2) when callee (e.g. inflate_blocks) actually returned 2
        if (GPR_U32(ctx, 2) == 2) {
            ctx->pc = 0x2D8E30u;
            goto label_2d8e30;
        }
        ctx->pc = 0x2D8E38u;
        goto label_2d8e38;
    }
    ctx->pc = 0x2D8E28u;
    {
        const bool branch_taken_0x2d8e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8E2Cu;
        if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2d8e28) {
            ctx->pc = 0x2D8CE8u;
            goto label_2d8ce8;
        }
    }
    ctx->pc = 0x2D8E30u;
label_2d8e30:
    // 0x2d8e30: 0x24020002 — never return Z_STREAM_END(2) when zero bytes were produced (fixes spurious first-call return 2)
    ctx->pc = 0x2d8e30u;
    {
        const uint32_t state = GPR_U32(ctx, 16);
        const uint32_t z = state ? READ32(ADD32(state, 28)) : 0;
        const uint32_t total_out = z ? READ32(ADD32(z, 8)) : 0;
        if (total_out == 0) {
            ctx->pc = 0x2D8E38u;
            goto label_2d8e38;
        }
    }
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2d8e34:
    // 0x2d8e34: 0xac620000
    ctx->pc = 0x2d8e34u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d8e38:
    // 0x2d8e38: 0x8e020004
    ctx->pc = 0x2d8e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8e3c:
    // 0x2d8e3c: 0x104000b3
label_2d8e40:
    if (ctx->pc == 0x2D8E40u) {
        ctx->pc = 0x2D8E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D8E44u;
        goto label_2d8e44;
    }
    ctx->pc = 0x2D8E3Cu;
    {
        const bool branch_taken_0x2d8e3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d8e3c) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D8E44u;
label_2d8e44:
    // 0x2d8e44: 0x882d
    ctx->pc = 0x2d8e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e48:
    // 0x2d8e48: 0x8e04001c
    ctx->pc = 0x2d8e48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8e4c:
    // 0x2d8e4c: 0xae020004
    ctx->pc = 0x2d8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d8e50:
    // 0x2d8e50: 0x8e020008
    ctx->pc = 0x2d8e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d8e54:
    // 0x2d8e54: 0x24420001
    ctx->pc = 0x2d8e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d8e58:
    // 0x2d8e58: 0xae020008
    ctx->pc = 0x2d8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d8e5c:
    // 0x2d8e5c: 0x8e030000
    ctx->pc = 0x2d8e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8e60:
    // 0x2d8e60: 0x90620000
    ctx->pc = 0x2d8e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2d8e64:
    // 0x2d8e64: 0x21600
    ctx->pc = 0x2d8e64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d8e68:
    // 0x2d8e68: 0xac820008
    ctx->pc = 0x2d8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2d8e6c:
    // 0x2d8e6c: 0x24630001
    ctx->pc = 0x2d8e6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2d8e70:
    // 0x2d8e70: 0xae030000
    ctx->pc = 0x2d8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d8e74:
    // 0x2d8e74: 0x8e03001c
    ctx->pc = 0x2d8e74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8e78:
    // 0x2d8e78: 0x24020003
    ctx->pc = 0x2d8e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2d8e7c:
    // 0x2d8e7c: 0xac620000
    ctx->pc = 0x2d8e7cu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d8e80:
    // 0x2d8e80: 0x8e020004
    ctx->pc = 0x2d8e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8e84:
    // 0x2d8e84: 0x104000a1
label_2d8e88:
    if (ctx->pc == 0x2D8E88u) {
        ctx->pc = 0x2D8E88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D8E8Cu;
        goto label_2d8e8c;
    }
    ctx->pc = 0x2D8E84u;
    {
        const bool branch_taken_0x2d8e84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8E88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d8e84) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D8E8Cu;
label_2d8e8c:
    // 0x2d8e8c: 0x882d
    ctx->pc = 0x2d8e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e90:
    // 0x2d8e90: 0x8e05001c
    ctx->pc = 0x2d8e90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8e94:
    // 0x2d8e94: 0xae020004
    ctx->pc = 0x2d8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d8e98:
    // 0x2d8e98: 0x8e020008
    ctx->pc = 0x2d8e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d8e9c:
    // 0x2d8e9c: 0x24420001
    ctx->pc = 0x2d8e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d8ea0:
    // 0x2d8ea0: 0xae020008
    ctx->pc = 0x2d8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d8ea4:
    // 0x2d8ea4: 0x8e040000
    ctx->pc = 0x2d8ea4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8ea8:
    // 0x2d8ea8: 0x90820000
    ctx->pc = 0x2d8ea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8eac:
    // 0x2d8eac: 0x21400
    ctx->pc = 0x2d8eacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d8eb0:
    // 0x2d8eb0: 0x8ca30008
    ctx->pc = 0x2d8eb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d8eb4:
    // 0x2d8eb4: 0x431021
    ctx->pc = 0x2d8eb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d8eb8:
    // 0x2d8eb8: 0xaca20008
    ctx->pc = 0x2d8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2d8ebc:
    // 0x2d8ebc: 0x24840001
    ctx->pc = 0x2d8ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d8ec0:
    // 0x2d8ec0: 0xae040000
    ctx->pc = 0x2d8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d8ec4:
    // 0x2d8ec4: 0x8e03001c
    ctx->pc = 0x2d8ec4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8ec8:
    // 0x2d8ec8: 0x24020004
    ctx->pc = 0x2d8ec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2d8ecc:
    // 0x2d8ecc: 0xac620000
    ctx->pc = 0x2d8eccu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d8ed0:
    // 0x2d8ed0: 0x8e020004
    ctx->pc = 0x2d8ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8ed4:
    // 0x2d8ed4: 0x1040008d
label_2d8ed8:
    if (ctx->pc == 0x2D8ED8u) {
        ctx->pc = 0x2D8ED8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D8EDCu;
        goto label_2d8edc;
    }
    ctx->pc = 0x2D8ED4u;
    {
        const bool branch_taken_0x2d8ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8ED8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d8ed4) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D8EDCu;
label_2d8edc:
    // 0x2d8edc: 0x882d
    ctx->pc = 0x2d8edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ee0:
    // 0x2d8ee0: 0x8e05001c
    ctx->pc = 0x2d8ee0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8ee4:
    // 0x2d8ee4: 0xae020004
    ctx->pc = 0x2d8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d8ee8:
    // 0x2d8ee8: 0x8e020008
    ctx->pc = 0x2d8ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d8eec:
    // 0x2d8eec: 0x24420001
    ctx->pc = 0x2d8eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d8ef0:
    // 0x2d8ef0: 0xae020008
    ctx->pc = 0x2d8ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d8ef4:
    // 0x2d8ef4: 0x8e040000
    ctx->pc = 0x2d8ef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8ef8:
    // 0x2d8ef8: 0x90820000
    ctx->pc = 0x2d8ef8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8efc:
    // 0x2d8efc: 0x21200
    ctx->pc = 0x2d8efcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d8f00:
    // 0x2d8f00: 0x8ca30008
    ctx->pc = 0x2d8f00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d8f04:
    // 0x2d8f04: 0x431021
    ctx->pc = 0x2d8f04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d8f08:
    // 0x2d8f08: 0xaca20008
    ctx->pc = 0x2d8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2d8f0c:
    // 0x2d8f0c: 0x24840001
    ctx->pc = 0x2d8f0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d8f10:
    // 0x2d8f10: 0xae040000
    ctx->pc = 0x2d8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d8f14:
    // 0x2d8f14: 0x8e03001c
    ctx->pc = 0x2d8f14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8f18:
    // 0x2d8f18: 0x24020005
    ctx->pc = 0x2d8f18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2d8f1c:
    // 0x2d8f1c: 0xac620000
    ctx->pc = 0x2d8f1cu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d8f20:
    // 0x2d8f20: 0x8e020004
    ctx->pc = 0x2d8f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8f24:
    // 0x2d8f24: 0x10400079
label_2d8f28:
    if (ctx->pc == 0x2D8F28u) {
        ctx->pc = 0x2D8F28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D8F2Cu;
        goto label_2d8f2c;
    }
    ctx->pc = 0x2D8F24u;
    {
        const bool branch_taken_0x2d8f24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8F28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d8f24) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D8F2Cu;
label_2d8f2c:
    // 0x2d8f2c: 0x8e05001c
    ctx->pc = 0x2d8f2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8f30:
    // 0x2d8f30: 0xae020004
    ctx->pc = 0x2d8f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d8f34:
    // 0x2d8f34: 0x8e020008
    ctx->pc = 0x2d8f34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d8f38:
    // 0x2d8f38: 0x24420001
    ctx->pc = 0x2d8f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d8f3c:
    // 0x2d8f3c: 0xae020008
    ctx->pc = 0x2d8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d8f40:
    // 0x2d8f40: 0x8e040000
    ctx->pc = 0x2d8f40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8f44:
    // 0x2d8f44: 0x90820000
    ctx->pc = 0x2d8f44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8f48:
    // 0x2d8f48: 0x8ca30008
    ctx->pc = 0x2d8f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d8f4c:
    // 0x2d8f4c: 0x431021
    ctx->pc = 0x2d8f4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d8f50:
    // 0x2d8f50: 0xaca20008
    ctx->pc = 0x2d8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2d8f54:
    // 0x2d8f54: 0x24840001
    ctx->pc = 0x2d8f54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d8f58:
    // 0x2d8f58: 0xae040000
    ctx->pc = 0x2d8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d8f5c:
    // 0x2d8f5c: 0x8e03001c
    ctx->pc = 0x2d8f5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8f60:
    // 0x2d8f60: 0x8c620008
    ctx->pc = 0x2d8f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d8f64:
    // 0x2d8f64: 0xae020030
    ctx->pc = 0x2d8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2d8f68:
    // 0x2d8f68: 0x24020006
    ctx->pc = 0x2d8f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2d8f6c:
    // 0x2d8f6c: 0xac620000
    ctx->pc = 0x2d8f6cu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d8f70:
    // 0x2d8f70: 0x1000008a — only return Z_STREAM_END(2) when stream total_out (z+8) is non-zero; else fall through to error path
label_2d8f74:
    ctx->pc = 0x2D8F74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    {
        const uint32_t state = GPR_U32(ctx, 16);
        const uint32_t z = state ? READ32(ADD32(state, 28)) : 0;
        const uint32_t total_out = z ? READ32(ADD32(z, 8)) : 0;
        if (total_out != 0) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D8F78u;
label_2d8f78:
    // 0x2d8f78: 0x8e03001c
    ctx->pc = 0x2d8f78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8f7c:
    // 0x2d8f7c: 0x2402000d
    ctx->pc = 0x2d8f7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_2d8f80:
    // 0x2d8f80: 0xac620000
    ctx->pc = 0x2d8f80u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d8f84:
    // 0x2d8f84: 0x3c02003c
    ctx->pc = 0x2d8f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2d8f88:
    // 0x2d8f88: 0x24428010
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934544));
label_2d8f8c:
    // 0x2d8f8c: 0xae020018
    ctx->pc = 0x2d8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2d8f90:
    // 0x2d8f90: 0x8e02001c
    ctx->pc = 0x2d8f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8f94:
    // 0x2d8f94: 0x10000080
label_2d8f98:
    if (ctx->pc == 0x2D8F98u) {
        ctx->pc = 0x2D8F98u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8F9Cu;
        goto label_2d8f9c;
    }
    ctx->pc = 0x2D8F94u;
    {
        const bool branch_taken_0x2d8f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8F98u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2d8f94) {
            ctx->pc = 0x2D9198u;
            goto label_2d9198;
        }
    }
    ctx->pc = 0x2D8F9Cu;
label_2d8f9c:
    // 0x2d8f9c: 0x8e02001c
    ctx->pc = 0x2d8f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8fa0:
    // 0x2d8fa0: 0x8c440014
    ctx->pc = 0x2d8fa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2d8fa4:
    // 0x2d8fa4: 0x200282d
    ctx->pc = 0x2d8fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fa8:
    // 0x2d8fa8: 0xc0b65be
label_2d8fac:
    if (ctx->pc == 0x2D8FACu) {
        ctx->pc = 0x2D8FACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FB0u;
        goto label_2d8fb0;
    }
    ctx->pc = 0x2D8FA8u;
    SET_GPR_U32(ctx, 31, 0x2D8FB0u);
    ctx->pc = 0x2D8FACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D96F8u;
    {
        static int s_inflateBlocksCall = 0;
        if (s_inflateBlocksCall++ < 30) {
            std::cerr << "[inflate] BEFORE inflate_blocks #" << s_inflateBlocksCall << " reg4=0x" << std::hex << GPR_U32(ctx, 4)
                      << " reg5=0x" << GPR_U32(ctx, 5) << " reg6=0x" << GPR_U32(ctx, 6);
            const uint32_t z = GPR_U32(ctx, 5);
            if (z) std::cerr << " z+0=0x" << READ32(ADD32(z, 0)) << " z+4=0x" << READ32(ADD32(z, 4)) << " z+8=0x" << READ32(ADD32(z, 8));
            std::cerr << std::dec << "\n";
        }
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_0x2d96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FB0u; }
    }
    if (ctx->pc != 0x2D8FB0u) { return; }
    ctx->pc = 0x2D8FB0u;
    {
        static int s_inflateBlocksRet = 0;
        if (s_inflateBlocksRet++ < 30) {
            const uint32_t state = GPR_U32(ctx, 16);
            const uint32_t z = state ? READ32(ADD32(state, 28)) : 0;
            std::cerr << "[inflate] AFTER inflate_blocks #" << s_inflateBlocksRet << " reg2=0x" << std::hex << GPR_U32(ctx, 2)
                      << " reg16(state)=0x" << state << " reg17=0x" << GPR_U32(ctx, 17);
            if (z) std::cerr << " z+0=0x" << READ32(ADD32(z, 0)) << " z+4=0x" << READ32(ADD32(z, 4));
            std::cerr << std::dec << "\n";
        }
    }
label_2d8fb0:
    // 0x2d8fb0: 0x40882d
    ctx->pc = 0x2d8fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fb4:
    // 0x2d8fb4: 0x2402fffd
    ctx->pc = 0x2d8fb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2d8fb8:
    // 0x2d8fb8: 0x16220007
label_2d8fbc:
    if (ctx->pc == 0x2D8FBCu) {
        ctx->pc = 0x2D8FBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D8FC0u;
        goto label_2d8fc0;
    }
    ctx->pc = 0x2D8FB8u;
    {
        const bool branch_taken_0x2d8fb8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D8FBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2d8fb8) {
            ctx->pc = 0x2D8FD8u;
            goto label_2d8fd8;
        }
    }
    ctx->pc = 0x2D8FC0u;
label_2d8fc0:
    // 0x2d8fc0: 0x8e02001c
    ctx->pc = 0x2d8fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8fc4:
    // 0x2d8fc4: 0x2403000d
    ctx->pc = 0x2d8fc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_2d8fc8:
    // 0x2d8fc8: 0xac430000
    ctx->pc = 0x2d8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d8fcc:
    // 0x2d8fcc: 0x8e02001c
    ctx->pc = 0x2d8fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8fd0:
    // 0x2d8fd0: 0x1000ff45
label_2d8fd4:
    if (ctx->pc == 0x2D8FD4u) {
        ctx->pc = 0x2D8FD4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8FD8u;
        goto label_2d8fd8;
    }
    ctx->pc = 0x2D8FD0u;
    {
        const bool branch_taken_0x2d8fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8FD4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2d8fd0) {
            ctx->pc = 0x2D8CE8u;
            goto label_2d8ce8;
        }
    }
    ctx->pc = 0x2D8FD8u;
label_2d8fd8:
    // 0x2d8fd8: 0x16220070
label_2d8fdc:
    if (ctx->pc == 0x2D8FDCu) {
        ctx->pc = 0x2D8FDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FE0u;
        goto label_2d8fe0;
    }
    ctx->pc = 0x2D8FD8u;
    {
        const bool branch_taken_0x2d8fd8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D8FDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8fd8) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D8FE0u;
label_2d8fe0:
    // 0x2d8fe0: 0x882d
    ctx->pc = 0x2d8fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fe4:
    // 0x2d8fe4: 0x8e06001c
    ctx->pc = 0x2d8fe4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8fe8:
    // 0x2d8fe8: 0x8cc40014
    ctx->pc = 0x2d8fe8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2d8fec:
    // 0x2d8fec: 0x200282d
    ctx->pc = 0x2d8fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ff0:
    // 0x2d8ff0: 0xc0b655a
label_2d8ff4:
    if (ctx->pc == 0x2D8FF4u) {
        ctx->pc = 0x2D8FF4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x2D8FF8u;
        goto label_2d8ff8;
    }
    ctx->pc = 0x2D8FF0u;
    SET_GPR_U32(ctx, 31, 0x2D8FF8u);
    ctx->pc = 0x2D8FF4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x2D9568u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x2d9568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FF8u; }
    }
    if (ctx->pc != 0x2D8FF8u) { return; }
    ctx->pc = 0x2D8FF8u;
label_2d8ff8:
    // 0x2d8ff8: 0x8e03001c
    ctx->pc = 0x2d8ff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8ffc:
    // 0x2d8ffc: 0x8c62000c
    ctx->pc = 0x2d8ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d9000:
    // 0x2d9000: 0x10400003
label_2d9004:
    if (ctx->pc == 0x2D9004u) {
        ctx->pc = 0x2D9004u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2D9008u;
        goto label_2d9008;
    }
    ctx->pc = 0x2D9000u;
    {
        const bool branch_taken_0x2d9000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9004u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2d9000) {
            ctx->pc = 0x2D9010u;
            goto label_2d9010;
        }
    }
    ctx->pc = 0x2D9008u;
label_2d9008:
    // 0x2d9008: 0x1000ff37
label_2d900c:
    if (ctx->pc == 0x2D900Cu) {
        ctx->pc = 0x2D900Cu;
        if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9010u;
        goto label_2d9010;
    }
    ctx->pc = 0x2D9008u;
    {
        const bool branch_taken_0x2d9008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D900Cu;
        if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2d9008) {
            ctx->pc = 0x2D8CE8u;
            goto label_2d8ce8;
        }
    }
    ctx->pc = 0x2D9010u;
label_2d9010:
    // 0x2d9010: 0x24020008
    ctx->pc = 0x2d9010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2d9014:
    // 0x2d9014: 0xac620000
    ctx->pc = 0x2d9014u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d9018:
    // 0x2d9018: 0x8e020004
    ctx->pc = 0x2d9018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d901c:
    // 0x2d901c: 0x1040003b
label_2d9020:
    if (ctx->pc == 0x2D9020u) {
        ctx->pc = 0x2D9020u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D9024u;
        goto label_2d9024;
    }
    ctx->pc = 0x2D901Cu;
    {
        const bool branch_taken_0x2d901c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9020u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d901c) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D9024u;
label_2d9024:
    // 0x2d9024: 0x882d
    ctx->pc = 0x2d9024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9028:
    // 0x2d9028: 0x8e04001c
    ctx->pc = 0x2d9028u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d902c:
    // 0x2d902c: 0xae020004
    ctx->pc = 0x2d902cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d9030:
    // 0x2d9030: 0x8e020008
    ctx->pc = 0x2d9030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d9034:
    // 0x2d9034: 0x24420001
    ctx->pc = 0x2d9034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d9038:
    // 0x2d9038: 0xae020008
    ctx->pc = 0x2d9038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d903c:
    // 0x2d903c: 0x8e030000
    ctx->pc = 0x2d903cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9040:
    // 0x2d9040: 0x90620000
    ctx->pc = 0x2d9040u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9044:
    // 0x2d9044: 0x21600
    ctx->pc = 0x2d9044u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d9048:
    // 0x2d9048: 0xac820008
    ctx->pc = 0x2d9048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2d904c:
    // 0x2d904c: 0x24630001
    ctx->pc = 0x2d904cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2d9050:
    // 0x2d9050: 0xae030000
    ctx->pc = 0x2d9050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d9054:
    // 0x2d9054: 0x8e03001c
    ctx->pc = 0x2d9054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d9058:
    // 0x2d9058: 0x24020009
    ctx->pc = 0x2d9058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2d905c:
    // 0x2d905c: 0xac620000
    ctx->pc = 0x2d905cu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d9060:
    // 0x2d9060: 0x8e020004
    ctx->pc = 0x2d9060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9064:
    // 0x2d9064: 0x10400029
label_2d9068:
    if (ctx->pc == 0x2D9068u) {
        ctx->pc = 0x2D9068u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D906Cu;
        goto label_2d906c;
    }
    ctx->pc = 0x2D9064u;
    {
        const bool branch_taken_0x2d9064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9068u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d9064) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D906Cu;
label_2d906c:
    // 0x2d906c: 0x882d
    ctx->pc = 0x2d906cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9070:
    // 0x2d9070: 0x8e05001c
    ctx->pc = 0x2d9070u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d9074:
    // 0x2d9074: 0xae020004
    ctx->pc = 0x2d9074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d9078:
    // 0x2d9078: 0x8e020008
    ctx->pc = 0x2d9078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d907c:
    // 0x2d907c: 0x24420001
    ctx->pc = 0x2d907cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d9080:
    // 0x2d9080: 0xae020008
    ctx->pc = 0x2d9080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d9084:
    // 0x2d9084: 0x8e040000
    ctx->pc = 0x2d9084u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9088:
    // 0x2d9088: 0x90820000
    ctx->pc = 0x2d9088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d908c:
    // 0x2d908c: 0x21400
    ctx->pc = 0x2d908cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d9090:
    // 0x2d9090: 0x8ca30008
    ctx->pc = 0x2d9090u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d9094:
    // 0x2d9094: 0x431021
    ctx->pc = 0x2d9094u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9098:
    // 0x2d9098: 0xaca20008
    ctx->pc = 0x2d9098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2d909c:
    // 0x2d909c: 0x24840001
    ctx->pc = 0x2d909cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d90a0:
    // 0x2d90a0: 0xae040000
    ctx->pc = 0x2d90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d90a4:
    // 0x2d90a4: 0x8e03001c
    ctx->pc = 0x2d90a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d90a8:
    // 0x2d90a8: 0x2402000a
    ctx->pc = 0x2d90a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_2d90ac:
    // 0x2d90ac: 0xac620000
    ctx->pc = 0x2d90acu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d90b0:
    // 0x2d90b0: 0x8e020004
    ctx->pc = 0x2d90b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d90b4:
    // 0x2d90b4: 0x10400015
label_2d90b8:
    if (ctx->pc == 0x2D90B8u) {
        ctx->pc = 0x2D90B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D90BCu;
        goto label_2d90bc;
    }
    ctx->pc = 0x2D90B4u;
    {
        const bool branch_taken_0x2d90b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D90B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2d90b4) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D90BCu;
label_2d90bc:
    // 0x2d90bc: 0x882d
    ctx->pc = 0x2d90bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d90c0:
    // 0x2d90c0: 0x8e05001c
    ctx->pc = 0x2d90c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d90c4:
    // 0x2d90c4: 0xae020004
    ctx->pc = 0x2d90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d90c8:
    // 0x2d90c8: 0x8e020008
    ctx->pc = 0x2d90c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d90cc:
    // 0x2d90cc: 0x24420001
    ctx->pc = 0x2d90ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d90d0:
    // 0x2d90d0: 0xae020008
    ctx->pc = 0x2d90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d90d4:
    // 0x2d90d4: 0x8e040000
    ctx->pc = 0x2d90d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d90d8:
    // 0x2d90d8: 0x90820000
    ctx->pc = 0x2d90d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d90dc:
    // 0x2d90dc: 0x21200
    ctx->pc = 0x2d90dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d90e0:
    // 0x2d90e0: 0x8ca30008
    ctx->pc = 0x2d90e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d90e4:
    // 0x2d90e4: 0x431021
    ctx->pc = 0x2d90e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d90e8:
    // 0x2d90e8: 0xaca20008
    ctx->pc = 0x2d90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2d90ec:
    // 0x2d90ec: 0x24840001
    ctx->pc = 0x2d90ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d90f0:
    // 0x2d90f0: 0xae040000
    ctx->pc = 0x2d90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d90f4:
    // 0x2d90f4: 0x8e03001c
    ctx->pc = 0x2d90f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d90f8:
    // 0x2d90f8: 0x2402000b
    ctx->pc = 0x2d90f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_2d90fc:
    // 0x2d90fc: 0xac620000
    ctx->pc = 0x2d90fcu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d9100:
    // 0x2d9100: 0x8e020004
    ctx->pc = 0x2d9100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9104:
    // 0x2d9104: 0x54400003
label_2d9108:
    if (ctx->pc == 0x2D9108u) {
        ctx->pc = 0x2D9108u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x2D910Cu;
        goto label_2d910c;
    }
    ctx->pc = 0x2D9104u;
    {
        const bool branch_taken_0x2d9104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9104) {
            ctx->pc = 0x2D9108u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x2D9114u;
            goto label_2d9114;
        }
    }
    ctx->pc = 0x2D910Cu;
label_2d910c:
    // 0x2d910c: 0x10000023
label_2d9110:
    if (ctx->pc == 0x2D9110u) {
        ctx->pc = 0x2D9110u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9114u;
        goto label_2d9114;
    }
    ctx->pc = 0x2D910Cu;
    {
        const bool branch_taken_0x2d910c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9110u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d910c) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D9114u;
label_2d9114:
    // 0x2d9114: 0x2442ffff
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d9118:
    // 0x2d9118: 0xae020004
    ctx->pc = 0x2d9118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d911c:
    // 0x2d911c: 0x8e020008
    ctx->pc = 0x2d911cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d9120:
    // 0x2d9120: 0x24420001
    ctx->pc = 0x2d9120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d9124:
    // 0x2d9124: 0xae020008
    ctx->pc = 0x2d9124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d9128:
    // 0x2d9128: 0x8e040000
    ctx->pc = 0x2d9128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d912c:
    // 0x2d912c: 0x90820000
    ctx->pc = 0x2d912cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9130:
    // 0x2d9130: 0x8ca30008
    ctx->pc = 0x2d9130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d9134:
    // 0x2d9134: 0x431021
    ctx->pc = 0x2d9134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9138:
    // 0x2d9138: 0xaca20008
    ctx->pc = 0x2d9138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2d913c:
    // 0x2d913c: 0x24840001
    ctx->pc = 0x2d913cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d9140:
    // 0x2d9140: 0xae040000
    ctx->pc = 0x2d9140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d9144:
    // 0x2d9144: 0x8e04001c
    ctx->pc = 0x2d9144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d9148:
    // 0x2d9148: 0x8c830004
    ctx->pc = 0x2d9148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d914c:
    // 0x2d914c: 0x8c820008
    ctx->pc = 0x2d914cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2d9150:
    // 0x2d9150: 0x1062000a
label_2d9154:
    if (ctx->pc == 0x2D9154u) {
        ctx->pc = 0x2D9154u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9158u;
        goto label_2d9158;
    }
    ctx->pc = 0x2D9150u;
    {
        const bool branch_taken_0x2d9150 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D9154u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d9150) {
            ctx->pc = 0x2D917Cu;
            goto label_2d917c;
        }
    }
    ctx->pc = 0x2D9158u;
label_2d9158:
    // 0x2d9158: adler32 check failed (state+4 != state+8) -> Z_DATA_ERROR
    {
        static int log_count = 0;
        if (log_count++ < 30) {
            const uint32_t z = GPR_U32(ctx, 4);
            std::cerr << "[inflate] Z_DATA_ERROR #" << log_count << " reg2=0x" << std::hex << GPR_U32(ctx, 2) << " reg3=0x" << GPR_U32(ctx, 3)
                      << " reg4(z)=0x" << z << " reg16=0x" << GPR_U32(ctx, 16) << " reg17=0x" << GPR_U32(ctx, 17) << "\n";
            if (z) {
                std::cerr << "  z+0(next_in)=0x" << READ32(ADD32(z, 0)) << " z+4(avail_in)=0x" << READ32(ADD32(z, 4))
                          << " z+8=0x" << READ32(ADD32(z, 8)) << " z+12=0x" << READ32(ADD32(z, 12)) << "\n";
            }
            const uint32_t state = GPR_U32(ctx, 16);
            if (state) {
                std::cerr << "  state+0=0x" << READ32(ADD32(state, 0)) << " +4(adler_computed)=0x" << READ32(ADD32(state, 4))
                          << " +8(adler_stored)=0x" << READ32(ADD32(state, 8)) << " +28=0x" << READ32(ADD32(state, 28)) << std::dec << "\n";
            }
        }
    }
    // 0x2d9158: 0x2402000d
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_2d915c:
    // 0x2d915c: 0xac820000 — do not overwrite z->next_in with error code (reg2=13); only store return value in reg2
    ctx->pc = 0x2d915cu;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d9160:
    // 0x2d9160: 0x3c02003c
    ctx->pc = 0x2d9160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2d9164:
    // 0x2d9164: 0x24428020
    ctx->pc = 0x2d9164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934560));
label_2d9168:
    // 0x2d9168: 0xae020018
    ctx->pc = 0x2d9168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2d916c:
    // 0x2d916c: 0x8e03001c
    ctx->pc = 0x2d916cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d9170:
    // 0x2d9170: 0x24020005
    ctx->pc = 0x2d9170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2d9174:
    // 0x2d9174: 0x1000fedc
label_2d9178:
    if (ctx->pc == 0x2D9178u) {
        ctx->pc = 0x2D9178u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2D917Cu;
        goto label_2d917c;
    }
    ctx->pc = 0x2D9174u;
    {
        const bool branch_taken_0x2d9174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9178u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2d9174) {
            ctx->pc = 0x2D8CE8u;
            goto label_2d8ce8;
        }
    }
    ctx->pc = 0x2D917Cu;
label_2d917c:
    // 0x2d917c: 0x8e03001c
    ctx->pc = 0x2d917cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d9180:
    // 0x2d9180: 0x2402000c
    ctx->pc = 0x2d9180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2d9184:
    // 0x2d9184: 0xac620000
    ctx->pc = 0x2d9184u;
    if (GPR_U32(ctx, 2) >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d9188:
    // 0x2d9188: 0x10000004
label_2d918c:
    if (ctx->pc == 0x2D918Cu) {
        ctx->pc = 0x2D918Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D9190u;
        goto label_2d9190;
    }
    ctx->pc = 0x2D9188u;
    {
        const bool branch_taken_0x2d9188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D918Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2d9188) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D9190u;
label_2d9190:
    // 0x2d9190: 0x10000002
label_2d9194:
    if (ctx->pc == 0x2D9194u) {
        ctx->pc = 0x2D9194u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2D9198u;
        goto label_2d9198;
    }
    ctx->pc = 0x2D9190u;
    {
        const bool branch_taken_0x2d9190 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9194u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d9190) {
            ctx->pc = 0x2D919Cu;
            goto label_2d919c;
        }
    }
    ctx->pc = 0x2D9198u;
label_2d9198:
    // 0x2d9198: 0x2402fffe
    ctx->pc = 0x2d9198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2d919c:
    // 0x2d919c: single exit — never return Z_STREAM_END(2) when no output was produced
    if (GPR_U32(ctx, 2) == 2) {
        const uint32_t state = GPR_U32(ctx, 16);
        const uint32_t z = state ? READ32(ADD32(state, 28)) : 0;
        const uint32_t total_out = z ? READ32(ADD32(z, 8)) : 0;
        if (total_out == 0)
            SET_GPR_S32(ctx, 2, GPR_U32(ctx, 0));  // 0 = Z_OK
    }
    ctx->pc = 0x2d919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d91a0:
    // 0x2d91a0: 0xdfb10010
    ctx->pc = 0x2d91a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d91a4:
    // 0x2d91a4: 0xdfb00000
    ctx->pc = 0x2d91a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d91a8:
    // 0x2d91a8: 0x3e00008
label_2d91ac:
    if (ctx->pc == 0x2D91ACu) {
        ctx->pc = 0x2D91ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D91B0u;
        goto label_fallthrough_0x2d91a8;
    }
    ctx->pc = 0x2D91A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D91ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8CA8u: goto label_2d8ca8;
            case 0x2D8CACu: goto label_2d8cac;
            case 0x2D8CB0u: goto label_2d8cb0;
            case 0x2D8CB4u: goto label_2d8cb4;
            case 0x2D8CB8u: goto label_2d8cb8;
            case 0x2D8CBCu: goto label_2d8cbc;
            case 0x2D8CC0u: goto label_2d8cc0;
            case 0x2D8CC4u: goto label_2d8cc4;
            case 0x2D8CC8u: goto label_2d8cc8;
            case 0x2D8CCCu: goto label_2d8ccc;
            case 0x2D8CD0u: goto label_2d8cd0;
            case 0x2D8CD4u: goto label_2d8cd4;
            case 0x2D8CD8u: goto label_2d8cd8;
            case 0x2D8CDCu: goto label_2d8cdc;
            case 0x2D8CE0u: goto label_2d8ce0;
            case 0x2D8CE4u: goto label_2d8ce4;
            case 0x2D8CE8u: goto label_2d8ce8;
            case 0x2D8CECu: goto label_2d8cec;
            case 0x2D8CF0u: goto label_2d8cf0;
            case 0x2D8CF4u: goto label_2d8cf4;
            case 0x2D8CF8u: goto label_2d8cf8;
            case 0x2D8CFCu: goto label_2d8cfc;
            case 0x2D8D00u: goto label_2d8d00;
            case 0x2D8D04u: goto label_2d8d04;
            case 0x2D8D08u: goto label_2d8d08;
            case 0x2D8D0Cu: goto label_2d8d0c;
            case 0x2D8D10u: goto label_2d8d10;
            case 0x2D8D14u: goto label_2d8d14;
            case 0x2D8D18u: goto label_2d8d18;
            case 0x2D8D1Cu: goto label_2d8d1c;
            case 0x2D8D20u: goto label_2d8d20;
            case 0x2D8D24u: goto label_2d8d24;
            case 0x2D8D28u: goto label_2d8d28;
            case 0x2D8D2Cu: goto label_2d8d2c;
            case 0x2D8D30u: goto label_2d8d30;
            case 0x2D8D34u: goto label_2d8d34;
            case 0x2D8D38u: goto label_2d8d38;
            case 0x2D8D3Cu: goto label_2d8d3c;
            case 0x2D8D40u: goto label_2d8d40;
            case 0x2D8D44u: goto label_2d8d44;
            case 0x2D8D48u: goto label_2d8d48;
            case 0x2D8D4Cu: goto label_2d8d4c;
            case 0x2D8D50u: goto label_2d8d50;
            case 0x2D8D54u: goto label_2d8d54;
            case 0x2D8D58u: goto label_2d8d58;
            case 0x2D8D5Cu: goto label_2d8d5c;
            case 0x2D8D60u: goto label_2d8d60;
            case 0x2D8D64u: goto label_2d8d64;
            case 0x2D8D68u: goto label_2d8d68;
            case 0x2D8D6Cu: goto label_2d8d6c;
            case 0x2D8D70u: goto label_2d8d70;
            case 0x2D8D74u: goto label_2d8d74;
            case 0x2D8D78u: goto label_2d8d78;
            case 0x2D8D7Cu: goto label_2d8d7c;
            case 0x2D8D80u: goto label_2d8d80;
            case 0x2D8D84u: goto label_2d8d84;
            case 0x2D8D88u: goto label_2d8d88;
            case 0x2D8D8Cu: goto label_2d8d8c;
            case 0x2D8D90u: goto label_2d8d90;
            case 0x2D8D94u: goto label_2d8d94;
            case 0x2D8D98u: goto label_2d8d98;
            case 0x2D8D9Cu: goto label_2d8d9c;
            case 0x2D8DA0u: goto label_2d8da0;
            case 0x2D8DA4u: goto label_2d8da4;
            case 0x2D8DA8u: goto label_2d8da8;
            case 0x2D8DACu: goto label_2d8dac;
            case 0x2D8DB0u: goto label_2d8db0;
            case 0x2D8DB4u: goto label_2d8db4;
            case 0x2D8DB8u: goto label_2d8db8;
            case 0x2D8DBCu: goto label_2d8dbc;
            case 0x2D8DC0u: goto label_2d8dc0;
            case 0x2D8DC4u: goto label_2d8dc4;
            case 0x2D8DC8u: goto label_2d8dc8;
            case 0x2D8DCCu: goto label_2d8dcc;
            case 0x2D8DD0u: goto label_2d8dd0;
            case 0x2D8DD4u: goto label_2d8dd4;
            case 0x2D8DD8u: goto label_2d8dd8;
            case 0x2D8DDCu: goto label_2d8ddc;
            case 0x2D8DE0u: goto label_2d8de0;
            case 0x2D8DE4u: goto label_2d8de4;
            case 0x2D8DE8u: goto label_2d8de8;
            case 0x2D8DECu: goto label_2d8dec;
            case 0x2D8DF0u: goto label_2d8df0;
            case 0x2D8DF4u: goto label_2d8df4;
            case 0x2D8DF8u: goto label_2d8df8;
            case 0x2D8DFCu: goto label_2d8dfc;
            case 0x2D8E00u: goto label_2d8e00;
            case 0x2D8E04u: goto label_2d8e04;
            case 0x2D8E08u: goto label_2d8e08;
            case 0x2D8E0Cu: goto label_2d8e0c;
            case 0x2D8E10u: goto label_2d8e10;
            case 0x2D8E14u: goto label_2d8e14;
            case 0x2D8E18u: goto label_2d8e18;
            case 0x2D8E1Cu: goto label_2d8e1c;
            case 0x2D8E20u: goto label_2d8e20;
            case 0x2D8E24u: goto label_2d8e24;
            case 0x2D8E28u: goto label_2d8e28;
            case 0x2D8E2Cu: goto label_2d8e2c;
            case 0x2D8E30u: goto label_2d8e30;
            case 0x2D8E34u: goto label_2d8e34;
            case 0x2D8E38u: goto label_2d8e38;
            case 0x2D8E3Cu: goto label_2d8e3c;
            case 0x2D8E40u: goto label_2d8e40;
            case 0x2D8E44u: goto label_2d8e44;
            case 0x2D8E48u: goto label_2d8e48;
            case 0x2D8E4Cu: goto label_2d8e4c;
            case 0x2D8E50u: goto label_2d8e50;
            case 0x2D8E54u: goto label_2d8e54;
            case 0x2D8E58u: goto label_2d8e58;
            case 0x2D8E5Cu: goto label_2d8e5c;
            case 0x2D8E60u: goto label_2d8e60;
            case 0x2D8E64u: goto label_2d8e64;
            case 0x2D8E68u: goto label_2d8e68;
            case 0x2D8E6Cu: goto label_2d8e6c;
            case 0x2D8E70u: goto label_2d8e70;
            case 0x2D8E74u: goto label_2d8e74;
            case 0x2D8E78u: goto label_2d8e78;
            case 0x2D8E7Cu: goto label_2d8e7c;
            case 0x2D8E80u: goto label_2d8e80;
            case 0x2D8E84u: goto label_2d8e84;
            case 0x2D8E88u: goto label_2d8e88;
            case 0x2D8E8Cu: goto label_2d8e8c;
            case 0x2D8E90u: goto label_2d8e90;
            case 0x2D8E94u: goto label_2d8e94;
            case 0x2D8E98u: goto label_2d8e98;
            case 0x2D8E9Cu: goto label_2d8e9c;
            case 0x2D8EA0u: goto label_2d8ea0;
            case 0x2D8EA4u: goto label_2d8ea4;
            case 0x2D8EA8u: goto label_2d8ea8;
            case 0x2D8EACu: goto label_2d8eac;
            case 0x2D8EB0u: goto label_2d8eb0;
            case 0x2D8EB4u: goto label_2d8eb4;
            case 0x2D8EB8u: goto label_2d8eb8;
            case 0x2D8EBCu: goto label_2d8ebc;
            case 0x2D8EC0u: goto label_2d8ec0;
            case 0x2D8EC4u: goto label_2d8ec4;
            case 0x2D8EC8u: goto label_2d8ec8;
            case 0x2D8ECCu: goto label_2d8ecc;
            case 0x2D8ED0u: goto label_2d8ed0;
            case 0x2D8ED4u: goto label_2d8ed4;
            case 0x2D8ED8u: goto label_2d8ed8;
            case 0x2D8EDCu: goto label_2d8edc;
            case 0x2D8EE0u: goto label_2d8ee0;
            case 0x2D8EE4u: goto label_2d8ee4;
            case 0x2D8EE8u: goto label_2d8ee8;
            case 0x2D8EECu: goto label_2d8eec;
            case 0x2D8EF0u: goto label_2d8ef0;
            case 0x2D8EF4u: goto label_2d8ef4;
            case 0x2D8EF8u: goto label_2d8ef8;
            case 0x2D8EFCu: goto label_2d8efc;
            case 0x2D8F00u: goto label_2d8f00;
            case 0x2D8F04u: goto label_2d8f04;
            case 0x2D8F08u: goto label_2d8f08;
            case 0x2D8F0Cu: goto label_2d8f0c;
            case 0x2D8F10u: goto label_2d8f10;
            case 0x2D8F14u: goto label_2d8f14;
            case 0x2D8F18u: goto label_2d8f18;
            case 0x2D8F1Cu: goto label_2d8f1c;
            case 0x2D8F20u: goto label_2d8f20;
            case 0x2D8F24u: goto label_2d8f24;
            case 0x2D8F28u: goto label_2d8f28;
            case 0x2D8F2Cu: goto label_2d8f2c;
            case 0x2D8F30u: goto label_2d8f30;
            case 0x2D8F34u: goto label_2d8f34;
            case 0x2D8F38u: goto label_2d8f38;
            case 0x2D8F3Cu: goto label_2d8f3c;
            case 0x2D8F40u: goto label_2d8f40;
            case 0x2D8F44u: goto label_2d8f44;
            case 0x2D8F48u: goto label_2d8f48;
            case 0x2D8F4Cu: goto label_2d8f4c;
            case 0x2D8F50u: goto label_2d8f50;
            case 0x2D8F54u: goto label_2d8f54;
            case 0x2D8F58u: goto label_2d8f58;
            case 0x2D8F5Cu: goto label_2d8f5c;
            case 0x2D8F60u: goto label_2d8f60;
            case 0x2D8F64u: goto label_2d8f64;
            case 0x2D8F68u: goto label_2d8f68;
            case 0x2D8F6Cu: goto label_2d8f6c;
            case 0x2D8F70u: goto label_2d8f70;
            case 0x2D8F74u: goto label_2d8f74;
            case 0x2D8F78u: goto label_2d8f78;
            case 0x2D8F7Cu: goto label_2d8f7c;
            case 0x2D8F80u: goto label_2d8f80;
            case 0x2D8F84u: goto label_2d8f84;
            case 0x2D8F88u: goto label_2d8f88;
            case 0x2D8F8Cu: goto label_2d8f8c;
            case 0x2D8F90u: goto label_2d8f90;
            case 0x2D8F94u: goto label_2d8f94;
            case 0x2D8F98u: goto label_2d8f98;
            case 0x2D8F9Cu: goto label_2d8f9c;
            case 0x2D8FA0u: goto label_2d8fa0;
            case 0x2D8FA4u: goto label_2d8fa4;
            case 0x2D8FA8u: goto label_2d8fa8;
            case 0x2D8FACu: goto label_2d8fac;
            case 0x2D8FB0u: goto label_2d8fb0;
            case 0x2D8FB4u: goto label_2d8fb4;
            case 0x2D8FB8u: goto label_2d8fb8;
            case 0x2D8FBCu: goto label_2d8fbc;
            case 0x2D8FC0u: goto label_2d8fc0;
            case 0x2D8FC4u: goto label_2d8fc4;
            case 0x2D8FC8u: goto label_2d8fc8;
            case 0x2D8FCCu: goto label_2d8fcc;
            case 0x2D8FD0u: goto label_2d8fd0;
            case 0x2D8FD4u: goto label_2d8fd4;
            case 0x2D8FD8u: goto label_2d8fd8;
            case 0x2D8FDCu: goto label_2d8fdc;
            case 0x2D8FE0u: goto label_2d8fe0;
            case 0x2D8FE4u: goto label_2d8fe4;
            case 0x2D8FE8u: goto label_2d8fe8;
            case 0x2D8FECu: goto label_2d8fec;
            case 0x2D8FF0u: goto label_2d8ff0;
            case 0x2D8FF4u: goto label_2d8ff4;
            case 0x2D8FF8u: goto label_2d8ff8;
            case 0x2D8FFCu: goto label_2d8ffc;
            case 0x2D9000u: goto label_2d9000;
            case 0x2D9004u: goto label_2d9004;
            case 0x2D9008u: goto label_2d9008;
            case 0x2D900Cu: goto label_2d900c;
            case 0x2D9010u: goto label_2d9010;
            case 0x2D9014u: goto label_2d9014;
            case 0x2D9018u: goto label_2d9018;
            case 0x2D901Cu: goto label_2d901c;
            case 0x2D9020u: goto label_2d9020;
            case 0x2D9024u: goto label_2d9024;
            case 0x2D9028u: goto label_2d9028;
            case 0x2D902Cu: goto label_2d902c;
            case 0x2D9030u: goto label_2d9030;
            case 0x2D9034u: goto label_2d9034;
            case 0x2D9038u: goto label_2d9038;
            case 0x2D903Cu: goto label_2d903c;
            case 0x2D9040u: goto label_2d9040;
            case 0x2D9044u: goto label_2d9044;
            case 0x2D9048u: goto label_2d9048;
            case 0x2D904Cu: goto label_2d904c;
            case 0x2D9050u: goto label_2d9050;
            case 0x2D9054u: goto label_2d9054;
            case 0x2D9058u: goto label_2d9058;
            case 0x2D905Cu: goto label_2d905c;
            case 0x2D9060u: goto label_2d9060;
            case 0x2D9064u: goto label_2d9064;
            case 0x2D9068u: goto label_2d9068;
            case 0x2D906Cu: goto label_2d906c;
            case 0x2D9070u: goto label_2d9070;
            case 0x2D9074u: goto label_2d9074;
            case 0x2D9078u: goto label_2d9078;
            case 0x2D907Cu: goto label_2d907c;
            case 0x2D9080u: goto label_2d9080;
            case 0x2D9084u: goto label_2d9084;
            case 0x2D9088u: goto label_2d9088;
            case 0x2D908Cu: goto label_2d908c;
            case 0x2D9090u: goto label_2d9090;
            case 0x2D9094u: goto label_2d9094;
            case 0x2D9098u: goto label_2d9098;
            case 0x2D909Cu: goto label_2d909c;
            case 0x2D90A0u: goto label_2d90a0;
            case 0x2D90A4u: goto label_2d90a4;
            case 0x2D90A8u: goto label_2d90a8;
            case 0x2D90ACu: goto label_2d90ac;
            case 0x2D90B0u: goto label_2d90b0;
            case 0x2D90B4u: goto label_2d90b4;
            case 0x2D90B8u: goto label_2d90b8;
            case 0x2D90BCu: goto label_2d90bc;
            case 0x2D90C0u: goto label_2d90c0;
            case 0x2D90C4u: goto label_2d90c4;
            case 0x2D90C8u: goto label_2d90c8;
            case 0x2D90CCu: goto label_2d90cc;
            case 0x2D90D0u: goto label_2d90d0;
            case 0x2D90D4u: goto label_2d90d4;
            case 0x2D90D8u: goto label_2d90d8;
            case 0x2D90DCu: goto label_2d90dc;
            case 0x2D90E0u: goto label_2d90e0;
            case 0x2D90E4u: goto label_2d90e4;
            case 0x2D90E8u: goto label_2d90e8;
            case 0x2D90ECu: goto label_2d90ec;
            case 0x2D90F0u: goto label_2d90f0;
            case 0x2D90F4u: goto label_2d90f4;
            case 0x2D90F8u: goto label_2d90f8;
            case 0x2D90FCu: goto label_2d90fc;
            case 0x2D9100u: goto label_2d9100;
            case 0x2D9104u: goto label_2d9104;
            case 0x2D9108u: goto label_2d9108;
            case 0x2D910Cu: goto label_2d910c;
            case 0x2D9110u: goto label_2d9110;
            case 0x2D9114u: goto label_2d9114;
            case 0x2D9118u: goto label_2d9118;
            case 0x2D911Cu: goto label_2d911c;
            case 0x2D9120u: goto label_2d9120;
            case 0x2D9124u: goto label_2d9124;
            case 0x2D9128u: goto label_2d9128;
            case 0x2D912Cu: goto label_2d912c;
            case 0x2D9130u: goto label_2d9130;
            case 0x2D9134u: goto label_2d9134;
            case 0x2D9138u: goto label_2d9138;
            case 0x2D913Cu: goto label_2d913c;
            case 0x2D9140u: goto label_2d9140;
            case 0x2D9144u: goto label_2d9144;
            case 0x2D9148u: goto label_2d9148;
            case 0x2D914Cu: goto label_2d914c;
            case 0x2D9150u: goto label_2d9150;
            case 0x2D9154u: goto label_2d9154;
            case 0x2D9158u: goto label_2d9158;
            case 0x2D915Cu: goto label_2d915c;
            case 0x2D9160u: goto label_2d9160;
            case 0x2D9164u: goto label_2d9164;
            case 0x2D9168u: goto label_2d9168;
            case 0x2D916Cu: goto label_2d916c;
            case 0x2D9170u: goto label_2d9170;
            case 0x2D9174u: goto label_2d9174;
            case 0x2D9178u: goto label_2d9178;
            case 0x2D917Cu: goto label_2d917c;
            case 0x2D9180u: goto label_2d9180;
            case 0x2D9184u: goto label_2d9184;
            case 0x2D9188u: goto label_2d9188;
            case 0x2D918Cu: goto label_2d918c;
            case 0x2D9190u: goto label_2d9190;
            case 0x2D9194u: goto label_2d9194;
            case 0x2D9198u: goto label_2d9198;
            case 0x2D919Cu: goto label_2d919c;
            case 0x2D91A0u: goto label_2d91a0;
            case 0x2D91A4u: goto label_2d91a4;
            case 0x2D91A8u: goto label_2d91a8;
            case 0x2D91ACu: goto label_2d91ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x2d91a8:
    ctx->pc = 0x2D91B0u;
}
