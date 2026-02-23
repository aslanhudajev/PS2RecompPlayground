#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GameScreenPut__14GameScreenTaskFv
// Address: 0x202c40 - 0x2031cc
void GameScreenPut__14GameScreenTaskFv_0x202c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GameScreenPut__14GameScreenTaskFv");


    ctx->pc = 0x202c40u;

label_202c40:
    // 0x202c40: 0x27bdffd0
    ctx->pc = 0x202c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_202c44:
    // 0x202c44: 0x7fbf0020
    ctx->pc = 0x202c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_202c48:
    // 0x202c48: 0x7fb00010
    ctx->pc = 0x202c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_202c4c:
    // 0x202c4c: 0xe7b50004
    ctx->pc = 0x202c4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_202c50:
    // 0x202c50: 0xe7b40000
    ctx->pc = 0x202c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_202c54:
    // 0x202c54: 0xc7808c50
    ctx->pc = 0x202c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202c58:
    // 0x202c58: 0x3c034420
    ctx->pc = 0x202c58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17440 << 16));
label_202c5c:
    // 0x202c5c: 0x44830800
    ctx->pc = 0x202c5cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_202c60:
    // 0x202c60: 0x70808628
    ctx->pc = 0x202c60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_202c64:
    // 0x202c64: 0x3c033f80
    ctx->pc = 0x202c64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_202c68:
    // 0x202c68: 0x4483a000
    ctx->pc = 0x202c68u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
label_202c6c:
    // 0x202c6c: 0x46000d43
    ctx->pc = 0x202c6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_202c70:
    // 0x202c70: 0x0
    ctx->pc = 0x202c70u;
    // NOP
label_202c74:
    // 0x202c74: 0x0
    ctx->pc = 0x202c74u;
    // NOP
label_202c78:
    // 0x202c78: 0x4614a836
    ctx->pc = 0x202c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202c7c:
    // 0x202c7c: 0x0
    ctx->pc = 0x202c7cu;
    // NOP
label_202c80:
    // 0x202c80: 0x45010002
label_202c84:
    if (ctx->pc == 0x202C84u) {
        ctx->pc = 0x202C88u;
        goto label_202c88;
    }
    ctx->pc = 0x202C80u;
    {
        const bool branch_taken_0x202c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202c80) {
            ctx->pc = 0x202C8Cu;
            goto label_202c8c;
        }
    }
    ctx->pc = 0x202C88u;
label_202c88:
    // 0x202c88: 0x4600ad06
    ctx->pc = 0x202c88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_202c8c:
    // 0x202c8c: 0x82030005
    ctx->pc = 0x202c8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_202c90:
    // 0x202c90: 0x82040004
    ctx->pc = 0x202c90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_202c94:
    // 0x202c94: 0x10640009
label_202c98:
    if (ctx->pc == 0x202C98u) {
        ctx->pc = 0x202C98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x202C9Cu;
        goto label_202c9c;
    }
    ctx->pc = 0x202C94u;
    {
        const bool branch_taken_0x202c94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x202C98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x202c94) {
            ctx->pc = 0x202CBCu;
            goto label_202cbc;
        }
    }
    ctx->pc = 0x202C9Cu;
label_202c9c:
    // 0x202c9c: 0x14830004
label_202ca0:
    if (ctx->pc == 0x202CA0u) {
        ctx->pc = 0x202CA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x202CA4u;
        goto label_202ca4;
    }
    ctx->pc = 0x202C9Cu;
    {
        const bool branch_taken_0x202c9c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x202CA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x202c9c) {
            ctx->pc = 0x202CB0u;
            goto label_202cb0;
        }
    }
    ctx->pc = 0x202CA4u;
label_202ca4:
    // 0x202ca4: 0x24030021
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
label_202ca8:
    // 0x202ca8: 0x10000004
label_202cac:
    if (ctx->pc == 0x202CACu) {
        ctx->pc = 0x202CACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x202CB0u;
        goto label_202cb0;
    }
    ctx->pc = 0x202CA8u;
    {
        const bool branch_taken_0x202ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202CACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x202ca8) {
            ctx->pc = 0x202CBCu;
            goto label_202cbc;
        }
    }
    ctx->pc = 0x202CB0u;
label_202cb0:
    // 0x202cb0: 0x14830002
label_202cb4:
    if (ctx->pc == 0x202CB4u) {
        ctx->pc = 0x202CB8u;
        goto label_202cb8;
    }
    ctx->pc = 0x202CB0u;
    {
        const bool branch_taken_0x202cb0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x202cb0) {
            ctx->pc = 0x202CBCu;
            goto label_202cbc;
        }
    }
    ctx->pc = 0x202CB8u;
label_202cb8:
    // 0x202cb8: 0xae000008
    ctx->pc = 0x202cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_202cbc:
    // 0x202cbc: 0x82030004
    ctx->pc = 0x202cbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_202cc0:
    // 0x202cc0: 0x2c610009
    ctx->pc = 0x202cc0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 9));
label_202cc4:
    // 0x202cc4: 0x1020013b
label_202cc8:
    if (ctx->pc == 0x202CC8u) {
        ctx->pc = 0x202CC8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x202CCCu;
        goto label_202ccc;
    }
    ctx->pc = 0x202CC4u;
    {
        const bool branch_taken_0x202cc4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x202CC8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x202cc4) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x202CCCu;
label_202ccc:
    // 0x202ccc: 0x31880
    ctx->pc = 0x202cccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_202cd0:
    // 0x202cd0: 0x24840300
    ctx->pc = 0x202cd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 768));
label_202cd4:
    // 0x202cd4: 0x641821
    ctx->pc = 0x202cd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_202cd8:
    // 0x202cd8: 0x8c630000
    ctx->pc = 0x202cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_202cdc:
    // 0x202cdc: 0x600008
