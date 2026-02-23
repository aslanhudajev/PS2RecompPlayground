#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: extract_cie_info
// Address: 0x14cde0 - 0x14cee4
void extract_cie_info_0x14cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("extract_cie_info");


    ctx->pc = 0x14cde0u;

    // 0x14cde0: 0x27bdffb0
    ctx->pc = 0x14cde0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14cde4: 0x80102d
    ctx->pc = 0x14cde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cde8: 0xffb10020
    ctx->pc = 0x14cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x14cdec: 0xffbf0040
    ctx->pc = 0x14cdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14cdf0: 0xa0882d
    ctx->pc = 0x14cdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cdf4: 0xffb20030
    ctx->pc = 0x14cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x14cdf8: 0x3c05002b
    ctx->pc = 0x14cdf8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x14cdfc: 0xffb00010
    ctx->pc = 0x14cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ce00: 0x24a578d0
    ctx->pc = 0x14ce00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30928));
    // 0x14ce04: 0x8c430004
    ctx->pc = 0x14ce04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14ce08: 0x431023
    ctx->pc = 0x14ce08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ce0c: 0x2442000d
    ctx->pc = 0x14ce0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13));
    // 0x14ce10: 0x40202d
    ctx->pc = 0x14ce10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce14: 0xc0514bc
    ctx->pc = 0x14CE14u;
    SET_GPR_U32(ctx, 31, 0x14CE1Cu);
    ctx->pc = 0x14CE18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE1Cu; }
        else if (ctx->pc != 0x14CE1Cu) { ctx->pc = 0x14CE1Cu; }
    }
    if (ctx->pc != 0x14CE1Cu) { return; }
    ctx->pc = 0x14CE1Cu;
    // 0x14ce1c: 0x1040000a
    ctx->pc = 0x14CE1Cu;
    {
        const bool branch_taken_0x14ce1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CE20u;
        SET_GPR_U32(ctx, 16, ((uint32_t)43 << 16));
        if (branch_taken_0x14ce1c) {
            ctx->pc = 0x14CE48u;
            goto label_14ce48;
        }
    }
    ctx->pc = 0x14CE24u;
    // 0x14ce24: 0x8e240000
    ctx->pc = 0x14ce24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ce28: 0xc0514bc
    ctx->pc = 0x14CE28u;
    SET_GPR_U32(ctx, 31, 0x14CE30u);
    ctx->pc = 0x14CE2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 30936));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE30u; }
        else if (ctx->pc != 0x14CE30u) { ctx->pc = 0x14CE30u; }
    }
    if (ctx->pc != 0x14CE30u) { return; }
    ctx->pc = 0x14CE30u;
    // 0x14ce30: 0x10400005
    ctx->pc = 0x14CE30u;
    {
        const bool branch_taken_0x14ce30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CE34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 122));
        if (branch_taken_0x14ce30) {
            ctx->pc = 0x14CE48u;
            goto label_14ce48;
        }
    }
    ctx->pc = 0x14CE38u;
    // 0x14ce38: 0x8e220000
    ctx->pc = 0x14ce38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ce3c: 0x80430000
    ctx->pc = 0x14ce3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ce40: 0x14640022
    ctx->pc = 0x14CE40u;
    {
        const bool branch_taken_0x14ce40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x14CE44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14ce40) {
            ctx->pc = 0x14CECCu;
            goto label_14cecc;
        }
    }
    ctx->pc = 0x14CE48u;
