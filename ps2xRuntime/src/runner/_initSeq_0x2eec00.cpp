#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _initSeq
// Address: 0x2eec00 - 0x2eef44
void _initSeq_0x2eec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2eec00u;

    // 0x2eec00: 0x27bdff40
    ctx->pc = 0x2eec00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2eec04: 0x3c02003a
    ctx->pc = 0x2eec04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2eec08: 0xffbf00b0
    ctx->pc = 0x2eec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2eec0c: 0x80582d
    ctx->pc = 0x2eec0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec10: 0xffb70090
    ctx->pc = 0x2eec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2eec14: 0xffb60080
    ctx->pc = 0x2eec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2eec18: 0xffb50070
    ctx->pc = 0x2eec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2eec1c: 0xffb40060
    ctx->pc = 0x2eec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2eec20: 0xffb30050
    ctx->pc = 0x2eec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2eec24: 0xffb20040
    ctx->pc = 0x2eec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2eec28: 0xffb10030
    ctx->pc = 0x2eec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2eec2c: 0xffb00020
    ctx->pc = 0x2eec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2eec30: 0xffbe00a0
    ctx->pc = 0x2eec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2eec34: 0x8c4c38f0
    ctx->pc = 0x2eec34u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 14576)));
    // 0x2eec38: 0x15800010
    ctx->pc = 0x2EEC38u;
    {
        const bool branch_taken_0x2eec38 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EEC3Cu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 11), 64)));
        if (branch_taken_0x2eec38) {
            ctx->pc = 0x2EEC7Cu;
            goto label_2eec7c;
        }
    }
    ctx->pc = 0x2EEC40u;
    // 0x2eec40: 0x24020001
    ctx->pc = 0x2eec40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eec44: 0x3c08003a
    ctx->pc = 0x2eec44u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2eec48: 0x3c09003a
    ctx->pc = 0x2eec48u;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
    // 0x2eec4c: 0x3c0a003a
    ctx->pc = 0x2eec4cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)58 << 16));
    // 0x2eec50: 0x3c07003a
    ctx->pc = 0x2eec50u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2eec54: 0x24040003
    ctx->pc = 0x2eec54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eec58: 0x3c05003a
    ctx->pc = 0x2eec58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2eec5c: 0x3c06003a
    ctx->pc = 0x2eec5cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2eec60: 0x24030005
    ctx->pc = 0x2eec60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eec64: 0xace431ec
    ctx->pc = 0x2eec64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12780), GPR_U32(ctx, 4));
    // 0x2eec68: 0xaca231f4
    ctx->pc = 0x2eec68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12788), GPR_U32(ctx, 2));
    // 0x2eec6c: 0xacc331ac
    ctx->pc = 0x2eec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12716), GPR_U32(ctx, 3));
    // 0x2eec70: 0xad023188
    ctx->pc = 0x2eec70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12680), GPR_U32(ctx, 2));
    // 0x2eec74: 0xad22318c
    ctx->pc = 0x2eec74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12684), GPR_U32(ctx, 2));
    // 0x2eec78: 0xad423208
    ctx->pc = 0x2eec78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12808), GPR_U32(ctx, 2));
label_2eec7c:
    // 0x2eec7c: 0x3c03003a
    ctx->pc = 0x2eec7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2eec80: 0x3c04003a
    ctx->pc = 0x2eec80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2eec84: 0x8c623160
    ctx->pc = 0x2eec84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12640)));
    // 0x2eec88: 0x3c05003a
    ctx->pc = 0x2eec88u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2eec8c: 0x24a6316c
    ctx->pc = 0x2eec8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 12652));
    // 0x2eec90: 0x2442000f
    ctx->pc = 0x2eec90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
    // 0x2eec94: 0x21103
    ctx->pc = 0x2eec94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2eec98: 0x1180000a
    ctx->pc = 0x2EEC98u;
    {
        const bool branch_taken_0x2eec98 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EEC9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12648), GPR_U32(ctx, 2));
        if (branch_taken_0x2eec98) {
            ctx->pc = 0x2EECC4u;
            goto label_2eecc4;
        }
    }
    ctx->pc = 0x2EECA0u;
    // 0x2eeca0: 0x3c02003a
    ctx->pc = 0x2eeca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2eeca4: 0x8c433188
    ctx->pc = 0x2eeca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12680)));
    // 0x2eeca8: 0x14600007
    ctx->pc = 0x2EECA8u;
    {
        const bool branch_taken_0x2eeca8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EECACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2eeca8) {
            ctx->pc = 0x2EECC8u;
            goto label_2eecc8;
        }
    }
    ctx->pc = 0x2EECB0u;
    // 0x2eecb0: 0x8c623164
    ctx->pc = 0x2eecb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12644)));
    // 0x2eecb4: 0x2442001f
    ctx->pc = 0x2eecb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x2eecb8: 0x21143
    ctx->pc = 0x2eecb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2eecbc: 0x10000005
    ctx->pc = 0x2EECBCu;
    {
        const bool branch_taken_0x2eecbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EECC0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2eecbc) {
            ctx->pc = 0x2EECD4u;
            goto label_2eecd4;
        }
    }
    ctx->pc = 0x2EECC4u;