label_202ce0:
    if (ctx->pc == 0x202CE0u) {
        ctx->pc = 0x202CE4u;
        goto label_202ce4;
    }
    ctx->pc = 0x202CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202C40u: goto label_202c40;
            case 0x202C44u: goto label_202c44;
            case 0x202C48u: goto label_202c48;
            case 0x202C4Cu: goto label_202c4c;
            case 0x202C50u: goto label_202c50;
            case 0x202C54u: goto label_202c54;
            case 0x202C58u: goto label_202c58;
            case 0x202C5Cu: goto label_202c5c;
            case 0x202C60u: goto label_202c60;
            case 0x202C64u: goto label_202c64;
            case 0x202C68u: goto label_202c68;
            case 0x202C6Cu: goto label_202c6c;
            case 0x202C70u: goto label_202c70;
            case 0x202C74u: goto label_202c74;
            case 0x202C78u: goto label_202c78;
            case 0x202C7Cu: goto label_202c7c;
            case 0x202C80u: goto label_202c80;
            case 0x202C84u: goto label_202c84;
            case 0x202C88u: goto label_202c88;
            case 0x202C8Cu: goto label_202c8c;
            case 0x202C90u: goto label_202c90;
            case 0x202C94u: goto label_202c94;
            case 0x202C98u: goto label_202c98;
            case 0x202C9Cu: goto label_202c9c;
            case 0x202CA0u: goto label_202ca0;
            case 0x202CA4u: goto label_202ca4;
            case 0x202CA8u: goto label_202ca8;
            case 0x202CACu: goto label_202cac;
            case 0x202CB0u: goto label_202cb0;
            case 0x202CB4u: goto label_202cb4;
            case 0x202CB8u: goto label_202cb8;
            case 0x202CBCu: goto label_202cbc;
            case 0x202CC0u: goto label_202cc0;
            case 0x202CC4u: goto label_202cc4;
            case 0x202CC8u: goto label_202cc8;
            case 0x202CCCu: goto label_202ccc;
            case 0x202CD0u: goto label_202cd0;
            case 0x202CD4u: goto label_202cd4;
            case 0x202CD8u: goto label_202cd8;
            case 0x202CDCu: goto label_202cdc;
            case 0x202CE0u: goto label_202ce0;
            case 0x202CE4u: goto label_202ce4;
            case 0x202CE8u: goto label_202ce8;
            case 0x202CECu: goto label_202cec;
            case 0x202CF0u: goto label_202cf0;
            case 0x202CF4u: goto label_202cf4;
            case 0x202CF8u: goto label_202cf8;
            case 0x202CFCu: goto label_202cfc;
            case 0x202D00u: goto label_202d00;
            case 0x202D04u: goto label_202d04;
            case 0x202D08u: goto label_202d08;
            case 0x202D0Cu: goto label_202d0c;
            case 0x202D10u: goto label_202d10;
            case 0x202D14u: goto label_202d14;
            case 0x202D18u: goto label_202d18;
            case 0x202D1Cu: goto label_202d1c;
            case 0x202D20u: goto label_202d20;
            case 0x202D24u: goto label_202d24;
            case 0x202D28u: goto label_202d28;
            case 0x202D2Cu: goto label_202d2c;
            case 0x202D30u: goto label_202d30;
            case 0x202D34u: goto label_202d34;
            case 0x202D38u: goto label_202d38;
            case 0x202D3Cu: goto label_202d3c;
            case 0x202D40u: goto label_202d40;
            case 0x202D44u: goto label_202d44;
            case 0x202D48u: goto label_202d48;
            case 0x202D4Cu: goto label_202d4c;
            case 0x202D50u: goto label_202d50;
            case 0x202D54u: goto label_202d54;
            case 0x202D58u: goto label_202d58;
            case 0x202D5Cu: goto label_202d5c;
            case 0x202D60u: goto label_202d60;
            case 0x202D64u: goto label_202d64;
            case 0x202D68u: goto label_202d68;
            case 0x202D6Cu: goto label_202d6c;
            case 0x202D70u: goto label_202d70;
            case 0x202D74u: goto label_202d74;
            case 0x202D78u: goto label_202d78;
            case 0x202D7Cu: goto label_202d7c;
            case 0x202D80u: goto label_202d80;
            case 0x202D84u: goto label_202d84;
            case 0x202D88u: goto label_202d88;
            case 0x202D8Cu: goto label_202d8c;
            case 0x202D90u: goto label_202d90;
            case 0x202D94u: goto label_202d94;
            case 0x202D98u: goto label_202d98;
            case 0x202D9Cu: goto label_202d9c;
            case 0x202DA0u: goto label_202da0;
            case 0x202DA4u: goto label_202da4;
            case 0x202DA8u: goto label_202da8;
            case 0x202DACu: goto label_202dac;
            case 0x202DB0u: goto label_202db0;
            case 0x202DB4u: goto label_202db4;
            case 0x202DB8u: goto label_202db8;
            case 0x202DBCu: goto label_202dbc;
            case 0x202DC0u: goto label_202dc0;
            case 0x202DC4u: goto label_202dc4;
            case 0x202DC8u: goto label_202dc8;
            case 0x202DCCu: goto label_202dcc;
            case 0x202DD0u: goto label_202dd0;
            case 0x202DD4u: goto label_202dd4;
            case 0x202DD8u: goto label_202dd8;
            case 0x202DDCu: goto label_202ddc;
            case 0x202DE0u: goto label_202de0;
            case 0x202DE4u: goto label_202de4;
            case 0x202DE8u: goto label_202de8;
            case 0x202DECu: goto label_202dec;
            case 0x202DF0u: goto label_202df0;
            case 0x202DF4u: goto label_202df4;
            case 0x202DF8u: goto label_202df8;
            case 0x202DFCu: goto label_202dfc;
            case 0x202E00u: goto label_202e00;
            case 0x202E04u: goto label_202e04;
            case 0x202E08u: goto label_202e08;
            case 0x202E0Cu: goto label_202e0c;
            case 0x202E10u: goto label_202e10;
            case 0x202E14u: goto label_202e14;
            case 0x202E18u: goto label_202e18;
            case 0x202E1Cu: goto label_202e1c;
            case 0x202E20u: goto label_202e20;
            case 0x202E24u: goto label_202e24;
            case 0x202E28u: goto label_202e28;
            case 0x202E2Cu: goto label_202e2c;
            case 0x202E30u: goto label_202e30;
            case 0x202E34u: goto label_202e34;
            case 0x202E38u: goto label_202e38;
            case 0x202E3Cu: goto label_202e3c;
            case 0x202E40u: goto label_202e40;
            case 0x202E44u: goto label_202e44;
            case 0x202E48u: goto label_202e48;
            case 0x202E4Cu: goto label_202e4c;
            case 0x202E50u: goto label_202e50;
            case 0x202E54u: goto label_202e54;
            case 0x202E58u: goto label_202e58;
            case 0x202E5Cu: goto label_202e5c;
            case 0x202E60u: goto label_202e60;
            case 0x202E64u: goto label_202e64;
            case 0x202E68u: goto label_202e68;
            case 0x202E6Cu: goto label_202e6c;
            case 0x202E70u: goto label_202e70;
            case 0x202E74u: goto label_202e74;
            case 0x202E78u: goto label_202e78;
            case 0x202E7Cu: goto label_202e7c;
            case 0x202E80u: goto label_202e80;
            case 0x202E84u: goto label_202e84;
            case 0x202E88u: goto label_202e88;
            case 0x202E8Cu: goto label_202e8c;
            case 0x202E90u: goto label_202e90;
            case 0x202E94u: goto label_202e94;
            case 0x202E98u: goto label_202e98;
            case 0x202E9Cu: goto label_202e9c;
            case 0x202EA0u: goto label_202ea0;
            case 0x202EA4u: goto label_202ea4;
            case 0x202EA8u: goto label_202ea8;
            case 0x202EACu: goto label_202eac;
            case 0x202EB0u: goto label_202eb0;
            case 0x202EB4u: goto label_202eb4;
            case 0x202EB8u: goto label_202eb8;
            case 0x202EBCu: goto label_202ebc;
            case 0x202EC0u: goto label_202ec0;
            case 0x202EC4u: goto label_202ec4;
            case 0x202EC8u: goto label_202ec8;
            case 0x202ECCu: goto label_202ecc;
            case 0x202ED0u: goto label_202ed0;
            case 0x202ED4u: goto label_202ed4;
            case 0x202ED8u: goto label_202ed8;
            case 0x202EDCu: goto label_202edc;
            case 0x202EE0u: goto label_202ee0;
            case 0x202EE4u: goto label_202ee4;
            case 0x202EE8u: goto label_202ee8;
            case 0x202EECu: goto label_202eec;
            case 0x202EF0u: goto label_202ef0;
            case 0x202EF4u: goto label_202ef4;
            case 0x202EF8u: goto label_202ef8;
            case 0x202EFCu: goto label_202efc;
            case 0x202F00u: goto label_202f00;
            case 0x202F04u: goto label_202f04;
            case 0x202F08u: goto label_202f08;
            case 0x202F0Cu: goto label_202f0c;
            case 0x202F10u: goto label_202f10;
            case 0x202F14u: goto label_202f14;
            case 0x202F18u: goto label_202f18;
            case 0x202F1Cu: goto label_202f1c;
            case 0x202F20u: goto label_202f20;
            case 0x202F24u: goto label_202f24;
            case 0x202F28u: goto label_202f28;
            case 0x202F2Cu: goto label_202f2c;
            case 0x202F30u: goto label_202f30;
            case 0x202F34u: goto label_202f34;
            case 0x202F38u: goto label_202f38;
            case 0x202F3Cu: goto label_202f3c;
            case 0x202F40u: goto label_202f40;
            case 0x202F44u: goto label_202f44;
            case 0x202F48u: goto label_202f48;
            case 0x202F4Cu: goto label_202f4c;
            case 0x202F50u: goto label_202f50;
            case 0x202F54u: goto label_202f54;
            case 0x202F58u: goto label_202f58;
            case 0x202F5Cu: goto label_202f5c;
            case 0x202F60u: goto label_202f60;
            case 0x202F64u: goto label_202f64;
            case 0x202F68u: goto label_202f68;
            case 0x202F6Cu: goto label_202f6c;
            case 0x202F70u: goto label_202f70;
            case 0x202F74u: goto label_202f74;
            case 0x202F78u: goto label_202f78;
            case 0x202F7Cu: goto label_202f7c;
            case 0x202F80u: goto label_202f80;
            case 0x202F84u: goto label_202f84;
            case 0x202F88u: goto label_202f88;
            case 0x202F8Cu: goto label_202f8c;
            case 0x202F90u: goto label_202f90;
            case 0x202F94u: goto label_202f94;
            case 0x202F98u: goto label_202f98;
            case 0x202F9Cu: goto label_202f9c;
            case 0x202FA0u: goto label_202fa0;
            case 0x202FA4u: goto label_202fa4;
            case 0x202FA8u: goto label_202fa8;
            case 0x202FACu: goto label_202fac;
            case 0x202FB0u: goto label_202fb0;
            case 0x202FB4u: goto label_202fb4;
            case 0x202FB8u: goto label_202fb8;
            case 0x202FBCu: goto label_202fbc;
            case 0x202FC0u: goto label_202fc0;
            case 0x202FC4u: goto label_202fc4;
            case 0x202FC8u: goto label_202fc8;
            case 0x202FCCu: goto label_202fcc;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FD4u: goto label_202fd4;
            case 0x202FD8u: goto label_202fd8;
            case 0x202FDCu: goto label_202fdc;
            case 0x202FE0u: goto label_202fe0;
            case 0x202FE4u: goto label_202fe4;
            case 0x202FE8u: goto label_202fe8;
            case 0x202FECu: goto label_202fec;
            case 0x202FF0u: goto label_202ff0;
            case 0x202FF4u: goto label_202ff4;
            case 0x202FF8u: goto label_202ff8;
            case 0x202FFCu: goto label_202ffc;
            case 0x203000u: goto label_203000;
            case 0x203004u: goto label_203004;
            case 0x203008u: goto label_203008;
            case 0x20300Cu: goto label_20300c;
            case 0x203010u: goto label_203010;
            case 0x203014u: goto label_203014;
            case 0x203018u: goto label_203018;
            case 0x20301Cu: goto label_20301c;
            case 0x203020u: goto label_203020;
            case 0x203024u: goto label_203024;
            case 0x203028u: goto label_203028;
            case 0x20302Cu: goto label_20302c;
            case 0x203030u: goto label_203030;
            case 0x203034u: goto label_203034;
            case 0x203038u: goto label_203038;
            case 0x20303Cu: goto label_20303c;
            case 0x203040u: goto label_203040;
            case 0x203044u: goto label_203044;
            case 0x203048u: goto label_203048;
            case 0x20304Cu: goto label_20304c;
            case 0x203050u: goto label_203050;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x20305Cu: goto label_20305c;
            case 0x203060u: goto label_203060;
            case 0x203064u: goto label_203064;
            case 0x203068u: goto label_203068;
            case 0x20306Cu: goto label_20306c;
            case 0x203070u: goto label_203070;
            case 0x203074u: goto label_203074;
            case 0x203078u: goto label_203078;
            case 0x20307Cu: goto label_20307c;
            case 0x203080u: goto label_203080;
            case 0x203084u: goto label_203084;
            case 0x203088u: goto label_203088;
            case 0x20308Cu: goto label_20308c;
            case 0x203090u: goto label_203090;
            case 0x203094u: goto label_203094;
            case 0x203098u: goto label_203098;
            case 0x20309Cu: goto label_20309c;
            case 0x2030A0u: goto label_2030a0;
            case 0x2030A4u: goto label_2030a4;
            case 0x2030A8u: goto label_2030a8;
            case 0x2030ACu: goto label_2030ac;
            case 0x2030B0u: goto label_2030b0;
            case 0x2030B4u: goto label_2030b4;
            case 0x2030B8u: goto label_2030b8;
            case 0x2030BCu: goto label_2030bc;
            case 0x2030C0u: goto label_2030c0;
            case 0x2030C4u: goto label_2030c4;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030CCu: goto label_2030cc;
            case 0x2030D0u: goto label_2030d0;
            case 0x2030D4u: goto label_2030d4;
            case 0x2030D8u: goto label_2030d8;
            case 0x2030DCu: goto label_2030dc;
            case 0x2030E0u: goto label_2030e0;
            case 0x2030E4u: goto label_2030e4;
            case 0x2030E8u: goto label_2030e8;
            case 0x2030ECu: goto label_2030ec;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x2030F8u: goto label_2030f8;
            case 0x2030FCu: goto label_2030fc;
            case 0x203100u: goto label_203100;
            case 0x203104u: goto label_203104;
            case 0x203108u: goto label_203108;
            case 0x20310Cu: goto label_20310c;
            case 0x203110u: goto label_203110;
            case 0x203114u: goto label_203114;
            case 0x203118u: goto label_203118;
            case 0x20311Cu: goto label_20311c;
            case 0x203120u: goto label_203120;
            case 0x203124u: goto label_203124;
            case 0x203128u: goto label_203128;
            case 0x20312Cu: goto label_20312c;
            case 0x203130u: goto label_203130;
            case 0x203134u: goto label_203134;
            case 0x203138u: goto label_203138;
            case 0x20313Cu: goto label_20313c;
            case 0x203140u: goto label_203140;
            case 0x203144u: goto label_203144;
            case 0x203148u: goto label_203148;
            case 0x20314Cu: goto label_20314c;
            case 0x203150u: goto label_203150;
            case 0x203154u: goto label_203154;
            case 0x203158u: goto label_203158;
            case 0x20315Cu: goto label_20315c;
            case 0x203160u: goto label_203160;
            case 0x203164u: goto label_203164;
            case 0x203168u: goto label_203168;
            case 0x20316Cu: goto label_20316c;
            case 0x203170u: goto label_203170;
            case 0x203174u: goto label_203174;
            case 0x203178u: goto label_203178;
            case 0x20317Cu: goto label_20317c;
            case 0x203180u: goto label_203180;
            case 0x203184u: goto label_203184;
            case 0x203188u: goto label_203188;
            case 0x20318Cu: goto label_20318c;
            case 0x203190u: goto label_203190;
            case 0x203194u: goto label_203194;
            case 0x203198u: goto label_203198;
            case 0x20319Cu: goto label_20319c;
            case 0x2031A0u: goto label_2031a0;
            case 0x2031A4u: goto label_2031a4;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031B0u: goto label_2031b0;
            case 0x2031B4u: goto label_2031b4;
            case 0x2031B8u: goto label_2031b8;
            case 0x2031BCu: goto label_2031bc;
            case 0x2031C0u: goto label_2031c0;
            case 0x2031C4u: goto label_2031c4;
            case 0x2031C8u: goto label_2031c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202CE4u;
label_202ce4:
    // 0x202ce4: 0x4bede37d
    ctx->pc = 0x202ce4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_202ce8:
    // 0x202ce8: 0x4bedeb7d
    ctx->pc = 0x202ce8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_202cec:
    // 0x202cec: 0x4bedf37d
    ctx->pc = 0x202cecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_202cf0:
    // 0x202cf0: 0xc06c20d
