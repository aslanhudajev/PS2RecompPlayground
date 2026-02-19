#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LinkTriggers
// Address: 0x252bf0 - 0x252ea8
void LinkTriggers_0x252bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x252bf0u;

    // 0x252bf0: 0x27bdffb0
    ctx->pc = 0x252bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252bf4: 0xffbf0040
    ctx->pc = 0x252bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252bf8: 0xffb30030
    ctx->pc = 0x252bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x252bfc: 0xffb20020
    ctx->pc = 0x252bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252c00: 0xffb10010
    ctx->pc = 0x252c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252c04: 0xffb00000
    ctx->pc = 0x252c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252c08: 0x3c020034
    ctx->pc = 0x252c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252c0c: 0x8c51cd94
    ctx->pc = 0x252c0cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252c10: 0x3c020034
    ctx->pc = 0x252c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252c14: 0x40202d
    ctx->pc = 0x252c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c18: 0x8c42cd98
    ctx->pc = 0x252c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x252c1c: 0x18400046
    ctx->pc = 0x252C1Cu;
    {
        const bool branch_taken_0x252c1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252C20u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x252c1c) {
            ctx->pc = 0x252D38u;
            goto label_252d38;
        }
    }
    ctx->pc = 0x252C24u;
    // 0x252c24: 0x0
    ctx->pc = 0x252c24u;
    // NOP
label_252c28:
    // 0x252c28: 0x862300d8
    ctx->pc = 0x252c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x252c2c: 0x2402ffff
    ctx->pc = 0x252c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252c30: 0x5062003c
    ctx->pc = 0x252C30u;
    {
        const bool branch_taken_0x252c30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x252c30) {
            ctx->pc = 0x252C34u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x252D24u;
            goto label_252d24;
        }
    }
    ctx->pc = 0x252C38u;
    // 0x252c38: 0x8e220000
    ctx->pc = 0x252c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252c3c: 0x8c430000
    ctx->pc = 0x252c3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252c40: 0x24020005
    ctx->pc = 0x252c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x252c44: 0x54620037
    ctx->pc = 0x252C44u;
    {
        const bool branch_taken_0x252c44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252c44) {
            ctx->pc = 0x252C48u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x252D24u;
            goto label_252d24;
        }
    }
    ctx->pc = 0x252C4Cu;
    // 0x252c4c: 0x282d
    ctx->pc = 0x252c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c50: 0x3c020034
    ctx->pc = 0x252c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252c54: 0x8c50cd94
    ctx->pc = 0x252c54u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252c58: 0x8c82cd98
    ctx->pc = 0x252c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954392)));
    // 0x252c5c: 0x1840001f
    ctx->pc = 0x252C5Cu;
    {
        const bool branch_taken_0x252c5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252C60u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x252c5c) {
            ctx->pc = 0x252CDCu;
            goto label_252cdc;
        }
    }
    ctx->pc = 0x252C64u;
    // 0x252c64: 0x2407ffff
    ctx->pc = 0x252c64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252c68: 0x24060005
    ctx->pc = 0x252c68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x252c6c: 0x3c040034
    ctx->pc = 0x252c6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_252c70:
    // 0x252c70: 0x52530016
    ctx->pc = 0x252C70u;
    {
        const bool branch_taken_0x252c70 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 19));
        if (branch_taken_0x252c70) {
            ctx->pc = 0x252C74u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252C78u;
    // 0x252c78: 0x860200d8
    ctx->pc = 0x252c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x252c7c: 0x50470013
    ctx->pc = 0x252C7Cu;
    {
        const bool branch_taken_0x252c7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        if (branch_taken_0x252c7c) {
            ctx->pc = 0x252C80u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252C84u;
    // 0x252c84: 0x8e020000
    ctx->pc = 0x252c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252c88: 0x8c420000
    ctx->pc = 0x252c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252c8c: 0x5446000f
    ctx->pc = 0x252C8Cu;
    {
        const bool branch_taken_0x252c8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x252c8c) {
            ctx->pc = 0x252C90u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252C94u;
    // 0x252c94: 0x960300f4
    ctx->pc = 0x252c94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x252c98: 0x962200f4
    ctx->pc = 0x252c98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x252c9c: 0x30630040
    ctx->pc = 0x252c9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 64));
    // 0x252ca0: 0x30420040
    ctx->pc = 0x252ca0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x252ca4: 0x54620009
    ctx->pc = 0x252CA4u;
    {
        const bool branch_taken_0x252ca4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252ca4) {
            ctx->pc = 0x252CA8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252CACu;
    // 0x252cac: 0x822300f6
    ctx->pc = 0x252cacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
    // 0x252cb0: 0x18600006
    ctx->pc = 0x252CB0u;
    {
        const bool branch_taken_0x252cb0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x252CB4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x252cb0) {
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252CB8u;
    // 0x252cb8: 0x820200f6
    ctx->pc = 0x252cb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
    // 0x252cbc: 0x14430003
    ctx->pc = 0x252CBCu;
    {
        const bool branch_taken_0x252cbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x252cbc) {
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252CC4u;
    // 0x252cc4: 0x24a50001
    ctx->pc = 0x252cc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x252cc8: 0xa20000f6
    ctx->pc = 0x252cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 0));
label_252ccc:
    // 0x252ccc: 0x8c82cd98
    ctx->pc = 0x252cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954392)));
    // 0x252cd0: 0x242102a
    ctx->pc = 0x252cd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x252cd4: 0x1440ffe6
    ctx->pc = 0x252CD4u;
    {
        const bool branch_taken_0x252cd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252CD8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x252cd4) {
            ctx->pc = 0x252C70u;
            goto label_252c70;
        }
    }
    ctx->pc = 0x252CDCu;
