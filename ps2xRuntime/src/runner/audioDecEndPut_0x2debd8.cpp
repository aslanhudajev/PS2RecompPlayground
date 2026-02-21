#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecEndPut
// Address: 0x2debd8 - 0x2ded5c
void audioDecEndPut_0x2debd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2debd8u;

    // 0x2debd8: 0x27bdffb0
    ctx->pc = 0x2debd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2debdc: 0xffbf0040
    ctx->pc = 0x2debdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2debe0: 0xffb10030
    ctx->pc = 0x2debe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2debe4: 0xffb00020
    ctx->pc = 0x2debe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2debe8: 0x80802d
    ctx->pc = 0x2debe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2debec: 0x8e020000
    ctx->pc = 0x2debecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2debf0: 0x14400047
    ctx->pc = 0x2DEBF0u;
    {
        const bool branch_taken_0x2debf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DEBF4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2debf0) {
            ctx->pc = 0x2DED10u;
            goto label_2ded10;
        }
    }
    ctx->pc = 0x2DEBF8u;
    // 0x2debf8: 0x24020028
    ctx->pc = 0x2debf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x2debfc: 0x8e04002c
    ctx->pc = 0x2debfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2dec00: 0x441023
    ctx->pc = 0x2dec00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dec04: 0x51182b
    ctx->pc = 0x2dec04u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2dec08: 0x223100a
    ctx->pc = 0x2dec08u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x2dec0c: 0x441021
    ctx->pc = 0x2dec0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dec10: 0xae02002c
    ctx->pc = 0x2dec10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2dec14: 0x2c420028
    ctx->pc = 0x2dec14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 40));
    // 0x2dec18: 0x5440003e
    ctx->pc = 0x2DEC18u;
    {
        const bool branch_taken_0x2dec18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dec18) {
            ctx->pc = 0x2DEC1Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->pc = 0x2DED14u;
            goto label_2ded14;
        }
    }
    ctx->pc = 0x2DEC20u;
    // 0x2dec20: 0x24020001
    ctx->pc = 0x2dec20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dec24: 0xae020000
    ctx->pc = 0x2dec24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2dec28: 0x8e020030
    ctx->pc = 0x2dec28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2dec2c: 0x68430007
    ctx->pc = 0x2dec2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2dec30: 0x6c430000
    ctx->pc = 0x2dec30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2dec34: 0x6844000f
    ctx->pc = 0x2dec34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2dec38: 0x6c440008
    ctx->pc = 0x2dec38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2dec3c: 0x68450017
    ctx->pc = 0x2dec3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2dec40: 0x6c450010
    ctx->pc = 0x2dec40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2dec44: 0x6846001f
    ctx->pc = 0x2dec44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2dec48: 0x6c460018
    ctx->pc = 0x2dec48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2dec4c: 0xb203000b
    ctx->pc = 0x2dec4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec50: 0xb6030004
    ctx->pc = 0x2dec50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec54: 0xb2040013
    ctx->pc = 0x2dec54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec58: 0xb604000c
    ctx->pc = 0x2dec58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec5c: 0xb205001b
    ctx->pc = 0x2dec5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec60: 0xb6050014
    ctx->pc = 0x2dec60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec64: 0xb2060023
    ctx->pc = 0x2dec64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec68: 0xb606001c
    ctx->pc = 0x2dec68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec6c: 0x68430027
    ctx->pc = 0x2dec6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2dec70: 0x6c430020
    ctx->pc = 0x2dec70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2dec74: 0xb203002b
    ctx->pc = 0x2dec74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec78: 0xb6030024
    ctx->pc = 0x2dec78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dec7c: 0x8e03000c
    ctx->pc = 0x2dec7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dec80: 0x24020010
    ctx->pc = 0x2dec80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dec84: 0x10620006
    ctx->pc = 0x2DEC84u;
    {
        const bool branch_taken_0x2dec84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DEC88u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2dec84) {
            ctx->pc = 0x2DECA0u;
            goto label_2deca0;
        }
    }
    ctx->pc = 0x2DEC8Cu;
    // 0x2dec8c: 0x3c04003c
    ctx->pc = 0x2dec8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dec90: 0xc0b4a34
    ctx->pc = 0x2DEC90u;
    SET_GPR_U32(ctx, 31, 0x2DEC98u);
    ctx->pc = 0x2DEC94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936896));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC98u; }
    }
    if (ctx->pc != 0x2DEC98u) { return; }
    ctx->pc = 0x2DEC98u;
    // 0x2dec98: 0x1000001e
    ctx->pc = 0x2DEC98u;
    {
        const bool branch_taken_0x2dec98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DEC9Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        if (branch_taken_0x2dec98) {
            ctx->pc = 0x2DED14u;
            goto label_2ded14;
        }
    }
    ctx->pc = 0x2DECA0u;
