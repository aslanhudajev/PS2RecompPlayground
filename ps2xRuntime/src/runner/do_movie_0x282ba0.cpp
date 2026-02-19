#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_movie
// Address: 0x282ba0 - 0x282da4
void do_movie_0x282ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282ba0u;

    // 0x282ba0: 0x27bdffb0
    ctx->pc = 0x282ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x282ba4: 0xffbf0040
    ctx->pc = 0x282ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x282ba8: 0xffb30030
    ctx->pc = 0x282ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x282bac: 0xffb20020
    ctx->pc = 0x282bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x282bb0: 0xffb10010
    ctx->pc = 0x282bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x282bb4: 0xffb00000
    ctx->pc = 0x282bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282bb8: 0x3c020031
    ctx->pc = 0x282bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282bbc: 0x8c42f18c
    ctx->pc = 0x282bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963596)));
    // 0x282bc0: 0x10400005
    ctx->pc = 0x282BC0u;
    {
        const bool branch_taken_0x282bc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282BC4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282bc0) {
            ctx->pc = 0x282BD8u;
            goto label_282bd8;
        }
    }
    ctx->pc = 0x282BC8u;
    // 0x282bc8: 0xc0a0960
    ctx->pc = 0x282BC8u;
    SET_GPR_U32(ctx, 31, 0x282BD0u);
    ctx->pc = 0x282BCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BD0u; }
    }
    if (ctx->pc != 0x282BD0u) { return; }
    ctx->pc = 0x282BD0u;
    // 0x282bd0: 0x1000006d
    ctx->pc = 0x282BD0u;
    {
        const bool branch_taken_0x282bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282BD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x282bd0) {
            ctx->pc = 0x282D88u;
            goto label_282d88;
        }
    }
    ctx->pc = 0x282BD8u;
label_282bd8:
    // 0x282bd8: 0x3c100035
    ctx->pc = 0x282bd8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x282bdc: 0x24020002
    ctx->pc = 0x282bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x282be0: 0xae029c98
    ctx->pc = 0x282be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941848), GPR_U32(ctx, 2));
    // 0x282be4: 0x3c020031
    ctx->pc = 0x282be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282be8: 0x8c42ff9c
    ctx->pc = 0x282be8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x282bec: 0x1440001e
    ctx->pc = 0x282BECu;
    {
        const bool branch_taken_0x282bec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282BF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x282bec) {
            ctx->pc = 0x282C68u;
            goto label_282c68;
        }
    }
    ctx->pc = 0x282BF4u;
    // 0x282bf4: 0x3c020031
    ctx->pc = 0x282bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282bf8: 0xdc420e28
    ctx->pc = 0x282bf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x282bfc: 0x30420008
    ctx->pc = 0x282bfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x282c00: 0x14400019
    ctx->pc = 0x282C00u;
    {
        const bool branch_taken_0x282c00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282C04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x282c00) {
            ctx->pc = 0x282C68u;
            goto label_282c68;
        }
    }
    ctx->pc = 0x282C08u;
    // 0x282c08: 0x3c110035
    ctx->pc = 0x282c08u;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x282c0c: 0x8e22a2d8
    ctx->pc = 0x282c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294943448)));
    // 0x282c10: 0x14400015
    ctx->pc = 0x282C10u;
    {
        const bool branch_taken_0x282c10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282C14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x282c10) {
            ctx->pc = 0x282C68u;
            goto label_282c68;
        }
    }
    ctx->pc = 0x282C18u;
    // 0x282c18: 0x24020003
    ctx->pc = 0x282c18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x282c1c: 0xc0b72fa
    ctx->pc = 0x282C1Cu;
    SET_GPR_U32(ctx, 31, 0x282C24u);
    ctx->pc = 0x282C20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941848), GPR_U32(ctx, 2));
    ctx->pc = 0x2DCBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeMovie_0x2dcbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C24u; }
    }
    if (ctx->pc != 0x282C24u) { return; }
    ctx->pc = 0x282C24u;
    // 0x282c24: 0x2c520001
    ctx->pc = 0x282c24u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x282c28: 0x24020004
    ctx->pc = 0x282c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x282c2c: 0x12400006
    ctx->pc = 0x282C2Cu;
    {
        const bool branch_taken_0x282c2c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x282C30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941848), GPR_U32(ctx, 2));
        if (branch_taken_0x282c2c) {
            ctx->pc = 0x282C48u;
            goto label_282c48;
        }
    }
    ctx->pc = 0x282C34u;
    // 0x282c34: 0x24020009
    ctx->pc = 0x282c34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x282c38: 0xae029c98
    ctx->pc = 0x282c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941848), GPR_U32(ctx, 2));
    // 0x282c3c: 0x24120002
    ctx->pc = 0x282c3cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x282c40: 0x24020001
    ctx->pc = 0x282c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282c44: 0xae22a2d8
    ctx->pc = 0x282c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943448), GPR_U32(ctx, 2));
