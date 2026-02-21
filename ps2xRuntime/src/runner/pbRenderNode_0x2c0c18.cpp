#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <iostream>

static void _pbRenderNode_exit_log(R5900Context* ctx, const char* kind) {
    std::cerr << "[pbRenderNode] EXIT(" << kind << ") ctx->pc=0x" << std::hex << ctx->pc << " ra=0x" << GPR_U32(ctx, 31) << " s0=0x" << GPR_U32(ctx, 16) << " s2=0x" << GPR_U32(ctx, 18) << "\n" << std::dec;
}

// Function: pbRenderNode
// Address: 0x2c0c18 - 0x2c1044
void pbRenderNode_0x2c0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0c18u;
    std::cerr << "[pbRenderNode] ENTRY ra=0x" << std::hex << GPR_U32(ctx, 31) << " s0=0x" << GPR_U32(ctx, 16) << " s2=0x" << GPR_U32(ctx, 18) << " sp=0x" << GPR_U32(ctx, 29) << "\n" << std::dec;

label_2c0c18:
    // 0x2c0c18: 0x27bdffa0
    ctx->pc = 0x2c0c18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c0c1c:
    // 0x2c0c1c: 0xffbf0050
    ctx->pc = 0x2c0c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2c0c20:
    // 0x2c0c20: 0xffb30040
    ctx->pc = 0x2c0c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2c0c24:
    // 0x2c0c24: 0xffb20030
    ctx->pc = 0x2c0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2c0c28:
    // 0x2c0c28: 0xffb10020
    ctx->pc = 0x2c0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2c0c2c:
    // 0x2c0c2c: 0xffb00010
    ctx->pc = 0x2c0c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c0c30:
    // 0x2c0c30: 0x80902d
    ctx->pc = 0x2c0c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c34:
    // 0x2c0c34: 0x3c020036
    ctx->pc = 0x2c0c34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2c0c38:
    // 0x2c0c38: 0x8c50dee0
    ctx->pc = 0x2c0c38u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2c0c3c:
    // 0x2c0c3c: 0x3c02003d
    ctx->pc = 0x2c0c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c0c40:
    // 0x2c0c40: 0x8c43a0f0
    ctx->pc = 0x2c0c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942960)));
label_2c0c44:
    // 0x2c0c44: 0x32180
    ctx->pc = 0x2c0c44u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 6));
label_2c0c48:
    // 0x2c0c48: 0x3c02003d
    ctx->pc = 0x2c0c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c0c4c:
    // 0x2c0c4c: 0x2442a100
    ctx->pc = 0x2c0c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942976));
label_2c0c50:
    // 0x2c0c50: 0x828821
    ctx->pc = 0x2c0c50u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c0c54:
    // 0x2c0c54: 0x3c02003d
    ctx->pc = 0x2c0c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c0c58:
    // 0x2c0c58: 0x2442b100
    ctx->pc = 0x2c0c58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947072));
label_2c0c5c:
    // 0x2c0c5c: 0x31880
    ctx->pc = 0x2c0c5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2c0c60:
    // 0x2c0c60: 0x621821
    ctx->pc = 0x2c0c60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c0c64:
    // 0x2c0c64: 0x8c730000
    ctx->pc = 0x2c0c64u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c0c68:
    // 0x2c0c68: 0x92420052
    ctx->pc = 0x2c0c68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
label_2c0c6c:
    // 0x2c0c6c: 0x2442fffe
    ctx->pc = 0x2c0c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_2c0c70:
    // 0x2c0c70: 0x21600
    ctx->pc = 0x2c0c70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2c0c74:
    // 0x2c0c74: 0x21e03
    ctx->pc = 0x2c0c74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_2c0c78:
    // 0x2c0c78: 0x2c62000e
    ctx->pc = 0x2c0c78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_2c0c7c:
    // 0x2c0c7c: 0x104000ea
label_2c0c80:
    if (ctx->pc == 0x2C0C80u) {
        ctx->pc = 0x2C0C80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2C0C84u;
        goto label_2c0c84;
    }
    ctx->pc = 0x2C0C7Cu;
    {
        const bool branch_taken_0x2c0c7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0C80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2c0c7c) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0C84u;
label_2c0c84:
    // 0x2c0c84: 0x24426dd0
    ctx->pc = 0x2c0c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28112));
label_2c0c88:
    // 0x2c0c88: 0x31880
    ctx->pc = 0x2c0c88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2c0c8c:
    // 0x2c0c8c: 0x621821
    ctx->pc = 0x2c0c8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c0c90:
    // 0x2c0c90: 0x8c620000
    ctx->pc = 0x2c0c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c0c94:
    // 0x2c0c94: 0x400008