label_252cdc:
    // 0x252cdc: 0x58a00011
    ctx->pc = 0x252CDCu;
    {
        const bool branch_taken_0x252cdc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x252cdc) {
            ctx->pc = 0x252CE0u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x252D24u;
            goto label_252d24;
        }
    }
    ctx->pc = 0x252CE4u;
    // 0x252ce4: 0x962200f4
    ctx->pc = 0x252ce4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x252ce8: 0x30420040
    ctx->pc = 0x252ce8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x252cec: 0x10400007
    ctx->pc = 0x252CECu;
    {
        const bool branch_taken_0x252cec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252CF0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x252cec) {
            ctx->pc = 0x252D0Cu;
            goto label_252d0c;
        }
    }
    ctx->pc = 0x252CF4u;
    // 0x252cf4: 0x248488c8
    ctx->pc = 0x252cf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936776));
    // 0x252cf8: 0x24a50001
    ctx->pc = 0x252cf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x252cfc: 0xc0b492e
    ctx->pc = 0x252CFCu;
    SET_GPR_U32(ctx, 31, 0x252D04u);
    ctx->pc = 0x252D00u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D04u; }
    }
    if (ctx->pc != 0x252D04u) { return; }
    ctx->pc = 0x252D04u;
    // 0x252d04: 0x10000007
    ctx->pc = 0x252D04u;
    {
        const bool branch_taken_0x252d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252D08u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x252d04) {
            ctx->pc = 0x252D24u;
            goto label_252d24;
        }
    }
    ctx->pc = 0x252D0Cu;