label_282c48:
    // 0x282c48: 0x3c040031
    ctx->pc = 0x282c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x282c4c: 0x3c030031
    ctx->pc = 0x282c4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x282c50: 0x8c82001c
    ctx->pc = 0x282c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x282c54: 0x8c63ffbc
    ctx->pc = 0x282c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x282c58: 0x431021
    ctx->pc = 0x282c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282c5c: 0xac82001c
    ctx->pc = 0x282c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x282c60: 0x3c100035
    ctx->pc = 0x282c60u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x282c64: 0x2402000b
    ctx->pc = 0x282c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_282c68:
    // 0x282c68: 0xae029c98
    ctx->pc = 0x282c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941848), GPR_U32(ctx, 2));
    // 0x282c6c: 0x3c110035
    ctx->pc = 0x282c6cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x282c70: 0x8e22a2d8
    ctx->pc = 0x282c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294943448)));
    // 0x282c74: 0x10400012
    ctx->pc = 0x282C74u;
    {
        const bool branch_taken_0x282c74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282C78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x282c74) {
            ctx->pc = 0x282CC0u;
            goto label_282cc0;
        }
    }
    ctx->pc = 0x282C7Cu;
    // 0x282c7c: 0xc0b731e
    ctx->pc = 0x282C7Cu;
    SET_GPR_U32(ctx, 31, 0x282C84u);
    ctx->pc = 0x282C80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941848), GPR_U32(ctx, 2));
    ctx->pc = 0x2DCC78u;
    {
        const uint32_t __entryPc = ctx->pc;
        KillMovie_0x2dcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C84u; }
    }
    if (ctx->pc != 0x282C84u) { return; }
    ctx->pc = 0x282C84u;
    // 0x282c84: 0x1040000e
    ctx->pc = 0x282C84u;
    {
        const bool branch_taken_0x282c84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282C88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x282c84) {
            ctx->pc = 0x282CC0u;
            goto label_282cc0;
        }
    }
    ctx->pc = 0x282C8Cu;
    // 0x282c8c: 0xc0a0878
    ctx->pc = 0x282C8Cu;
    SET_GPR_U32(ctx, 31, 0x282C94u);
    ctx->pc = 0x282C90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941848), GPR_U32(ctx, 2));
    ctx->pc = 0x2821E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_attract_msgs_0x2821e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C94u; }
    }
    if (ctx->pc != 0x282C94u) { return; }
    ctx->pc = 0x282C94u;
    // 0x282c94: 0x8e23a2d8
    ctx->pc = 0x282c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294943448)));
    // 0x282c98: 0x24020001
    ctx->pc = 0x282c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282c9c: 0x14620004
    ctx->pc = 0x282C9Cu;
    {
        const bool branch_taken_0x282c9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x282CA0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x282c9c) {
            ctx->pc = 0x282CB0u;
            goto label_282cb0;
        }
    }
    ctx->pc = 0x282CA4u;
    // 0x282ca4: 0xc0a0960
    ctx->pc = 0x282CA4u;
    SET_GPR_U32(ctx, 31, 0x282CACu);
    ctx->pc = 0x282CA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CACu; }
    }
    if (ctx->pc != 0x282CACu) { return; }
    ctx->pc = 0x282CACu;
    // 0x282cac: 0x3c030035
    ctx->pc = 0x282cacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282cb0:
    // 0x282cb0: 0x2402001d
    ctx->pc = 0x282cb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x282cb4: 0xac629c98
    ctx->pc = 0x282cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941848), GPR_U32(ctx, 2));
    // 0x282cb8: 0x10000033
    ctx->pc = 0x282CB8u;
    {
        const bool branch_taken_0x282cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282CBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x282cb8) {
            ctx->pc = 0x282D88u;
            goto label_282d88;
        }
    }
    ctx->pc = 0x282CC0u;