label_2eecc4:
    // 0x2eecc4: 0x3c03003a
    ctx->pc = 0x2eecc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2eecc8:
    // 0x2eecc8: 0x8c623164
    ctx->pc = 0x2eecc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12644)));
    // 0x2eeccc: 0x2442000f
    ctx->pc = 0x2eecccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
    // 0x2eecd0: 0x21103
    ctx->pc = 0x2eecd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2eecd4:
    // 0x2eecd4: 0xacc20000
    ctx->pc = 0x2eecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2eecd8: 0x3c16003a
    ctx->pc = 0x2eecd8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x2eecdc: 0x8c823168
    ctx->pc = 0x2eecdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12648)));
    // 0x2eece0: 0x3c17003a
    ctx->pc = 0x2eece0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)58 << 16));
    // 0x2eece4: 0x8ca3316c
    ctx->pc = 0x2eece4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12652)));
    // 0x2eece8: 0x8d640000
    ctx->pc = 0x2eece8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2eecec: 0x23100
    ctx->pc = 0x2eececu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2eecf0: 0x31900
    ctx->pc = 0x2eecf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2eecf4: 0xaec6314c
    ctx->pc = 0x2eecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12620), GPR_U32(ctx, 6));
    // 0x2eecf8: 0x14c40004
    ctx->pc = 0x2EECF8u;
    {
        const bool branch_taken_0x2eecf8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x2EECFCu;
        WRITE32(ADD32(GPR_U32(ctx, 23), 12624), GPR_U32(ctx, 3));
        if (branch_taken_0x2eecf8) {
            ctx->pc = 0x2EED0Cu;
            goto label_2eed0c;
        }
    }
    ctx->pc = 0x2EED00u;
    // 0x2eed00: 0x8d620004
    ctx->pc = 0x2eed00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2eed04: 0x10620084
    ctx->pc = 0x2EED04u;
    {
        const bool branch_taken_0x2eed04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2EED08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x2eed04) {
            ctx->pc = 0x2EEF18u;
            goto label_2eef18;
        }
    }
    ctx->pc = 0x2EED0Cu;