label_2c0c98:
    if (ctx->pc == 0x2C0C98u) {
        ctx->pc = 0x2C0C9Cu;
        goto label_2c0c9c;
    }
    ctx->pc = 0x2C0C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0C18u: goto label_2c0c18;
            case 0x2C0C1Cu: goto label_2c0c1c;
            case 0x2C0C20u: goto label_2c0c20;
            case 0x2C0C24u: goto label_2c0c24;
            case 0x2C0C28u: goto label_2c0c28;
            case 0x2C0C2Cu: goto label_2c0c2c;
            case 0x2C0C30u: goto label_2c0c30;
            case 0x2C0C34u: goto label_2c0c34;
            case 0x2C0C38u: goto label_2c0c38;
            case 0x2C0C3Cu: goto label_2c0c3c;
            case 0x2C0C40u: goto label_2c0c40;
            case 0x2C0C44u: goto label_2c0c44;
            case 0x2C0C48u: goto label_2c0c48;
            case 0x2C0C4Cu: goto label_2c0c4c;
            case 0x2C0C50u: goto label_2c0c50;
            case 0x2C0C54u: goto label_2c0c54;
            case 0x2C0C58u: goto label_2c0c58;
            case 0x2C0C5Cu: goto label_2c0c5c;
            case 0x2C0C60u: goto label_2c0c60;
            case 0x2C0C64u: goto label_2c0c64;
            case 0x2C0C68u: goto label_2c0c68;
            case 0x2C0C6Cu: goto label_2c0c6c;
            case 0x2C0C70u: goto label_2c0c70;
            case 0x2C0C74u: goto label_2c0c74;
            case 0x2C0C78u: goto label_2c0c78;
            case 0x2C0C7Cu: goto label_2c0c7c;
            case 0x2C0C80u: goto label_2c0c80;
            case 0x2C0C84u: goto label_2c0c84;
            case 0x2C0C88u: goto label_2c0c88;
            case 0x2C0C8Cu: goto label_2c0c8c;
            case 0x2C0C90u: goto label_2c0c90;
            case 0x2C0C94u: goto label_2c0c94;
            case 0x2C0C98u: goto label_2c0c98;
            case 0x2C0C9Cu: goto label_2c0c9c;
            case 0x2C0CA0u: goto label_2c0ca0;
            case 0x2C0CA4u: goto label_2c0ca4;
            case 0x2C0CA8u: goto label_2c0ca8;
            case 0x2C0CACu: goto label_2c0cac;
            case 0x2C0CB0u: goto label_2c0cb0;
            case 0x2C0CB4u: goto label_2c0cb4;
            case 0x2C0CB8u: goto label_2c0cb8;
            case 0x2C0CBCu: goto label_2c0cbc;
            case 0x2C0CC0u: goto label_2c0cc0;
            case 0x2C0CC4u: goto label_2c0cc4;
            case 0x2C0CC8u: goto label_2c0cc8;
            case 0x2C0CCCu: goto label_2c0ccc;
            case 0x2C0CD0u: goto label_2c0cd0;
            case 0x2C0CD4u: goto label_2c0cd4;
            case 0x2C0CD8u: goto label_2c0cd8;
            case 0x2C0CDCu: goto label_2c0cdc;
            case 0x2C0CE0u: goto label_2c0ce0;
            case 0x2C0CE4u: goto label_2c0ce4;
            case 0x2C0CE8u: goto label_2c0ce8;
            case 0x2C0CECu: goto label_2c0cec;
            case 0x2C0CF0u: goto label_2c0cf0;
            case 0x2C0CF4u: goto label_2c0cf4;
            case 0x2C0CF8u: goto label_2c0cf8;
            case 0x2C0CFCu: goto label_2c0cfc;
            case 0x2C0D00u: goto label_2c0d00;
            case 0x2C0D04u: goto label_2c0d04;
            case 0x2C0D08u: goto label_2c0d08;
            case 0x2C0D0Cu: goto label_2c0d0c;
            case 0x2C0D10u: goto label_2c0d10;
            case 0x2C0D14u: goto label_2c0d14;
            case 0x2C0D18u: goto label_2c0d18;
            case 0x2C0D1Cu: goto label_2c0d1c;
            case 0x2C0D20u: goto label_2c0d20;
            case 0x2C0D24u: goto label_2c0d24;
            case 0x2C0D28u: goto label_2c0d28;
            case 0x2C0D2Cu: goto label_2c0d2c;
            case 0x2C0D30u: goto label_2c0d30;
            case 0x2C0D34u: goto label_2c0d34;
            case 0x2C0D38u: goto label_2c0d38;
            case 0x2C0D3Cu: goto label_2c0d3c;
            case 0x2C0D40u: goto label_2c0d40;
            case 0x2C0D44u: goto label_2c0d44;
            case 0x2C0D48u: goto label_2c0d48;
            case 0x2C0D4Cu: goto label_2c0d4c;
            case 0x2C0D50u: goto label_2c0d50;
            case 0x2C0D54u: goto label_2c0d54;
            case 0x2C0D58u: goto label_2c0d58;
            case 0x2C0D5Cu: goto label_2c0d5c;
            case 0x2C0D60u: goto label_2c0d60;
            case 0x2C0D64u: goto label_2c0d64;
            case 0x2C0D68u: goto label_2c0d68;
            case 0x2C0D6Cu: goto label_2c0d6c;
            case 0x2C0D70u: goto label_2c0d70;
            case 0x2C0D74u: goto label_2c0d74;
            case 0x2C0D78u: goto label_2c0d78;
            case 0x2C0D7Cu: goto label_2c0d7c;
            case 0x2C0D80u: goto label_2c0d80;
            case 0x2C0D84u: goto label_2c0d84;
            case 0x2C0D88u: goto label_2c0d88;
            case 0x2C0D8Cu: goto label_2c0d8c;
            case 0x2C0D90u: goto label_2c0d90;
            case 0x2C0D94u: goto label_2c0d94;
            case 0x2C0D98u: goto label_2c0d98;
            case 0x2C0D9Cu: goto label_2c0d9c;
            case 0x2C0DA0u: goto label_2c0da0;
            case 0x2C0DA4u: goto label_2c0da4;
            case 0x2C0DA8u: goto label_2c0da8;
            case 0x2C0DACu: goto label_2c0dac;
            case 0x2C0DB0u: goto label_2c0db0;
            case 0x2C0DB4u: goto label_2c0db4;
            case 0x2C0DB8u: goto label_2c0db8;
            case 0x2C0DBCu: goto label_2c0dbc;
            case 0x2C0DC0u: goto label_2c0dc0;
            case 0x2C0DC4u: goto label_2c0dc4;
            case 0x2C0DC8u: goto label_2c0dc8;
            case 0x2C0DCCu: goto label_2c0dcc;
            case 0x2C0DD0u: goto label_2c0dd0;
            case 0x2C0DD4u: goto label_2c0dd4;
            case 0x2C0DD8u: goto label_2c0dd8;
            case 0x2C0DDCu: goto label_2c0ddc;
            case 0x2C0DE0u: goto label_2c0de0;
            case 0x2C0DE4u: goto label_2c0de4;
            case 0x2C0DE8u: goto label_2c0de8;
            case 0x2C0DECu: goto label_2c0dec;
            case 0x2C0DF0u: goto label_2c0df0;
            case 0x2C0DF4u: goto label_2c0df4;
            case 0x2C0DF8u: goto label_2c0df8;
            case 0x2C0DFCu: goto label_2c0dfc;
            case 0x2C0E00u: goto label_2c0e00;
            case 0x2C0E04u: goto label_2c0e04;
            case 0x2C0E08u: goto label_2c0e08;
            case 0x2C0E0Cu: goto label_2c0e0c;
            case 0x2C0E10u: goto label_2c0e10;
            case 0x2C0E14u: goto label_2c0e14;
            case 0x2C0E18u: goto label_2c0e18;
            case 0x2C0E1Cu: goto label_2c0e1c;
            case 0x2C0E20u: goto label_2c0e20;
            case 0x2C0E24u: goto label_2c0e24;
            case 0x2C0E28u: goto label_2c0e28;
            case 0x2C0E2Cu: goto label_2c0e2c;
            case 0x2C0E30u: goto label_2c0e30;
            case 0x2C0E34u: goto label_2c0e34;
            case 0x2C0E38u: goto label_2c0e38;
            case 0x2C0E3Cu: goto label_2c0e3c;
            case 0x2C0E40u: goto label_2c0e40;
            case 0x2C0E44u: goto label_2c0e44;
            case 0x2C0E48u: goto label_2c0e48;
            case 0x2C0E4Cu: goto label_2c0e4c;
            case 0x2C0E50u: goto label_2c0e50;
            case 0x2C0E54u: goto label_2c0e54;
            case 0x2C0E58u: goto label_2c0e58;
            case 0x2C0E5Cu: goto label_2c0e5c;
            case 0x2C0E60u: goto label_2c0e60;
            case 0x2C0E64u: goto label_2c0e64;
            case 0x2C0E68u: goto label_2c0e68;
            case 0x2C0E6Cu: goto label_2c0e6c;
            case 0x2C0E70u: goto label_2c0e70;
            case 0x2C0E74u: goto label_2c0e74;
            case 0x2C0E78u: goto label_2c0e78;
            case 0x2C0E7Cu: goto label_2c0e7c;
            case 0x2C0E80u: goto label_2c0e80;
            case 0x2C0E84u: goto label_2c0e84;
            case 0x2C0E88u: goto label_2c0e88;
            case 0x2C0E8Cu: goto label_2c0e8c;
            case 0x2C0E90u: goto label_2c0e90;
            case 0x2C0E94u: goto label_2c0e94;
            case 0x2C0E98u: goto label_2c0e98;
            case 0x2C0E9Cu: goto label_2c0e9c;
            case 0x2C0EA0u: goto label_2c0ea0;
            case 0x2C0EA4u: goto label_2c0ea4;
            case 0x2C0EA8u: goto label_2c0ea8;
            case 0x2C0EACu: goto label_2c0eac;
            case 0x2C0EB0u: goto label_2c0eb0;
            case 0x2C0EB4u: goto label_2c0eb4;
            case 0x2C0EB8u: goto label_2c0eb8;
            case 0x2C0EBCu: goto label_2c0ebc;
            case 0x2C0EC0u: goto label_2c0ec0;
            case 0x2C0EC4u: goto label_2c0ec4;
            case 0x2C0EC8u: goto label_2c0ec8;
            case 0x2C0ECCu: goto label_2c0ecc;
            case 0x2C0ED0u: goto label_2c0ed0;
            case 0x2C0ED4u: goto label_2c0ed4;
            case 0x2C0ED8u: goto label_2c0ed8;
            case 0x2C0EDCu: goto label_2c0edc;
            case 0x2C0EE0u: goto label_2c0ee0;
            case 0x2C0EE4u: goto label_2c0ee4;
            case 0x2C0EE8u: goto label_2c0ee8;
            case 0x2C0EECu: goto label_2c0eec;
            case 0x2C0EF0u: goto label_2c0ef0;
            case 0x2C0EF4u: goto label_2c0ef4;
            case 0x2C0EF8u: goto label_2c0ef8;
            case 0x2C0EFCu: goto label_2c0efc;
            case 0x2C0F00u: goto label_2c0f00;
            case 0x2C0F04u: goto label_2c0f04;
            case 0x2C0F08u: goto label_2c0f08;
            case 0x2C0F0Cu: goto label_2c0f0c;
            case 0x2C0F10u: goto label_2c0f10;
            case 0x2C0F14u: goto label_2c0f14;
            case 0x2C0F18u: goto label_2c0f18;
            case 0x2C0F1Cu: goto label_2c0f1c;
            case 0x2C0F20u: goto label_2c0f20;
            case 0x2C0F24u: goto label_2c0f24;
            case 0x2C0F28u: goto label_2c0f28;
            case 0x2C0F2Cu: goto label_2c0f2c;
            case 0x2C0F30u: goto label_2c0f30;
            case 0x2C0F34u: goto label_2c0f34;
            case 0x2C0F38u: goto label_2c0f38;
            case 0x2C0F3Cu: goto label_2c0f3c;
            case 0x2C0F40u: goto label_2c0f40;
            case 0x2C0F44u: goto label_2c0f44;
            case 0x2C0F48u: goto label_2c0f48;
            case 0x2C0F4Cu: goto label_2c0f4c;
            case 0x2C0F50u: goto label_2c0f50;
            case 0x2C0F54u: goto label_2c0f54;
            case 0x2C0F58u: goto label_2c0f58;
            case 0x2C0F5Cu: goto label_2c0f5c;
            case 0x2C0F60u: goto label_2c0f60;
            case 0x2C0F64u: goto label_2c0f64;
            case 0x2C0F68u: goto label_2c0f68;
            case 0x2C0F6Cu: goto label_2c0f6c;
            case 0x2C0F70u: goto label_2c0f70;
            case 0x2C0F74u: goto label_2c0f74;
            case 0x2C0F78u: goto label_2c0f78;
            case 0x2C0F7Cu: goto label_2c0f7c;
            case 0x2C0F80u: goto label_2c0f80;
            case 0x2C0F84u: goto label_2c0f84;
            case 0x2C0F88u: goto label_2c0f88;
            case 0x2C0F8Cu: goto label_2c0f8c;
            case 0x2C0F90u: goto label_2c0f90;
            case 0x2C0F94u: goto label_2c0f94;
            case 0x2C0F98u: goto label_2c0f98;
            case 0x2C0F9Cu: goto label_2c0f9c;
            case 0x2C0FA0u: goto label_2c0fa0;
            case 0x2C0FA4u: goto label_2c0fa4;
            case 0x2C0FA8u: goto label_2c0fa8;
            case 0x2C0FACu: goto label_2c0fac;
            case 0x2C0FB0u: goto label_2c0fb0;
            case 0x2C0FB4u: goto label_2c0fb4;
            case 0x2C0FB8u: goto label_2c0fb8;
            case 0x2C0FBCu: goto label_2c0fbc;
            case 0x2C0FC0u: goto label_2c0fc0;
            case 0x2C0FC4u: goto label_2c0fc4;
            case 0x2C0FC8u: goto label_2c0fc8;
            case 0x2C0FCCu: goto label_2c0fcc;
            case 0x2C0FD0u: goto label_2c0fd0;
            case 0x2C0FD4u: goto label_2c0fd4;
            case 0x2C0FD8u: goto label_2c0fd8;
            case 0x2C0FDCu: goto label_2c0fdc;
            case 0x2C0FE0u: goto label_2c0fe0;
            case 0x2C0FE4u: goto label_2c0fe4;
            case 0x2C0FE8u: goto label_2c0fe8;
            case 0x2C0FECu: goto label_2c0fec;
            case 0x2C0FF0u: goto label_2c0ff0;
            case 0x2C0FF4u: goto label_2c0ff4;
            case 0x2C0FF8u: goto label_2c0ff8;
            case 0x2C0FFCu: goto label_2c0ffc;
            case 0x2C1000u: goto label_2c1000;
            case 0x2C1004u: goto label_2c1004;
            case 0x2C1008u: goto label_2c1008;
            case 0x2C100Cu: goto label_2c100c;
            case 0x2C1010u: goto label_2c1010;
            case 0x2C1014u: goto label_2c1014;
            case 0x2C1018u: goto label_2c1018;
            case 0x2C101Cu: goto label_2c101c;
            case 0x2C1020u: goto label_2c1020;
            case 0x2C1024u: goto label_2c1024;
            case 0x2C1028u: goto label_2c1028;
            case 0x2C102Cu: goto label_2c102c;
            case 0x2C1030u: goto label_2c1030;
            case 0x2C1034u: goto label_2c1034;
            case 0x2C1038u: goto label_2c1038;
            case 0x2C103Cu: goto label_2c103c;
            case 0x2C1040u: goto label_2c1040;
            default: break;
        }
        _pbRenderNode_exit_log(ctx, "epilogue1");
        return;
    }
    ctx->pc = 0x2C0C9Cu;