label_282cc0:
    // 0x282cc0: 0x3c020035
    ctx->pc = 0x282cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282cc4: 0x2403001e
    ctx->pc = 0x282cc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 30));
    // 0x282cc8: 0xac439c98
    ctx->pc = 0x282cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941848), GPR_U32(ctx, 3));
    // 0x282ccc: 0x3c030035
    ctx->pc = 0x282cccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282cd0: 0x8c62a2d8
    ctx->pc = 0x282cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943448)));
    // 0x282cd4: 0x5440000b
    ctx->pc = 0x282CD4u;
    {
        const bool branch_taken_0x282cd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x282cd4) {
            ctx->pc = 0x282CD8u;
            SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
            ctx->pc = 0x282D04u;
            goto label_282d04;
        }
    }
    ctx->pc = 0x282CDCu;
    // 0x282cdc: 0x3c020031
    ctx->pc = 0x282cdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282ce0: 0x8c42ff9c
    ctx->pc = 0x282ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x282ce4: 0x54400007
    ctx->pc = 0x282CE4u;
    {
        const bool branch_taken_0x282ce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x282ce4) {
            ctx->pc = 0x282CE8u;
            SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
            ctx->pc = 0x282D04u;
            goto label_282d04;
        }
    }
    ctx->pc = 0x282CECu;
    // 0x282cec: 0x24020002
    ctx->pc = 0x282cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x282cf0: 0x56420004
    ctx->pc = 0x282CF0u;
    {
        const bool branch_taken_0x282cf0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x282cf0) {
            ctx->pc = 0x282CF4u;
            SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
            ctx->pc = 0x282D04u;
            goto label_282d04;
        }
    }
    ctx->pc = 0x282CF8u;
    // 0x282cf8: 0x24020001
    ctx->pc = 0x282cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282cfc: 0xac62a2d8
    ctx->pc = 0x282cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943448), GPR_U32(ctx, 2));
    // 0x282d00: 0x3c030035
    ctx->pc = 0x282d00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282d04:
    // 0x282d04: 0x2402001f
    ctx->pc = 0x282d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x282d08: 0xac629c98
    ctx->pc = 0x282d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941848), GPR_U32(ctx, 2));
    // 0x282d0c: 0x3c020031
    ctx->pc = 0x282d0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282d10: 0x8c42001c
    ctx->pc = 0x282d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x282d14: 0x284200b5
    ctx->pc = 0x282d14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 181));
    // 0x282d18: 0x14400004
    ctx->pc = 0x282D18u;
    {
        const bool branch_taken_0x282d18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282D1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x282d18) {
            ctx->pc = 0x282D2Cu;
            goto label_282d2c;
        }
    }
    ctx->pc = 0x282D20u;
    // 0x282d20: 0xc0a08ca
    ctx->pc = 0x282D20u;
    SET_GPR_U32(ctx, 31, 0x282D28u);
    ctx->pc = 0x282D24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x282328u;
    {
        const uint32_t __entryPc = ctx->pc;
        attract_advance_0x282328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D28u; }
    }
    if (ctx->pc != 0x282D28u) { return; }
    ctx->pc = 0x282D28u;
    // 0x282d28: 0x3c030035
    ctx->pc = 0x282d28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282d2c:
    // 0x282d2c: 0x24020020
    ctx->pc = 0x282d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x282d30: 0xac629c98
    ctx->pc = 0x282d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941848), GPR_U32(ctx, 2));
    // 0x282d34: 0x802d
    ctx->pc = 0x282d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d38: 0x3c130031
    ctx->pc = 0x282d38u;
    SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
    // 0x282d3c: 0x3c120035
    ctx->pc = 0x282d3cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)53 << 16));
    // 0x282d40: 0x24110002
    ctx->pc = 0x282d40u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x282d44: 0x0
    ctx->pc = 0x282d44u;
    // NOP