label_202cf4:
    if (ctx->pc == 0x202CF4u) {
        ctx->pc = 0x202CF4u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x202CF8u;
        goto label_202cf8;
    }
    ctx->pc = 0x202CF0u;
    SET_GPR_U32(ctx, 31, 0x202CF8u);
    ctx->pc = 0x202CF4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202CF8u; }
        else if (ctx->pc != 0x202CF8u) { ctx->pc = 0x202CF8u; }
    }
    if (ctx->pc != 0x202CF8u) { return; }
    ctx->pc = 0x202CF8u;
label_202cf8:
    // 0x202cf8: 0x3c023f80
    ctx->pc = 0x202cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_202cfc:
    // 0x202cfc: 0x44827000
    ctx->pc = 0x202cfcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202d00:
    // 0x202d00: 0x4600ab06
    ctx->pc = 0x202d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_202d04:
    // 0x202d04: 0xc06c1b3
label_202d08:
    if (ctx->pc == 0x202D08u) {
        ctx->pc = 0x202D08u;
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x202D0Cu;
        goto label_202d0c;
    }
    ctx->pc = 0x202D04u;
    SET_GPR_U32(ctx, 31, 0x202D0Cu);
    ctx->pc = 0x202D08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D0Cu; }
        else if (ctx->pc != 0x202D0Cu) { ctx->pc = 0x202D0Cu; }
    }
    if (ctx->pc != 0x202D0Cu) { return; }
    ctx->pc = 0x202D0Cu;
label_202d0c:
    // 0x202d0c: 0x3c023ea7
    ctx->pc = 0x202d0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_202d10:
    // 0x202d10: 0x344240db
    ctx->pc = 0x202d10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_202d14:
    // 0x202d14: 0x44826800
    ctx->pc = 0x202d14u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_202d18:
    // 0x202d18: 0x44806000
    ctx->pc = 0x202d18u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202d1c:
    // 0x202d1c: 0x3c02bf80
    ctx->pc = 0x202d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_202d20:
    // 0x202d20: 0x44827000
    ctx->pc = 0x202d20u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202d24:
    // 0x202d24: 0xc06c202
label_202d28:
    if (ctx->pc == 0x202D28u) {
        ctx->pc = 0x202D2Cu;
        goto label_202d2c;
    }
    ctx->pc = 0x202D24u;
    SET_GPR_U32(ctx, 31, 0x202D2Cu);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D2Cu; }
        else if (ctx->pc != 0x202D2Cu) { ctx->pc = 0x202D2Cu; }
    }
    if (ctx->pc != 0x202D2Cu) { return; }
    ctx->pc = 0x202D2Cu;
label_202d2c:
    // 0x202d2c: 0xc06b218
label_202d30:
    if (ctx->pc == 0x202D30u) {
        ctx->pc = 0x202D30u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202D34u;
        goto label_202d34;
    }
    ctx->pc = 0x202D2Cu;
    SET_GPR_U32(ctx, 31, 0x202D34u);
    ctx->pc = 0x202D30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D34u; }
        else if (ctx->pc != 0x202D34u) { ctx->pc = 0x202D34u; }
    }
    if (ctx->pc != 0x202D34u) { return; }
    ctx->pc = 0x202D34u;
label_202d34:
    // 0x202d34: 0x3c020001
    ctx->pc = 0x202d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202d38:
    // 0x202d38: 0xc0853ac
label_202d3c:
    if (ctx->pc == 0x202D3Cu) {
        ctx->pc = 0x202D3Cu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202D40u;
        goto label_202d40;
    }
    ctx->pc = 0x202D38u;
    SET_GPR_U32(ctx, 31, 0x202D40u);
    ctx->pc = 0x202D3Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D40u; }
        else if (ctx->pc != 0x202D40u) { ctx->pc = 0x202D40u; }
    }
    if (ctx->pc != 0x202D40u) { return; }
    ctx->pc = 0x202D40u;
label_202d40:
    // 0x202d40: 0x3c02bf27
    ctx->pc = 0x202d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48935 << 16));
label_202d44:
    // 0x202d44: 0x44806000
    ctx->pc = 0x202d44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202d48:
    // 0x202d48: 0x344240db
    ctx->pc = 0x202d48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_202d4c:
    // 0x202d4c: 0x44826800
    ctx->pc = 0x202d4cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_202d50:
    // 0x202d50: 0xc06c202
label_202d54:
    if (ctx->pc == 0x202D54u) {
        ctx->pc = 0x202D54u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x202D58u;
        goto label_202d58;
    }
    ctx->pc = 0x202D50u;
    SET_GPR_U32(ctx, 31, 0x202D58u);
    ctx->pc = 0x202D54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D58u; }
        else if (ctx->pc != 0x202D58u) { ctx->pc = 0x202D58u; }
    }
    if (ctx->pc != 0x202D58u) { return; }
    ctx->pc = 0x202D58u;
label_202d58:
    // 0x202d58: 0xc06b218
label_202d5c:
    if (ctx->pc == 0x202D5Cu) {
        ctx->pc = 0x202D5Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202D60u;
        goto label_202d60;
    }
    ctx->pc = 0x202D58u;
    SET_GPR_U32(ctx, 31, 0x202D60u);
    ctx->pc = 0x202D5Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D60u; }
        else if (ctx->pc != 0x202D60u) { ctx->pc = 0x202D60u; }
    }
    if (ctx->pc != 0x202D60u) { return; }
    ctx->pc = 0x202D60u;
label_202d60:
    // 0x202d60: 0x3c020001
    ctx->pc = 0x202d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202d64:
    // 0x202d64: 0xc0853ac
label_202d68:
    if (ctx->pc == 0x202D68u) {
        ctx->pc = 0x202D68u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202D6Cu;
        goto label_202d6c;
    }
    ctx->pc = 0x202D64u;
    SET_GPR_U32(ctx, 31, 0x202D6Cu);
    ctx->pc = 0x202D68u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D6Cu; }
        else if (ctx->pc != 0x202D6Cu) { ctx->pc = 0x202D6Cu; }
    }
    if (ctx->pc != 0x202D6Cu) { return; }
    ctx->pc = 0x202D6Cu;
label_202d6c:
    // 0x202d6c: 0x4bff6b7e
    ctx->pc = 0x202d6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_202d70:
    // 0x202d70: 0x4bfe6b7e
    ctx->pc = 0x202d70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_202d74:
    // 0x202d74: 0x4bfd6b7e
    ctx->pc = 0x202d74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_202d78:
    // 0x202d78: 0x1000010e
label_202d7c:
    if (ctx->pc == 0x202D7Cu) {
        ctx->pc = 0x202D7Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x202D80u;
        goto label_202d80;
    }
    ctx->pc = 0x202D78u;
    {
        const bool branch_taken_0x202d78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202D7Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x202d78) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x202D80u;
label_202d80:
    // 0x202d80: 0x4bede37d
    ctx->pc = 0x202d80u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_202d84:
    // 0x202d84: 0x4bedeb7d
    ctx->pc = 0x202d84u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_202d88:
    // 0x202d88: 0x4bedf37d
    ctx->pc = 0x202d88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_202d8c:
    // 0x202d8c: 0xc06c20d
label_202d90:
    if (ctx->pc == 0x202D90u) {
        ctx->pc = 0x202D90u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x202D94u;
        goto label_202d94;
    }
    ctx->pc = 0x202D8Cu;
    SET_GPR_U32(ctx, 31, 0x202D94u);
    ctx->pc = 0x202D90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D94u; }
        else if (ctx->pc != 0x202D94u) { ctx->pc = 0x202D94u; }
    }
    if (ctx->pc != 0x202D94u) { return; }
    ctx->pc = 0x202D94u;
label_202d94:
    // 0x202d94: 0x3c023f80
    ctx->pc = 0x202d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_202d98:
    // 0x202d98: 0x44827000
    ctx->pc = 0x202d98u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202d9c:
    // 0x202d9c: 0x4600ab06
    ctx->pc = 0x202d9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_202da0:
    // 0x202da0: 0xc06c1b3
label_202da4:
    if (ctx->pc == 0x202DA4u) {
        ctx->pc = 0x202DA4u;
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x202DA8u;
        goto label_202da8;
    }
    ctx->pc = 0x202DA0u;
    SET_GPR_U32(ctx, 31, 0x202DA8u);
    ctx->pc = 0x202DA4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DA8u; }
        else if (ctx->pc != 0x202DA8u) { ctx->pc = 0x202DA8u; }
    }
    if (ctx->pc != 0x202DA8u) { return; }
    ctx->pc = 0x202DA8u;
label_202da8:
    // 0x202da8: 0x3c023ea7
    ctx->pc = 0x202da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_202dac:
    // 0x202dac: 0x344240db
    ctx->pc = 0x202dacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_202db0:
    // 0x202db0: 0x44826800
    ctx->pc = 0x202db0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_202db4:
    // 0x202db4: 0x44806000
    ctx->pc = 0x202db4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202db8:
    // 0x202db8: 0x3c02bf80
    ctx->pc = 0x202db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_202dbc:
    // 0x202dbc: 0x44827000
    ctx->pc = 0x202dbcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202dc0:
    // 0x202dc0: 0xc06c202
label_202dc4:
    if (ctx->pc == 0x202DC4u) {
        ctx->pc = 0x202DC8u;
        goto label_202dc8;
    }
    ctx->pc = 0x202DC0u;
    SET_GPR_U32(ctx, 31, 0x202DC8u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DC8u; }
        else if (ctx->pc != 0x202DC8u) { ctx->pc = 0x202DC8u; }
    }
    if (ctx->pc != 0x202DC8u) { return; }
    ctx->pc = 0x202DC8u;
label_202dc8:
    // 0x202dc8: 0xc06b218
label_202dcc:
    if (ctx->pc == 0x202DCCu) {
        ctx->pc = 0x202DCCu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202DD0u;
        goto label_202dd0;
    }
    ctx->pc = 0x202DC8u;
    SET_GPR_U32(ctx, 31, 0x202DD0u);
    ctx->pc = 0x202DCCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DD0u; }
        else if (ctx->pc != 0x202DD0u) { ctx->pc = 0x202DD0u; }
    }
    if (ctx->pc != 0x202DD0u) { return; }
    ctx->pc = 0x202DD0u;
label_202dd0:
    // 0x202dd0: 0x3c020001
    ctx->pc = 0x202dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202dd4:
    // 0x202dd4: 0xc0853ac
label_202dd8:
    if (ctx->pc == 0x202DD8u) {
        ctx->pc = 0x202DD8u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202DDCu;
        goto label_202ddc;
    }
    ctx->pc = 0x202DD4u;
    SET_GPR_U32(ctx, 31, 0x202DDCu);
    ctx->pc = 0x202DD8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DDCu; }
        else if (ctx->pc != 0x202DDCu) { ctx->pc = 0x202DDCu; }
    }
    if (ctx->pc != 0x202DDCu) { return; }
    ctx->pc = 0x202DDCu;
label_202ddc:
    // 0x202ddc: 0x3c02bf27
    ctx->pc = 0x202ddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48935 << 16));
label_202de0:
    // 0x202de0: 0x44806000
    ctx->pc = 0x202de0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202de4:
    // 0x202de4: 0x344240db
    ctx->pc = 0x202de4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_202de8:
    // 0x202de8: 0x44826800
    ctx->pc = 0x202de8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_202dec:
    // 0x202dec: 0xc06c202