label_2c0c9c:
    // 0x2c0c9c: 0x40034800
    ctx->pc = 0x2c0c9cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_2c0ca0:
    // 0x2c0ca0: 0x3c02003a
    ctx->pc = 0x2c0ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2c0ca4:
    // 0x2c0ca4: 0xac4320f8
    ctx->pc = 0x2c0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8440), GPR_U32(ctx, 3));
label_2c0ca8:
    // 0x2c0ca8: 0x3c020037
    ctx->pc = 0x2c0ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0cac:
    // 0x2c0cac: 0xc44128dc
    ctx->pc = 0x2c0cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c0cb0:
    // 0x2c0cb0: 0x44800000
    ctx->pc = 0x2c0cb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2c0cb4:
    // 0x2c0cb4: 0x46010036
    ctx->pc = 0x2c0cb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c0cb8:
    // 0x2c0cb8: 0x0
    ctx->pc = 0x2c0cb8u;
    // NOP
label_2c0cbc:
    // 0x2c0cbc: 0x45000003
label_2c0cc0:
    if (ctx->pc == 0x2C0CC0u) {
        ctx->pc = 0x2C0CC0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2C0CC4u;
        goto label_2c0cc4;
    }
    ctx->pc = 0x2C0CBCu;
    {
        const bool branch_taken_0x2c0cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0CC0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2c0cbc) {
            ctx->pc = 0x2C0CCCu;
            goto label_2c0ccc;
        }
    }
    ctx->pc = 0x2C0CC4u;
label_2c0cc4:
    // 0x2c0cc4: 0xc0b492e
label_2c0cc8:
    if (ctx->pc == 0x2C0CC8u) {
        ctx->pc = 0x2C0CC8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28064));
        ctx->pc = 0x2C0CCCu;
        goto label_2c0ccc;
    }
    ctx->pc = 0x2C0CC4u;
    SET_GPR_U32(ctx, 31, 0x2C0CCCu);
    ctx->pc = 0x2C0CC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28064));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CCCu; }
    }
    if (ctx->pc != 0x2C0CCCu) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0CCCu;
label_2c0ccc:
    // 0x2c0ccc: 0x8e060004
    ctx->pc = 0x2c0cccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c0cd0:
    // 0x2c0cd0: 0x3a0202d
    ctx->pc = 0x2c0cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c0cd4:
    // 0x2c0cd4: 0x26250030
    ctx->pc = 0x2c0cd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
label_2c0cd8:
    // 0x2c0cd8: 0xc0b626d
label_2c0cdc:
    if (ctx->pc == 0x2C0CDCu) {
        ctx->pc = 0x2C0CDCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
        ctx->pc = 0x2C0CE0u;
        goto label_2c0ce0;
    }
    ctx->pc = 0x2C0CD8u;
    SET_GPR_U32(ctx, 31, 0x2C0CE0u);
    ctx->pc = 0x2C0CDCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CE0u; }
    }
    if (ctx->pc != 0x2C0CE0u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0CE0u;
label_2c0ce0:
    // 0x2c0ce0: 0x3c020037
    ctx->pc = 0x2c0ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0ce4:
    // 0x2c0ce4: 0xc7a0000c
    ctx->pc = 0x2c0ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c0ce8:
    // 0x2c0ce8: 0xe44028dc
    ctx->pc = 0x2c0ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 10460), bits); }
label_2c0cec:
    // 0x2c0cec: 0x3c020037
    ctx->pc = 0x2c0cecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0cf0:
    // 0x2c0cf0: 0xac4028e0
    ctx->pc = 0x2c0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10464), GPR_U32(ctx, 0));
label_2c0cf4:
    // 0x2c0cf4: 0x3c03003d
    ctx->pc = 0x2c0cf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
label_2c0cf8:
    // 0x2c0cf8: 0x24020001
    ctx->pc = 0x2c0cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c0cfc:
    // 0x2c0cfc: 0xac62b800
    ctx->pc = 0x2c0cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948864), GPR_U32(ctx, 2));
label_2c0d00:
    // 0x2c0d00: 0x40044800
    ctx->pc = 0x2c0d00u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
label_2c0d04:
    // 0x2c0d04: 0x3c03003a
    ctx->pc = 0x2c0d04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2c0d08:
    // 0x2c0d08: 0x24632050
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8272));
label_2c0d0c:
    // 0x2c0d0c: 0x8c6200a8
    ctx->pc = 0x2c0d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_2c0d10:
    // 0x2c0d10: 0x822023
    ctx->pc = 0x2c0d10u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c0d14:
    // 0x2c0d14: 0x8c6200a0
    ctx->pc = 0x2c0d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_2c0d18:
    // 0x2c0d18: 0x822021
    ctx->pc = 0x2c0d18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c0d1c:
    // 0x2c0d1c: 0xac6400a0
    ctx->pc = 0x2c0d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
label_2c0d20:
    // 0x2c0d20: 0x8c6200a4
    ctx->pc = 0x2c0d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2c0d24:
    // 0x2c0d24: 0x24420001
    ctx->pc = 0x2c0d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0d28:
    // 0x2c0d28: 0x100000bf
label_2c0d2c:
    if (ctx->pc == 0x2C0D2Cu) {
        ctx->pc = 0x2C0D2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0D30u;
        goto label_2c0d30;
    }
    ctx->pc = 0x2C0D28u;
    {
        const bool branch_taken_0x2c0d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0D2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0d28) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0D30u;
label_2c0d30:
    // 0x2c0d30: 0x3c03003d
    ctx->pc = 0x2c0d30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
label_2c0d34:
    // 0x2c0d34: 0x2463b100
    ctx->pc = 0x2c0d34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947072));
label_2c0d38:
    // 0x2c0d38: 0x3c02003d
    ctx->pc = 0x2c0d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c0d3c:
    // 0x2c0d3c: 0x8c42a0f0
    ctx->pc = 0x2c0d3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294942960)));
label_2c0d40:
    // 0x2c0d40: 0x21080
    ctx->pc = 0x2c0d40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2c0d44:
    // 0x2c0d44: 0x431021
    ctx->pc = 0x2c0d44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c0d48:
    // 0x2c0d48: 0x8c460000
    ctx->pc = 0x2c0d48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c0d4c:
    // 0x2c0d4c: 0x240202d
    ctx->pc = 0x2c0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d50:
    // 0x2c0d50: 0x220282d
    ctx->pc = 0x2c0d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d54:
    // 0x2c0d54: 0xc0b21d2
label_2c0d58:
    if (ctx->pc == 0x2C0D58u) {
        ctx->pc = 0x2C0D58u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2C0D5Cu;
        goto label_2c0d5c;
    }
    ctx->pc = 0x2C0D54u;
    SET_GPR_U32(ctx, 31, 0x2C0D5Cu);
    ctx->pc = 0x2C0D58u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x2C8748u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawObjectTest_0x2c8748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D5Cu; }
    }
    if (ctx->pc != 0x2C0D5Cu) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0D5Cu;
