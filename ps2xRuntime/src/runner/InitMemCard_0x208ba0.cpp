#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitMemCard
// Address: 0x208ba0 - 0x208d9c
void InitMemCard_0x208ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x208ba0u;

    // 0x208ba0: 0x27bdffd0
    ctx->pc = 0x208ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208ba4: 0xffbf0020
    ctx->pc = 0x208ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208ba8: 0xffbe0010
    ctx->pc = 0x208ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x208bac: 0x3a0f02d
    ctx->pc = 0x208bacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bb0: 0xc0820a6
    ctx->pc = 0x208BB0u;
    SET_GPR_U32(ctx, 31, 0x208BB8u);
    ctx->pc = 0x208298u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_all_dir_info_0x208298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BB8u; }
    }
    if (ctx->pc != 0x208BB8u) { return; }
    ctx->pc = 0x208BB8u;
    // 0x208bb8: 0xafc00000
    ctx->pc = 0x208bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x208bbc: 0x0
    ctx->pc = 0x208bbcu;
    // NOP
label_208bc0:
    // 0x208bc0: 0x8fc20000
    ctx->pc = 0x208bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208bc4: 0x28430002
    ctx->pc = 0x208bc4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x208bc8: 0x14600003
    ctx->pc = 0x208BC8u;
    {
        const bool branch_taken_0x208bc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x208bc8) {
            ctx->pc = 0x208BD8u;
            goto label_208bd8;
        }
    }
    ctx->pc = 0x208BD0u;
    // 0x208bd0: 0x10000035
    ctx->pc = 0x208BD0u;
    {
        const bool branch_taken_0x208bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208bd0) {
            ctx->pc = 0x208CA8u;
            goto label_208ca8;
        }
    }
    ctx->pc = 0x208BD8u;
label_208bd8:
    // 0x208bd8: 0xafc00004
    ctx->pc = 0x208bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x208bdc: 0x0
    ctx->pc = 0x208bdcu;
    // NOP
label_208be0:
    // 0x208be0: 0x8fc20004
    ctx->pc = 0x208be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208be4: 0x28430004
    ctx->pc = 0x208be4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
    // 0x208be8: 0x14600003
    ctx->pc = 0x208BE8u;
    {
        const bool branch_taken_0x208be8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x208be8) {
            ctx->pc = 0x208BF8u;
            goto label_208bf8;
        }
    }
    ctx->pc = 0x208BF0u;
    // 0x208bf0: 0x10000028
    ctx->pc = 0x208BF0u;
    {
        const bool branch_taken_0x208bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208bf0) {
            ctx->pc = 0x208C94u;
            goto label_208c94;
        }
    }
    ctx->pc = 0x208BF8u;
label_208bf8:
    // 0x208bf8: 0x8fc20004
    ctx->pc = 0x208bf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208bfc: 0x40182d
    ctx->pc = 0x208bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c00: 0x31080
    ctx->pc = 0x208c00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x208c04: 0x8fc30000
    ctx->pc = 0x208c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208c08: 0x60202d
    ctx->pc = 0x208c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c0c: 0x41900
    ctx->pc = 0x208c0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x208c10: 0x431021
    ctx->pc = 0x208c10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208c14: 0x3c030031
    ctx->pc = 0x208c14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x208c18: 0x24632280
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x208c1c: 0x621021
    ctx->pc = 0x208c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208c20: 0xac400000
    ctx->pc = 0x208c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x208c24: 0x8fc20004
    ctx->pc = 0x208c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208c28: 0x40182d
    ctx->pc = 0x208c28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c2c: 0x31080
    ctx->pc = 0x208c2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x208c30: 0x8fc30000
    ctx->pc = 0x208c30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208c34: 0x60202d
    ctx->pc = 0x208c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c38: 0x41900
    ctx->pc = 0x208c38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x208c3c: 0x431021
    ctx->pc = 0x208c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208c40: 0x3c030031
    ctx->pc = 0x208c40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x208c44: 0x246322a0
    ctx->pc = 0x208c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x208c48: 0x621021
    ctx->pc = 0x208c48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208c4c: 0xac400000
    ctx->pc = 0x208c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x208c50: 0x8fc20004
    ctx->pc = 0x208c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208c54: 0x40182d
    ctx->pc = 0x208c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c58: 0x31080
    ctx->pc = 0x208c58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x208c5c: 0x8fc30000
    ctx->pc = 0x208c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208c60: 0x60202d
    ctx->pc = 0x208c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c64: 0x41900
    ctx->pc = 0x208c64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x208c68: 0x431021
    ctx->pc = 0x208c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208c6c: 0x3c030031
    ctx->pc = 0x208c6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x208c70: 0x246322c0
    ctx->pc = 0x208c70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
    // 0x208c74: 0x621021
    ctx->pc = 0x208c74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208c78: 0x2403ffff
    ctx->pc = 0x208c78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208c7c: 0xac430000
    ctx->pc = 0x208c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x208c80: 0x8fc20004
    ctx->pc = 0x208c80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208c84: 0x24430001
    ctx->pc = 0x208c84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x208c88: 0xafc30004
    ctx->pc = 0x208c88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x208c8c: 0x1000ffd4
    ctx->pc = 0x208C8Cu;
    {
        const bool branch_taken_0x208c8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208c8c) {
            ctx->pc = 0x208BE0u;
            goto label_208be0;
        }
    }
    ctx->pc = 0x208C94u;