label_2deca0:
    // 0x2deca0: 0xc0b4a34
    ctx->pc = 0x2DECA0u;
    SET_GPR_U32(ctx, 31, 0x2DECA8u);
    ctx->pc = 0x2DECA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936960));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DECA8u; }
    }
    if (ctx->pc != 0x2DECA8u) { return; }
    ctx->pc = 0x2DECA8u;
    // 0x2deca8: 0x82050004
    ctx->pc = 0x2deca8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2decac: 0x82060005
    ctx->pc = 0x2decacu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2decb0: 0x82070006
    ctx->pc = 0x2decb0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2decb4: 0x82080007
    ctx->pc = 0x2decb4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2decb8: 0x8e020014
    ctx->pc = 0x2decb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2decbc: 0xafa20000
    ctx->pc = 0x2decbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2decc0: 0x8e020018
    ctx->pc = 0x2decc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2decc4: 0xafa20008
    ctx->pc = 0x2decc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2decc8: 0x8e02001c
    ctx->pc = 0x2decc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2deccc: 0xafa20010
    ctx->pc = 0x2decccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2decd0: 0x8e020020
    ctx->pc = 0x2decd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2decd4: 0xafa20018
    ctx->pc = 0x2decd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2decd8: 0x3c04003c
    ctx->pc = 0x2decd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2decdc: 0x248489b8
    ctx->pc = 0x2decdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937016));
    // 0x2dece0: 0x8e090008
    ctx->pc = 0x2dece0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2dece4: 0x8e0a000c
    ctx->pc = 0x2dece4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dece8: 0xc0b4a34
    ctx->pc = 0x2DECE8u;
    SET_GPR_U32(ctx, 31, 0x2DECF0u);
    ctx->pc = 0x2DECECu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DECF0u; }
    }
    if (ctx->pc != 0x2DECF0u) { return; }
    ctx->pc = 0x2DECF0u;
    // 0x2decf0: 0x3c04003c
    ctx->pc = 0x2decf0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2decf4: 0x24848af8
    ctx->pc = 0x2decf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937336));
    // 0x2decf8: 0x82050024
    ctx->pc = 0x2decf8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2decfc: 0x82060025
    ctx->pc = 0x2decfcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x2ded00: 0x82070026
    ctx->pc = 0x2ded00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2ded04: 0x82080027
    ctx->pc = 0x2ded04u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x2ded08: 0xc0b4a34
    ctx->pc = 0x2DED08u;
    SET_GPR_U32(ctx, 31, 0x2DED10u);
    ctx->pc = 0x2DED0Cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED10u; }
    }
    if (ctx->pc != 0x2DED10u) { return; }
    ctx->pc = 0x2DED10u;
label_2ded10:
    // 0x2ded10: 0x8e030034
    ctx->pc = 0x2ded10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2ded14:
    // 0x2ded14: 0x2231821
    ctx->pc = 0x2ded14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ded18: 0x8e02003c
    ctx->pc = 0x2ded18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ded1c: 0x62001a
    ctx->pc = 0x2ded1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2ded20: 0x1810
    ctx->pc = 0x2ded20u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2ded24: 0x50400001
    ctx->pc = 0x2DED24u;
    {
        const bool branch_taken_0x2ded24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ded24) {
            ctx->pc = 0x2DED28u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DED2Cu;
            goto label_2ded2c;
        }
    }
    ctx->pc = 0x2DED2Cu;
label_2ded2c:
    // 0x2ded2c: 0xae030034
    ctx->pc = 0x2ded2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x2ded30: 0x8e020038
    ctx->pc = 0x2ded30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2ded34: 0x2221021
    ctx->pc = 0x2ded34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ded38: 0xae020038
    ctx->pc = 0x2ded38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2ded3c: 0x8e020040
    ctx->pc = 0x2ded3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2ded40: 0x2221021
    ctx->pc = 0x2ded40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ded44: 0xae020040
    ctx->pc = 0x2ded44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2ded48: 0xdfbf0040
    ctx->pc = 0x2ded48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ded4c: 0xdfb10030
    ctx->pc = 0x2ded4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ded50: 0xdfb00020
    ctx->pc = 0x2ded50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ded54: 0x3e00008
    ctx->pc = 0x2DED54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DED58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DECA0u: goto label_2deca0;
            case 0x2DED10u: goto label_2ded10;
            case 0x2DED14u: goto label_2ded14;
            case 0x2DED2Cu: goto label_2ded2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DED5Cu;
}
