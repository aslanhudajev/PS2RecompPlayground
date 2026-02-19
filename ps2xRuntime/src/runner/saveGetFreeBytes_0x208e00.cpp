#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveGetFreeBytes
// Address: 0x208e00 - 0x209064
void saveGetFreeBytes_0x208e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x208e00u;

label_208e00:
    // 0x208e00: 0x27bdffb0
    ctx->pc = 0x208e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_208e04:
    // 0x208e04: 0xffbf0040
    ctx->pc = 0x208e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_208e08:
    // 0x208e08: 0xffbe0030
    ctx->pc = 0x208e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_208e0c:
    // 0x208e0c: 0xffb00020
    ctx->pc = 0x208e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_208e10:
    // 0x208e10: 0x3a0f02d
    ctx->pc = 0x208e10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_208e14:
    // 0x208e14: 0xafc40000
    ctx->pc = 0x208e14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_208e18:
    // 0x208e18: 0xafc50004
    ctx->pc = 0x208e18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_208e1c:
    // 0x208e1c: 0x8fc20004
    ctx->pc = 0x208e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208e20:
    // 0x208e20: 0x40182d
    ctx->pc = 0x208e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208e24:
    // 0x208e24: 0x31080
    ctx->pc = 0x208e24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208e28:
    // 0x208e28: 0x8fc30000
    ctx->pc = 0x208e28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208e2c:
    // 0x208e2c: 0x60202d
    ctx->pc = 0x208e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208e30:
    // 0x208e30: 0x41900
    ctx->pc = 0x208e30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208e34:
    // 0x208e34: 0x431021
    ctx->pc = 0x208e34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208e38:
    // 0x208e38: 0x3c030031
    ctx->pc = 0x208e38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208e3c:
    // 0x208e3c: 0x246322c0
    ctx->pc = 0x208e3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
label_208e40:
    // 0x208e40: 0x621021
    ctx->pc = 0x208e40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208e44:
    // 0x208e44: 0x8c430000
    ctx->pc = 0x208e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208e48:
    // 0x208e48: 0x460000f
label_208e4c:
    if (ctx->pc == 0x208E4Cu) {
        ctx->pc = 0x208E50u;
        goto label_208e50;
    }
    ctx->pc = 0x208E48u;
    {
        const bool branch_taken_0x208e48 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x208e48) {
            ctx->pc = 0x208E88u;
            goto label_208e88;
        }
    }
    ctx->pc = 0x208E50u;
label_208e50:
    // 0x208e50: 0x8fc20004
    ctx->pc = 0x208e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208e54:
    // 0x208e54: 0x40182d
    ctx->pc = 0x208e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208e58:
    // 0x208e58: 0x31080
    ctx->pc = 0x208e58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208e5c:
    // 0x208e5c: 0x8fc30000
    ctx->pc = 0x208e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208e60:
    // 0x208e60: 0x60202d
    ctx->pc = 0x208e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208e64:
    // 0x208e64: 0x41900
    ctx->pc = 0x208e64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208e68:
    // 0x208e68: 0x431021
    ctx->pc = 0x208e68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208e6c:
    // 0x208e6c: 0x3c030031
    ctx->pc = 0x208e6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208e70:
    // 0x208e70: 0x246322c0
    ctx->pc = 0x208e70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
label_208e74:
    // 0x208e74: 0x621021
    ctx->pc = 0x208e74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208e78:
    // 0x208e78: 0x8c430000
    ctx->pc = 0x208e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208e7c:
    // 0x208e7c: 0x60102d
    ctx->pc = 0x208e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208e80:
    // 0x208e80: 0x10000071
label_208e84:
    if (ctx->pc == 0x208E84u) {
        ctx->pc = 0x208E88u;
        goto label_208e88;
    }
    ctx->pc = 0x208E80u;
    {
        const bool branch_taken_0x208e80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208e80) {
            ctx->pc = 0x209048u;
            goto label_209048;
        }
    }
    ctx->pc = 0x208E88u;
label_208e88:
    // 0x208e88: 0x27c20004
    ctx->pc = 0x208e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
label_208e8c:
    // 0x208e8c: 0x3c0202d
    ctx->pc = 0x208e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_208e90:
    // 0x208e90: 0x40282d
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208e94:
    // 0x208e94: 0xc081e72