label_2c0d5c:
    // 0x2c0d5c: 0x1040002e
label_2c0d60:
    if (ctx->pc == 0x2C0D60u) {
        ctx->pc = 0x2C0D60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2C0D64u;
        goto label_2c0d64;
    }
    ctx->pc = 0x2C0D5Cu;
    {
        const bool branch_taken_0x2c0d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0D60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2c0d5c) {
            ctx->pc = 0x2C0E18u;
            goto label_2c0e18;
        }
    }
    ctx->pc = 0x2C0D64u;
label_2c0d64:
    // 0x2c0d64: 0xc44c28dc
    ctx->pc = 0x2c0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c0d68:
    // 0x2c0d68: 0x44800000
    ctx->pc = 0x2c0d68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2c0d6c:
    // 0x2c0d6c: 0x460c0036
    ctx->pc = 0x2c0d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c0d70:
    // 0x2c0d70: 0x0
    ctx->pc = 0x2c0d70u;
    // NOP
label_2c0d74:
    // 0x2c0d74: 0x4500000c
label_2c0d78:
    if (ctx->pc == 0x2C0D78u) {
        ctx->pc = 0x2C0D78u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        ctx->pc = 0x2C0D7Cu;
        goto label_2c0d7c;
    }
    ctx->pc = 0x2C0D74u;
    {
        const bool branch_taken_0x2c0d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0D78u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2c0d74) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D7Cu;
label_2c0d7c:
    // 0x2c0d7c: 0x240202d
    ctx->pc = 0x2c0d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d80:
    // 0x2c0d80: 0x220282d
    ctx->pc = 0x2c0d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0d84:
    // 0x2c0d84: 0xc60d28e0
    ctx->pc = 0x2c0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2c0d88:
    // 0x2c0d88: 0xc0b214e
label_2c0d8c:
    if (ctx->pc == 0x2C0D8Cu) {
        ctx->pc = 0x2C0D8Cu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2C0D90u;
        goto label_2c0d90;
    }
    ctx->pc = 0x2C0D88u;
    SET_GPR_U32(ctx, 31, 0x2C0D90u);
    ctx->pc = 0x2C0D8Cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x2C8538u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetupObject_0x2c8538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D90u; }
    }
    if (ctx->pc != 0x2C0D90u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0D90u;
label_2c0d90:
    // 0x2c0d90: 0xc60028e0
    ctx->pc = 0x2c0d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c0d94:
    // 0x2c0d94: 0x3c013f80
    ctx->pc = 0x2c0d94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2c0d98:
    // 0x2c0d98: 0x44810800
    ctx->pc = 0x2c0d98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2c0d9c:
    // 0x2c0d9c: 0x46010001
    ctx->pc = 0x2c0d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c0da0:
    // 0x2c0da0: 0x10000007
label_2c0da4:
    if (ctx->pc == 0x2C0DA4u) {
        ctx->pc = 0x2C0DA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10464), bits); }
        ctx->pc = 0x2C0DA8u;
        goto label_2c0da8;
    }
    ctx->pc = 0x2C0DA0u;
    {
        const bool branch_taken_0x2c0da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0DA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10464), bits); }
        if (branch_taken_0x2c0da0) {
            ctx->pc = 0x2C0DC0u;
            goto label_2c0dc0;
        }
    }
    ctx->pc = 0x2C0DA8u;
label_2c0da8:
    // 0x2c0da8: 0x240202d
    ctx->pc = 0x2c0da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0dac:
    // 0x2c0dac: 0x220282d
    ctx->pc = 0x2c0dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0db0:
    // 0x2c0db0: 0x44806000
    ctx->pc = 0x2c0db0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_2c0db4:
    // 0x2c0db4: 0x46006346
    ctx->pc = 0x2c0db4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c0db8:
    // 0x2c0db8: 0xc0b214e
label_2c0dbc:
    if (ctx->pc == 0x2C0DBCu) {
        ctx->pc = 0x2C0DBCu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2C0DC0u;
        goto label_2c0dc0;
    }
    ctx->pc = 0x2C0DB8u;
    SET_GPR_U32(ctx, 31, 0x2C0DC0u);
    ctx->pc = 0x2C0DBCu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x2C8538u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetupObject_0x2c8538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DC0u; }
    }
    if (ctx->pc != 0x2C0DC0u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0DC0u;
label_2c0dc0:
    // 0x2c0dc0: 0x8e430074
    ctx->pc = 0x2c0dc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_2c0dc4:
    // 0x2c0dc4: 0x10600099
label_2c0dc8:
    if (ctx->pc == 0x2C0DC8u) {
        ctx->pc = 0x2C0DC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0DCCu;
        goto label_2c0dcc;
    }
    ctx->pc = 0x2C0DC4u;
    {
        const bool branch_taken_0x2c0dc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0DC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0dc4) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0DCCu;
label_2c0dcc:
    // 0x2c0dcc: 0x8c620060
    ctx->pc = 0x2c0dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2c0dd0:
    // 0x2c0dd0: 0x30420001
    ctx->pc = 0x2c0dd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2c0dd4:
    // 0x2c0dd4: 0x54400006
label_2c0dd8:
    if (ctx->pc == 0x2C0DD8u) {
        ctx->pc = 0x2C0DD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x2C0DDCu;
        goto label_2c0ddc;
    }
    ctx->pc = 0x2C0DD4u;
    {
        const bool branch_taken_0x2c0dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c0dd4) {
            ctx->pc = 0x2C0DD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 116)));
            ctx->pc = 0x2C0DF0u;
            goto label_2c0df0;
        }
    }
    ctx->pc = 0x2C0DDCu;
label_2c0ddc:
    // 0x2c0ddc: 0x80630052
    ctx->pc = 0x2c0ddcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 82)));
label_2c0de0:
    // 0x2c0de0: 0x24020001
    ctx->pc = 0x2c0de0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c0de4:
    // 0x2c0de4: 0x14620092
label_2c0de8:
    if (ctx->pc == 0x2C0DE8u) {
        ctx->pc = 0x2C0DE8u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2C0DECu;
        goto label_2c0dec;
    }
    ctx->pc = 0x2C0DE4u;
    {
        const bool branch_taken_0x2c0de4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C0DE8u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2c0de4) {
            ctx->pc = 0x2C1030u;
            goto label_2c1030;
        }
    }
    ctx->pc = 0x2C0DECu;
label_2c0dec:
    // 0x2c0dec: 0x8e420074
    ctx->pc = 0x2c0decu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_2c0df0:
    // 0x2c0df0: 0x94440050
    ctx->pc = 0x2c0df0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2c0df4:
    // 0x2c0df4: 0xc0b020a
label_2c0df8:
    if (ctx->pc == 0x2C0DF8u) {
        ctx->pc = 0x2C0DF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C0DFCu;
        goto label_2c0dfc;
    }
    ctx->pc = 0x2C0DF4u;
    SET_GPR_U32(ctx, 31, 0x2C0DFCu);
    ctx->pc = 0x2C0DF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C0828u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetVis_0x2c0828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DFCu; }
    }
    if (ctx->pc != 0x2C0DFCu) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0DFCu;
label_2c0dfc:
    // 0x2c0dfc: 0x1000008b
label_2c0e00:
    if (ctx->pc == 0x2C0E00u) {
        ctx->pc = 0x2C0E00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0E04u;
        goto label_2c0e04;
    }
    ctx->pc = 0x2C0DFCu;
    {
        const bool branch_taken_0x2c0dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0dfc) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0E04u;
label_2c0e04:
    // 0x2c0e04: 0x240202d
    ctx->pc = 0x2c0e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0e08:
    // 0x2c0e08: 0xc0b3222
label_2c0e0c:
    if (ctx->pc == 0x2C0E0Cu) {
        ctx->pc = 0x2C0E0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E10u;
        goto label_2c0e10;
    }
    ctx->pc = 0x2C0E08u;
    SET_GPR_U32(ctx, 31, 0x2C0E10u);
    ctx->pc = 0x2C0E0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CC888u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawPsysTest_0x2cc888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E10u; }
    }
    if (ctx->pc != 0x2C0E10u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0E10u;
label_2c0e10:
    // 0x2c0e10: 0x14400006
label_2c0e14:
    if (ctx->pc == 0x2C0E14u) {
        ctx->pc = 0x2C0E14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2C0E18u;
        goto label_2c0e18;
    }
    ctx->pc = 0x2C0E10u;
    {
        const bool branch_taken_0x2c0e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2c0e10) {
            ctx->pc = 0x2C0E2Cu;
            goto label_2c0e2c;
        }
    }
    ctx->pc = 0x2C0E18u;
label_2c0e18:
    // 0x2c0e18: 0x3c030037
    ctx->pc = 0x2c0e18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2c0e1c:
    // 0x2c0e1c: 0x8c6228d8
    ctx->pc = 0x2c0e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10456)));
label_2c0e20:
    // 0x2c0e20: 0x24420001
    ctx->pc = 0x2c0e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0e24:
    // 0x2c0e24: 0x10000080
