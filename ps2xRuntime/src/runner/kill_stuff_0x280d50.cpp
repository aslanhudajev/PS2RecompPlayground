#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill_stuff
// Address: 0x280d50 - 0x280e78
void kill_stuff_0x280d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280d50u;

    // 0x280d50: 0x27bdffb0
    ctx->pc = 0x280d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280d54: 0xffbf0040
    ctx->pc = 0x280d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x280d58: 0xffb30030
    ctx->pc = 0x280d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x280d5c: 0xffb20020
    ctx->pc = 0x280d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x280d60: 0xffb10010
    ctx->pc = 0x280d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x280d64: 0xffb00000
    ctx->pc = 0x280d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280d68: 0x80882d
    ctx->pc = 0x280d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d6c: 0xc0a02c4
    ctx->pc = 0x280D6Cu;
    SET_GPR_U32(ctx, 31, 0x280D74u);
    ctx->pc = 0x280D70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D74u; }
    }
    if (ctx->pc != 0x280D74u) { return; }
    ctx->pc = 0x280D74u;
    // 0x280d74: 0x2a0203e8
    ctx->pc = 0x280d74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 1000));
    // 0x280d78: 0x10400038
    ctx->pc = 0x280D78u;
    {
        const bool branch_taken_0x280d78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280D7Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 998));
        if (branch_taken_0x280d78) {
            ctx->pc = 0x280E5Cu;
            goto label_280e5c;
        }
    }
    ctx->pc = 0x280D80u;
    // 0x280d80: 0x14400037
    ctx->pc = 0x280D80u;
    {
        const bool branch_taken_0x280d80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280D84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x280d80) {
            ctx->pc = 0x280E60u;
            goto label_280e60;
        }
    }
    ctx->pc = 0x280D88u;
    // 0x280d88: 0x8e240000
    ctx->pc = 0x280d88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280d8c: 0x10800005
    ctx->pc = 0x280D8Cu;
    {
        const bool branch_taken_0x280d8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x280D90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x280d8c) {
            ctx->pc = 0x280DA4u;
            goto label_280da4;
        }
    }
    ctx->pc = 0x280D94u;
    // 0x280d94: 0x10820014
    ctx->pc = 0x280D94u;
    {
        const bool branch_taken_0x280d94 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x280D98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x280d94) {
            ctx->pc = 0x280DE8u;
            goto label_280de8;
        }
    }
    ctx->pc = 0x280D9Cu;
    // 0x280d9c: 0x10000031
    ctx->pc = 0x280D9Cu;
    {
        const bool branch_taken_0x280d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280DA0u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x280d9c) {
            ctx->pc = 0x280E64u;
            goto label_280e64;
        }
    }
    ctx->pc = 0x280DA4u;
label_280da4:
    // 0x280da4: 0x882d
    ctx->pc = 0x280da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280da8: 0x3c020033
    ctx->pc = 0x280da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x280dac: 0x2452dfd0
    ctx->pc = 0x280dacu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x280db0: 0x241003b0
    ctx->pc = 0x280db0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 944));
    // 0x280db4: 0x2301818
    ctx->pc = 0x280db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_280db8:
    // 0x280db8: 0x721021
    ctx->pc = 0x280db8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x280dbc: 0x8c4200c8
    ctx->pc = 0x280dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x280dc0: 0x50400004
    ctx->pc = 0x280DC0u;
    {
        const bool branch_taken_0x280dc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x280dc0) {
            ctx->pc = 0x280DC4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x280DD4u;
            goto label_280dd4;
        }
    }
    ctx->pc = 0x280DC8u;
    // 0x280dc8: 0xc08e734
    ctx->pc = 0x280DC8u;
    SET_GPR_U32(ctx, 31, 0x280DD0u);
    ctx->pc = 0x280DCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_enemy_0x239cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DD0u; }
    }
    if (ctx->pc != 0x280DD0u) { return; }
    ctx->pc = 0x280DD0u;
    // 0x280dd0: 0x26310001
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_280dd4:
    // 0x280dd4: 0x2a220019
    ctx->pc = 0x280dd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 25));
    // 0x280dd8: 0x1440fff7
    ctx->pc = 0x280DD8u;
    {
        const bool branch_taken_0x280dd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280DDCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x280dd8) {
            ctx->pc = 0x280DB8u;
            goto label_280db8;
        }
    }
    ctx->pc = 0x280DE0u;
    // 0x280de0: 0x1000001f
    ctx->pc = 0x280DE0u;
    {
        const bool branch_taken_0x280de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280DE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x280de0) {
            ctx->pc = 0x280E60u;
            goto label_280e60;
        }
    }
    ctx->pc = 0x280DE8u;