label_208e98:
    if (ctx->pc == 0x208E98u) {
        ctx->pc = 0x208E9Cu;
        goto label_208e9c;
    }
    ctx->pc = 0x208E94u;
    SET_GPR_U32(ctx, 31, 0x208E9Cu);
    ctx->pc = 0x2079C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        translatePortAndSlot_0x2079c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E9Cu; }
    }
    if (ctx->pc != 0x208E9Cu) { return; }
    ctx->pc = 0x208E9Cu;
label_208e9c:
    // 0x208e9c: 0x14400004
label_208ea0:
    if (ctx->pc == 0x208EA0u) {
        ctx->pc = 0x208EA4u;
        goto label_208ea4;
    }
    ctx->pc = 0x208E9Cu;
    {
        const bool branch_taken_0x208e9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x208e9c) {
            ctx->pc = 0x208EB0u;
            goto label_208eb0;
        }
    }
    ctx->pc = 0x208EA4u;
label_208ea4:
    // 0x208ea4: 0x2402ffff
    ctx->pc = 0x208ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_208ea8:
    // 0x208ea8: 0x10000067
label_208eac:
    if (ctx->pc == 0x208EACu) {
        ctx->pc = 0x208EB0u;
        goto label_208eb0;
    }
    ctx->pc = 0x208EA8u;
    {
        const bool branch_taken_0x208ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208ea8) {
            ctx->pc = 0x209048u;
            goto label_209048;
        }
    }
    ctx->pc = 0x208EB0u;
label_208eb0:
    // 0x208eb0: 0xc081e52
label_208eb4:
    if (ctx->pc == 0x208EB4u) {
        ctx->pc = 0x208EB8u;
        goto label_208eb8;
    }
    ctx->pc = 0x208EB0u;
    SET_GPR_U32(ctx, 31, 0x208EB8u);
    ctx->pc = 0x207948u;
    {
        const uint32_t __entryPc = ctx->pc;
        backpollWait_0x207948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EB8u; }
    }
    if (ctx->pc != 0x208EB8u) { return; }
    ctx->pc = 0x208EB8u;
label_208eb8:
    // 0x208eb8: 0x27c20008
    ctx->pc = 0x208eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
label_208ebc:
    // 0x208ebc: 0x27c30010
    ctx->pc = 0x208ebcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 16));
label_208ec0:
    // 0x208ec0: 0x27c8000c
    ctx->pc = 0x208ec0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 30), 12));
label_208ec4:
    // 0x208ec4: 0x8fc40000
    ctx->pc = 0x208ec4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208ec8:
    // 0x208ec8: 0x8fc50004
    ctx->pc = 0x208ec8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208ecc:
    // 0x208ecc: 0x40302d
    ctx->pc = 0x208eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208ed0:
    // 0x208ed0: 0x60382d
    ctx->pc = 0x208ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208ed4:
    // 0x208ed4: 0xc0b9a64
label_208ed8:
    if (ctx->pc == 0x208ED8u) {
        ctx->pc = 0x208EDCu;
        goto label_208edc;
    }
    ctx->pc = 0x208ED4u;
    SET_GPR_U32(ctx, 31, 0x208EDCu);
    ctx->pc = 0x2E6990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetInfo_0x2e6990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EDCu; }
    }
    if (ctx->pc != 0x208EDCu) { return; }
    ctx->pc = 0x208EDCu;
label_208edc:
    // 0x208edc: 0x10400005
label_208ee0:
    if (ctx->pc == 0x208EE0u) {
        ctx->pc = 0x208EE4u;
        goto label_208ee4;
    }
    ctx->pc = 0x208EDCu;
    {
        const bool branch_taken_0x208edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208edc) {
            ctx->pc = 0x208EF4u;
            goto label_208ef4;
        }
    }
    ctx->pc = 0x208EE4u;
label_208ee4:
    // 0x208ee4: 0x3c04003a
    ctx->pc = 0x208ee4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_208ee8:
    // 0x208ee8: 0x24844ea0
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20128));
label_208eec:
    // 0x208eec: 0xc0b4a34
label_208ef0:
    if (ctx->pc == 0x208EF0u) {
        ctx->pc = 0x208EF4u;
        goto label_208ef4;
    }
    ctx->pc = 0x208EECu;
    SET_GPR_U32(ctx, 31, 0x208EF4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EF4u; }
    }
    if (ctx->pc != 0x208EF4u) { return; }
    ctx->pc = 0x208EF4u;
label_208ef4:
    // 0x208ef4: 0x0
    ctx->pc = 0x208ef4u;
    // NOP