label_2c0e28:
    if (ctx->pc == 0x2C0E28u) {
        ctx->pc = 0x2C0E28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 10456), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0E2Cu;
        goto label_2c0e2c;
    }
    ctx->pc = 0x2C0E24u;
    {
        const bool branch_taken_0x2c0e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 10456), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0e24) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0E2Cu;
label_2c0e2c:
    // 0x2c0e2c: 0x8c4228cc
    ctx->pc = 0x2c0e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10444)));
label_2c0e30:
    // 0x2c0e30: 0x1040007d
label_2c0e34:
    if (ctx->pc == 0x2C0E34u) {
        ctx->pc = 0x2C0E34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E38u;
        goto label_2c0e38;
    }
    ctx->pc = 0x2C0E30u;
    {
        const bool branch_taken_0x2c0e30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e30) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0E38u;
label_2c0e38:
    // 0x2c0e38: 0xc0b3206
label_2c0e3c:
    if (ctx->pc == 0x2C0E3Cu) {
        ctx->pc = 0x2C0E3Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E40u;
        goto label_2c0e40;
    }
    ctx->pc = 0x2C0E38u;
    SET_GPR_U32(ctx, 31, 0x2C0E40u);
    ctx->pc = 0x2C0E3Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CC818u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTraversePsys_0x2cc818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E40u; }
    }
    if (ctx->pc != 0x2C0E40u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0E40u;
label_2c0e40:
    // 0x2c0e40: 0x1000007a
label_2c0e44:
    if (ctx->pc == 0x2C0E44u) {
        ctx->pc = 0x2C0E44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0E48u;
        goto label_2c0e48;
    }
    ctx->pc = 0x2C0E40u;
    {
        const bool branch_taken_0x2c0e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0e40) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0E48u;
label_2c0e48:
    // 0x2c0e48: 0x3c020037
    ctx->pc = 0x2c0e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0e4c:
    // 0x2c0e4c: 0x8c4228d0
    ctx->pc = 0x2c0e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10448)));
label_2c0e50:
    // 0x2c0e50: 0x10400076
label_2c0e54:
    if (ctx->pc == 0x2C0E54u) {
        ctx->pc = 0x2C0E54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0E58u;
        goto label_2c0e58;
    }
    ctx->pc = 0x2C0E50u;
    {
        const bool branch_taken_0x2c0e50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0e50) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0E58u;
label_2c0e58:
    // 0x2c0e58: 0x40114800
    ctx->pc = 0x2c0e58u;
    SET_GPR_U32(ctx, 17, ctx->cop0_count);
label_2c0e5c:
    // 0x2c0e5c: 0x3c10003a
    ctx->pc = 0x2c0e5cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2c0e60:
    // 0x2c0e60: 0x26102050
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8272));
label_2c0e64:
    // 0x2c0e64: 0xc0b2048
label_2c0e68:
    if (ctx->pc == 0x2C0E68u) {
        ctx->pc = 0x2C0E68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 17));
        ctx->pc = 0x2C0E6Cu;
        goto label_2c0e6c;
    }
    ctx->pc = 0x2C0E64u;
    SET_GPR_U32(ctx, 31, 0x2C0E6Cu);
    ctx->pc = 0x2C0E68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 17));
    ctx->pc = 0x2C8120u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSortObjects_0x2c8120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E6Cu; }
    }
    if (ctx->pc != 0x2C0E6Cu) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0E6Cu;
label_2c0e6c:
    // 0x2c0e6c: 0x8e0200b8
    ctx->pc = 0x2c0e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2c0e70:
    // 0x2c0e70: 0x2228823
    ctx->pc = 0x2c0e70u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0e74:
    // 0x2c0e74: 0x8e0200b0
    ctx->pc = 0x2c0e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2c0e78:
    // 0x2c0e78: 0x2228821
    ctx->pc = 0x2c0e78u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0e7c:
    // 0x2c0e7c: 0xae1100b0
    ctx->pc = 0x2c0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
label_2c0e80:
    // 0x2c0e80: 0x8e0200b4
    ctx->pc = 0x2c0e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_2c0e84:
    // 0x2c0e84: 0x24420001
    ctx->pc = 0x2c0e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0e88:
    // 0x2c0e88: 0x10000067
label_2c0e8c:
    if (ctx->pc == 0x2C0E8Cu) {
        ctx->pc = 0x2C0E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0E90u;
        goto label_2c0e90;
    }
    ctx->pc = 0x2C0E88u;
    {
        const bool branch_taken_0x2c0e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0e88) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0E90u;
label_2c0e90:
    // 0x2c0e90: 0x3c020037
    ctx->pc = 0x2c0e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0e94:
    // 0x2c0e94: 0x8c4228d4
    ctx->pc = 0x2c0e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10452)));
label_2c0e98:
    // 0x2c0e98: 0x10400064
label_2c0e9c:
    if (ctx->pc == 0x2C0E9Cu) {
        ctx->pc = 0x2C0E9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0EA0u;
        goto label_2c0ea0;
    }
    ctx->pc = 0x2C0E98u;
    {
        const bool branch_taken_0x2c0e98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0E9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0e98) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0EA0u;
label_2c0ea0:
    // 0x2c0ea0: 0x40114800
    ctx->pc = 0x2c0ea0u;
    SET_GPR_U32(ctx, 17, ctx->cop0_count);
label_2c0ea4:
    // 0x2c0ea4: 0x3c10003a
    ctx->pc = 0x2c0ea4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2c0ea8:
    // 0x2c0ea8: 0x26102050
    ctx->pc = 0x2c0ea8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8272));
label_2c0eac:
    // 0x2c0eac: 0xc0b204e
label_2c0eb0:
    if (ctx->pc == 0x2C0EB0u) {
        ctx->pc = 0x2C0EB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 17));
        ctx->pc = 0x2C0EB4u;
        goto label_2c0eb4;
    }
    ctx->pc = 0x2C0EACu;
    SET_GPR_U32(ctx, 31, 0x2C0EB4u);
    ctx->pc = 0x2C0EB0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 17));
    ctx->pc = 0x2C8138u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawDistObjects_0x2c8138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EB4u; }
    }
    if (ctx->pc != 0x2C0EB4u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0EB4u;
label_2c0eb4:
    // 0x2c0eb4: 0x8e0200c8
    ctx->pc = 0x2c0eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_2c0eb8:
    // 0x2c0eb8: 0x2228823
    ctx->pc = 0x2c0eb8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0ebc:
    // 0x2c0ebc: 0x8e0200c0
    ctx->pc = 0x2c0ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2c0ec0:
    // 0x2c0ec0: 0x2228821
    ctx->pc = 0x2c0ec0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0ec4:
    // 0x2c0ec4: 0xae1100c0
    ctx->pc = 0x2c0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 17));
label_2c0ec8:
    // 0x2c0ec8: 0x8e0200c4
    ctx->pc = 0x2c0ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2c0ecc:
    // 0x2c0ecc: 0x24420001
    ctx->pc = 0x2c0eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0ed0:
    // 0x2c0ed0: 0x10000055
label_2c0ed4:
    if (ctx->pc == 0x2C0ED4u) {
        ctx->pc = 0x2C0ED4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0ED8u;
        goto label_2c0ed8;
    }
    ctx->pc = 0x2C0ED0u;
    {
        const bool branch_taken_0x2c0ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0ED4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0ed0) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0ED8u;
label_2c0ed8:
    // 0x2c0ed8: 0x3c020037
    ctx->pc = 0x2c0ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0edc:
    // 0x2c0edc: 0x8c4228cc
    ctx->pc = 0x2c0edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10444)));
label_2c0ee0:
    // 0x2c0ee0: 0x10400052
label_2c0ee4:
    if (ctx->pc == 0x2C0EE4u) {
        ctx->pc = 0x2C0EE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0EE8u;
        goto label_2c0ee8;
    }
    ctx->pc = 0x2C0EE0u;
    {
        const bool branch_taken_0x2c0ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0EE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0ee0) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0EE8u;
label_2c0ee8:
    // 0x2c0ee8: 0x40114800
    ctx->pc = 0x2c0ee8u;
    SET_GPR_U32(ctx, 17, ctx->cop0_count);
label_2c0eec:
    // 0x2c0eec: 0x3c10003a
    ctx->pc = 0x2c0eecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2c0ef0:
    // 0x2c0ef0: 0x26102050
    ctx->pc = 0x2c0ef0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8272));
label_2c0ef4:
    // 0x2c0ef4: 0xc0b2054
label_2c0ef8:
    if (ctx->pc == 0x2C0EF8u) {
        ctx->pc = 0x2C0EF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
        ctx->pc = 0x2C0EFCu;
        goto label_2c0efc;
    }
    ctx->pc = 0x2C0EF4u;
    SET_GPR_U32(ctx, 31, 0x2C0EFCu);
    ctx->pc = 0x2C0EF8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
    ctx->pc = 0x2C8150u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawPsysObjects_0x2c8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EFCu; }
    }
    if (ctx->pc != 0x2C0EFCu) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0EFCu;