label_202df0:
    if (ctx->pc == 0x202DF0u) {
        ctx->pc = 0x202DF0u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x202DF4u;
        goto label_202df4;
    }
    ctx->pc = 0x202DECu;
    SET_GPR_U32(ctx, 31, 0x202DF4u);
    ctx->pc = 0x202DF0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DF4u; }
        else if (ctx->pc != 0x202DF4u) { ctx->pc = 0x202DF4u; }
    }
    if (ctx->pc != 0x202DF4u) { return; }
    ctx->pc = 0x202DF4u;
label_202df4:
    // 0x202df4: 0xc06b218
label_202df8:
    if (ctx->pc == 0x202DF8u) {
        ctx->pc = 0x202DF8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202DFCu;
        goto label_202dfc;
    }
    ctx->pc = 0x202DF4u;
    SET_GPR_U32(ctx, 31, 0x202DFCu);
    ctx->pc = 0x202DF8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DFCu; }
        else if (ctx->pc != 0x202DFCu) { ctx->pc = 0x202DFCu; }
    }
    if (ctx->pc != 0x202DFCu) { return; }
    ctx->pc = 0x202DFCu;
label_202dfc:
    // 0x202dfc: 0x3c020001
    ctx->pc = 0x202dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202e00:
    // 0x202e00: 0xc0853ac
label_202e04:
    if (ctx->pc == 0x202E04u) {
        ctx->pc = 0x202E04u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202E08u;
        goto label_202e08;
    }
    ctx->pc = 0x202E00u;
    SET_GPR_U32(ctx, 31, 0x202E08u);
    ctx->pc = 0x202E04u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E08u; }
        else if (ctx->pc != 0x202E08u) { ctx->pc = 0x202E08u; }
    }
    if (ctx->pc != 0x202E08u) { return; }
    ctx->pc = 0x202E08u;
label_202e08:
    // 0x202e08: 0x4bff6b7e
    ctx->pc = 0x202e08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_202e0c:
    // 0x202e0c: 0x4bfe6b7e
    ctx->pc = 0x202e0cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_202e10:
    // 0x202e10: 0x4bfd6b7e
    ctx->pc = 0x202e10u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_202e14:
    // 0x202e14: 0x100000e7
label_202e18:
    if (ctx->pc == 0x202E18u) {
        ctx->pc = 0x202E18u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x202E1Cu;
        goto label_202e1c;
    }
    ctx->pc = 0x202E14u;
    {
        const bool branch_taken_0x202e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202E18u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x202e14) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x202E1Cu;
label_202e1c:
    // 0x202e1c: 0x8e020008
    ctx->pc = 0x202e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_202e20:
    // 0x202e20: 0x1c400029
label_202e24:
    if (ctx->pc == 0x202E24u) {
        ctx->pc = 0x202E28u;
        goto label_202e28;
    }
    ctx->pc = 0x202E20u;
    {
        const bool branch_taken_0x202e20 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x202e20) {
            ctx->pc = 0x202EC8u;
            goto label_202ec8;
        }
    }
    ctx->pc = 0x202E28u;
label_202e28:
    // 0x202e28: 0xae000008
    ctx->pc = 0x202e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_202e2c:
    // 0x202e2c: 0x4bede37d
    ctx->pc = 0x202e2cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_202e30:
    // 0x202e30: 0x4bedeb7d
    ctx->pc = 0x202e30u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_202e34:
    // 0x202e34: 0x4bedf37d
    ctx->pc = 0x202e34u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_202e38:
    // 0x202e38: 0xc06c20d
label_202e3c:
    if (ctx->pc == 0x202E3Cu) {
        ctx->pc = 0x202E3Cu;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x202E40u;
        goto label_202e40;
    }
    ctx->pc = 0x202E38u;
    SET_GPR_U32(ctx, 31, 0x202E40u);
    ctx->pc = 0x202E3Cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E40u; }
        else if (ctx->pc != 0x202E40u) { ctx->pc = 0x202E40u; }
    }
    if (ctx->pc != 0x202E40u) { return; }
    ctx->pc = 0x202E40u;
label_202e40:
    // 0x202e40: 0x3c023f80
    ctx->pc = 0x202e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_202e44:
    // 0x202e44: 0x44827000
    ctx->pc = 0x202e44u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202e48:
    // 0x202e48: 0x4600ab06
    ctx->pc = 0x202e48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_202e4c:
    // 0x202e4c: 0xc06c1b3
label_202e50:
    if (ctx->pc == 0x202E50u) {
        ctx->pc = 0x202E50u;
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x202E54u;
        goto label_202e54;
    }
    ctx->pc = 0x202E4Cu;
    SET_GPR_U32(ctx, 31, 0x202E54u);
    ctx->pc = 0x202E50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E54u; }
        else if (ctx->pc != 0x202E54u) { ctx->pc = 0x202E54u; }
    }
    if (ctx->pc != 0x202E54u) { return; }
    ctx->pc = 0x202E54u;
label_202e54:
    // 0x202e54: 0x3c023ea7
    ctx->pc = 0x202e54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_202e58:
    // 0x202e58: 0x344240db
    ctx->pc = 0x202e58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_202e5c:
    // 0x202e5c: 0x44826800
    ctx->pc = 0x202e5cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_202e60:
    // 0x202e60: 0x44806000
    ctx->pc = 0x202e60u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202e64:
    // 0x202e64: 0x3c02bf80
    ctx->pc = 0x202e64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_202e68:
    // 0x202e68: 0x44827000
    ctx->pc = 0x202e68u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202e6c:
    // 0x202e6c: 0xc06c202
label_202e70:
    if (ctx->pc == 0x202E70u) {
        ctx->pc = 0x202E74u;
        goto label_202e74;
    }
    ctx->pc = 0x202E6Cu;
    SET_GPR_U32(ctx, 31, 0x202E74u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E74u; }
        else if (ctx->pc != 0x202E74u) { ctx->pc = 0x202E74u; }
    }
    if (ctx->pc != 0x202E74u) { return; }
    ctx->pc = 0x202E74u;
label_202e74:
    // 0x202e74: 0xc06b218
label_202e78:
    if (ctx->pc == 0x202E78u) {
        ctx->pc = 0x202E78u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202E7Cu;
        goto label_202e7c;
    }
    ctx->pc = 0x202E74u;
    SET_GPR_U32(ctx, 31, 0x202E7Cu);
    ctx->pc = 0x202E78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E7Cu; }
        else if (ctx->pc != 0x202E7Cu) { ctx->pc = 0x202E7Cu; }
    }
    if (ctx->pc != 0x202E7Cu) { return; }
    ctx->pc = 0x202E7Cu;
label_202e7c:
    // 0x202e7c: 0x3c020001
    ctx->pc = 0x202e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202e80:
    // 0x202e80: 0xc0853ac
label_202e84:
    if (ctx->pc == 0x202E84u) {
        ctx->pc = 0x202E84u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202E88u;
        goto label_202e88;
    }
    ctx->pc = 0x202E80u;
    SET_GPR_U32(ctx, 31, 0x202E88u);
    ctx->pc = 0x202E84u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E88u; }
        else if (ctx->pc != 0x202E88u) { ctx->pc = 0x202E88u; }
    }
    if (ctx->pc != 0x202E88u) { return; }
    ctx->pc = 0x202E88u;
label_202e88:
    // 0x202e88: 0x3c02bf27
    ctx->pc = 0x202e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48935 << 16));
label_202e8c:
    // 0x202e8c: 0x44806000
    ctx->pc = 0x202e8cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202e90:
    // 0x202e90: 0x344240db
    ctx->pc = 0x202e90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_202e94:
    // 0x202e94: 0x44826800
    ctx->pc = 0x202e94u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_202e98:
    // 0x202e98: 0xc06c202
label_202e9c:
    if (ctx->pc == 0x202E9Cu) {
        ctx->pc = 0x202E9Cu;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x202EA0u;
        goto label_202ea0;
    }
    ctx->pc = 0x202E98u;
    SET_GPR_U32(ctx, 31, 0x202EA0u);
    ctx->pc = 0x202E9Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202EA0u; }
        else if (ctx->pc != 0x202EA0u) { ctx->pc = 0x202EA0u; }
    }
    if (ctx->pc != 0x202EA0u) { return; }
    ctx->pc = 0x202EA0u;
label_202ea0:
    // 0x202ea0: 0xc06b218
label_202ea4:
    if (ctx->pc == 0x202EA4u) {
        ctx->pc = 0x202EA4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202EA8u;
        goto label_202ea8;
    }
    ctx->pc = 0x202EA0u;
    SET_GPR_U32(ctx, 31, 0x202EA8u);
    ctx->pc = 0x202EA4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202EA8u; }
        else if (ctx->pc != 0x202EA8u) { ctx->pc = 0x202EA8u; }
    }
    if (ctx->pc != 0x202EA8u) { return; }
    ctx->pc = 0x202EA8u;
label_202ea8:
    // 0x202ea8: 0x3c020001
    ctx->pc = 0x202ea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202eac:
    // 0x202eac: 0xc0853ac
label_202eb0:
    if (ctx->pc == 0x202EB0u) {
        ctx->pc = 0x202EB0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202EB4u;
        goto label_202eb4;
    }
    ctx->pc = 0x202EACu;
    SET_GPR_U32(ctx, 31, 0x202EB4u);
    ctx->pc = 0x202EB0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202EB4u; }
        else if (ctx->pc != 0x202EB4u) { ctx->pc = 0x202EB4u; }
    }
    if (ctx->pc != 0x202EB4u) { return; }
    ctx->pc = 0x202EB4u;
label_202eb4:
    // 0x202eb4: 0x4bff6b7e
    ctx->pc = 0x202eb4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_202eb8:
    // 0x202eb8: 0x4bfe6b7e
    ctx->pc = 0x202eb8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_202ebc:
    // 0x202ebc: 0x4bfd6b7e
    ctx->pc = 0x202ebcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_202ec0:
    // 0x202ec0: 0x100000bc
label_202ec4:
    if (ctx->pc == 0x202EC4u) {
        ctx->pc = 0x202EC4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x202EC8u;
        goto label_202ec8;
    }
    ctx->pc = 0x202EC0u;
    {
        const bool branch_taken_0x202ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202EC4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x202ec0) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x202EC8u;
label_202ec8:
    // 0x202ec8: 0x4bede37d
    ctx->pc = 0x202ec8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_202ecc:
    // 0x202ecc: 0x4bedeb7d
    ctx->pc = 0x202eccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_202ed0:
    // 0x202ed0: 0x4bedf37d
    ctx->pc = 0x202ed0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_202ed4:
    // 0x202ed4: 0xc06c20d
label_202ed8:
    if (ctx->pc == 0x202ED8u) {
        ctx->pc = 0x202ED8u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x202EDCu;
        goto label_202edc;
    }
    ctx->pc = 0x202ED4u;
    SET_GPR_U32(ctx, 31, 0x202EDCu);
    ctx->pc = 0x202ED8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202EDCu; }
        else if (ctx->pc != 0x202EDCu) { ctx->pc = 0x202EDCu; }
    }
    if (ctx->pc != 0x202EDCu) { return; }
    ctx->pc = 0x202EDCu;
label_202edc:
    // 0x202edc: 0x3c023f80
    ctx->pc = 0x202edcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_202ee0:
    // 0x202ee0: 0x44827000
    ctx->pc = 0x202ee0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202ee4:
    // 0x202ee4: 0x4600ab06
    ctx->pc = 0x202ee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_202ee8:
    // 0x202ee8: 0xc06c1b3