label_208ef8:
    // 0x208ef8: 0x27c20014
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_208efc:
    // 0x208efc: 0x27c30018
    ctx->pc = 0x208efcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_208f00:
    // 0x208f00: 0x24040001
    ctx->pc = 0x208f00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_208f04:
    // 0x208f04: 0x40282d
    ctx->pc = 0x208f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208f08:
    // 0x208f08: 0x60302d
    ctx->pc = 0x208f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208f0c:
    // 0x208f0c: 0xc0b9a14
label_208f10:
    if (ctx->pc == 0x208F10u) {
        ctx->pc = 0x208F14u;
        goto label_208f14;
    }
    ctx->pc = 0x208F0Cu;
    SET_GPR_U32(ctx, 31, 0x208F14u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F14u; }
    }
    if (ctx->pc != 0x208F14u) { return; }
    ctx->pc = 0x208F14u;
label_208f14:
    // 0x208f14: 0x10400003
label_208f18:
    if (ctx->pc == 0x208F18u) {
        ctx->pc = 0x208F1Cu;
        goto label_208f1c;
    }
    ctx->pc = 0x208F14u;
    {
        const bool branch_taken_0x208f14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208f14) {
            ctx->pc = 0x208F24u;
            goto label_208f24;
        }
    }
    ctx->pc = 0x208F1Cu;
label_208f1c:
    // 0x208f1c: 0x1000000b
label_208f20:
    if (ctx->pc == 0x208F20u) {
        ctx->pc = 0x208F24u;
        goto label_208f24;
    }
    ctx->pc = 0x208F1Cu;
    {
        const bool branch_taken_0x208f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208f1c) {
            ctx->pc = 0x208F4Cu;
            goto label_208f4c;
        }
    }
    ctx->pc = 0x208F24u;
label_208f24:
    // 0x208f24: 0x3c02003c
    ctx->pc = 0x208f24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_208f28:
    // 0x208f28: 0x8c42c4e4
    ctx->pc = 0x208f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_208f2c:
    // 0x208f2c: 0x10400005
label_208f30:
    if (ctx->pc == 0x208F30u) {
        ctx->pc = 0x208F34u;
        goto label_208f34;
    }
    ctx->pc = 0x208F2Cu;
    {
        const bool branch_taken_0x208f2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208f2c) {
            ctx->pc = 0x208F44u;
            goto label_208f44;
        }
    }
    ctx->pc = 0x208F34u;
label_208f34:
    // 0x208f34: 0x3c10003c
    ctx->pc = 0x208f34u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_208f38:
    // 0x208f38: 0x8e10c4e4
    ctx->pc = 0x208f38u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_208f3c:
    // 0x208f3c: 0x200f809