label_14ce48:
    // 0x14ce48: 0xc051554
    ctx->pc = 0x14CE48u;
    SET_GPR_U32(ctx, 31, 0x14CE50u);
    ctx->pc = 0x14CE4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE50u; }
        else if (ctx->pc != 0x14CE50u) { ctx->pc = 0x14CE50u; }
    }
    if (ctx->pc != 0x14CE50u) { return; }
    ctx->pc = 0x14CE50u;
    // 0x14ce50: 0x8e240000
    ctx->pc = 0x14ce50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ce54: 0x260578d8
    ctx->pc = 0x14ce54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 30936));
    // 0x14ce58: 0x829021
    ctx->pc = 0x14ce58u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ce5c: 0xc0514bc
    ctx->pc = 0x14CE5Cu;
    SET_GPR_U32(ctx, 31, 0x14CE64u);
    ctx->pc = 0x14CE60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE64u; }
        else if (ctx->pc != 0x14CE64u) { ctx->pc = 0x14CE64u; }
    }
    if (ctx->pc != 0x14CE64u) { return; }
    ctx->pc = 0x14CE64u;
    // 0x14ce64: 0x54400005
    ctx->pc = 0x14CE64u;
    {
        const bool branch_taken_0x14ce64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14ce64) {
            ctx->pc = 0x14CE68u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x14CE7Cu;
            goto label_14ce7c;
        }
    }
    ctx->pc = 0x14CE6Cu;
    // 0x14ce6c: 0x8a020003
    ctx->pc = 0x14ce6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x14ce70: 0x9a020000
    ctx->pc = 0x14ce70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x14ce74: 0x26500005
    ctx->pc = 0x14ce74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 5));
    // 0x14ce78: 0xae220004
    ctx->pc = 0x14ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_14ce7c:
    // 0x14ce7c: 0x200202d
    ctx->pc = 0x14ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce80: 0xc0531ba
    ctx->pc = 0x14CE80u;
    SET_GPR_U32(ctx, 31, 0x14CE88u);
    ctx->pc = 0x14CE84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE88u; }
        else if (ctx->pc != 0x14CE88u) { ctx->pc = 0x14CE88u; }
    }
    if (ctx->pc != 0x14CE88u) { return; }
    ctx->pc = 0x14CE88u;
    // 0x14ce88: 0x40202d
    ctx->pc = 0x14ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce8c: 0xc0531cc
    ctx->pc = 0x14CE8Cu;
    SET_GPR_U32(ctx, 31, 0x14CE94u);
    ctx->pc = 0x14CE90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    ctx->pc = 0x14C730u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_sleb128_0x14c730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE94u; }
        else if (ctx->pc != 0x14CE94u) { ctx->pc = 0x14CE94u; }
    }
    if (ctx->pc != 0x14CE94u) { return; }
    ctx->pc = 0x14CE94u;
    // 0x14ce94: 0x40802d
    ctx->pc = 0x14ce94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce98: 0x8e250000
    ctx->pc = 0x14ce98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ce9c: 0x92030000
    ctx->pc = 0x14ce9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cea0: 0x2404007a
    ctx->pc = 0x14cea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 122));
    // 0x14cea4: 0xae230010
    ctx->pc = 0x14cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x14cea8: 0x80a20000
    ctx->pc = 0x14cea8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ceac: 0x14440006
    ctx->pc = 0x14CEACu;
    {
        const bool branch_taken_0x14ceac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x14CEB0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x14ceac) {
            ctx->pc = 0x14CEC8u;
            goto label_14cec8;
        }
    }
    ctx->pc = 0x14CEB4u;
    // 0x14ceb4: 0x200202d
    ctx->pc = 0x14ceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ceb8: 0xc0531ba
    ctx->pc = 0x14CEB8u;
    SET_GPR_U32(ctx, 31, 0x14CEC0u);
    ctx->pc = 0x14CEBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CEC0u; }
        else if (ctx->pc != 0x14CEC0u) { ctx->pc = 0x14CEC0u; }
    }
    if (ctx->pc != 0x14CEC0u) { return; }
    ctx->pc = 0x14CEC0u;
    // 0x14cec0: 0x8fa30000
    ctx->pc = 0x14cec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cec4: 0x438021
    ctx->pc = 0x14cec4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cec8:
    // 0x14cec8: 0x200102d
    ctx->pc = 0x14cec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cecc:
    // 0x14cecc: 0xdfbf0040
    ctx->pc = 0x14ceccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ced0: 0xdfb20030
    ctx->pc = 0x14ced0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ced4: 0xdfb10020
    ctx->pc = 0x14ced4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ced8: 0xdfb00010
    ctx->pc = 0x14ced8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cedc: 0x3e00008
    ctx->pc = 0x14CEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CEE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CE48u: goto label_14ce48;
            case 0x14CE7Cu: goto label_14ce7c;
            case 0x14CEC8u: goto label_14cec8;
            case 0x14CECCu: goto label_14cecc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CEE4u;
}