label_2eed0c:
    // 0x2eed0c: 0x24100180
    ctx->pc = 0x2eed0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2eed10: 0xad630004
    ctx->pc = 0x2eed10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
    // 0x2eed14: 0x708018
    ctx->pc = 0x2eed14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2eed18: 0xad660000
    ctx->pc = 0x2eed18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x2eed1c: 0x62043
    ctx->pc = 0x2eed1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2eed20: 0x32843
    ctx->pc = 0x2eed20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2eed24: 0x3c02003a
    ctx->pc = 0x2eed24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2eed28: 0x27d10108
    ctx->pc = 0x2eed28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 30), 264));
    // 0x2eed2c: 0x3c03003a
    ctx->pc = 0x2eed2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2eed30: 0xac443154
    ctx->pc = 0x2eed30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12628), GPR_U32(ctx, 4));
    // 0x2eed34: 0xd08018
    ctx->pc = 0x2eed34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2eed38: 0x220202d
    ctx->pc = 0x2eed38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed3c: 0xac653158
    ctx->pc = 0x2eed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12632), GPR_U32(ctx, 5));
    // 0x2eed40: 0xc0bb886
    ctx->pc = 0x2EED40u;
    SET_GPR_U32(ctx, 31, 0x2EED48u);
    ctx->pc = 0x2EED44u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x2EE218u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcFree_0x2ee218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED48u; }
    }
    if (ctx->pc != 0x2EED48u) { return; }
    ctx->pc = 0x2EED48u;
    // 0x2eed48: 0x220202d
    ctx->pc = 0x2eed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed4c: 0x200282d
    ctx->pc = 0x2eed4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed50: 0xc0bb88a
    ctx->pc = 0x2EED50u;
    SET_GPR_U32(ctx, 31, 0x2EED58u);
    ctx->pc = 0x2EED54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x2EE228u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x2ee228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED58u; }
    }
    if (ctx->pc != 0x2EED58u) { return; }
    ctx->pc = 0x2EED58u;
    // 0x2eed58: 0xafc200fc
    ctx->pc = 0x2eed58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x2eed5c: 0x220202d
    ctx->pc = 0x2eed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed60: 0x200282d
    ctx->pc = 0x2eed60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed64: 0xc0bb88a
    ctx->pc = 0x2EED64u;
    SET_GPR_U32(ctx, 31, 0x2EED6Cu);
    ctx->pc = 0x2EED68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x2EE228u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x2ee228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED6Cu; }
    }
    if (ctx->pc != 0x2EED6Cu) { return; }
    ctx->pc = 0x2EED6Cu;
    // 0x2eed6c: 0xafc20100
    ctx->pc = 0x2eed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x2eed70: 0x220202d
    ctx->pc = 0x2eed70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed74: 0x200282d
    ctx->pc = 0x2eed74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed78: 0xc0bb88a
    ctx->pc = 0x2EED78u;
    SET_GPR_U32(ctx, 31, 0x2EED80u);
    ctx->pc = 0x2EED7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x2EE228u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x2ee228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED80u; }
    }
    if (ctx->pc != 0x2EED80u) { return; }
    ctx->pc = 0x2EED80u;
    // 0x2eed80: 0xafc20104
    ctx->pc = 0x2eed80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x2eed84: 0x3c04003a
    ctx->pc = 0x2eed84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2eed88: 0x80102d
    ctx->pc = 0x2eed88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed8c: 0x3c10003a
    ctx->pc = 0x2eed8cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2eed90: 0x244235d0
    ctx->pc = 0x2eed90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13776));
    // 0x2eed94: 0x3c11003a
    ctx->pc = 0x2eed94u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2eed98: 0xafa20000
    ctx->pc = 0x2eed98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2eed9c: 0x3c12003a
    ctx->pc = 0x2eed9cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2eeda0: 0x3c13003a
    ctx->pc = 0x2eeda0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2eeda4: 0x3c14003a
    ctx->pc = 0x2eeda4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2eeda8: 0x8fc200fc
    ctx->pc = 0x2eeda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x2eedac: 0x3c15003a
    ctx->pc = 0x2eedacu;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2eedb0: 0x26103290
    ctx->pc = 0x2eedb0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12944));
    // 0x2eedb4: 0x263132f8
    ctx->pc = 0x2eedb4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 13048));
    // 0x2eedb8: 0xafa20008
    ctx->pc = 0x2eedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2eedbc: 0x26523360
    ctx->pc = 0x2eedbcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 13152));
    // 0x2eedc0: 0x267333c8
    ctx->pc = 0x2eedc0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 13256));
    // 0x2eedc4: 0x26943430
    ctx->pc = 0x2eedc4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 13360));
    // 0x2eedc8: 0x8fc20100
    ctx->pc = 0x2eedc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x2eedcc: 0x26b53498
    ctx->pc = 0x2eedccu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 13464));
    // 0x2eedd0: 0x260382d
    ctx->pc = 0x2eedd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedd4: 0x280402d
    ctx->pc = 0x2eedd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedd8: 0xafa20010
    ctx->pc = 0x2eedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2eeddc: 0x2a0482d
    ctx->pc = 0x2eeddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eede0: 0x200202d
    ctx->pc = 0x2eede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eede4: 0x220282d
    ctx->pc = 0x2eede4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eede8: 0x8fc20104
    ctx->pc = 0x2eede8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x2eedec: 0x240302d
    ctx->pc = 0x2eedecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedf0: 0x3c0a003a
    ctx->pc = 0x2eedf0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)58 << 16));
    // 0x2eedf4: 0x254a3500
    ctx->pc = 0x2eedf4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 13568));
    // 0x2eedf8: 0x3c0b003a
    ctx->pc = 0x2eedf8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)58 << 16));
    // 0x2eedfc: 0x256b3568
    ctx->pc = 0x2eedfcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 13672));
    // 0x2eee00: 0xc0bbbd2
    ctx->pc = 0x2EEE00u;
    SET_GPR_U32(ctx, 31, 0x2EEE08u);
    ctx->pc = 0x2EEE04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x2EEF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _initRefImages_0x2eef48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE08u; }
    }
    if (ctx->pc != 0x2EEE08u) { return; }
    ctx->pc = 0x2EEE08u;
    // 0x2eee08: 0x8ec5314c
    ctx->pc = 0x2eee08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eee0c: 0x200202d
    ctx->pc = 0x2eee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee10: 0xc0bbaa2
    ctx->pc = 0x2EEE10u;
    SET_GPR_U32(ctx, 31, 0x2EEE18u);
    ctx->pc = 0x2EEE14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE18u; }
    }
    if (ctx->pc != 0x2EEE18u) { return; }
    ctx->pc = 0x2EEE18u;
    // 0x2eee18: 0x8ec5314c
    ctx->pc = 0x2eee18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eee1c: 0x220202d
    ctx->pc = 0x2eee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee20: 0xc0bbaa2
    ctx->pc = 0x2EEE20u;
    SET_GPR_U32(ctx, 31, 0x2EEE28u);
    ctx->pc = 0x2EEE24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE28u; }
    }
    if (ctx->pc != 0x2EEE28u) { return; }
    ctx->pc = 0x2EEE28u;
    // 0x2eee28: 0x8ec5314c
    ctx->pc = 0x2eee28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eee2c: 0x240202d
    ctx->pc = 0x2eee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee30: 0xc0bbaa2
    ctx->pc = 0x2EEE30u;
    SET_GPR_U32(ctx, 31, 0x2EEE38u);
    ctx->pc = 0x2EEE34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE38u; }
    }
    if (ctx->pc != 0x2EEE38u) { return; }
    ctx->pc = 0x2EEE38u;
    // 0x2eee38: 0x8ee63150
    ctx->pc = 0x2eee38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    // 0x2eee3c: 0x260202d
    ctx->pc = 0x2eee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee40: 0x8ec5314c
    ctx->pc = 0x2eee40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eee44: 0x617c2
    ctx->pc = 0x2eee44u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eee48: 0xc23021
    ctx->pc = 0x2eee48u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eee4c: 0xc0bbaa2
    ctx->pc = 0x2EEE4Cu;
    SET_GPR_U32(ctx, 31, 0x2EEE54u);
    ctx->pc = 0x2EEE50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE54u; }
    }
    if (ctx->pc != 0x2EEE54u) { return; }
    ctx->pc = 0x2EEE54u;
    // 0x2eee54: 0x8ee63150
    ctx->pc = 0x2eee54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    // 0x2eee58: 0x280202d
    ctx->pc = 0x2eee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee5c: 0x8ec5314c
    ctx->pc = 0x2eee5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eee60: 0x617c2
    ctx->pc = 0x2eee60u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eee64: 0xc23021
    ctx->pc = 0x2eee64u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eee68: 0xc0bbaa2
    ctx->pc = 0x2EEE68u;
    SET_GPR_U32(ctx, 31, 0x2EEE70u);
    ctx->pc = 0x2EEE6Cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE70u; }
    }
    if (ctx->pc != 0x2EEE70u) { return; }
    ctx->pc = 0x2EEE70u;
    // 0x2eee70: 0x8ee63150
    ctx->pc = 0x2eee70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    // 0x2eee74: 0x2a0202d
    ctx->pc = 0x2eee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee78: 0x8ec5314c
    ctx->pc = 0x2eee78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eee7c: 0x617c2
    ctx->pc = 0x2eee7cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eee80: 0xc23021
    ctx->pc = 0x2eee80u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eee84: 0xc0bbaa2
    ctx->pc = 0x2EEE84u;
    SET_GPR_U32(ctx, 31, 0x2EEE8Cu);
    ctx->pc = 0x2EEE88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE8Cu; }
    }
    if (ctx->pc != 0x2EEE8Cu) { return; }
    ctx->pc = 0x2EEE8Cu;
    // 0x2eee8c: 0x8ee63150
    ctx->pc = 0x2eee8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    // 0x2eee90: 0x3c04003a
    ctx->pc = 0x2eee90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2eee94: 0x24843500
    ctx->pc = 0x2eee94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13568));
    // 0x2eee98: 0x8ec5314c
    ctx->pc = 0x2eee98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eee9c: 0x617c2
    ctx->pc = 0x2eee9cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eeea0: 0xc23021
    ctx->pc = 0x2eeea0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eeea4: 0xc0bbaa2
    ctx->pc = 0x2EEEA4u;
    SET_GPR_U32(ctx, 31, 0x2EEEACu);
    ctx->pc = 0x2EEEA8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEEACu; }
    }
    if (ctx->pc != 0x2EEEACu) { return; }
    ctx->pc = 0x2EEEACu;
    // 0x2eeeac: 0x8ee63150
    ctx->pc = 0x2eeeacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    // 0x2eeeb0: 0x3c04003a
    ctx->pc = 0x2eeeb0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2eeeb4: 0x24843568
    ctx->pc = 0x2eeeb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13672));
    // 0x2eeeb8: 0x8ec5314c
    ctx->pc = 0x2eeeb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eeebc: 0x617c2
    ctx->pc = 0x2eeebcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eeec0: 0xc23021
    ctx->pc = 0x2eeec0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eeec4: 0xc0bbaa2
    ctx->pc = 0x2EEEC4u;
    SET_GPR_U32(ctx, 31, 0x2EEECCu);
    ctx->pc = 0x2EEEC8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x2EEA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x2eea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEECCu; }
    }
    if (ctx->pc != 0x2EEECCu) { return; }
    ctx->pc = 0x2EEECCu;
    // 0x2eeecc: 0x8ee63150
    ctx->pc = 0x2eeeccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 12624)));
    // 0x2eeed0: 0x3c04003a
    ctx->pc = 0x2eeed0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2eeed4: 0x248435d0
    ctx->pc = 0x2eeed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13776));
    // 0x2eeed8: 0x8ec5314c
    ctx->pc = 0x2eeed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 12620)));
    // 0x2eeedc: 0x617c2
    ctx->pc = 0x2eeedcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eeee0: 0xdfbf00b0
    ctx->pc = 0x2eeee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eeee4: 0xc23021
    ctx->pc = 0x2eeee4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eeee8: 0xdfbe00a0
    ctx->pc = 0x2eeee8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eeeec: 0xdfb70090
    ctx->pc = 0x2eeeecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eeef0: 0x63043
    ctx->pc = 0x2eeef0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2eeef4: 0xdfb60080
    ctx->pc = 0x2eeef4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eeef8: 0xdfb50070
    ctx->pc = 0x2eeef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eeefc: 0xdfb40060
    ctx->pc = 0x2eeefcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eef00: 0xdfb30050
    ctx->pc = 0x2eef00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eef04: 0xdfb20040
    ctx->pc = 0x2eef04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eef08: 0xdfb10030
    ctx->pc = 0x2eef08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eef0c: 0xdfb00020
    ctx->pc = 0x2eef0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eef10: 0x80bbaa2
    ctx->pc = 0x2EEF10u;
    ctx->pc = 0x2EEF14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x2EEA88u;
    ps2__RefImageInit_0x2eea88(rdram, ctx, runtime); return;
    ctx->pc = 0x2EEF18u;
label_2eef18:
    // 0x2eef18: 0xdfbe00a0
    ctx->pc = 0x2eef18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eef1c: 0xdfb70090
    ctx->pc = 0x2eef1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eef20: 0xdfb60080
    ctx->pc = 0x2eef20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eef24: 0xdfb50070
    ctx->pc = 0x2eef24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eef28: 0xdfb40060
    ctx->pc = 0x2eef28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eef2c: 0xdfb30050
    ctx->pc = 0x2eef2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eef30: 0xdfb20040
    ctx->pc = 0x2eef30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eef34: 0xdfb10030
    ctx->pc = 0x2eef34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eef38: 0xdfb00020
    ctx->pc = 0x2eef38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eef3c: 0x3e00008
    ctx->pc = 0x2EEF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEF40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EEC7Cu: goto label_2eec7c;
            case 0x2EECC4u: goto label_2eecc4;
            case 0x2EECC8u: goto label_2eecc8;
            case 0x2EECD4u: goto label_2eecd4;
            case 0x2EED0Cu: goto label_2eed0c;
            case 0x2EEF18u: goto label_2eef18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EEF44u;
}