label_208f40:
    if (ctx->pc == 0x208F40u) {
        ctx->pc = 0x208F44u;
        goto label_208f44;
    }
    ctx->pc = 0x208F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x208F44u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208E00u: goto label_208e00;
            case 0x208E04u: goto label_208e04;
            case 0x208E08u: goto label_208e08;
            case 0x208E0Cu: goto label_208e0c;
            case 0x208E10u: goto label_208e10;
            case 0x208E14u: goto label_208e14;
            case 0x208E18u: goto label_208e18;
            case 0x208E1Cu: goto label_208e1c;
            case 0x208E20u: goto label_208e20;
            case 0x208E24u: goto label_208e24;
            case 0x208E28u: goto label_208e28;
            case 0x208E2Cu: goto label_208e2c;
            case 0x208E30u: goto label_208e30;
            case 0x208E34u: goto label_208e34;
            case 0x208E38u: goto label_208e38;
            case 0x208E3Cu: goto label_208e3c;
            case 0x208E40u: goto label_208e40;
            case 0x208E44u: goto label_208e44;
            case 0x208E48u: goto label_208e48;
            case 0x208E4Cu: goto label_208e4c;
            case 0x208E50u: goto label_208e50;
            case 0x208E54u: goto label_208e54;
            case 0x208E58u: goto label_208e58;
            case 0x208E5Cu: goto label_208e5c;
            case 0x208E60u: goto label_208e60;
            case 0x208E64u: goto label_208e64;
            case 0x208E68u: goto label_208e68;
            case 0x208E6Cu: goto label_208e6c;
            case 0x208E70u: goto label_208e70;
            case 0x208E74u: goto label_208e74;
            case 0x208E78u: goto label_208e78;
            case 0x208E7Cu: goto label_208e7c;
            case 0x208E80u: goto label_208e80;
            case 0x208E84u: goto label_208e84;
            case 0x208E88u: goto label_208e88;
            case 0x208E8Cu: goto label_208e8c;
            case 0x208E90u: goto label_208e90;
            case 0x208E94u: goto label_208e94;
            case 0x208E98u: goto label_208e98;
            case 0x208E9Cu: goto label_208e9c;
            case 0x208EA0u: goto label_208ea0;
            case 0x208EA4u: goto label_208ea4;
            case 0x208EA8u: goto label_208ea8;
            case 0x208EACu: goto label_208eac;
            case 0x208EB0u: goto label_208eb0;
            case 0x208EB4u: goto label_208eb4;
            case 0x208EB8u: goto label_208eb8;
            case 0x208EBCu: goto label_208ebc;
            case 0x208EC0u: goto label_208ec0;
            case 0x208EC4u: goto label_208ec4;
            case 0x208EC8u: goto label_208ec8;
            case 0x208ECCu: goto label_208ecc;
            case 0x208ED0u: goto label_208ed0;
            case 0x208ED4u: goto label_208ed4;
            case 0x208ED8u: goto label_208ed8;
            case 0x208EDCu: goto label_208edc;
            case 0x208EE0u: goto label_208ee0;
            case 0x208EE4u: goto label_208ee4;
            case 0x208EE8u: goto label_208ee8;
            case 0x208EECu: goto label_208eec;
            case 0x208EF0u: goto label_208ef0;
            case 0x208EF4u: goto label_208ef4;
            case 0x208EF8u: goto label_208ef8;
            case 0x208EFCu: goto label_208efc;
            case 0x208F00u: goto label_208f00;
            case 0x208F04u: goto label_208f04;
            case 0x208F08u: goto label_208f08;
            case 0x208F0Cu: goto label_208f0c;
            case 0x208F10u: goto label_208f10;
            case 0x208F14u: goto label_208f14;
            case 0x208F18u: goto label_208f18;
            case 0x208F1Cu: goto label_208f1c;
            case 0x208F20u: goto label_208f20;
            case 0x208F24u: goto label_208f24;
            case 0x208F28u: goto label_208f28;
            case 0x208F2Cu: goto label_208f2c;
            case 0x208F30u: goto label_208f30;
            case 0x208F34u: goto label_208f34;
            case 0x208F38u: goto label_208f38;
            case 0x208F3Cu: goto label_208f3c;
            case 0x208F40u: goto label_208f40;
            case 0x208F44u: goto label_208f44;
            case 0x208F48u: goto label_208f48;
            case 0x208F4Cu: goto label_208f4c;
            case 0x208F50u: goto label_208f50;
            case 0x208F54u: goto label_208f54;
            case 0x208F58u: goto label_208f58;
            case 0x208F5Cu: goto label_208f5c;
            case 0x208F60u: goto label_208f60;
            case 0x208F64u: goto label_208f64;
            case 0x208F68u: goto label_208f68;
            case 0x208F6Cu: goto label_208f6c;
            case 0x208F70u: goto label_208f70;
            case 0x208F74u: goto label_208f74;
            case 0x208F78u: goto label_208f78;
            case 0x208F7Cu: goto label_208f7c;
            case 0x208F80u: goto label_208f80;
            case 0x208F84u: goto label_208f84;
            case 0x208F88u: goto label_208f88;
            case 0x208F8Cu: goto label_208f8c;
            case 0x208F90u: goto label_208f90;
            case 0x208F94u: goto label_208f94;
            case 0x208F98u: goto label_208f98;
            case 0x208F9Cu: goto label_208f9c;
            case 0x208FA0u: goto label_208fa0;
            case 0x208FA4u: goto label_208fa4;
            case 0x208FA8u: goto label_208fa8;
            case 0x208FACu: goto label_208fac;
            case 0x208FB0u: goto label_208fb0;
            case 0x208FB4u: goto label_208fb4;
            case 0x208FB8u: goto label_208fb8;
            case 0x208FBCu: goto label_208fbc;
            case 0x208FC0u: goto label_208fc0;
            case 0x208FC4u: goto label_208fc4;
            case 0x208FC8u: goto label_208fc8;
            case 0x208FCCu: goto label_208fcc;
            case 0x208FD0u: goto label_208fd0;
            case 0x208FD4u: goto label_208fd4;
            case 0x208FD8u: goto label_208fd8;
            case 0x208FDCu: goto label_208fdc;
            case 0x208FE0u: goto label_208fe0;
            case 0x208FE4u: goto label_208fe4;
            case 0x208FE8u: goto label_208fe8;
            case 0x208FECu: goto label_208fec;
            case 0x208FF0u: goto label_208ff0;
            case 0x208FF4u: goto label_208ff4;
            case 0x208FF8u: goto label_208ff8;
            case 0x208FFCu: goto label_208ffc;
            case 0x209000u: goto label_209000;
            case 0x209004u: goto label_209004;
            case 0x209008u: goto label_209008;
            case 0x20900Cu: goto label_20900c;
            case 0x209010u: goto label_209010;
            case 0x209014u: goto label_209014;
            case 0x209018u: goto label_209018;
            case 0x20901Cu: goto label_20901c;
            case 0x209020u: goto label_209020;
            case 0x209024u: goto label_209024;
            case 0x209028u: goto label_209028;
            case 0x20902Cu: goto label_20902c;
            case 0x209030u: goto label_209030;
            case 0x209034u: goto label_209034;
            case 0x209038u: goto label_209038;
            case 0x20903Cu: goto label_20903c;
            case 0x209040u: goto label_209040;
            case 0x209044u: goto label_209044;
            case 0x209048u: goto label_209048;
            case 0x20904Cu: goto label_20904c;
            case 0x209050u: goto label_209050;
            case 0x209054u: goto label_209054;
            case 0x209058u: goto label_209058;
            case 0x20905Cu: goto label_20905c;
            case 0x209060u: goto label_209060;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208F44u; }
            if (ctx->pc != 0x208F44u) { return; }
        }
    }
    ctx->pc = 0x208F44u;