label_2c0efc:
    // 0x2c0efc: 0x8e0200e8
    ctx->pc = 0x2c0efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_2c0f00:
    // 0x2c0f00: 0x2228823
    ctx->pc = 0x2c0f00u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0f04:
    // 0x2c0f04: 0x8e0200e0
    ctx->pc = 0x2c0f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_2c0f08:
    // 0x2c0f08: 0x2228821
    ctx->pc = 0x2c0f08u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0f0c:
    // 0x2c0f0c: 0xae1100e0
    ctx->pc = 0x2c0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 17));
label_2c0f10:
    // 0x2c0f10: 0x8e0200e4
    ctx->pc = 0x2c0f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_2c0f14:
    // 0x2c0f14: 0x24420001
    ctx->pc = 0x2c0f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0f18:
    // 0x2c0f18: 0x10000043
label_2c0f1c:
    if (ctx->pc == 0x2C0F1Cu) {
        ctx->pc = 0x2C0F1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0F20u;
        goto label_2c0f20;
    }
    ctx->pc = 0x2C0F18u;
    {
        const bool branch_taken_0x2c0f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0F1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0f18) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0F20u;
label_2c0f20:
    // 0x2c0f20: 0x3c020037
    ctx->pc = 0x2c0f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0f24:
    // 0x2c0f24: 0x8c4228c8
    ctx->pc = 0x2c0f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10440)));
label_2c0f28:
    // 0x2c0f28: 0x10400040
label_2c0f2c:
    if (ctx->pc == 0x2C0F2Cu) {
        ctx->pc = 0x2C0F2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0F30u;
        goto label_2c0f30;
    }
    ctx->pc = 0x2C0F28u;
    {
        const bool branch_taken_0x2c0f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0F2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0f28) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0F30u;
label_2c0f30:
    // 0x2c0f30: 0x40114800
    ctx->pc = 0x2c0f30u;
    SET_GPR_U32(ctx, 17, ctx->cop0_count);
label_2c0f34:
    // 0x2c0f34: 0x3c10003a
    ctx->pc = 0x2c0f34u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2c0f38:
    // 0x2c0f38: 0x26102050
    ctx->pc = 0x2c0f38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8272));
label_2c0f3c:
    // 0x2c0f3c: 0xae1100f8
    ctx->pc = 0x2c0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 17));
label_2c0f40:
    // 0x2c0f40: 0xc0b3b5a
label_2c0f44:
    if (ctx->pc == 0x2C0F44u) {
        ctx->pc = 0x2C0F44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F48u;
        goto label_2c0f48;
    }
    ctx->pc = 0x2C0F40u;
    SET_GPR_U32(ctx, 31, 0x2C0F48u);
    ctx->pc = 0x2C0F44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawPolyInsts_0x2ced68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F48u; }
    }
    if (ctx->pc != 0x2C0F48u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0F48u;
label_2c0f48:
    // 0x2c0f48: 0x8e0200f8
    ctx->pc = 0x2c0f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_2c0f4c:
    // 0x2c0f4c: 0x2228823
    ctx->pc = 0x2c0f4cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0f50:
    // 0x2c0f50: 0x8e0200f0
    ctx->pc = 0x2c0f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2c0f54:
    // 0x2c0f54: 0x2228821
    ctx->pc = 0x2c0f54u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0f58:
    // 0x2c0f58: 0xae1100f0
    ctx->pc = 0x2c0f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
label_2c0f5c:
    // 0x2c0f5c: 0x8e0200f4
    ctx->pc = 0x2c0f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_2c0f60:
    // 0x2c0f60: 0x24420001
    ctx->pc = 0x2c0f60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0f64:
    // 0x2c0f64: 0x10000030
label_2c0f68:
    if (ctx->pc == 0x2C0F68u) {
        ctx->pc = 0x2C0F68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0F6Cu;
        goto label_2c0f6c;
    }
    ctx->pc = 0x2C0F64u;
    {
        const bool branch_taken_0x2c0f64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0F68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0f64) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0F6Cu;
label_2c0f6c:
    // 0x2c0f6c: 0x3c020037
    ctx->pc = 0x2c0f6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0f70:
    // 0x2c0f70: 0x8c4228c0
    ctx->pc = 0x2c0f70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10432)));
label_2c0f74:
    // 0x2c0f74: 0x1040002d
label_2c0f78:
    if (ctx->pc == 0x2C0F78u) {
        ctx->pc = 0x2C0F78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0F7Cu;
        goto label_2c0f7c;
    }
    ctx->pc = 0x2C0F74u;
    {
        const bool branch_taken_0x2c0f74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0F78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0f74) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0F7Cu;
label_2c0f7c:
    // 0x2c0f7c: 0x40114800
    ctx->pc = 0x2c0f7cu;
    SET_GPR_U32(ctx, 17, ctx->cop0_count);
label_2c0f80:
    // 0x2c0f80: 0x3c10003a
    ctx->pc = 0x2c0f80u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2c0f84:
    // 0x2c0f84: 0x26102050
    ctx->pc = 0x2c0f84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8272));
label_2c0f88:
    // 0x2c0f88: 0xae110108
    ctx->pc = 0x2c0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 17));
label_2c0f8c:
    // 0x2c0f8c: 0xc0b09f6
label_2c0f90:
    if (ctx->pc == 0x2C0F90u) {
        ctx->pc = 0x2C0F90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F94u;
        goto label_2c0f94;
    }
    ctx->pc = 0x2C0F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C0F94u);
    ctx->pc = 0x2C0F90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C27D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawBlits_0x2c27d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F94u; }
    }
    if (ctx->pc != 0x2C0F94u) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0F94u;
label_2c0f94:
    // 0x2c0f94: 0x8e020108
    ctx->pc = 0x2c0f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2c0f98:
    // 0x2c0f98: 0x2228823
    ctx->pc = 0x2c0f98u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0f9c:
    // 0x2c0f9c: 0x8e020100
    ctx->pc = 0x2c0f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2c0fa0:
    // 0x2c0fa0: 0x2228821
    ctx->pc = 0x2c0fa0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0fa4:
    // 0x2c0fa4: 0xae110100
    ctx->pc = 0x2c0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 17));
label_2c0fa8:
    // 0x2c0fa8: 0x8e020104
    ctx->pc = 0x2c0fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2c0fac:
    // 0x2c0fac: 0x24420001
    ctx->pc = 0x2c0facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0fb0:
    // 0x2c0fb0: 0x1000001d
label_2c0fb4:
    if (ctx->pc == 0x2C0FB4u) {
        ctx->pc = 0x2C0FB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0FB8u;
        goto label_2c0fb8;
    }
    ctx->pc = 0x2C0FB0u;
    {
        const bool branch_taken_0x2c0fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0FB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0fb0) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C0FB8u;
label_2c0fb8:
    // 0x2c0fb8: 0x3c020037
    ctx->pc = 0x2c0fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c0fbc:
    // 0x2c0fbc: 0x8c4228c4
    ctx->pc = 0x2c0fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10436)));
label_2c0fc0:
    // 0x2c0fc0: 0x1040001a
label_2c0fc4:
    if (ctx->pc == 0x2C0FC4u) {
        ctx->pc = 0x2C0FC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2C0FC8u;
        goto label_2c0fc8;
    }
    ctx->pc = 0x2C0FC0u;
    {
        const bool branch_taken_0x2c0fc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0FC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c0fc0) {
            ctx->pc = 0x2C102Cu;
            goto label_2c102c;
        }
    }
    ctx->pc = 0x2C0FC8u;
label_2c0fc8:
    // 0x2c0fc8: 0x40114800
    ctx->pc = 0x2c0fc8u;
    SET_GPR_U32(ctx, 17, ctx->cop0_count);
label_2c0fcc:
    // 0x2c0fcc: 0x3c10003a
    ctx->pc = 0x2c0fccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2c0fd0:
    // 0x2c0fd0: 0x26102050
    ctx->pc = 0x2c0fd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8272));
label_2c0fd4:
    // 0x2c0fd4: 0xc0b1462
label_2c0fd8:
    if (ctx->pc == 0x2C0FD8u) {
        ctx->pc = 0x2C0FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 17));
        ctx->pc = 0x2C0FDCu;
        goto label_2c0fdc;
    }
    ctx->pc = 0x2C0FD4u;
    SET_GPR_U32(ctx, 31, 0x2C0FDCu);
    ctx->pc = 0x2C0FD8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 17));
    ctx->pc = 0x2C5188u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRenderText_0x2c5188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FDCu; }
    }
    if (ctx->pc != 0x2C0FDCu) { _pbRenderNode_exit_log(ctx, "early"); return; }
    ctx->pc = 0x2C0FDCu;
label_2c0fdc:
    // 0x2c0fdc: 0x8e020098
    ctx->pc = 0x2c0fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2c0fe0:
    // 0x2c0fe0: 0x2228823
    ctx->pc = 0x2c0fe0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0fe4:
    // 0x2c0fe4: 0x8e020090
    ctx->pc = 0x2c0fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2c0fe8:
    // 0x2c0fe8: 0x2228821
    ctx->pc = 0x2c0fe8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c0fec:
    // 0x2c0fec: 0xae110090
    ctx->pc = 0x2c0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
label_2c0ff0:
    // 0x2c0ff0: 0x8e020094
    ctx->pc = 0x2c0ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2c0ff4:
    // 0x2c0ff4: 0x24420001
    ctx->pc = 0x2c0ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2c0ff8:
    // 0x2c0ff8: 0x1000000b
