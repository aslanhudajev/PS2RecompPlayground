#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: lsc_StatEnd
// Address: 0x17aa70 - 0x17abe8
void lsc_StatEnd_0x17aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lsc_StatEnd");


    ctx->pc = 0x17aa70u;

    // 0x17aa70: 0x27bdffa0
    ctx->pc = 0x17aa70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17aa74: 0xffb40040
    ctx->pc = 0x17aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17aa78: 0xffb30030
    ctx->pc = 0x17aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17aa7c: 0xa02d
    ctx->pc = 0x17aa7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa80: 0xffb20020
    ctx->pc = 0x17aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17aa84: 0x982d
    ctx->pc = 0x17aa84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa88: 0xffb00000
    ctx->pc = 0x17aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17aa8c: 0xffbf0050
    ctx->pc = 0x17aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17aa90: 0x80802d
    ctx->pc = 0x17aa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa94: 0xffb10010
    ctx->pc = 0x17aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17aa98: 0x8e040028
    ctx->pc = 0x17aa98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17aa9c: 0x1080004a
    ctx->pc = 0x17AA9Cu;
    {
        const bool branch_taken_0x17aa9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AAA0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aa9c) {
            ctx->pc = 0x17ABC8u;
            goto label_17abc8;
        }
    }
    ctx->pc = 0x17AAA4u;
    // 0x17aaa4: 0xc05c2ca
    ctx->pc = 0x17AAA4u;
    SET_GPR_U32(ctx, 31, 0x17AAACu);
    ctx->pc = 0x17AAA8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x170B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Close_0x170b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAACu; }
        else if (ctx->pc != 0x17AAACu) { ctx->pc = 0x17AAACu; }
    }
    if (ctx->pc != 0x17AAACu) { return; }
    ctx->pc = 0x17AAACu;
    // 0x17aaac: 0x82020003
    ctx->pc = 0x17aaacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x17aab0: 0x14510024
    ctx->pc = 0x17AAB0u;
    {
        const bool branch_taken_0x17aab0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x17AAB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        if (branch_taken_0x17aab0) {
            ctx->pc = 0x17AB44u;
            goto label_17ab44;
        }
    }
    ctx->pc = 0x17AAB8u;
    // 0x17aab8: 0x8e020020
    ctx->pc = 0x17aab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17aabc: 0x3c03002e
    ctx->pc = 0x17aabcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x17aac0: 0x21180
    ctx->pc = 0x17aac0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x17aac4: 0x24420038
    ctx->pc = 0x17aac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 56));
    // 0x17aac8: 0x2021021
    ctx->pc = 0x17aac8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17aacc: 0x24671840
    ctx->pc = 0x17aaccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 6208));
    // 0x17aad0: 0x6844000b
    ctx->pc = 0x17aad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17aad4: 0x6c440004
    ctx->pc = 0x17aad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17aad8: 0x68450013
    ctx->pc = 0x17aad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17aadc: 0x6c45000c
    ctx->pc = 0x17aadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17aae0: 0x6846001b
    ctx->pc = 0x17aae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17aae4: 0x6c460014
    ctx->pc = 0x17aae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17aae8: 0xb0e40007
    ctx->pc = 0x17aae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aaec: 0xb4e40000
    ctx->pc = 0x17aaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aaf0: 0xb0e5000f
    ctx->pc = 0x17aaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aaf4: 0xb4e50008
    ctx->pc = 0x17aaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aaf8: 0xb0e60017
    ctx->pc = 0x17aaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aafc: 0xb4e60010
    ctx->pc = 0x17aafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ab00: 0x68440023
    ctx->pc = 0x17ab00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17ab04: 0x6c44001c
    ctx->pc = 0x17ab04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17ab08: 0x88450027
    ctx->pc = 0x17ab08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 5, (GPR_U32(ctx, 5) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x17ab0c: 0x98450024
    ctx->pc = 0x17ab0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 5, (GPR_U32(ctx, 5) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x17ab10: 0x80460028
    ctx->pc = 0x17ab10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17ab14: 0xb0e4001f
    ctx->pc = 0x17ab14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ab18: 0xb4e40018
    ctx->pc = 0x17ab18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ab1c: 0xa8e50023
    ctx->pc = 0x17ab1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 35); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 5) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17ab20: 0xb8e50020
    ctx->pc = 0x17ab20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 5) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17ab24: 0xa0e60024
    ctx->pc = 0x17ab24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 36), (uint8_t)GPR_U32(ctx, 6));
    // 0x17ab28: 0x80440029
    ctx->pc = 0x17ab28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x17ab2c: 0x8045002a
    ctx->pc = 0x17ab2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x17ab30: 0xa0e40025
    ctx->pc = 0x17ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x17ab34: 0xa0e50026
    ctx->pc = 0x17ab34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 38), (uint8_t)GPR_U32(ctx, 5));
    // 0x17ab38: 0x8c540034
    ctx->pc = 0x17ab38u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17ab3c: 0x8c53002c
    ctx->pc = 0x17ab3cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17ab40: 0x8c520030
    ctx->pc = 0x17ab40u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_17ab44:
    // 0x17ab44: 0x8e020020
    ctx->pc = 0x17ab44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17ab48: 0x2403ffff
    ctx->pc = 0x17ab48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ab4c: 0x8e050024
    ctx->pc = 0x17ab4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17ab50: 0x24440001
    ctx->pc = 0x17ab50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ab54: 0x64182a
    ctx->pc = 0x17ab54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x17ab58: 0x24420010
    ctx->pc = 0x17ab58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x17ab5c: 0x83100b
    ctx->pc = 0x17ab5cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x17ab60: 0x24a5ffff
    ctx->pc = 0x17ab60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17ab64: 0x21103
    ctx->pc = 0x17ab64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x17ab68: 0xae050024
    ctx->pc = 0x17ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x17ab6c: 0x21100
    ctx->pc = 0x17ab6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x17ab70: 0x822023
    ctx->pc = 0x17ab70u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17ab74: 0x1ca00004
    ctx->pc = 0x17AB74u;
    {
        const bool branch_taken_0x17ab74 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x17AB78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        if (branch_taken_0x17ab74) {
            ctx->pc = 0x17AB88u;
            goto label_17ab88;
        }
    }
    ctx->pc = 0x17AB7Cu;
    // 0x17ab7c: 0xc05e9a2
    ctx->pc = 0x17AB7Cu;
    SET_GPR_U32(ctx, 31, 0x17AB84u);
    ctx->pc = 0x17A688u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallStatFunc_0x17a688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB84u; }
        else if (ctx->pc != 0x17AB84u) { ctx->pc = 0x17AB84u; }
    }
    if (ctx->pc != 0x17AB84u) { return; }
    ctx->pc = 0x17AB84u;
    // 0x17ab84: 0xa2110001
    ctx->pc = 0x17ab84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_17ab88:
    // 0x17ab88: 0x82020003
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x17ab8c: 0x1451000f
    ctx->pc = 0x17AB8Cu;
    {
        const bool branch_taken_0x17ab8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x17AB90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x17ab8c) {
            ctx->pc = 0x17ABCCu;
            goto label_17abcc;
        }
    }
    ctx->pc = 0x17AB94u;
    // 0x17ab94: 0x200202d
    ctx->pc = 0x17ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab98: 0x260302d
    ctx->pc = 0x17ab98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab9c: 0x240382d
    ctx->pc = 0x17ab9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aba0: 0x280402d
    ctx->pc = 0x17aba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aba4: 0x3c05002e
    ctx->pc = 0x17aba4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x17aba8: 0xdfb40040
    ctx->pc = 0x17aba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17abac: 0x24a51840
    ctx->pc = 0x17abacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6208));
    // 0x17abb0: 0xdfb30030
    ctx->pc = 0x17abb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17abb4: 0xdfb20020
    ctx->pc = 0x17abb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17abb8: 0xdfb10010
    ctx->pc = 0x17abb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17abbc: 0xdfb00000
    ctx->pc = 0x17abbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abc0: 0x805e81a
    ctx->pc = 0x17ABC0u;
    ctx->pc = 0x17ABC4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x17A068u;
    LSC_EntryFileRange_0x17a068(rdram, ctx, runtime); return;
    ctx->pc = 0x17ABC8u;
label_17abc8:
    // 0x17abc8: 0xdfbf0050
    ctx->pc = 0x17abc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17abcc:
    // 0x17abcc: 0xdfb40040
    ctx->pc = 0x17abccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17abd0: 0xdfb30030
    ctx->pc = 0x17abd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17abd4: 0xdfb20020
    ctx->pc = 0x17abd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17abd8: 0xdfb10010
    ctx->pc = 0x17abd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17abdc: 0xdfb00000
    ctx->pc = 0x17abdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abe0: 0x3e00008
    ctx->pc = 0x17ABE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AB44u: goto label_17ab44;
            case 0x17AB88u: goto label_17ab88;
            case 0x17ABC8u: goto label_17abc8;
            case 0x17ABCCu: goto label_17abcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ABE8u;
}