label_208f44:
    // 0x208f44: 0x1000ffec
label_208f48:
    if (ctx->pc == 0x208F48u) {
        ctx->pc = 0x208F4Cu;
        goto label_208f4c;
    }
    ctx->pc = 0x208F44u;
    {
        const bool branch_taken_0x208f44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208f44) {
            ctx->pc = 0x208EF8u;
            goto label_208ef8;
        }
    }
    ctx->pc = 0x208F4Cu;
label_208f4c:
    // 0x208f4c: 0x8fc20018
    ctx->pc = 0x208f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_208f50:
    // 0x208f50: 0x10400008
label_208f54:
    if (ctx->pc == 0x208F54u) {
        ctx->pc = 0x208F58u;
        goto label_208f58;
    }
    ctx->pc = 0x208F50u;
    {
        const bool branch_taken_0x208f50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208f50) {
            ctx->pc = 0x208F74u;
            goto label_208f74;
        }
    }
    ctx->pc = 0x208F58u;
label_208f58:
    // 0x208f58: 0x8fc40000
    ctx->pc = 0x208f58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208f5c:
    // 0x208f5c: 0x8fc50004
    ctx->pc = 0x208f5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208f60:
    // 0x208f60: 0x8fc60018
    ctx->pc = 0x208f60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_208f64:
    // 0x208f64: 0x8fc70008
    ctx->pc = 0x208f64u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_208f68:
    // 0x208f68: 0x8fc8000c
    ctx->pc = 0x208f68u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_208f6c:
    // 0x208f6c: 0xc081d36
label_208f70:
    if (ctx->pc == 0x208F70u) {
        ctx->pc = 0x208F74u;
        goto label_208f74;
    }
    ctx->pc = 0x208F6Cu;
    SET_GPR_U32(ctx, 31, 0x208F74u);
    ctx->pc = 0x2074D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateCardState_0x2074d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F74u; }
    }
    if (ctx->pc != 0x208F74u) { return; }
    ctx->pc = 0x208F74u;
label_208f74:
    // 0x208f74: 0x8fc20004
    ctx->pc = 0x208f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208f78:
    // 0x208f78: 0x40182d
    ctx->pc = 0x208f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208f7c:
    // 0x208f7c: 0x31080
    ctx->pc = 0x208f7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208f80:
    // 0x208f80: 0x8fc30000
    ctx->pc = 0x208f80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208f84:
    // 0x208f84: 0x60202d
    ctx->pc = 0x208f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208f88:
    // 0x208f88: 0x41900
    ctx->pc = 0x208f88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208f8c:
    // 0x208f8c: 0x431021
    ctx->pc = 0x208f8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208f90:
    // 0x208f90: 0x3c030031
    ctx->pc = 0x208f90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208f94:
    // 0x208f94: 0x24632280
    ctx->pc = 0x208f94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_208f98:
    // 0x208f98: 0x621021
    ctx->pc = 0x208f98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208f9c:
    // 0x208f9c: 0x8c430000
    ctx->pc = 0x208f9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208fa0:
    // 0x208fa0: 0x24020002
    ctx->pc = 0x208fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_208fa4:
    // 0x208fa4: 0x14620011