label_2c0ffc:
    if (ctx->pc == 0x2C0FFCu) {
        ctx->pc = 0x2C0FFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1000u;
        goto label_2c1000;
    }
    ctx->pc = 0x2C0FF8u;
    {
        const bool branch_taken_0x2c0ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0FFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        if (branch_taken_0x2c0ff8) {
            ctx->pc = 0x2C1028u;
            goto label_2c1028;
        }
    }
    ctx->pc = 0x2C1000u;
label_2c1000:
    // 0x2c1000: 0x3c04003d
    ctx->pc = 0x2c1000u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
label_2c1004:
    // 0x2c1004: 0x2484b100
    ctx->pc = 0x2c1004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947072));
label_2c1008:
    // 0x2c1008: 0x3c02003d
    ctx->pc = 0x2c1008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c100c:
    // 0x2c100c: 0x8c43a0f0
    ctx->pc = 0x2c100cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942960)));
label_2c1010:
    // 0x2c1010: 0x31880
    ctx->pc = 0x2c1010u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2c1014:
    // 0x2c1014: 0x641821
    ctx->pc = 0x2c1014u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c1018:
    // 0x2c1018: 0x8c620000
    ctx->pc = 0x2c1018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c101c:
    // 0x2c101c: 0x2404fffe
    ctx->pc = 0x2c101cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2c1020:
    // 0x2c1020: 0x441024
    ctx->pc = 0x2c1020u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c1024:
    // 0x2c1024: 0xac620000
    ctx->pc = 0x2c1024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c1028:
    // 0x2c1028: 0xdfbf0050
    ctx->pc = 0x2c1028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c102c:
    // 0x2c102c: 0xdfb30040
    ctx->pc = 0x2c102cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1030:
    // 0x2c1030: 0xdfb20030
    ctx->pc = 0x2c1030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1034:
    // 0x2c1034: 0xdfb10020
    ctx->pc = 0x2c1034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1038:
    // 0x2c1038: 0xdfb00010
    ctx->pc = 0x2c1038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c103c:
    // 0x2c103c: 0x3e00008