label_202eec:
    if (ctx->pc == 0x202EECu) {
        ctx->pc = 0x202EECu;
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x202EF0u;
        goto label_202ef0;
    }
    ctx->pc = 0x202EE8u;
    SET_GPR_U32(ctx, 31, 0x202EF0u);
    ctx->pc = 0x202EECu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202EF0u; }
        else if (ctx->pc != 0x202EF0u) { ctx->pc = 0x202EF0u; }
    }
    if (ctx->pc != 0x202EF0u) { return; }
    ctx->pc = 0x202EF0u;
label_202ef0:
    // 0x202ef0: 0xc6000008
    ctx->pc = 0x202ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202ef4:
    // 0x202ef4: 0x3c023b44
    ctx->pc = 0x202ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15172 << 16));
label_202ef8:
    // 0x202ef8: 0x34429ba6
    ctx->pc = 0x202ef8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_202efc:
    // 0x202efc: 0x44820800
    ctx->pc = 0x202efcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_202f00:
    // 0x202f00: 0x44806000
    ctx->pc = 0x202f00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202f04:
    // 0x202f04: 0x3c023ea7
    ctx->pc = 0x202f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_202f08:
    // 0x202f08: 0x46800020
    ctx->pc = 0x202f08u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_202f0c:
    // 0x202f0c: 0x344340db
    ctx->pc = 0x202f0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 16603));
label_202f10:
    // 0x202f10: 0x3c02bf80
    ctx->pc = 0x202f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_202f14:
    // 0x202f14: 0x46000802
    ctx->pc = 0x202f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_202f18:
    // 0x202f18: 0x44830800
    ctx->pc = 0x202f18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_202f1c:
    // 0x202f1c: 0x44827000
    ctx->pc = 0x202f1cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202f20:
    // 0x202f20: 0xc06c202
label_202f24:
    if (ctx->pc == 0x202F24u) {
        ctx->pc = 0x202F24u;
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x202F28u;
        goto label_202f28;
    }
    ctx->pc = 0x202F20u;
    SET_GPR_U32(ctx, 31, 0x202F28u);
    ctx->pc = 0x202F24u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F28u; }
        else if (ctx->pc != 0x202F28u) { ctx->pc = 0x202F28u; }
    }
    if (ctx->pc != 0x202F28u) { return; }
    ctx->pc = 0x202F28u;
label_202f28:
    // 0x202f28: 0xc06b218
label_202f2c:
    if (ctx->pc == 0x202F2Cu) {
        ctx->pc = 0x202F2Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202F30u;
        goto label_202f30;
    }
    ctx->pc = 0x202F28u;
    SET_GPR_U32(ctx, 31, 0x202F30u);
    ctx->pc = 0x202F2Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F30u; }
        else if (ctx->pc != 0x202F30u) { ctx->pc = 0x202F30u; }
    }
    if (ctx->pc != 0x202F30u) { return; }
    ctx->pc = 0x202F30u;
label_202f30:
    // 0x202f30: 0x3c020001
    ctx->pc = 0x202f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202f34:
    // 0x202f34: 0xc0853ac
label_202f38:
    if (ctx->pc == 0x202F38u) {
        ctx->pc = 0x202F38u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202F3Cu;
        goto label_202f3c;
    }
    ctx->pc = 0x202F34u;
    SET_GPR_U32(ctx, 31, 0x202F3Cu);
    ctx->pc = 0x202F38u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F3Cu; }
        else if (ctx->pc != 0x202F3Cu) { ctx->pc = 0x202F3Cu; }
    }
    if (ctx->pc != 0x202F3Cu) { return; }
    ctx->pc = 0x202F3Cu;
label_202f3c:
    // 0x202f3c: 0xc6010008
    ctx->pc = 0x202f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202f40:
    // 0x202f40: 0x3c023b44
    ctx->pc = 0x202f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15172 << 16));
label_202f44:
    // 0x202f44: 0x34429ba6
    ctx->pc = 0x202f44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_202f48:
    // 0x202f48: 0x44820000
    ctx->pc = 0x202f48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_202f4c:
    // 0x202f4c: 0x44806000
    ctx->pc = 0x202f4cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202f50:
    // 0x202f50: 0x3c023ea7
    ctx->pc = 0x202f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_202f54:
    // 0x202f54: 0x46800860
    ctx->pc = 0x202f54u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_202f58:
    // 0x202f58: 0x344340db
    ctx->pc = 0x202f58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 16603));
label_202f5c:
    // 0x202f5c: 0x3c02c000
    ctx->pc = 0x202f5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
label_202f60:
    // 0x202f60: 0x46010082
    ctx->pc = 0x202f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_202f64:
    // 0x202f64: 0x44830800
    ctx->pc = 0x202f64u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_202f68:
    // 0x202f68: 0x44820000
    ctx->pc = 0x202f68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_202f6c:
    // 0x202f6c: 0x0
    ctx->pc = 0x202f6cu;
    // NOP
label_202f70:
    // 0x202f70: 0x46020840
    ctx->pc = 0x202f70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_202f74:
    // 0x202f74: 0x46010342
    ctx->pc = 0x202f74u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_202f78:
    // 0x202f78: 0xc06c202
label_202f7c:
    if (ctx->pc == 0x202F7Cu) {
        ctx->pc = 0x202F7Cu;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x202F80u;
        goto label_202f80;
    }
    ctx->pc = 0x202F78u;
    SET_GPR_U32(ctx, 31, 0x202F80u);
    ctx->pc = 0x202F7Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F80u; }
        else if (ctx->pc != 0x202F80u) { ctx->pc = 0x202F80u; }
    }
    if (ctx->pc != 0x202F80u) { return; }
    ctx->pc = 0x202F80u;
label_202f80:
    // 0x202f80: 0xc06b218
label_202f84:
    if (ctx->pc == 0x202F84u) {
        ctx->pc = 0x202F84u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x202F88u;
        goto label_202f88;
    }
    ctx->pc = 0x202F80u;
    SET_GPR_U32(ctx, 31, 0x202F88u);
    ctx->pc = 0x202F84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F88u; }
        else if (ctx->pc != 0x202F88u) { ctx->pc = 0x202F88u; }
    }
    if (ctx->pc != 0x202F88u) { return; }
    ctx->pc = 0x202F88u;
label_202f88:
    // 0x202f88: 0x3c020001
    ctx->pc = 0x202f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_202f8c:
    // 0x202f8c: 0xc0853ac
label_202f90:
    if (ctx->pc == 0x202F90u) {
        ctx->pc = 0x202F90u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x202F94u;
        goto label_202f94;
    }
    ctx->pc = 0x202F8Cu;
    SET_GPR_U32(ctx, 31, 0x202F94u);
    ctx->pc = 0x202F90u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F94u; }
        else if (ctx->pc != 0x202F94u) { ctx->pc = 0x202F94u; }
    }
    if (ctx->pc != 0x202F94u) { return; }
    ctx->pc = 0x202F94u;
label_202f94:
    // 0x202f94: 0x4bff6b7e
    ctx->pc = 0x202f94u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_202f98:
    // 0x202f98: 0x4bfe6b7e
    ctx->pc = 0x202f98u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_202f9c:
    // 0x202f9c: 0x4bfd6b7e
    ctx->pc = 0x202f9cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_202fa0:
    // 0x202fa0: 0x10000084
label_202fa4:
    if (ctx->pc == 0x202FA4u) {
        ctx->pc = 0x202FA4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x202FA8u;
        goto label_202fa8;
    }
    ctx->pc = 0x202FA0u;
    {
        const bool branch_taken_0x202fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202FA4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x202fa0) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x202FA8u;
label_202fa8:
    // 0x202fa8: 0x8e030008
    ctx->pc = 0x202fa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_202fac:
    // 0x202fac: 0x28610021
    ctx->pc = 0x202facu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 33));
label_202fb0:
    // 0x202fb0: 0x10200080
label_202fb4:
    if (ctx->pc == 0x202FB4u) {
        ctx->pc = 0x202FB8u;
        goto label_202fb8;
    }
    ctx->pc = 0x202FB0u;
    {
        const bool branch_taken_0x202fb0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x202fb0) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x202FB8u;
label_202fb8:
    // 0x202fb8: 0x4bede37d
    ctx->pc = 0x202fb8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_202fbc:
    // 0x202fbc: 0x4bedeb7d
    ctx->pc = 0x202fbcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_202fc0:
    // 0x202fc0: 0x4bedf37d
    ctx->pc = 0x202fc0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_202fc4:
    // 0x202fc4: 0xc06c20d
label_202fc8:
    if (ctx->pc == 0x202FC8u) {
        ctx->pc = 0x202FC8u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x202FCCu;
        goto label_202fcc;
    }
    ctx->pc = 0x202FC4u;
    SET_GPR_U32(ctx, 31, 0x202FCCu);
    ctx->pc = 0x202FC8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202FCCu; }
        else if (ctx->pc != 0x202FCCu) { ctx->pc = 0x202FCCu; }
    }
    if (ctx->pc != 0x202FCCu) { return; }
    ctx->pc = 0x202FCCu;
label_202fcc:
    // 0x202fcc: 0x3c023f80
    ctx->pc = 0x202fccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_202fd0:
    // 0x202fd0: 0x44827000
    ctx->pc = 0x202fd0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_202fd4:
    // 0x202fd4: 0x4600ab06
    ctx->pc = 0x202fd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_202fd8:
    // 0x202fd8: 0xc06c1b3
label_202fdc:
    if (ctx->pc == 0x202FDCu) {
        ctx->pc = 0x202FDCu;
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x202FE0u;
        goto label_202fe0;
    }
    ctx->pc = 0x202FD8u;
    SET_GPR_U32(ctx, 31, 0x202FE0u);
    ctx->pc = 0x202FDCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202FE0u; }
        else if (ctx->pc != 0x202FE0u) { ctx->pc = 0x202FE0u; }
    }
    if (ctx->pc != 0x202FE0u) { return; }
    ctx->pc = 0x202FE0u;
label_202fe0:
    // 0x202fe0: 0xc6000008
    ctx->pc = 0x202fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202fe4:
    // 0x202fe4: 0x3c023b44
    ctx->pc = 0x202fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15172 << 16));
label_202fe8:
    // 0x202fe8: 0x34429ba6
    ctx->pc = 0x202fe8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_202fec:
    // 0x202fec: 0x44820800
    ctx->pc = 0x202fecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_202ff0:
    // 0x202ff0: 0x44806000
    ctx->pc = 0x202ff0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_202ff4:
    // 0x202ff4: 0x3c023ea7
    ctx->pc = 0x202ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_202ff8:
    // 0x202ff8: 0x46800020
    ctx->pc = 0x202ff8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_202ffc:
    // 0x202ffc: 0x344340db
    ctx->pc = 0x202ffcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 16603));
label_203000:
    // 0x203000: 0x3c02bf80
    ctx->pc = 0x203000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_203004:
    // 0x203004: 0x46000802
    ctx->pc = 0x203004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_203008:
    // 0x203008: 0x44830800
    ctx->pc = 0x203008u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_20300c:
    // 0x20300c: 0x44827000
    ctx->pc = 0x20300cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_203010:
    // 0x203010: 0xc06c202
label_203014:
    if (ctx->pc == 0x203014u) {
        ctx->pc = 0x203014u;
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x203018u;
        goto label_203018;
    }
    ctx->pc = 0x203010u;
    SET_GPR_U32(ctx, 31, 0x203018u);
    ctx->pc = 0x203014u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203018u; }
        else if (ctx->pc != 0x203018u) { ctx->pc = 0x203018u; }
    }
    if (ctx->pc != 0x203018u) { return; }
    ctx->pc = 0x203018u;
label_203018:
    // 0x203018: 0xc06b218