label_208c94:
    // 0x208c94: 0x8fc20000
    ctx->pc = 0x208c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208c98: 0x24430001
    ctx->pc = 0x208c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x208c9c: 0xafc30000
    ctx->pc = 0x208c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x208ca0: 0x1000ffc7
    ctx->pc = 0x208CA0u;
    {
        const bool branch_taken_0x208ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208ca0) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208CA8u;
label_208ca8:
    // 0x208ca8: 0x3c020031
    ctx->pc = 0x208ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x208cac: 0x8c42f184
    ctx->pc = 0x208cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x208cb0: 0x10400003
    ctx->pc = 0x208CB0u;
    {
        const bool branch_taken_0x208cb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208cb0) {
            ctx->pc = 0x208CC0u;
            goto label_208cc0;
        }
    }
    ctx->pc = 0x208CB8u;
    // 0x208cb8: 0x10000032
    ctx->pc = 0x208CB8u;
    {
        const bool branch_taken_0x208cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208cb8) {
            ctx->pc = 0x208D84u;
            goto label_208d84;
        }
    }
    ctx->pc = 0x208CC0u;
label_208cc0:
    // 0x208cc0: 0xc0b9834
    ctx->pc = 0x208CC0u;
    SET_GPR_U32(ctx, 31, 0x208CC8u);
    ctx->pc = 0x2E60D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcInit_0x2e60d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CC8u; }
    }
    if (ctx->pc != 0x208CC8u) { return; }
    ctx->pc = 0x208CC8u;
    // 0x208cc8: 0x10400005
    ctx->pc = 0x208CC8u;
    {
        const bool branch_taken_0x208cc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208cc8) {
            ctx->pc = 0x208CE0u;
            goto label_208ce0;
        }
    }
    ctx->pc = 0x208CD0u;
    // 0x208cd0: 0x3c04003a
    ctx->pc = 0x208cd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x208cd4: 0x24844e70
    ctx->pc = 0x208cd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20080));
    // 0x208cd8: 0xc0b4a34
    ctx->pc = 0x208CD8u;
    SET_GPR_U32(ctx, 31, 0x208CE0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CE0u; }
    }
    if (ctx->pc != 0x208CE0u) { return; }
    ctx->pc = 0x208CE0u;
label_208ce0:
    // 0x208ce0: 0x3c01003c
    ctx->pc = 0x208ce0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x208ce4: 0xac20c4e4
    ctx->pc = 0x208ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952164), GPR_U32(ctx, 0));
    // 0x208ce8: 0xc081d26
    ctx->pc = 0x208CE8u;
    SET_GPR_U32(ctx, 31, 0x208CF0u);
    ctx->pc = 0x207498u;
    {
        const uint32_t __entryPc = ctx->pc;
        backpollInit_0x207498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CF0u; }
    }
    if (ctx->pc != 0x208CF0u) { return; }
    ctx->pc = 0x208CF0u;
    // 0x208cf0: 0xafc00000
    ctx->pc = 0x208cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x208cf4: 0x0
    ctx->pc = 0x208cf4u;
    // NOP
label_208cf8:
    // 0x208cf8: 0x8fc20000
    ctx->pc = 0x208cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208cfc: 0x28430002
    ctx->pc = 0x208cfcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x208d00: 0x14600003
    ctx->pc = 0x208D00u;
    {
        const bool branch_taken_0x208d00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x208d00) {
            ctx->pc = 0x208D10u;
            goto label_208d10;
        }
    }
    ctx->pc = 0x208D08u;
    // 0x208d08: 0x1000001e
    ctx->pc = 0x208D08u;
    {
        const bool branch_taken_0x208d08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208d08) {
            ctx->pc = 0x208D84u;
            goto label_208d84;
        }
    }
    ctx->pc = 0x208D10u;