label_252d0c:
    // 0x252d0c: 0x3c04003b
    ctx->pc = 0x252d0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x252d10: 0x248488f0
    ctx->pc = 0x252d10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936816));
    // 0x252d14: 0x24a50001
    ctx->pc = 0x252d14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x252d18: 0xc0b492e
    ctx->pc = 0x252D18u;
    SET_GPR_U32(ctx, 31, 0x252D20u);
    ctx->pc = 0x252D1Cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D20u; }
    }
    if (ctx->pc != 0x252D20u) { return; }
    ctx->pc = 0x252D20u;
    // 0x252d20: 0x26730001
    ctx->pc = 0x252d20u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_252d24:
    // 0x252d24: 0x3c040034
    ctx->pc = 0x252d24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x252d28: 0x8c82cd98
    ctx->pc = 0x252d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954392)));
    // 0x252d2c: 0x262102a
    ctx->pc = 0x252d2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x252d30: 0x1440ffbd
    ctx->pc = 0x252D30u;
    {
        const bool branch_taken_0x252d30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252D34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 272));
        if (branch_taken_0x252d30) {
            ctx->pc = 0x252C28u;
            goto label_252c28;
        }
    }
    ctx->pc = 0x252D38u;
label_252d38:
    // 0x252d38: 0x3c020034
    ctx->pc = 0x252d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252d3c: 0x8c51cd94
    ctx->pc = 0x252d3cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252d40: 0x3c020034
    ctx->pc = 0x252d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252d44: 0x40202d
    ctx->pc = 0x252d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d48: 0x8c42cd98
    ctx->pc = 0x252d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x252d4c: 0x1840004f
    ctx->pc = 0x252D4Cu;
    {
        const bool branch_taken_0x252d4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252D50u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x252d4c) {
            ctx->pc = 0x252E8Cu;
            goto label_252e8c;
        }
    }
    ctx->pc = 0x252D54u;
    // 0x252d54: 0x0
    ctx->pc = 0x252d54u;
    // NOP
label_252d58:
    // 0x252d58: 0x862300d8
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x252d5c: 0x2402ffff
    ctx->pc = 0x252d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252d60: 0x50620045
    ctx->pc = 0x252D60u;
    {
        const bool branch_taken_0x252d60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x252d60) {
            ctx->pc = 0x252D64u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x252E78u;
            goto label_252e78;
        }
    }
    ctx->pc = 0x252D68u;
    // 0x252d68: 0x8e220000
    ctx->pc = 0x252d68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252d6c: 0x8c430000
    ctx->pc = 0x252d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252d70: 0x24020005
    ctx->pc = 0x252d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x252d74: 0x54620040
    ctx->pc = 0x252D74u;
    {
        const bool branch_taken_0x252d74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252d74) {
            ctx->pc = 0x252D78u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x252E78u;
            goto label_252e78;
        }
    }
    ctx->pc = 0x252D7Cu;
    // 0x252d7c: 0x822200f7
    ctx->pc = 0x252d7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x252d80: 0x1040003c
    ctx->pc = 0x252D80u;
    {
        const bool branch_taken_0x252d80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252D84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x252d80) {
            ctx->pc = 0x252E74u;
            goto label_252e74;
        }
    }
    ctx->pc = 0x252D88u;
    // 0x252d88: 0x8c50cd94
    ctx->pc = 0x252d88u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252d8c: 0x8c82cd98
    ctx->pc = 0x252d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954392)));
    // 0x252d90: 0x18400033
    ctx->pc = 0x252D90u;
    {
        const bool branch_taken_0x252d90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252D94u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x252d90) {
            ctx->pc = 0x252E60u;
            goto label_252e60;
        }
    }
    ctx->pc = 0x252D98u;
    // 0x252d98: 0x2406ffff
    ctx->pc = 0x252d98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252d9c: 0x24050005
    ctx->pc = 0x252d9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x252da0: 0x3c040034
    ctx->pc = 0x252da0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x252da4: 0x0
    ctx->pc = 0x252da4u;
    // NOP