label_282d48:
    // 0x282d48: 0xc081c1e
    ctx->pc = 0x282D48u;
    SET_GPR_U32(ctx, 31, 0x282D50u);
    ctx->pc = 0x282D4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207078u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_start_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D50u; }
    }
    if (ctx->pc != 0x282D50u) { return; }
    ctx->pc = 0x282D50u;
    // 0x282d50: 0x54400006
    ctx->pc = 0x282D50u;
    {
        const bool branch_taken_0x282d50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x282d50) {
            ctx->pc = 0x282D54u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294943448), GPR_U32(ctx, 17));
            ctx->pc = 0x282D6Cu;
            goto label_282d6c;
        }
    }
    ctx->pc = 0x282D58u;
    // 0x282d58: 0xde620e28
    ctx->pc = 0x282d58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 3624)));
    // 0x282d5c: 0x30420004
    ctx->pc = 0x282d5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x282d60: 0x50400003
    ctx->pc = 0x282D60u;
    {
        const bool branch_taken_0x282d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x282d60) {
            ctx->pc = 0x282D64u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x282D70u;
            goto label_282d70;
        }
    }
    ctx->pc = 0x282D68u;
    // 0x282d68: 0xae51a2d8
    ctx->pc = 0x282d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943448), GPR_U32(ctx, 17));
label_282d6c:
    // 0x282d6c: 0x26100001
    ctx->pc = 0x282d6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_282d70:
    // 0x282d70: 0x2a020004
    ctx->pc = 0x282d70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x282d74: 0x1440fff4
    ctx->pc = 0x282D74u;
    {
        const bool branch_taken_0x282d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282D78u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x282d74) {
            ctx->pc = 0x282D48u;
            goto label_282d48;
        }
    }
    ctx->pc = 0x282D7Cu;
    // 0x282d7c: 0x24020063
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x282d80: 0xac629c98
    ctx->pc = 0x282d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941848), GPR_U32(ctx, 2));
    // 0x282d84: 0x102d
    ctx->pc = 0x282d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282d88:
    // 0x282d88: 0xdfbf0040
    ctx->pc = 0x282d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282d8c: 0xdfb30030
    ctx->pc = 0x282d8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282d90: 0xdfb20020
    ctx->pc = 0x282d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282d94: 0xdfb10010
    ctx->pc = 0x282d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282d98: 0xdfb00000
    ctx->pc = 0x282d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d9c: 0x3e00008
    ctx->pc = 0x282D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282DA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282BD8u: goto label_282bd8;
            case 0x282C48u: goto label_282c48;
            case 0x282C68u: goto label_282c68;
            case 0x282CB0u: goto label_282cb0;
            case 0x282CC0u: goto label_282cc0;
            case 0x282D04u: goto label_282d04;
            case 0x282D2Cu: goto label_282d2c;
            case 0x282D48u: goto label_282d48;
            case 0x282D6Cu: goto label_282d6c;
            case 0x282D70u: goto label_282d70;
            case 0x282D88u: goto label_282d88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282DA4u;
}