label_208d10:
    // 0x208d10: 0xafc00004
    ctx->pc = 0x208d10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x208d14: 0x0
    ctx->pc = 0x208d14u;
    // NOP
label_208d18:
    // 0x208d18: 0x8fc20004
    ctx->pc = 0x208d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208d1c: 0x28430004
    ctx->pc = 0x208d1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
    // 0x208d20: 0x14600003
    ctx->pc = 0x208D20u;
    {
        const bool branch_taken_0x208d20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x208d20) {
            ctx->pc = 0x208D30u;
            goto label_208d30;
        }
    }
    ctx->pc = 0x208D28u;
    // 0x208d28: 0x10000011
    ctx->pc = 0x208D28u;
    {
        const bool branch_taken_0x208d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208d28) {
            ctx->pc = 0x208D70u;
            goto label_208d70;
        }
    }
    ctx->pc = 0x208D30u;
label_208d30:
    // 0x208d30: 0x8fc40000
    ctx->pc = 0x208d30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208d34: 0x8fc50004
    ctx->pc = 0x208d34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208d38: 0x302d
    ctx->pc = 0x208d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d3c: 0xc0820e2
    ctx->pc = 0x208D3Cu;
    SET_GPR_U32(ctx, 31, 0x208D44u);
    ctx->pc = 0x208388u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMount_0x208388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D44u; }
    }
    if (ctx->pc != 0x208D44u) { return; }
    ctx->pc = 0x208D44u;
    // 0x208d44: 0x10400005
    ctx->pc = 0x208D44u;
    {
        const bool branch_taken_0x208d44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208d44) {
            ctx->pc = 0x208D5Cu;
            goto label_208d5c;
        }
    }
    ctx->pc = 0x208D4Cu;
    // 0x208d4c: 0x8fc40000
    ctx->pc = 0x208d4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208d50: 0x8fc50004
    ctx->pc = 0x208d50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208d54: 0xc08204a
    ctx->pc = 0x208D54u;
    SET_GPR_U32(ctx, 31, 0x208D5Cu);
    ctx->pc = 0x208128u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_prefs_loaded_0x208128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D5Cu; }
    }
    if (ctx->pc != 0x208D5Cu) { return; }
    ctx->pc = 0x208D5Cu;
label_208d5c:
    // 0x208d5c: 0x8fc20004
    ctx->pc = 0x208d5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208d60: 0x24430001
    ctx->pc = 0x208d60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x208d64: 0xafc30004
    ctx->pc = 0x208d64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x208d68: 0x1000ffeb
    ctx->pc = 0x208D68u;
    {
        const bool branch_taken_0x208d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208d68) {
            ctx->pc = 0x208D18u;
            goto label_208d18;
        }
    }
    ctx->pc = 0x208D70u;
label_208d70:
    // 0x208d70: 0x8fc20000
    ctx->pc = 0x208d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208d74: 0x24430001
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x208d78: 0xafc30000
    ctx->pc = 0x208d78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x208d7c: 0x1000ffde
    ctx->pc = 0x208D7Cu;
    {
        const bool branch_taken_0x208d7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208d7c) {
            ctx->pc = 0x208CF8u;
            goto label_208cf8;
        }
    }
    ctx->pc = 0x208D84u;
label_208d84:
    // 0x208d84: 0x3c0e82d
    ctx->pc = 0x208d84u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d88: 0xdfbf0020
    ctx->pc = 0x208d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208d8c: 0xdfbe0010
    ctx->pc = 0x208d8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208d90: 0x27bd0030
    ctx->pc = 0x208d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x208d94: 0x3e00008
    ctx->pc = 0x208D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208BC0u: goto label_208bc0;
            case 0x208BD8u: goto label_208bd8;
            case 0x208BE0u: goto label_208be0;
            case 0x208BF8u: goto label_208bf8;
            case 0x208C94u: goto label_208c94;
            case 0x208CA8u: goto label_208ca8;
            case 0x208CC0u: goto label_208cc0;
            case 0x208CE0u: goto label_208ce0;
            case 0x208CF8u: goto label_208cf8;
            case 0x208D10u: goto label_208d10;
            case 0x208D18u: goto label_208d18;
            case 0x208D30u: goto label_208d30;
            case 0x208D5Cu: goto label_208d5c;
            case 0x208D70u: goto label_208d70;
            case 0x208D84u: goto label_208d84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208D9Cu;
}