label_2c1040:
    if (ctx->pc == 0x2C1040u) {
        ctx->pc = 0x2C1040u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C1044u;
        goto label_fallthrough_0x2c103c;
    }
    ctx->pc = 0x2C103Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1040u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0C18u: goto label_2c0c18;
            case 0x2C0C1Cu: goto label_2c0c1c;
            case 0x2C0C20u: goto label_2c0c20;
            case 0x2C0C24u: goto label_2c0c24;
            case 0x2C0C28u: goto label_2c0c28;
            case 0x2C0C2Cu: goto label_2c0c2c;
            case 0x2C0C30u: goto label_2c0c30;
            case 0x2C0C34u: goto label_2c0c34;
            case 0x2C0C38u: goto label_2c0c38;
            case 0x2C0C3Cu: goto label_2c0c3c;
            case 0x2C0C40u: goto label_2c0c40;
            case 0x2C0C44u: goto label_2c0c44;
            case 0x2C0C48u: goto label_2c0c48;
            case 0x2C0C4Cu: goto label_2c0c4c;
            case 0x2C0C50u: goto label_2c0c50;
            case 0x2C0C54u: goto label_2c0c54;
            case 0x2C0C58u: goto label_2c0c58;
            case 0x2C0C5Cu: goto label_2c0c5c;
            case 0x2C0C60u: goto label_2c0c60;
            case 0x2C0C64u: goto label_2c0c64;
            case 0x2C0C68u: goto label_2c0c68;
            case 0x2C0C6Cu: goto label_2c0c6c;
            case 0x2C0C70u: goto label_2c0c70;
            case 0x2C0C74u: goto label_2c0c74;
            case 0x2C0C78u: goto label_2c0c78;
            case 0x2C0C7Cu: goto label_2c0c7c;
            case 0x2C0C80u: goto label_2c0c80;
            case 0x2C0C84u: goto label_2c0c84;
            case 0x2C0C88u: goto label_2c0c88;
            case 0x2C0C8Cu: goto label_2c0c8c;
            case 0x2C0C90u: goto label_2c0c90;
            case 0x2C0C94u: goto label_2c0c94;
            case 0x2C0C98u: goto label_2c0c98;
            case 0x2C0C9Cu: goto label_2c0c9c;
            case 0x2C0CA0u: goto label_2c0ca0;
            case 0x2C0CA4u: goto label_2c0ca4;
            case 0x2C0CA8u: goto label_2c0ca8;
            case 0x2C0CACu: goto label_2c0cac;
            case 0x2C0CB0u: goto label_2c0cb0;
            case 0x2C0CB4u: goto label_2c0cb4;
            case 0x2C0CB8u: goto label_2c0cb8;
            case 0x2C0CBCu: goto label_2c0cbc;
            case 0x2C0CC0u: goto label_2c0cc0;
            case 0x2C0CC4u: goto label_2c0cc4;
            case 0x2C0CC8u: goto label_2c0cc8;
            case 0x2C0CCCu: goto label_2c0ccc;
            case 0x2C0CD0u: goto label_2c0cd0;
            case 0x2C0CD4u: goto label_2c0cd4;
            case 0x2C0CD8u: goto label_2c0cd8;
            case 0x2C0CDCu: goto label_2c0cdc;
            case 0x2C0CE0u: goto label_2c0ce0;
            case 0x2C0CE4u: goto label_2c0ce4;
            case 0x2C0CE8u: goto label_2c0ce8;
            case 0x2C0CECu: goto label_2c0cec;
            case 0x2C0CF0u: goto label_2c0cf0;
            case 0x2C0CF4u: goto label_2c0cf4;
            case 0x2C0CF8u: goto label_2c0cf8;
            case 0x2C0CFCu: goto label_2c0cfc;
            case 0x2C0D00u: goto label_2c0d00;
            case 0x2C0D04u: goto label_2c0d04;
            case 0x2C0D08u: goto label_2c0d08;
            case 0x2C0D0Cu: goto label_2c0d0c;
            case 0x2C0D10u: goto label_2c0d10;
            case 0x2C0D14u: goto label_2c0d14;
            case 0x2C0D18u: goto label_2c0d18;
            case 0x2C0D1Cu: goto label_2c0d1c;
            case 0x2C0D20u: goto label_2c0d20;
            case 0x2C0D24u: goto label_2c0d24;
            case 0x2C0D28u: goto label_2c0d28;
            case 0x2C0D2Cu: goto label_2c0d2c;
            case 0x2C0D30u: goto label_2c0d30;
            case 0x2C0D34u: goto label_2c0d34;
            case 0x2C0D38u: goto label_2c0d38;
            case 0x2C0D3Cu: goto label_2c0d3c;
            case 0x2C0D40u: goto label_2c0d40;
            case 0x2C0D44u: goto label_2c0d44;
            case 0x2C0D48u: goto label_2c0d48;
            case 0x2C0D4Cu: goto label_2c0d4c;
            case 0x2C0D50u: goto label_2c0d50;
            case 0x2C0D54u: goto label_2c0d54;
            case 0x2C0D58u: goto label_2c0d58;
            case 0x2C0D5Cu: goto label_2c0d5c;
            case 0x2C0D60u: goto label_2c0d60;
            case 0x2C0D64u: goto label_2c0d64;
            case 0x2C0D68u: goto label_2c0d68;
            case 0x2C0D6Cu: goto label_2c0d6c;
            case 0x2C0D70u: goto label_2c0d70;
            case 0x2C0D74u: goto label_2c0d74;
            case 0x2C0D78u: goto label_2c0d78;
            case 0x2C0D7Cu: goto label_2c0d7c;
            case 0x2C0D80u: goto label_2c0d80;
            case 0x2C0D84u: goto label_2c0d84;
            case 0x2C0D88u: goto label_2c0d88;
            case 0x2C0D8Cu: goto label_2c0d8c;
            case 0x2C0D90u: goto label_2c0d90;
            case 0x2C0D94u: goto label_2c0d94;
            case 0x2C0D98u: goto label_2c0d98;
            case 0x2C0D9Cu: goto label_2c0d9c;
            case 0x2C0DA0u: goto label_2c0da0;
            case 0x2C0DA4u: goto label_2c0da4;
            case 0x2C0DA8u: goto label_2c0da8;
            case 0x2C0DACu: goto label_2c0dac;
            case 0x2C0DB0u: goto label_2c0db0;
            case 0x2C0DB4u: goto label_2c0db4;
            case 0x2C0DB8u: goto label_2c0db8;
            case 0x2C0DBCu: goto label_2c0dbc;
            case 0x2C0DC0u: goto label_2c0dc0;
            case 0x2C0DC4u: goto label_2c0dc4;
            case 0x2C0DC8u: goto label_2c0dc8;
            case 0x2C0DCCu: goto label_2c0dcc;
            case 0x2C0DD0u: goto label_2c0dd0;
            case 0x2C0DD4u: goto label_2c0dd4;
            case 0x2C0DD8u: goto label_2c0dd8;
            case 0x2C0DDCu: goto label_2c0ddc;
            case 0x2C0DE0u: goto label_2c0de0;
            case 0x2C0DE4u: goto label_2c0de4;
            case 0x2C0DE8u: goto label_2c0de8;
            case 0x2C0DECu: goto label_2c0dec;
            case 0x2C0DF0u: goto label_2c0df0;
            case 0x2C0DF4u: goto label_2c0df4;
            case 0x2C0DF8u: goto label_2c0df8;
            case 0x2C0DFCu: goto label_2c0dfc;
            case 0x2C0E00u: goto label_2c0e00;
            case 0x2C0E04u: goto label_2c0e04;
            case 0x2C0E08u: goto label_2c0e08;
            case 0x2C0E0Cu: goto label_2c0e0c;
            case 0x2C0E10u: goto label_2c0e10;
            case 0x2C0E14u: goto label_2c0e14;
            case 0x2C0E18u: goto label_2c0e18;
            case 0x2C0E1Cu: goto label_2c0e1c;
            case 0x2C0E20u: goto label_2c0e20;
            case 0x2C0E24u: goto label_2c0e24;
            case 0x2C0E28u: goto label_2c0e28;
            case 0x2C0E2Cu: goto label_2c0e2c;
            case 0x2C0E30u: goto label_2c0e30;
            case 0x2C0E34u: goto label_2c0e34;
            case 0x2C0E38u: goto label_2c0e38;
            case 0x2C0E3Cu: goto label_2c0e3c;
            case 0x2C0E40u: goto label_2c0e40;
            case 0x2C0E44u: goto label_2c0e44;
            case 0x2C0E48u: goto label_2c0e48;
            case 0x2C0E4Cu: goto label_2c0e4c;
            case 0x2C0E50u: goto label_2c0e50;
            case 0x2C0E54u: goto label_2c0e54;
            case 0x2C0E58u: goto label_2c0e58;
            case 0x2C0E5Cu: goto label_2c0e5c;
            case 0x2C0E60u: goto label_2c0e60;
            case 0x2C0E64u: goto label_2c0e64;
            case 0x2C0E68u: goto label_2c0e68;
            case 0x2C0E6Cu: goto label_2c0e6c;
            case 0x2C0E70u: goto label_2c0e70;
            case 0x2C0E74u: goto label_2c0e74;
            case 0x2C0E78u: goto label_2c0e78;
            case 0x2C0E7Cu: goto label_2c0e7c;
            case 0x2C0E80u: goto label_2c0e80;
            case 0x2C0E84u: goto label_2c0e84;
            case 0x2C0E88u: goto label_2c0e88;
            case 0x2C0E8Cu: goto label_2c0e8c;
            case 0x2C0E90u: goto label_2c0e90;
            case 0x2C0E94u: goto label_2c0e94;
            case 0x2C0E98u: goto label_2c0e98;
            case 0x2C0E9Cu: goto label_2c0e9c;
            case 0x2C0EA0u: goto label_2c0ea0;
            case 0x2C0EA4u: goto label_2c0ea4;
            case 0x2C0EA8u: goto label_2c0ea8;
            case 0x2C0EACu: goto label_2c0eac;
            case 0x2C0EB0u: goto label_2c0eb0;
            case 0x2C0EB4u: goto label_2c0eb4;
            case 0x2C0EB8u: goto label_2c0eb8;
            case 0x2C0EBCu: goto label_2c0ebc;
            case 0x2C0EC0u: goto label_2c0ec0;
            case 0x2C0EC4u: goto label_2c0ec4;
            case 0x2C0EC8u: goto label_2c0ec8;
            case 0x2C0ECCu: goto label_2c0ecc;
            case 0x2C0ED0u: goto label_2c0ed0;
            case 0x2C0ED4u: goto label_2c0ed4;
            case 0x2C0ED8u: goto label_2c0ed8;
            case 0x2C0EDCu: goto label_2c0edc;
            case 0x2C0EE0u: goto label_2c0ee0;
            case 0x2C0EE4u: goto label_2c0ee4;
            case 0x2C0EE8u: goto label_2c0ee8;
            case 0x2C0EECu: goto label_2c0eec;
            case 0x2C0EF0u: goto label_2c0ef0;
            case 0x2C0EF4u: goto label_2c0ef4;
            case 0x2C0EF8u: goto label_2c0ef8;
            case 0x2C0EFCu: goto label_2c0efc;
            case 0x2C0F00u: goto label_2c0f00;
            case 0x2C0F04u: goto label_2c0f04;
            case 0x2C0F08u: goto label_2c0f08;
            case 0x2C0F0Cu: goto label_2c0f0c;
            case 0x2C0F10u: goto label_2c0f10;
            case 0x2C0F14u: goto label_2c0f14;
            case 0x2C0F18u: goto label_2c0f18;
            case 0x2C0F1Cu: goto label_2c0f1c;
            case 0x2C0F20u: goto label_2c0f20;
            case 0x2C0F24u: goto label_2c0f24;
            case 0x2C0F28u: goto label_2c0f28;
            case 0x2C0F2Cu: goto label_2c0f2c;
            case 0x2C0F30u: goto label_2c0f30;
            case 0x2C0F34u: goto label_2c0f34;
            case 0x2C0F38u: goto label_2c0f38;
            case 0x2C0F3Cu: goto label_2c0f3c;
            case 0x2C0F40u: goto label_2c0f40;
            case 0x2C0F44u: goto label_2c0f44;
            case 0x2C0F48u: goto label_2c0f48;
            case 0x2C0F4Cu: goto label_2c0f4c;
            case 0x2C0F50u: goto label_2c0f50;
            case 0x2C0F54u: goto label_2c0f54;
            case 0x2C0F58u: goto label_2c0f58;
            case 0x2C0F5Cu: goto label_2c0f5c;
            case 0x2C0F60u: goto label_2c0f60;
            case 0x2C0F64u: goto label_2c0f64;
            case 0x2C0F68u: goto label_2c0f68;
            case 0x2C0F6Cu: goto label_2c0f6c;
            case 0x2C0F70u: goto label_2c0f70;
            case 0x2C0F74u: goto label_2c0f74;
            case 0x2C0F78u: goto label_2c0f78;
            case 0x2C0F7Cu: goto label_2c0f7c;
            case 0x2C0F80u: goto label_2c0f80;
            case 0x2C0F84u: goto label_2c0f84;
            case 0x2C0F88u: goto label_2c0f88;
            case 0x2C0F8Cu: goto label_2c0f8c;
            case 0x2C0F90u: goto label_2c0f90;
            case 0x2C0F94u: goto label_2c0f94;
            case 0x2C0F98u: goto label_2c0f98;
            case 0x2C0F9Cu: goto label_2c0f9c;
            case 0x2C0FA0u: goto label_2c0fa0;
            case 0x2C0FA4u: goto label_2c0fa4;
            case 0x2C0FA8u: goto label_2c0fa8;
            case 0x2C0FACu: goto label_2c0fac;
            case 0x2C0FB0u: goto label_2c0fb0;
            case 0x2C0FB4u: goto label_2c0fb4;
            case 0x2C0FB8u: goto label_2c0fb8;
            case 0x2C0FBCu: goto label_2c0fbc;
            case 0x2C0FC0u: goto label_2c0fc0;
            case 0x2C0FC4u: goto label_2c0fc4;
            case 0x2C0FC8u: goto label_2c0fc8;
            case 0x2C0FCCu: goto label_2c0fcc;
            case 0x2C0FD0u: goto label_2c0fd0;
            case 0x2C0FD4u: goto label_2c0fd4;
            case 0x2C0FD8u: goto label_2c0fd8;
            case 0x2C0FDCu: goto label_2c0fdc;
            case 0x2C0FE0u: goto label_2c0fe0;
            case 0x2C0FE4u: goto label_2c0fe4;
            case 0x2C0FE8u: goto label_2c0fe8;
            case 0x2C0FECu: goto label_2c0fec;
            case 0x2C0FF0u: goto label_2c0ff0;
            case 0x2C0FF4u: goto label_2c0ff4;
            case 0x2C0FF8u: goto label_2c0ff8;
            case 0x2C0FFCu: goto label_2c0ffc;
            case 0x2C1000u: goto label_2c1000;
            case 0x2C1004u: goto label_2c1004;
            case 0x2C1008u: goto label_2c1008;
            case 0x2C100Cu: goto label_2c100c;
            case 0x2C1010u: goto label_2c1010;
            case 0x2C1014u: goto label_2c1014;
            case 0x2C1018u: goto label_2c1018;
            case 0x2C101Cu: goto label_2c101c;
            case 0x2C1020u: goto label_2c1020;
            case 0x2C1024u: goto label_2c1024;
            case 0x2C1028u: goto label_2c1028;
            case 0x2C102Cu: goto label_2c102c;
            case 0x2C1030u: goto label_2c1030;
            case 0x2C1034u: goto label_2c1034;
            case 0x2C1038u: goto label_2c1038;
            case 0x2C103Cu: goto label_2c103c;
            case 0x2C1040u: goto label_2c1040;
            default: break;
        }
        _pbRenderNode_exit_log(ctx, "epilogue2");
        return;
    }
label_fallthrough_0x2c103c:
    ctx->pc = 0x2C1044u;
}