label_20301c:
    if (ctx->pc == 0x20301Cu) {
        ctx->pc = 0x20301Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x203020u;
        goto label_203020;
    }
    ctx->pc = 0x203018u;
    SET_GPR_U32(ctx, 31, 0x203020u);
    ctx->pc = 0x20301Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203020u; }
        else if (ctx->pc != 0x203020u) { ctx->pc = 0x203020u; }
    }
    if (ctx->pc != 0x203020u) { return; }
    ctx->pc = 0x203020u;
label_203020:
    // 0x203020: 0x3c020001
    ctx->pc = 0x203020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_203024:
    // 0x203024: 0xc0853ac
label_203028:
    if (ctx->pc == 0x203028u) {
        ctx->pc = 0x203028u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x20302Cu;
        goto label_20302c;
    }
    ctx->pc = 0x203024u;
    SET_GPR_U32(ctx, 31, 0x20302Cu);
    ctx->pc = 0x203028u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20302Cu; }
        else if (ctx->pc != 0x20302Cu) { ctx->pc = 0x20302Cu; }
    }
    if (ctx->pc != 0x20302Cu) { return; }
    ctx->pc = 0x20302Cu;
label_20302c:
    // 0x20302c: 0xc6010008
    ctx->pc = 0x20302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203030:
    // 0x203030: 0x3c023b44
    ctx->pc = 0x203030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15172 << 16));
label_203034:
    // 0x203034: 0x34429ba6
    ctx->pc = 0x203034u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_203038:
    // 0x203038: 0x44820000
    ctx->pc = 0x203038u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_20303c:
    // 0x20303c: 0x44806000
    ctx->pc = 0x20303cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_203040:
    // 0x203040: 0x3c023ea7
    ctx->pc = 0x203040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_203044:
    // 0x203044: 0x46800860
    ctx->pc = 0x203044u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_203048:
    // 0x203048: 0x344340db
    ctx->pc = 0x203048u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 16603));
label_20304c:
    // 0x20304c: 0x3c02c000
    ctx->pc = 0x20304cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
label_203050:
    // 0x203050: 0x46010082
    ctx->pc = 0x203050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_203054:
    // 0x203054: 0x44830800
    ctx->pc = 0x203054u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_203058:
    // 0x203058: 0x44820000
    ctx->pc = 0x203058u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_20305c:
    // 0x20305c: 0x0
    ctx->pc = 0x20305cu;
    // NOP
label_203060:
    // 0x203060: 0x46020840
    ctx->pc = 0x203060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_203064:
    // 0x203064: 0x46010342
    ctx->pc = 0x203064u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_203068:
    // 0x203068: 0xc06c202
label_20306c:
    if (ctx->pc == 0x20306Cu) {
        ctx->pc = 0x20306Cu;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x203070u;
        goto label_203070;
    }
    ctx->pc = 0x203068u;
    SET_GPR_U32(ctx, 31, 0x203070u);
    ctx->pc = 0x20306Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203070u; }
        else if (ctx->pc != 0x203070u) { ctx->pc = 0x203070u; }
    }
    if (ctx->pc != 0x203070u) { return; }
    ctx->pc = 0x203070u;
label_203070:
    // 0x203070: 0xc06b218
label_203074:
    if (ctx->pc == 0x203074u) {
        ctx->pc = 0x203074u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x203078u;
        goto label_203078;
    }
    ctx->pc = 0x203070u;
    SET_GPR_U32(ctx, 31, 0x203078u);
    ctx->pc = 0x203074u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203078u; }
        else if (ctx->pc != 0x203078u) { ctx->pc = 0x203078u; }
    }
    if (ctx->pc != 0x203078u) { return; }
    ctx->pc = 0x203078u;
label_203078:
    // 0x203078: 0x3c020001
    ctx->pc = 0x203078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_20307c:
    // 0x20307c: 0xc0853ac
label_203080:
    if (ctx->pc == 0x203080u) {
        ctx->pc = 0x203080u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x203084u;
        goto label_203084;
    }
    ctx->pc = 0x20307Cu;
    SET_GPR_U32(ctx, 31, 0x203084u);
    ctx->pc = 0x203080u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203084u; }
        else if (ctx->pc != 0x203084u) { ctx->pc = 0x203084u; }
    }
    if (ctx->pc != 0x203084u) { return; }
    ctx->pc = 0x203084u;
label_203084:
    // 0x203084: 0x4bff6b7e
    ctx->pc = 0x203084u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_203088:
    // 0x203088: 0x4bfe6b7e
    ctx->pc = 0x203088u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_20308c:
    // 0x20308c: 0x4bfd6b7e
    ctx->pc = 0x20308cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_203090:
    // 0x203090: 0x10000048
label_203094:
    if (ctx->pc == 0x203094u) {
        ctx->pc = 0x203094u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x203098u;
        goto label_203098;
    }
    ctx->pc = 0x203090u;
    {
        const bool branch_taken_0x203090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203094u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x203090) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x203098u;
label_203098:
    // 0x203098: 0x8f838cb0
    ctx->pc = 0x203098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_20309c:
    // 0x20309c: 0x3063001c
    ctx->pc = 0x20309cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 28));
label_2030a0:
    // 0x2030a0: 0x14600044
label_2030a4:
    if (ctx->pc == 0x2030A4u) {
        ctx->pc = 0x2030A8u;
        goto label_2030a8;
    }
    ctx->pc = 0x2030A0u;
    {
        const bool branch_taken_0x2030a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2030a0) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x2030A8u;
label_2030a8:
    // 0x2030a8: 0x4bede37d
    ctx->pc = 0x2030a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_2030ac:
    // 0x2030ac: 0x4bedeb7d
    ctx->pc = 0x2030acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_2030b0:
    // 0x2030b0: 0x4bedf37d
    ctx->pc = 0x2030b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_2030b4:
    // 0x2030b4: 0xc06c20d
label_2030b8:
    if (ctx->pc == 0x2030B8u) {
        ctx->pc = 0x2030B8u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x2030BCu;
        goto label_2030bc;
    }
    ctx->pc = 0x2030B4u;
    SET_GPR_U32(ctx, 31, 0x2030BCu);
    ctx->pc = 0x2030B8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030BCu; }
        else if (ctx->pc != 0x2030BCu) { ctx->pc = 0x2030BCu; }
    }
    if (ctx->pc != 0x2030BCu) { return; }
    ctx->pc = 0x2030BCu;
label_2030bc:
    // 0x2030bc: 0x3c023f80
    ctx->pc = 0x2030bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2030c0:
    // 0x2030c0: 0x44827000
    ctx->pc = 0x2030c0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_2030c4:
    // 0x2030c4: 0x4600ab06
    ctx->pc = 0x2030c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2030c8:
    // 0x2030c8: 0xc06c1b3
label_2030cc:
    if (ctx->pc == 0x2030CCu) {
        ctx->pc = 0x2030CCu;
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2030D0u;
        goto label_2030d0;
    }
    ctx->pc = 0x2030C8u;
    SET_GPR_U32(ctx, 31, 0x2030D0u);
    ctx->pc = 0x2030CCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030D0u; }
        else if (ctx->pc != 0x2030D0u) { ctx->pc = 0x2030D0u; }
    }
    if (ctx->pc != 0x2030D0u) { return; }
    ctx->pc = 0x2030D0u;
label_2030d0:
    // 0x2030d0: 0x3c023ea7
    ctx->pc = 0x2030d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16039 << 16));
label_2030d4:
    // 0x2030d4: 0x344240db
    ctx->pc = 0x2030d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_2030d8:
    // 0x2030d8: 0x44826800
    ctx->pc = 0x2030d8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_2030dc:
    // 0x2030dc: 0x44806000
    ctx->pc = 0x2030dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_2030e0:
    // 0x2030e0: 0x3c02bf80
    ctx->pc = 0x2030e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_2030e4:
    // 0x2030e4: 0x44827000
    ctx->pc = 0x2030e4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_2030e8:
    // 0x2030e8: 0xc06c202
label_2030ec:
    if (ctx->pc == 0x2030ECu) {
        ctx->pc = 0x2030F0u;
        goto label_2030f0;
    }
    ctx->pc = 0x2030E8u;
    SET_GPR_U32(ctx, 31, 0x2030F0u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030F0u; }
        else if (ctx->pc != 0x2030F0u) { ctx->pc = 0x2030F0u; }
    }
    if (ctx->pc != 0x2030F0u) { return; }
    ctx->pc = 0x2030F0u;
label_2030f0:
    // 0x2030f0: 0xc06b218
label_2030f4:
    if (ctx->pc == 0x2030F4u) {
        ctx->pc = 0x2030F4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2030F8u;
        goto label_2030f8;
    }
    ctx->pc = 0x2030F0u;
    SET_GPR_U32(ctx, 31, 0x2030F8u);
    ctx->pc = 0x2030F4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030F8u; }
        else if (ctx->pc != 0x2030F8u) { ctx->pc = 0x2030F8u; }
    }
    if (ctx->pc != 0x2030F8u) { return; }
    ctx->pc = 0x2030F8u;
label_2030f8:
    // 0x2030f8: 0x3c020001
    ctx->pc = 0x2030f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_2030fc:
    // 0x2030fc: 0xc0853ac
label_203100:
    if (ctx->pc == 0x203100u) {
        ctx->pc = 0x203100u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x203104u;
        goto label_203104;
    }
    ctx->pc = 0x2030FCu;
    SET_GPR_U32(ctx, 31, 0x203104u);
    ctx->pc = 0x203100u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203104u; }
        else if (ctx->pc != 0x203104u) { ctx->pc = 0x203104u; }
    }
    if (ctx->pc != 0x203104u) { return; }
    ctx->pc = 0x203104u;
label_203104:
    // 0x203104: 0x3c02bf27
    ctx->pc = 0x203104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48935 << 16));
label_203108:
    // 0x203108: 0x44806000
    ctx->pc = 0x203108u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_20310c:
    // 0x20310c: 0x344240db
    ctx->pc = 0x20310cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16603));
label_203110:
    // 0x203110: 0x44826800
    ctx->pc = 0x203110u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_203114:
    // 0x203114: 0xc06c202
label_203118:
    if (ctx->pc == 0x203118u) {
        ctx->pc = 0x203118u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20311Cu;
        goto label_20311c;
    }
    ctx->pc = 0x203114u;
    SET_GPR_U32(ctx, 31, 0x20311Cu);
    ctx->pc = 0x203118u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20311Cu; }
        else if (ctx->pc != 0x20311Cu) { ctx->pc = 0x20311Cu; }
    }
    if (ctx->pc != 0x20311Cu) { return; }
    ctx->pc = 0x20311Cu;
label_20311c:
    // 0x20311c: 0xc06b218
label_203120:
    if (ctx->pc == 0x203120u) {
        ctx->pc = 0x203120u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x203124u;
        goto label_203124;
    }
    ctx->pc = 0x20311Cu;
    SET_GPR_U32(ctx, 31, 0x203124u);
    ctx->pc = 0x203120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203124u; }
        else if (ctx->pc != 0x203124u) { ctx->pc = 0x203124u; }
    }
    if (ctx->pc != 0x203124u) { return; }
    ctx->pc = 0x203124u;
label_203124:
    // 0x203124: 0x3c020001
    ctx->pc = 0x203124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_203128:
    // 0x203128: 0xc0853ac