label_208fa8:
    if (ctx->pc == 0x208FA8u) {
        ctx->pc = 0x208FACu;
        goto label_208fac;
    }
    ctx->pc = 0x208FA4u;
    {
        const bool branch_taken_0x208fa4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x208fa4) {
            ctx->pc = 0x208FECu;
            goto label_208fec;
        }
    }
    ctx->pc = 0x208FACu;
label_208fac:
    // 0x208fac: 0x8fc20004
    ctx->pc = 0x208facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208fb0:
    // 0x208fb0: 0x40182d
    ctx->pc = 0x208fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208fb4:
    // 0x208fb4: 0x31080
    ctx->pc = 0x208fb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208fb8:
    // 0x208fb8: 0x8fc30000
    ctx->pc = 0x208fb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208fbc:
    // 0x208fbc: 0x60202d
    ctx->pc = 0x208fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208fc0:
    // 0x208fc0: 0x41900
    ctx->pc = 0x208fc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208fc4:
    // 0x208fc4: 0x431021
    ctx->pc = 0x208fc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208fc8:
    // 0x208fc8: 0x3c030031
    ctx->pc = 0x208fc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208fcc:
    // 0x208fcc: 0x246322a0
    ctx->pc = 0x208fccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
label_208fd0:
    // 0x208fd0: 0x621021
    ctx->pc = 0x208fd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208fd4:
    // 0x208fd4: 0x8c430000
    ctx->pc = 0x208fd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208fd8:
    // 0x208fd8: 0x24020002
    ctx->pc = 0x208fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_208fdc:
    // 0x208fdc: 0x14620003
label_208fe0:
    if (ctx->pc == 0x208FE0u) {
        ctx->pc = 0x208FE4u;
        goto label_208fe4;
    }
    ctx->pc = 0x208FDCu;
    {
        const bool branch_taken_0x208fdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x208fdc) {
            ctx->pc = 0x208FECu;
            goto label_208fec;
        }
    }
    ctx->pc = 0x208FE4u;
label_208fe4:
    // 0x208fe4: 0x10000004
label_208fe8:
    if (ctx->pc == 0x208FE8u) {
        ctx->pc = 0x208FECu;
        goto label_208fec;
    }
    ctx->pc = 0x208FE4u;
    {
        const bool branch_taken_0x208fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208fe4) {
            ctx->pc = 0x208FF8u;
            goto label_208ff8;
        }
    }
    ctx->pc = 0x208FECu;
label_208fec:
    // 0x208fec: 0x2402ffff
    ctx->pc = 0x208fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_208ff0:
    // 0x208ff0: 0x10000015
label_208ff4:
    if (ctx->pc == 0x208FF4u) {
        ctx->pc = 0x208FF8u;
        goto label_208ff8;
    }
    ctx->pc = 0x208FF0u;
    {
        const bool branch_taken_0x208ff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208ff0) {
            ctx->pc = 0x209048u;
            goto label_209048;
        }
    }
    ctx->pc = 0x208FF8u;
label_208ff8:
    // 0x208ff8: 0x8fc20004
    ctx->pc = 0x208ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208ffc:
    // 0x208ffc: 0x40182d
    ctx->pc = 0x208ffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209000:
    // 0x209000: 0x31080
    ctx->pc = 0x209000u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_209004:
    // 0x209004: 0x8fc30000
    ctx->pc = 0x209004u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209008:
    // 0x209008: 0x60202d
    ctx->pc = 0x209008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20900c:
    // 0x20900c: 0x41900
    ctx->pc = 0x20900cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_209010:
    // 0x209010: 0x431021
    ctx->pc = 0x209010u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209014:
    // 0x209014: 0x3c030031
    ctx->pc = 0x209014u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_209018:
    // 0x209018: 0x246322c0
    ctx->pc = 0x209018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
label_20901c:
    // 0x20901c: 0x621021
    ctx->pc = 0x20901cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_209020:
    // 0x209020: 0x8fc30010
    ctx->pc = 0x209020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209024:
    // 0x209024: 0x60202d
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209028:
    // 0x209028: 0x41a80
    ctx->pc = 0x209028u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 10));
label_20902c:
    // 0x20902c: 0xac430000
    ctx->pc = 0x20902cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_209030:
    // 0x209030: 0x8fc20010
    ctx->pc = 0x209030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209034:
    // 0x209034: 0x40182d
    ctx->pc = 0x209034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209038:
    // 0x209038: 0x32280
    ctx->pc = 0x209038u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 10));