label_252da8:
    // 0x252da8: 0x52530024
    ctx->pc = 0x252DA8u;
    {
        const bool branch_taken_0x252da8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 19));
        if (branch_taken_0x252da8) {
            ctx->pc = 0x252DACu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252E3Cu;
            goto label_252e3c;
        }
    }
    ctx->pc = 0x252DB0u;
    // 0x252db0: 0x860200d8
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x252db4: 0x50460021
    ctx->pc = 0x252DB4u;
    {
        const bool branch_taken_0x252db4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x252db4) {
            ctx->pc = 0x252DB8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252E3Cu;
            goto label_252e3c;
        }
    }
    ctx->pc = 0x252DBCu;
    // 0x252dbc: 0x8e020000
    ctx->pc = 0x252dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252dc0: 0x8c420000
    ctx->pc = 0x252dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252dc4: 0x5445001d
    ctx->pc = 0x252DC4u;
    {
        const bool branch_taken_0x252dc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x252dc4) {
            ctx->pc = 0x252DC8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252E3Cu;
            goto label_252e3c;
        }
    }
    ctx->pc = 0x252DCCu;
    // 0x252dcc: 0x960200f4
    ctx->pc = 0x252dccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x252dd0: 0x30420040
    ctx->pc = 0x252dd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x252dd4: 0x54400019
    ctx->pc = 0x252DD4u;
    {
        const bool branch_taken_0x252dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x252dd4) {
            ctx->pc = 0x252DD8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252E3Cu;
            goto label_252e3c;
        }
    }
    ctx->pc = 0x252DDCu;
    // 0x252ddc: 0x822300f7
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x252de0: 0x820200f6
    ctx->pc = 0x252de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
    // 0x252de4: 0x54620015
    ctx->pc = 0x252DE4u;
    {
        const bool branch_taken_0x252de4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252de4) {
            ctx->pc = 0x252DE8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x252E3Cu;
            goto label_252e3c;
        }
    }
    ctx->pc = 0x252DECu;
    // 0x252dec: 0x282d
    ctx->pc = 0x252decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252df0: 0x200182d
    ctx->pc = 0x252df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252df4: 0x3c04003b
    ctx->pc = 0x252df4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_252df8:
    // 0x252df8: 0x10600009
    ctx->pc = 0x252DF8u;
    {
        const bool branch_taken_0x252df8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x252df8) {
            ctx->pc = 0x252E20u;
            goto label_252e20;
        }
    }
    ctx->pc = 0x252E00u;
    // 0x252e00: 0x8c6200f8
    ctx->pc = 0x252e00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x252e04: 0x5451fffc
    ctx->pc = 0x252E04u;
    {
        const bool branch_taken_0x252e04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x252e04) {
            ctx->pc = 0x252E08u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 248)));
            ctx->pc = 0x252DF8u;
            goto label_252df8;
        }
    }
    ctx->pc = 0x252E0Cu;
    // 0x252e0c: 0x24848910
    ctx->pc = 0x252e0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936848));
    // 0x252e10: 0x822500f7
    ctx->pc = 0x252e10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x252e14: 0xc0b492e
    ctx->pc = 0x252E14u;
    SET_GPR_U32(ctx, 31, 0x252E1Cu);
    ctx->pc = 0x252E18u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E1Cu; }
    }
    if (ctx->pc != 0x252E1Cu) { return; }
    ctx->pc = 0x252E1Cu;
    // 0x252e1c: 0x24050001
    ctx->pc = 0x252e1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_252e20:
    // 0x252e20: 0x14a0000b
    ctx->pc = 0x252E20u;
    {
        const bool branch_taken_0x252e20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x252E24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x252e20) {
            ctx->pc = 0x252E50u;
            goto label_252e50;
        }
    }
    ctx->pc = 0x252E28u;
    // 0x252e28: 0xae3000f8
    ctx->pc = 0x252e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 16));
    // 0x252e2c: 0x960200f4
    ctx->pc = 0x252e2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x252e30: 0x34420200
    ctx->pc = 0x252e30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 512));
    // 0x252e34: 0x10000005
    ctx->pc = 0x252E34u;
    {
        const bool branch_taken_0x252e34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252E38u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252e34) {
            ctx->pc = 0x252E4Cu;
            goto label_252e4c;
        }
    }
    ctx->pc = 0x252E3Cu;