label_20312c:
    if (ctx->pc == 0x20312Cu) {
        ctx->pc = 0x20312Cu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x203130u;
        goto label_203130;
    }
    ctx->pc = 0x203128u;
    SET_GPR_U32(ctx, 31, 0x203130u);
    ctx->pc = 0x20312Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203130u; }
        else if (ctx->pc != 0x203130u) { ctx->pc = 0x203130u; }
    }
    if (ctx->pc != 0x203130u) { return; }
    ctx->pc = 0x203130u;
label_203130:
    // 0x203130: 0x4bff6b7e
    ctx->pc = 0x203130u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_203134:
    // 0x203134: 0x4bfe6b7e
    ctx->pc = 0x203134u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_203138:
    // 0x203138: 0x4bfd6b7e
    ctx->pc = 0x203138u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_20313c:
    // 0x20313c: 0x1000001d
label_203140:
    if (ctx->pc == 0x203140u) {
        ctx->pc = 0x203140u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x203144u;
        goto label_203144;
    }
    ctx->pc = 0x20313Cu;
    {
        const bool branch_taken_0x20313c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203140u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x20313c) {
            ctx->pc = 0x2031B4u;
            goto label_2031b4;
        }
    }
    ctx->pc = 0x203144u;
label_203144:
    // 0x203144: 0x4bede37d
    ctx->pc = 0x203144u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_203148:
    // 0x203148: 0x4bedeb7d
    ctx->pc = 0x203148u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_20314c:
    // 0x20314c: 0x4bedf37d
    ctx->pc = 0x20314cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_203150:
    // 0x203150: 0xc06c20d
label_203154:
    if (ctx->pc == 0x203154u) {
        ctx->pc = 0x203154u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x203158u;
        goto label_203158;
    }
    ctx->pc = 0x203150u;
    SET_GPR_U32(ctx, 31, 0x203158u);
    ctx->pc = 0x203154u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203158u; }
        else if (ctx->pc != 0x203158u) { ctx->pc = 0x203158u; }
    }
    if (ctx->pc != 0x203158u) { return; }
    ctx->pc = 0x203158u;
label_203158:
    // 0x203158: 0x44806000
    ctx->pc = 0x203158u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_20315c:
    // 0x20315c: 0x3c02bf80
    ctx->pc = 0x20315cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_203160:
    // 0x203160: 0x44827000
    ctx->pc = 0x203160u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_203164:
    // 0x203164: 0xc06c202
label_203168:
    if (ctx->pc == 0x203168u) {
        ctx->pc = 0x203168u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20316Cu;
        goto label_20316c;
    }
    ctx->pc = 0x203164u;
    SET_GPR_U32(ctx, 31, 0x20316Cu);
    ctx->pc = 0x203168u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20316Cu; }
        else if (ctx->pc != 0x20316Cu) { ctx->pc = 0x20316Cu; }
    }
    if (ctx->pc != 0x20316Cu) { return; }
    ctx->pc = 0x20316Cu;
label_20316c:
    // 0x20316c: 0x3c023f80
    ctx->pc = 0x20316cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_203170:
    // 0x203170: 0x44827000
    ctx->pc = 0x203170u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_203174:
    // 0x203174: 0x4600ab06
    ctx->pc = 0x203174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_203178:
    // 0x203178: 0x3c024100
    ctx->pc = 0x203178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
label_20317c:
    // 0x20317c: 0x44820000
    ctx->pc = 0x20317cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_203180:
    // 0x203180: 0x0
    ctx->pc = 0x203180u;
    // NOP
label_203184:
    // 0x203184: 0x46150502
    ctx->pc = 0x203184u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_203188:
    // 0x203188: 0xc06c1b3
label_20318c:
    if (ctx->pc == 0x20318Cu) {
        ctx->pc = 0x20318Cu;
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x203190u;
        goto label_203190;
    }
    ctx->pc = 0x203188u;
    SET_GPR_U32(ctx, 31, 0x203190u);
    ctx->pc = 0x20318Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203190u; }
        else if (ctx->pc != 0x203190u) { ctx->pc = 0x203190u; }
    }
    if (ctx->pc != 0x203190u) { return; }
    ctx->pc = 0x203190u;
label_203190:
    // 0x203190: 0xc06b218
label_203194:
    if (ctx->pc == 0x203194u) {
        ctx->pc = 0x203194u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x203198u;
        goto label_203198;
    }
    ctx->pc = 0x203190u;
    SET_GPR_U32(ctx, 31, 0x203198u);
    ctx->pc = 0x203194u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203198u; }
        else if (ctx->pc != 0x203198u) { ctx->pc = 0x203198u; }
    }
    if (ctx->pc != 0x203198u) { return; }
    ctx->pc = 0x203198u;
label_203198:
    // 0x203198: 0x3c020001
    ctx->pc = 0x203198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_20319c:
    // 0x20319c: 0xc0853ac
label_2031a0:
    if (ctx->pc == 0x2031A0u) {
        ctx->pc = 0x2031A0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x2031A4u;
        goto label_2031a4;
    }
    ctx->pc = 0x20319Cu;
    SET_GPR_U32(ctx, 31, 0x2031A4u);
    ctx->pc = 0x2031A0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2031A4u; }
        else if (ctx->pc != 0x2031A4u) { ctx->pc = 0x2031A4u; }
    }
    if (ctx->pc != 0x2031A4u) { return; }
    ctx->pc = 0x2031A4u;
label_2031a4:
    // 0x2031a4: 0x4bff6b7e
    ctx->pc = 0x2031a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2031a8:
    // 0x2031a8: 0x4bfe6b7e
    ctx->pc = 0x2031a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_2031ac:
    // 0x2031ac: 0x4bfd6b7e
    ctx->pc = 0x2031acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2031b0:
    // 0x2031b0: 0x4bfc6b7e
    ctx->pc = 0x2031b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2031b4:
    // 0x2031b4: 0x7bbf0020
    ctx->pc = 0x2031b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2031b8:
    // 0x2031b8: 0x7bb00010
    ctx->pc = 0x2031b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2031bc:
    // 0x2031bc: 0xc7b50004
    ctx->pc = 0x2031bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2031c0:
    // 0x2031c0: 0xc7b40000
    ctx->pc = 0x2031c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2031c4:
    // 0x2031c4: 0x3e00008