label_20903c:
    // 0x20903c: 0x80102d
    ctx->pc = 0x20903cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209040:
    // 0x209040: 0x10000001
label_209044:
    if (ctx->pc == 0x209044u) {
        ctx->pc = 0x209048u;
        goto label_209048;
    }
    ctx->pc = 0x209040u;
    {
        const bool branch_taken_0x209040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209040) {
            ctx->pc = 0x209048u;
            goto label_209048;
        }
    }
    ctx->pc = 0x209048u;
label_209048:
    // 0x209048: 0x3c0e82d
    ctx->pc = 0x209048u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20904c:
    // 0x20904c: 0xdfbf0040
    ctx->pc = 0x20904cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_209050:
    // 0x209050: 0xdfbe0030
    ctx->pc = 0x209050u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_209054:
    // 0x209054: 0xdfb00020
    ctx->pc = 0x209054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_209058:
    // 0x209058: 0x27bd0050
    ctx->pc = 0x209058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
label_20905c:
    // 0x20905c: 0x3e00008
label_209060:
    if (ctx->pc == 0x209060u) {
        ctx->pc = 0x209064u;
        goto label_fallthrough_0x20905c;
    }
    ctx->pc = 0x20905Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208E00u: goto label_208e00;
            case 0x208E04u: goto label_208e04;
            case 0x208E08u: goto label_208e08;
            case 0x208E0Cu: goto label_208e0c;
            case 0x208E10u: goto label_208e10;
            case 0x208E14u: goto label_208e14;
            case 0x208E18u: goto label_208e18;
            case 0x208E1Cu: goto label_208e1c;
            case 0x208E20u: goto label_208e20;
            case 0x208E24u: goto label_208e24;
            case 0x208E28u: goto label_208e28;
            case 0x208E2Cu: goto label_208e2c;
            case 0x208E30u: goto label_208e30;
            case 0x208E34u: goto label_208e34;
            case 0x208E38u: goto label_208e38;
            case 0x208E3Cu: goto label_208e3c;
            case 0x208E40u: goto label_208e40;
            case 0x208E44u: goto label_208e44;
            case 0x208E48u: goto label_208e48;
            case 0x208E4Cu: goto label_208e4c;
            case 0x208E50u: goto label_208e50;
            case 0x208E54u: goto label_208e54;
            case 0x208E58u: goto label_208e58;
            case 0x208E5Cu: goto label_208e5c;
            case 0x208E60u: goto label_208e60;
            case 0x208E64u: goto label_208e64;
            case 0x208E68u: goto label_208e68;
            case 0x208E6Cu: goto label_208e6c;
            case 0x208E70u: goto label_208e70;
            case 0x208E74u: goto label_208e74;
            case 0x208E78u: goto label_208e78;
            case 0x208E7Cu: goto label_208e7c;
            case 0x208E80u: goto label_208e80;
            case 0x208E84u: goto label_208e84;
            case 0x208E88u: goto label_208e88;
            case 0x208E8Cu: goto label_208e8c;
            case 0x208E90u: goto label_208e90;
            case 0x208E94u: goto label_208e94;
            case 0x208E98u: goto label_208e98;
            case 0x208E9Cu: goto label_208e9c;
            case 0x208EA0u: goto label_208ea0;
            case 0x208EA4u: goto label_208ea4;
            case 0x208EA8u: goto label_208ea8;
            case 0x208EACu: goto label_208eac;
            case 0x208EB0u: goto label_208eb0;
            case 0x208EB4u: goto label_208eb4;
            case 0x208EB8u: goto label_208eb8;
            case 0x208EBCu: goto label_208ebc;
            case 0x208EC0u: goto label_208ec0;
            case 0x208EC4u: goto label_208ec4;
            case 0x208EC8u: goto label_208ec8;
            case 0x208ECCu: goto label_208ecc;
            case 0x208ED0u: goto label_208ed0;
            case 0x208ED4u: goto label_208ed4;
            case 0x208ED8u: goto label_208ed8;
            case 0x208EDCu: goto label_208edc;
            case 0x208EE0u: goto label_208ee0;
            case 0x208EE4u: goto label_208ee4;
            case 0x208EE8u: goto label_208ee8;
            case 0x208EECu: goto label_208eec;
            case 0x208EF0u: goto label_208ef0;
            case 0x208EF4u: goto label_208ef4;
            case 0x208EF8u: goto label_208ef8;
            case 0x208EFCu: goto label_208efc;
            case 0x208F00u: goto label_208f00;
            case 0x208F04u: goto label_208f04;
            case 0x208F08u: goto label_208f08;
            case 0x208F0Cu: goto label_208f0c;
            case 0x208F10u: goto label_208f10;
            case 0x208F14u: goto label_208f14;
            case 0x208F18u: goto label_208f18;
            case 0x208F1Cu: goto label_208f1c;
            case 0x208F20u: goto label_208f20;
            case 0x208F24u: goto label_208f24;
            case 0x208F28u: goto label_208f28;
            case 0x208F2Cu: goto label_208f2c;
            case 0x208F30u: goto label_208f30;
            case 0x208F34u: goto label_208f34;
            case 0x208F38u: goto label_208f38;
            case 0x208F3Cu: goto label_208f3c;
            case 0x208F40u: goto label_208f40;
            case 0x208F44u: goto label_208f44;
            case 0x208F48u: goto label_208f48;
            case 0x208F4Cu: goto label_208f4c;
            case 0x208F50u: goto label_208f50;
            case 0x208F54u: goto label_208f54;
            case 0x208F58u: goto label_208f58;
            case 0x208F5Cu: goto label_208f5c;
            case 0x208F60u: goto label_208f60;
            case 0x208F64u: goto label_208f64;
            case 0x208F68u: goto label_208f68;
            case 0x208F6Cu: goto label_208f6c;
            case 0x208F70u: goto label_208f70;
            case 0x208F74u: goto label_208f74;
            case 0x208F78u: goto label_208f78;
            case 0x208F7Cu: goto label_208f7c;
            case 0x208F80u: goto label_208f80;
            case 0x208F84u: goto label_208f84;
            case 0x208F88u: goto label_208f88;
            case 0x208F8Cu: goto label_208f8c;
            case 0x208F90u: goto label_208f90;
            case 0x208F94u: goto label_208f94;
            case 0x208F98u: goto label_208f98;
            case 0x208F9Cu: goto label_208f9c;
            case 0x208FA0u: goto label_208fa0;
            case 0x208FA4u: goto label_208fa4;
            case 0x208FA8u: goto label_208fa8;
            case 0x208FACu: goto label_208fac;
            case 0x208FB0u: goto label_208fb0;
            case 0x208FB4u: goto label_208fb4;
            case 0x208FB8u: goto label_208fb8;
            case 0x208FBCu: goto label_208fbc;
            case 0x208FC0u: goto label_208fc0;
            case 0x208FC4u: goto label_208fc4;
            case 0x208FC8u: goto label_208fc8;
            case 0x208FCCu: goto label_208fcc;
            case 0x208FD0u: goto label_208fd0;
            case 0x208FD4u: goto label_208fd4;
            case 0x208FD8u: goto label_208fd8;
            case 0x208FDCu: goto label_208fdc;
            case 0x208FE0u: goto label_208fe0;
            case 0x208FE4u: goto label_208fe4;
            case 0x208FE8u: goto label_208fe8;
            case 0x208FECu: goto label_208fec;
            case 0x208FF0u: goto label_208ff0;
            case 0x208FF4u: goto label_208ff4;
            case 0x208FF8u: goto label_208ff8;
            case 0x208FFCu: goto label_208ffc;
            case 0x209000u: goto label_209000;
            case 0x209004u: goto label_209004;
            case 0x209008u: goto label_209008;
            case 0x20900Cu: goto label_20900c;
            case 0x209010u: goto label_209010;
            case 0x209014u: goto label_209014;
            case 0x209018u: goto label_209018;
            case 0x20901Cu: goto label_20901c;
            case 0x209020u: goto label_209020;
            case 0x209024u: goto label_209024;
            case 0x209028u: goto label_209028;
            case 0x20902Cu: goto label_20902c;
            case 0x209030u: goto label_209030;
            case 0x209034u: goto label_209034;
            case 0x209038u: goto label_209038;
            case 0x20903Cu: goto label_20903c;
            case 0x209040u: goto label_209040;
            case 0x209044u: goto label_209044;
            case 0x209048u: goto label_209048;
            case 0x20904Cu: goto label_20904c;
            case 0x209050u: goto label_209050;
            case 0x209054u: goto label_209054;
            case 0x209058u: goto label_209058;
            case 0x20905Cu: goto label_20905c;
            case 0x209060u: goto label_209060;
            default: break;
        }
        return;
    }
label_fallthrough_0x20905c:
    ctx->pc = 0x209064u;
}