label_252e3c:
    // 0x252e3c: 0x8c82cd98
    ctx->pc = 0x252e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954392)));
    // 0x252e40: 0x242102a
    ctx->pc = 0x252e40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x252e44: 0x1440ffd8
    ctx->pc = 0x252E44u;
    {
        const bool branch_taken_0x252e44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252E48u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x252e44) {
            ctx->pc = 0x252DA8u;
            goto label_252da8;
        }
    }
    ctx->pc = 0x252E4Cu;
label_252e4c:
    // 0x252e4c: 0x3c020034
    ctx->pc = 0x252e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_252e50:
    // 0x252e50: 0x8c42cd98
    ctx->pc = 0x252e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x252e54: 0x242102a
    ctx->pc = 0x252e54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x252e58: 0x54400007
    ctx->pc = 0x252E58u;
    {
        const bool branch_taken_0x252e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x252e58) {
            ctx->pc = 0x252E5Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x252E78u;
            goto label_252e78;
        }
    }
    ctx->pc = 0x252E60u;
label_252e60:
    // 0x252e60: 0x3c04003b
    ctx->pc = 0x252e60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x252e64: 0x24848938
    ctx->pc = 0x252e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936888));
    // 0x252e68: 0x822500f6
    ctx->pc = 0x252e68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
    // 0x252e6c: 0xc0b492e
    ctx->pc = 0x252E6Cu;
    SET_GPR_U32(ctx, 31, 0x252E74u);
    ctx->pc = 0x252E70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E74u; }
    }
    if (ctx->pc != 0x252E74u) { return; }
    ctx->pc = 0x252E74u;
label_252e74:
    // 0x252e74: 0x26730001
    ctx->pc = 0x252e74u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_252e78:
    // 0x252e78: 0x3c040034
    ctx->pc = 0x252e78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x252e7c: 0x8c82cd98
    ctx->pc = 0x252e7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954392)));
    // 0x252e80: 0x262102a
    ctx->pc = 0x252e80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x252e84: 0x1440ffb4
    ctx->pc = 0x252E84u;
    {
        const bool branch_taken_0x252e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252E88u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 272));
        if (branch_taken_0x252e84) {
            ctx->pc = 0x252D58u;
            goto label_252d58;
        }
    }
    ctx->pc = 0x252E8Cu;
label_252e8c:
    // 0x252e8c: 0xdfbf0040
    ctx->pc = 0x252e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252e90: 0xdfb30030
    ctx->pc = 0x252e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252e94: 0xdfb20020
    ctx->pc = 0x252e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252e98: 0xdfb10010
    ctx->pc = 0x252e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252e9c: 0xdfb00000
    ctx->pc = 0x252e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252ea0: 0x3e00008
    ctx->pc = 0x252EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252EA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252C28u: goto label_252c28;
            case 0x252C70u: goto label_252c70;
            case 0x252CCCu: goto label_252ccc;
            case 0x252CDCu: goto label_252cdc;
            case 0x252D0Cu: goto label_252d0c;
            case 0x252D24u: goto label_252d24;
            case 0x252D38u: goto label_252d38;
            case 0x252D58u: goto label_252d58;
            case 0x252DA8u: goto label_252da8;
            case 0x252DF8u: goto label_252df8;
            case 0x252E20u: goto label_252e20;
            case 0x252E3Cu: goto label_252e3c;
            case 0x252E4Cu: goto label_252e4c;
            case 0x252E50u: goto label_252e50;
            case 0x252E60u: goto label_252e60;
            case 0x252E74u: goto label_252e74;
            case 0x252E78u: goto label_252e78;
            case 0x252E8Cu: goto label_252e8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x252EA8u;
}