label_280de8:
    // 0x280de8: 0x8c50cd94
    ctx->pc = 0x280de8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x280dec: 0x3c020034
    ctx->pc = 0x280decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x280df0: 0x8c42cd98
    ctx->pc = 0x280df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x280df4: 0x18400019
    ctx->pc = 0x280DF4u;
    {
        const bool branch_taken_0x280df4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x280DF8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x280df4) {
            ctx->pc = 0x280E5Cu;
            goto label_280e5c;
        }
    }
    ctx->pc = 0x280DFCu;
    // 0x280dfc: 0x24130003
    ctx->pc = 0x280dfcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
    // 0x280e00: 0x3c120034
    ctx->pc = 0x280e00u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x280e04: 0x0
    ctx->pc = 0x280e04u;
    // NOP
label_280e08:
    // 0x280e08: 0x960200d8
    ctx->pc = 0x280e08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x280e0c: 0x24420001
    ctx->pc = 0x280e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x280e10: 0x3042ffff
    ctx->pc = 0x280e10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x280e14: 0x2c420002
    ctx->pc = 0x280e14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x280e18: 0x1440000b
    ctx->pc = 0x280E18u;
    {
        const bool branch_taken_0x280e18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280E1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x280e18) {
            ctx->pc = 0x280E48u;
            goto label_280e48;
        }
    }
    ctx->pc = 0x280E20u;
    // 0x280e20: 0x8c620000
    ctx->pc = 0x280e20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280e24: 0x54530009
    ctx->pc = 0x280E24u;
    {
        const bool branch_taken_0x280e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x280e24) {
            ctx->pc = 0x280E28u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x280E4Cu;
            goto label_280e4c;
        }
    }
    ctx->pc = 0x280E2Cu;
    // 0x280e2c: 0x200202d
    ctx->pc = 0x280e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e30: 0x3c01461c
    ctx->pc = 0x280e30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x280e34: 0x34214000
    ctx->pc = 0x280e34u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x280e38: 0x44816000
    ctx->pc = 0x280e38u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x280e3c: 0x282d
    ctx->pc = 0x280e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e40: 0xc096992
    ctx->pc = 0x280E40u;
    SET_GPR_U32(ctx, 31, 0x280E48u);
    ctx->pc = 0x280E44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25A648u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageItem_0x25a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E48u; }
    }
    if (ctx->pc != 0x280E48u) { return; }
    ctx->pc = 0x280E48u;
label_280e48:
    // 0x280e48: 0x26310001
    ctx->pc = 0x280e48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_280e4c:
    // 0x280e4c: 0x8e42cd98
    ctx->pc = 0x280e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954392)));
    // 0x280e50: 0x222102a
    ctx->pc = 0x280e50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x280e54: 0x1440ffec
    ctx->pc = 0x280E54u;
    {
        const bool branch_taken_0x280e54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280E58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x280e54) {
            ctx->pc = 0x280E08u;
            goto label_280e08;
        }
    }
    ctx->pc = 0x280E5Cu;
label_280e5c:
    // 0x280e5c: 0xdfbf0040
    ctx->pc = 0x280e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_280e60:
    // 0x280e60: 0xdfb30030
    ctx->pc = 0x280e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_280e64:
    // 0x280e64: 0xdfb20020
    ctx->pc = 0x280e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280e68: 0xdfb10010
    ctx->pc = 0x280e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280e6c: 0xdfb00000
    ctx->pc = 0x280e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e70: 0x3e00008
    ctx->pc = 0x280E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280E74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280DA4u: goto label_280da4;
            case 0x280DB8u: goto label_280db8;
            case 0x280DD4u: goto label_280dd4;
            case 0x280DE8u: goto label_280de8;
            case 0x280E08u: goto label_280e08;
            case 0x280E48u: goto label_280e48;
            case 0x280E4Cu: goto label_280e4c;
            case 0x280E5Cu: goto label_280e5c;
            case 0x280E60u: goto label_280e60;
            case 0x280E64u: goto label_280e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280E78u;
}