label_2031c8:
    if (ctx->pc == 0x2031C8u) {
        ctx->pc = 0x2031C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2031CCu;
        goto label_fallthrough_0x2031c4;
    }
    ctx->pc = 0x2031C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2031C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202C40u: goto label_202c40;
            case 0x202C44u: goto label_202c44;
            case 0x202C48u: goto label_202c48;
            case 0x202C4Cu: goto label_202c4c;
            case 0x202C50u: goto label_202c50;
            case 0x202C54u: goto label_202c54;
            case 0x202C58u: goto label_202c58;
            case 0x202C5Cu: goto label_202c5c;
            case 0x202C60u: goto label_202c60;
            case 0x202C64u: goto label_202c64;
            case 0x202C68u: goto label_202c68;
            case 0x202C6Cu: goto label_202c6c;
            case 0x202C70u: goto label_202c70;
            case 0x202C74u: goto label_202c74;
            case 0x202C78u: goto label_202c78;
            case 0x202C7Cu: goto label_202c7c;
            case 0x202C80u: goto label_202c80;
            case 0x202C84u: goto label_202c84;
            case 0x202C88u: goto label_202c88;
            case 0x202C8Cu: goto label_202c8c;
            case 0x202C90u: goto label_202c90;
            case 0x202C94u: goto label_202c94;
            case 0x202C98u: goto label_202c98;
            case 0x202C9Cu: goto label_202c9c;
            case 0x202CA0u: goto label_202ca0;
            case 0x202CA4u: goto label_202ca4;
            case 0x202CA8u: goto label_202ca8;
            case 0x202CACu: goto label_202cac;
            case 0x202CB0u: goto label_202cb0;
            case 0x202CB4u: goto label_202cb4;
            case 0x202CB8u: goto label_202cb8;
            case 0x202CBCu: goto label_202cbc;
            case 0x202CC0u: goto label_202cc0;
            case 0x202CC4u: goto label_202cc4;
            case 0x202CC8u: goto label_202cc8;
            case 0x202CCCu: goto label_202ccc;
            case 0x202CD0u: goto label_202cd0;
            case 0x202CD4u: goto label_202cd4;
            case 0x202CD8u: goto label_202cd8;
            case 0x202CDCu: goto label_202cdc;
            case 0x202CE0u: goto label_202ce0;
            case 0x202CE4u: goto label_202ce4;
            case 0x202CE8u: goto label_202ce8;
            case 0x202CECu: goto label_202cec;
            case 0x202CF0u: goto label_202cf0;
            case 0x202CF4u: goto label_202cf4;
            case 0x202CF8u: goto label_202cf8;
            case 0x202CFCu: goto label_202cfc;
            case 0x202D00u: goto label_202d00;
            case 0x202D04u: goto label_202d04;
            case 0x202D08u: goto label_202d08;
            case 0x202D0Cu: goto label_202d0c;
            case 0x202D10u: goto label_202d10;
            case 0x202D14u: goto label_202d14;
            case 0x202D18u: goto label_202d18;
            case 0x202D1Cu: goto label_202d1c;
            case 0x202D20u: goto label_202d20;
            case 0x202D24u: goto label_202d24;
            case 0x202D28u: goto label_202d28;
            case 0x202D2Cu: goto label_202d2c;
            case 0x202D30u: goto label_202d30;
            case 0x202D34u: goto label_202d34;
            case 0x202D38u: goto label_202d38;
            case 0x202D3Cu: goto label_202d3c;
            case 0x202D40u: goto label_202d40;
            case 0x202D44u: goto label_202d44;
            case 0x202D48u: goto label_202d48;
            case 0x202D4Cu: goto label_202d4c;
            case 0x202D50u: goto label_202d50;
            case 0x202D54u: goto label_202d54;
            case 0x202D58u: goto label_202d58;
            case 0x202D5Cu: goto label_202d5c;
            case 0x202D60u: goto label_202d60;
            case 0x202D64u: goto label_202d64;
            case 0x202D68u: goto label_202d68;
            case 0x202D6Cu: goto label_202d6c;
            case 0x202D70u: goto label_202d70;
            case 0x202D74u: goto label_202d74;
            case 0x202D78u: goto label_202d78;
            case 0x202D7Cu: goto label_202d7c;
            case 0x202D80u: goto label_202d80;
            case 0x202D84u: goto label_202d84;
            case 0x202D88u: goto label_202d88;
            case 0x202D8Cu: goto label_202d8c;
            case 0x202D90u: goto label_202d90;
            case 0x202D94u: goto label_202d94;
            case 0x202D98u: goto label_202d98;
            case 0x202D9Cu: goto label_202d9c;
            case 0x202DA0u: goto label_202da0;
            case 0x202DA4u: goto label_202da4;
            case 0x202DA8u: goto label_202da8;
            case 0x202DACu: goto label_202dac;
            case 0x202DB0u: goto label_202db0;
            case 0x202DB4u: goto label_202db4;
            case 0x202DB8u: goto label_202db8;
            case 0x202DBCu: goto label_202dbc;
            case 0x202DC0u: goto label_202dc0;
            case 0x202DC4u: goto label_202dc4;
            case 0x202DC8u: goto label_202dc8;
            case 0x202DCCu: goto label_202dcc;
            case 0x202DD0u: goto label_202dd0;
            case 0x202DD4u: goto label_202dd4;
            case 0x202DD8u: goto label_202dd8;
            case 0x202DDCu: goto label_202ddc;
            case 0x202DE0u: goto label_202de0;
            case 0x202DE4u: goto label_202de4;
            case 0x202DE8u: goto label_202de8;
            case 0x202DECu: goto label_202dec;
            case 0x202DF0u: goto label_202df0;
            case 0x202DF4u: goto label_202df4;
            case 0x202DF8u: goto label_202df8;
            case 0x202DFCu: goto label_202dfc;
            case 0x202E00u: goto label_202e00;
            case 0x202E04u: goto label_202e04;
            case 0x202E08u: goto label_202e08;
            case 0x202E0Cu: goto label_202e0c;
            case 0x202E10u: goto label_202e10;
            case 0x202E14u: goto label_202e14;
            case 0x202E18u: goto label_202e18;
            case 0x202E1Cu: goto label_202e1c;
            case 0x202E20u: goto label_202e20;
            case 0x202E24u: goto label_202e24;
            case 0x202E28u: goto label_202e28;
            case 0x202E2Cu: goto label_202e2c;
            case 0x202E30u: goto label_202e30;
            case 0x202E34u: goto label_202e34;
            case 0x202E38u: goto label_202e38;
            case 0x202E3Cu: goto label_202e3c;
            case 0x202E40u: goto label_202e40;
            case 0x202E44u: goto label_202e44;
            case 0x202E48u: goto label_202e48;
            case 0x202E4Cu: goto label_202e4c;
            case 0x202E50u: goto label_202e50;
            case 0x202E54u: goto label_202e54;
            case 0x202E58u: goto label_202e58;
            case 0x202E5Cu: goto label_202e5c;
            case 0x202E60u: goto label_202e60;
            case 0x202E64u: goto label_202e64;
            case 0x202E68u: goto label_202e68;
            case 0x202E6Cu: goto label_202e6c;
            case 0x202E70u: goto label_202e70;
            case 0x202E74u: goto label_202e74;
            case 0x202E78u: goto label_202e78;
            case 0x202E7Cu: goto label_202e7c;
            case 0x202E80u: goto label_202e80;
            case 0x202E84u: goto label_202e84;
            case 0x202E88u: goto label_202e88;
            case 0x202E8Cu: goto label_202e8c;
            case 0x202E90u: goto label_202e90;
            case 0x202E94u: goto label_202e94;
            case 0x202E98u: goto label_202e98;
            case 0x202E9Cu: goto label_202e9c;
            case 0x202EA0u: goto label_202ea0;
            case 0x202EA4u: goto label_202ea4;
            case 0x202EA8u: goto label_202ea8;
            case 0x202EACu: goto label_202eac;
            case 0x202EB0u: goto label_202eb0;
            case 0x202EB4u: goto label_202eb4;
            case 0x202EB8u: goto label_202eb8;
            case 0x202EBCu: goto label_202ebc;
            case 0x202EC0u: goto label_202ec0;
            case 0x202EC4u: goto label_202ec4;
            case 0x202EC8u: goto label_202ec8;
            case 0x202ECCu: goto label_202ecc;
            case 0x202ED0u: goto label_202ed0;
            case 0x202ED4u: goto label_202ed4;
            case 0x202ED8u: goto label_202ed8;
            case 0x202EDCu: goto label_202edc;
            case 0x202EE0u: goto label_202ee0;
            case 0x202EE4u: goto label_202ee4;
            case 0x202EE8u: goto label_202ee8;
            case 0x202EECu: goto label_202eec;
            case 0x202EF0u: goto label_202ef0;
            case 0x202EF4u: goto label_202ef4;
            case 0x202EF8u: goto label_202ef8;
            case 0x202EFCu: goto label_202efc;
            case 0x202F00u: goto label_202f00;
            case 0x202F04u: goto label_202f04;
            case 0x202F08u: goto label_202f08;
            case 0x202F0Cu: goto label_202f0c;
            case 0x202F10u: goto label_202f10;
            case 0x202F14u: goto label_202f14;
            case 0x202F18u: goto label_202f18;
            case 0x202F1Cu: goto label_202f1c;
            case 0x202F20u: goto label_202f20;
            case 0x202F24u: goto label_202f24;
            case 0x202F28u: goto label_202f28;
            case 0x202F2Cu: goto label_202f2c;
            case 0x202F30u: goto label_202f30;
            case 0x202F34u: goto label_202f34;
            case 0x202F38u: goto label_202f38;
            case 0x202F3Cu: goto label_202f3c;
            case 0x202F40u: goto label_202f40;
            case 0x202F44u: goto label_202f44;
            case 0x202F48u: goto label_202f48;
            case 0x202F4Cu: goto label_202f4c;
            case 0x202F50u: goto label_202f50;
            case 0x202F54u: goto label_202f54;
            case 0x202F58u: goto label_202f58;
            case 0x202F5Cu: goto label_202f5c;
            case 0x202F60u: goto label_202f60;
            case 0x202F64u: goto label_202f64;
            case 0x202F68u: goto label_202f68;
            case 0x202F6Cu: goto label_202f6c;
            case 0x202F70u: goto label_202f70;
            case 0x202F74u: goto label_202f74;
            case 0x202F78u: goto label_202f78;
            case 0x202F7Cu: goto label_202f7c;
            case 0x202F80u: goto label_202f80;
            case 0x202F84u: goto label_202f84;
            case 0x202F88u: goto label_202f88;
            case 0x202F8Cu: goto label_202f8c;
            case 0x202F90u: goto label_202f90;
            case 0x202F94u: goto label_202f94;
            case 0x202F98u: goto label_202f98;
            case 0x202F9Cu: goto label_202f9c;
            case 0x202FA0u: goto label_202fa0;
            case 0x202FA4u: goto label_202fa4;
            case 0x202FA8u: goto label_202fa8;
            case 0x202FACu: goto label_202fac;
            case 0x202FB0u: goto label_202fb0;
            case 0x202FB4u: goto label_202fb4;
            case 0x202FB8u: goto label_202fb8;
            case 0x202FBCu: goto label_202fbc;
            case 0x202FC0u: goto label_202fc0;
            case 0x202FC4u: goto label_202fc4;
            case 0x202FC8u: goto label_202fc8;
            case 0x202FCCu: goto label_202fcc;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FD4u: goto label_202fd4;
            case 0x202FD8u: goto label_202fd8;
            case 0x202FDCu: goto label_202fdc;
            case 0x202FE0u: goto label_202fe0;
            case 0x202FE4u: goto label_202fe4;
            case 0x202FE8u: goto label_202fe8;
            case 0x202FECu: goto label_202fec;
            case 0x202FF0u: goto label_202ff0;
            case 0x202FF4u: goto label_202ff4;
            case 0x202FF8u: goto label_202ff8;
            case 0x202FFCu: goto label_202ffc;
            case 0x203000u: goto label_203000;
            case 0x203004u: goto label_203004;
            case 0x203008u: goto label_203008;
            case 0x20300Cu: goto label_20300c;
            case 0x203010u: goto label_203010;
            case 0x203014u: goto label_203014;
            case 0x203018u: goto label_203018;
            case 0x20301Cu: goto label_20301c;
            case 0x203020u: goto label_203020;
            case 0x203024u: goto label_203024;
            case 0x203028u: goto label_203028;
            case 0x20302Cu: goto label_20302c;
            case 0x203030u: goto label_203030;
            case 0x203034u: goto label_203034;
            case 0x203038u: goto label_203038;
            case 0x20303Cu: goto label_20303c;
            case 0x203040u: goto label_203040;
            case 0x203044u: goto label_203044;
            case 0x203048u: goto label_203048;
            case 0x20304Cu: goto label_20304c;
            case 0x203050u: goto label_203050;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x20305Cu: goto label_20305c;
            case 0x203060u: goto label_203060;
            case 0x203064u: goto label_203064;
            case 0x203068u: goto label_203068;
            case 0x20306Cu: goto label_20306c;
            case 0x203070u: goto label_203070;
            case 0x203074u: goto label_203074;
            case 0x203078u: goto label_203078;
            case 0x20307Cu: goto label_20307c;
            case 0x203080u: goto label_203080;
            case 0x203084u: goto label_203084;
            case 0x203088u: goto label_203088;
            case 0x20308Cu: goto label_20308c;
            case 0x203090u: goto label_203090;
            case 0x203094u: goto label_203094;
            case 0x203098u: goto label_203098;
            case 0x20309Cu: goto label_20309c;
            case 0x2030A0u: goto label_2030a0;
            case 0x2030A4u: goto label_2030a4;
            case 0x2030A8u: goto label_2030a8;
            case 0x2030ACu: goto label_2030ac;
            case 0x2030B0u: goto label_2030b0;
            case 0x2030B4u: goto label_2030b4;
            case 0x2030B8u: goto label_2030b8;
            case 0x2030BCu: goto label_2030bc;
            case 0x2030C0u: goto label_2030c0;
            case 0x2030C4u: goto label_2030c4;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030CCu: goto label_2030cc;
            case 0x2030D0u: goto label_2030d0;
            case 0x2030D4u: goto label_2030d4;
            case 0x2030D8u: goto label_2030d8;
            case 0x2030DCu: goto label_2030dc;
            case 0x2030E0u: goto label_2030e0;
            case 0x2030E4u: goto label_2030e4;
            case 0x2030E8u: goto label_2030e8;
            case 0x2030ECu: goto label_2030ec;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x2030F8u: goto label_2030f8;
            case 0x2030FCu: goto label_2030fc;
            case 0x203100u: goto label_203100;
            case 0x203104u: goto label_203104;
            case 0x203108u: goto label_203108;
            case 0x20310Cu: goto label_20310c;
            case 0x203110u: goto label_203110;
            case 0x203114u: goto label_203114;
            case 0x203118u: goto label_203118;
            case 0x20311Cu: goto label_20311c;
            case 0x203120u: goto label_203120;
            case 0x203124u: goto label_203124;
            case 0x203128u: goto label_203128;
            case 0x20312Cu: goto label_20312c;
            case 0x203130u: goto label_203130;
            case 0x203134u: goto label_203134;
            case 0x203138u: goto label_203138;
            case 0x20313Cu: goto label_20313c;
            case 0x203140u: goto label_203140;
            case 0x203144u: goto label_203144;
            case 0x203148u: goto label_203148;
            case 0x20314Cu: goto label_20314c;
            case 0x203150u: goto label_203150;
            case 0x203154u: goto label_203154;
            case 0x203158u: goto label_203158;
            case 0x20315Cu: goto label_20315c;
            case 0x203160u: goto label_203160;
            case 0x203164u: goto label_203164;
            case 0x203168u: goto label_203168;
            case 0x20316Cu: goto label_20316c;
            case 0x203170u: goto label_203170;
            case 0x203174u: goto label_203174;
            case 0x203178u: goto label_203178;
            case 0x20317Cu: goto label_20317c;
            case 0x203180u: goto label_203180;
            case 0x203184u: goto label_203184;
            case 0x203188u: goto label_203188;
            case 0x20318Cu: goto label_20318c;
            case 0x203190u: goto label_203190;
            case 0x203194u: goto label_203194;
            case 0x203198u: goto label_203198;
            case 0x20319Cu: goto label_20319c;
            case 0x2031A0u: goto label_2031a0;
            case 0x2031A4u: goto label_2031a4;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031B0u: goto label_2031b0;
            case 0x2031B4u: goto label_2031b4;
            case 0x2031B8u: goto label_2031b8;
            case 0x2031BCu: goto label_2031bc;
            case 0x2031C0u: goto label_2031c0;
            case 0x2031C4u: goto label_2031c4;
            case 0x2031C8u: goto label_2031c8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2031c4:
    ctx->pc = 0x2031CCu;
}
