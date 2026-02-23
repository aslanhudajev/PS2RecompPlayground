#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBank_STAT_03__11TexMgrClassFP11DATAENT_REQ
// Address: 0x21aba0 - 0x21aca8
void entryBank_STAT_03__11TexMgrClassFP11DATAENT_REQ_0x21aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBank_STAT_03__11TexMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x21aba0u;

    // 0x21aba0: 0x27bdffb0
    ctx->pc = 0x21aba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21aba4: 0x7fbf0040
    ctx->pc = 0x21aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x21aba8: 0x7fb30030
    ctx->pc = 0x21aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21abac: 0x7fb20020
    ctx->pc = 0x21abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21abb0: 0x7fb10010
    ctx->pc = 0x21abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21abb4: 0x7fb00000
    ctx->pc = 0x21abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21abb8: 0x8ca30008
    ctx->pc = 0x21abb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21abbc: 0x3c020092
    ctx->pc = 0x21abbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21abc0: 0x24424d00
    ctx->pc = 0x21abc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21abc4: 0x3c0101fb
    ctx->pc = 0x21abc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x21abc8: 0x3887c
    ctx->pc = 0x21abc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 1));
    // 0x21abcc: 0x11887e
    ctx->pc = 0x21abccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 1));
    // 0x21abd0: 0x1118c0
    ctx->pc = 0x21abd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
    // 0x21abd4: 0x711823
    ctx->pc = 0x21abd4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21abd8: 0x31880
    ctx->pc = 0x21abd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21abdc: 0x438021
    ctx->pc = 0x21abdcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21abe0: 0x111040
    ctx->pc = 0x21abe0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x21abe4: 0x410821
    ctx->pc = 0x21abe4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21abe8: 0x8423eb6e
    ctx->pc = 0x21abe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294962030)));
    // 0x21abec: 0x3c0101fb
    ctx->pc = 0x21abecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x21abf0: 0x410821
    ctx->pc = 0x21abf0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21abf4: 0x84221c28
    ctx->pc = 0x21abf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 7208)));
    // 0x21abf8: 0x30420001
    ctx->pc = 0x21abf8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21abfc: 0x14400013
    ctx->pc = 0x21ABFCu;
    {
        const bool branch_taken_0x21abfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21AC00u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21abfc) {
            ctx->pc = 0x21AC4Cu;
            goto label_21ac4c;
        }
    }
    ctx->pc = 0x21AC04u;
    // 0x21ac04: 0x3c02004a
    ctx->pc = 0x21ac04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x21ac08: 0x2442f560
    ctx->pc = 0x21ac08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964576));
    // 0x21ac0c: 0x511021
    ctx->pc = 0x21ac0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21ac10: 0x80420000
    ctx->pc = 0x21ac10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ac14: 0x1440000d
    ctx->pc = 0x21AC14u;
    {
        const bool branch_taken_0x21ac14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21AC18u;
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
        if (branch_taken_0x21ac14) {
            ctx->pc = 0x21AC4Cu;
            goto label_21ac4c;
        }
    }
    ctx->pc = 0x21AC1Cu;
    // 0x21ac1c: 0x139c3f
    ctx->pc = 0x21ac1cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x21ac20: 0x132a00
    ctx->pc = 0x21ac20u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 8));
    // 0x21ac24: 0xc086850
    ctx->pc = 0x21AC24u;
    SET_GPR_U32(ctx, 31, 0x21AC2Cu);
    ctx->pc = 0x21AC28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x21A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__14TexBufMgrClassFii_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC2Cu; }
        else if (ctx->pc != 0x21AC2Cu) { ctx->pc = 0x21AC2Cu; }
    }
    if (ctx->pc != 0x21AC2Cu) { return; }
    ctx->pc = 0x21AC2Cu;
    // 0x21ac2c: 0x1440000f
    ctx->pc = 0x21AC2Cu;
    {
        const bool branch_taken_0x21ac2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21ac2c) {
            ctx->pc = 0x21AC6Cu;
            goto label_21ac6c;
        }
    }
    ctx->pc = 0x21AC34u;
    // 0x21ac34: 0x3c020029
    ctx->pc = 0x21ac34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21ac38: 0x72602e28
    ctx->pc = 0x21ac38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21ac3c: 0xc05114a
    ctx->pc = 0x21AC3Cu;
    SET_GPR_U32(ctx, 31, 0x21AC44u);
    ctx->pc = 0x21AC40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294950688));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC44u; }
        else if (ctx->pc != 0x21AC44u) { ctx->pc = 0x21AC44u; }
    }
    if (ctx->pc != 0x21AC44u) { return; }
    ctx->pc = 0x21AC44u;
label_21ac44:
    // 0x21ac44: 0x1000ffff
    ctx->pc = 0x21AC44u;
    {
        const bool branch_taken_0x21ac44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ac44) {
            ctx->pc = 0x21AC44u;
            goto label_21ac44;
        }
    }
    ctx->pc = 0x21AC4Cu;
label_21ac4c:
    // 0x21ac4c: 0x8e4203b4
    ctx->pc = 0x21ac4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 948)));
    // 0x21ac50: 0x14400006
    ctx->pc = 0x21AC50u;
    {
        const bool branch_taken_0x21ac50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21ac50) {
            ctx->pc = 0x21AC6Cu;
            goto label_21ac6c;
        }
    }
    ctx->pc = 0x21AC58u;
    // 0x21ac58: 0x3c020029
    ctx->pc = 0x21ac58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21ac5c: 0xc05114a
    ctx->pc = 0x21AC5Cu;
    SET_GPR_U32(ctx, 31, 0x21AC64u);
    ctx->pc = 0x21AC60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294950768));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC64u; }
        else if (ctx->pc != 0x21AC64u) { ctx->pc = 0x21AC64u; }
    }
    if (ctx->pc != 0x21AC64u) { return; }
    ctx->pc = 0x21AC64u;
label_21ac64:
    // 0x21ac64: 0x1000ffff
    ctx->pc = 0x21AC64u;
    {
        const bool branch_taken_0x21ac64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ac64) {
            ctx->pc = 0x21AC64u;
            goto label_21ac64;
        }
    }
    ctx->pc = 0x21AC6Cu;
label_21ac6c:
    // 0x21ac6c: 0xa4510016
    ctx->pc = 0x21ac6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 17));
    // 0x21ac70: 0xae020008
    ctx->pc = 0x21ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x21ac74: 0xae000010
    ctx->pc = 0x21ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x21ac78: 0x8e4403a8
    ctx->pc = 0x21ac78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 936)));
    // 0x21ac7c: 0x24020001
    ctx->pc = 0x21ac7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ac80: 0x8c83000c
    ctx->pc = 0x21ac80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21ac84: 0x24630001
    ctx->pc = 0x21ac84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ac88: 0xac83000c
    ctx->pc = 0x21ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x21ac8c: 0x7bbf0040
    ctx->pc = 0x21ac8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ac90: 0x7bb30030
    ctx->pc = 0x21ac90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ac94: 0x7bb20020
    ctx->pc = 0x21ac94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ac98: 0x7bb10010
    ctx->pc = 0x21ac98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ac9c: 0x7bb00000
    ctx->pc = 0x21ac9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aca0: 0x3e00008
    ctx->pc = 0x21ACA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ACA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AC44u: goto label_21ac44;
            case 0x21AC4Cu: goto label_21ac4c;
            case 0x21AC64u: goto label_21ac64;
            case 0x21AC6Cu: goto label_21ac6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21ACA8u;
}
