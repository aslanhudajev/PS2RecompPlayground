#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_GetChunk
// Address: 0x17cdd8 - 0x17cf04
void SJUNI_GetChunk_0x17cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_GetChunk");


    ctx->pc = 0x17cdd8u;

label_17cdd8:
    // 0x17cdd8: 0x27bdff90
    ctx->pc = 0x17cdd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_17cddc:
    // 0x17cddc: 0xffb10030
    ctx->pc = 0x17cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_17cde0:
    // 0x17cde0: 0xffb30050
    ctx->pc = 0x17cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_17cde4:
    // 0x17cde4: 0xa0882d
    ctx->pc = 0x17cde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17cde8:
    // 0x17cde8: 0xffb20040
    ctx->pc = 0x17cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_17cdec:
    // 0x17cdec: 0xc0982d
    ctx->pc = 0x17cdecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17cdf0:
    // 0x17cdf0: 0xffb00020
    ctx->pc = 0x17cdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_17cdf4:
    // 0x17cdf4: 0x80902d
    ctx->pc = 0x17cdf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17cdf8:
    // 0x17cdf8: 0xffbf0060
    ctx->pc = 0x17cdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17cdfc:
    // 0x17cdfc: 0x2e220004
    ctx->pc = 0x17cdfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 4));
label_17ce00:
    // 0x17ce00: 0x1440000a
label_17ce04:
    if (ctx->pc == 0x17CE04u) {
        ctx->pc = 0x17CE04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CE08u;
        goto label_17ce08;
    }
    ctx->pc = 0x17CE00u;
    {
        const bool branch_taken_0x17ce00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17CE04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ce00) {
            ctx->pc = 0x17CE2Cu;
            goto label_17ce2c;
        }
    }
    ctx->pc = 0x17CE08u;
label_17ce08:
    // 0x17ce08: 0x8e420028
    ctx->pc = 0x17ce08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_17ce0c:
    // 0x17ce0c: 0x50400005
label_17ce10:
    if (ctx->pc == 0x17CE10u) {
        ctx->pc = 0x17CE10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17CE14u;
        goto label_17ce14;
    }
    ctx->pc = 0x17CE0Cu;
    {
        const bool branch_taken_0x17ce0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ce0c) {
            ctx->pc = 0x17CE10u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x17CE24u;
            goto label_17ce24;
        }
    }
    ctx->pc = 0x17CE14u;
label_17ce14:
    // 0x17ce14: 0x8e44002c
    ctx->pc = 0x17ce14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_17ce18:
    // 0x17ce18: 0x40f809
label_17ce1c:
    if (ctx->pc == 0x17CE1Cu) {
        ctx->pc = 0x17CE1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17CE20u;
        goto label_17ce20;
    }
    ctx->pc = 0x17CE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17CE20u);
        ctx->pc = 0x17CE1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CDD8u: goto label_17cdd8;
            case 0x17CDDCu: goto label_17cddc;
            case 0x17CDE0u: goto label_17cde0;
            case 0x17CDE4u: goto label_17cde4;
            case 0x17CDE8u: goto label_17cde8;
            case 0x17CDECu: goto label_17cdec;
            case 0x17CDF0u: goto label_17cdf0;
            case 0x17CDF4u: goto label_17cdf4;
            case 0x17CDF8u: goto label_17cdf8;
            case 0x17CDFCu: goto label_17cdfc;
            case 0x17CE00u: goto label_17ce00;
            case 0x17CE04u: goto label_17ce04;
            case 0x17CE08u: goto label_17ce08;
            case 0x17CE0Cu: goto label_17ce0c;
            case 0x17CE10u: goto label_17ce10;
            case 0x17CE14u: goto label_17ce14;
            case 0x17CE18u: goto label_17ce18;
            case 0x17CE1Cu: goto label_17ce1c;
            case 0x17CE20u: goto label_17ce20;
            case 0x17CE24u: goto label_17ce24;
            case 0x17CE28u: goto label_17ce28;
            case 0x17CE2Cu: goto label_17ce2c;
            case 0x17CE30u: goto label_17ce30;
            case 0x17CE34u: goto label_17ce34;
            case 0x17CE38u: goto label_17ce38;
            case 0x17CE3Cu: goto label_17ce3c;
            case 0x17CE40u: goto label_17ce40;
            case 0x17CE44u: goto label_17ce44;
            case 0x17CE48u: goto label_17ce48;
            case 0x17CE4Cu: goto label_17ce4c;
            case 0x17CE50u: goto label_17ce50;
            case 0x17CE54u: goto label_17ce54;
            case 0x17CE58u: goto label_17ce58;
            case 0x17CE5Cu: goto label_17ce5c;
            case 0x17CE60u: goto label_17ce60;
            case 0x17CE64u: goto label_17ce64;
            case 0x17CE68u: goto label_17ce68;
            case 0x17CE6Cu: goto label_17ce6c;
            case 0x17CE70u: goto label_17ce70;
            case 0x17CE74u: goto label_17ce74;
            case 0x17CE78u: goto label_17ce78;
            case 0x17CE7Cu: goto label_17ce7c;
            case 0x17CE80u: goto label_17ce80;
            case 0x17CE84u: goto label_17ce84;
            case 0x17CE88u: goto label_17ce88;
            case 0x17CE8Cu: goto label_17ce8c;
            case 0x17CE90u: goto label_17ce90;
            case 0x17CE94u: goto label_17ce94;
            case 0x17CE98u: goto label_17ce98;
            case 0x17CE9Cu: goto label_17ce9c;
            case 0x17CEA0u: goto label_17cea0;
            case 0x17CEA4u: goto label_17cea4;
            case 0x17CEA8u: goto label_17cea8;
            case 0x17CEACu: goto label_17ceac;
            case 0x17CEB0u: goto label_17ceb0;
            case 0x17CEB4u: goto label_17ceb4;
            case 0x17CEB8u: goto label_17ceb8;
            case 0x17CEBCu: goto label_17cebc;
            case 0x17CEC0u: goto label_17cec0;
            case 0x17CEC4u: goto label_17cec4;
            case 0x17CEC8u: goto label_17cec8;
            case 0x17CECCu: goto label_17cecc;
            case 0x17CED0u: goto label_17ced0;
            case 0x17CED4u: goto label_17ced4;
            case 0x17CED8u: goto label_17ced8;
            case 0x17CEDCu: goto label_17cedc;
            case 0x17CEE0u: goto label_17cee0;
            case 0x17CEE4u: goto label_17cee4;
            case 0x17CEE8u: goto label_17cee8;
            case 0x17CEECu: goto label_17ceec;
            case 0x17CEF0u: goto label_17cef0;
            case 0x17CEF4u: goto label_17cef4;
            case 0x17CEF8u: goto label_17cef8;
            case 0x17CEFCu: goto label_17cefc;
            case 0x17CF00u: goto label_17cf00;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17CE20u; }
            if (ctx->pc != 0x17CE20u) { return; }
        }
    }
    ctx->pc = 0x17CE20u;
label_17ce20:
    // 0x17ce20: 0xae000004
    ctx->pc = 0x17ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_17ce24:
    // 0x17ce24: 0x10000030
label_17ce28:
    if (ctx->pc == 0x17CE28u) {
        ctx->pc = 0x17CE28u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x17CE2Cu;
        goto label_17ce2c;
    }
    ctx->pc = 0x17CE24u;
    {
        const bool branch_taken_0x17ce24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CE28u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x17ce24) {
            ctx->pc = 0x17CEE8u;
            goto label_17cee8;
        }
    }
    ctx->pc = 0x17CE2Cu;
label_17ce2c:
    // 0x17ce2c: 0xc05efbc
label_17ce30:
    if (ctx->pc == 0x17CE30u) {
        ctx->pc = 0x17CE34u;
        goto label_17ce34;
    }
    ctx->pc = 0x17CE2Cu;
    SET_GPR_U32(ctx, 31, 0x17CE34u);
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE34u; }
        else if (ctx->pc != 0x17CE34u) { ctx->pc = 0x17CE34u; }
    }
    if (ctx->pc != 0x17CE34u) { return; }
    ctx->pc = 0x17CE34u;
label_17ce34:
    // 0x17ce34: 0x111880
    ctx->pc = 0x17ce34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_17ce38:
    // 0x17ce38: 0x26420018
    ctx->pc = 0x17ce38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 24));
label_17ce3c:
    // 0x17ce3c: 0x431821
    ctx->pc = 0x17ce3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ce40:
    // 0x17ce40: 0x8c710000
    ctx->pc = 0x17ce40u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17ce44:
    // 0x17ce44: 0x52200025
label_17ce48:
    if (ctx->pc == 0x17CE48u) {
        ctx->pc = 0x17CE48u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17CE4Cu;
        goto label_17ce4c;
    }
    ctx->pc = 0x17CE44u;
    {
        const bool branch_taken_0x17ce44 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ce44) {
            ctx->pc = 0x17CE48u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x17CEDCu;
            goto label_17cedc;
        }
    }
    ctx->pc = 0x17CE4Cu;
label_17ce4c:
    // 0x17ce4c: 0x6a22000f
    ctx->pc = 0x17ce4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_17ce50:
    // 0x17ce50: 0x6e220008
    ctx->pc = 0x17ce50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17ce54:
    // 0x17ce54: 0xb3a20007
    ctx->pc = 0x17ce54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17ce58:
    // 0x17ce58: 0xb7a20000
    ctx->pc = 0x17ce58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17ce5c:
    // 0x17ce5c: 0x8fa20004
    ctx->pc = 0x17ce5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17ce60:
    // 0x17ce60: 0x262102a
    ctx->pc = 0x17ce60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_17ce64:
    // 0x17ce64: 0x5440000b
label_17ce68:
    if (ctx->pc == 0x17CE68u) {
        ctx->pc = 0x17CE68u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->pc = 0x17CE6Cu;
        goto label_17ce6c;
    }
    ctx->pc = 0x17CE64u;
    {
        const bool branch_taken_0x17ce64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17ce64) {
            ctx->pc = 0x17CE68u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
            ctx->pc = 0x17CE94u;
            goto label_17ce94;
        }
    }
    ctx->pc = 0x17CE6Cu;
label_17ce6c:
    // 0x17ce6c: 0x6ba20007
    ctx->pc = 0x17ce6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_17ce70:
    // 0x17ce70: 0x6fa20000
    ctx->pc = 0x17ce70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17ce74:
    // 0x17ce74: 0xb2020007
    ctx->pc = 0x17ce74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17ce78:
    // 0x17ce78: 0xb6020000
    ctx->pc = 0x17ce78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17ce7c:
    // 0x17ce7c: 0x8e220000
    ctx->pc = 0x17ce7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17ce80:
    // 0x17ce80: 0xac620000
    ctx->pc = 0x17ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17ce84:
    // 0x17ce84: 0x8e430014
    ctx->pc = 0x17ce84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_17ce88:
    // 0x17ce88: 0xae230000
    ctx->pc = 0x17ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_17ce8c:
    // 0x17ce8c: 0x10000014
label_17ce90:
    if (ctx->pc == 0x17CE90u) {
        ctx->pc = 0x17CE90u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
        ctx->pc = 0x17CE94u;
        goto label_17ce94;
    }
    ctx->pc = 0x17CE8Cu;
    {
        const bool branch_taken_0x17ce8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CE90u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
        if (branch_taken_0x17ce8c) {
            ctx->pc = 0x17CEE0u;
            goto label_17cee0;
        }
    }
    ctx->pc = 0x17CE94u;
label_17ce94:
    // 0x17ce94: 0x24020001
    ctx->pc = 0x17ce94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17ce98:
    // 0x17ce98: 0x54620010
label_17ce9c:
    if (ctx->pc == 0x17CE9Cu) {
        ctx->pc = 0x17CE9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17CEA0u;
        goto label_17cea0;
    }
    ctx->pc = 0x17CE98u;
    {
        const bool branch_taken_0x17ce98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17ce98) {
            ctx->pc = 0x17CE9Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x17CEDCu;
            goto label_17cedc;
        }
    }
    ctx->pc = 0x17CEA0u;
label_17cea0:
    // 0x17cea0: 0x260282d
    ctx->pc = 0x17cea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17cea4:
    // 0x17cea4: 0x3a0202d
    ctx->pc = 0x17cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17cea8:
    // 0x17cea8: 0x3a0302d
    ctx->pc = 0x17cea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17ceac:
    // 0x17ceac: 0xc05f4b0
label_17ceb0:
    if (ctx->pc == 0x17CEB0u) {
        ctx->pc = 0x17CEB0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17CEB4u;
        goto label_17ceb4;
    }
    ctx->pc = 0x17CEACu;
    SET_GPR_U32(ctx, 31, 0x17CEB4u);
    ctx->pc = 0x17CEB0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEB4u; }
        else if (ctx->pc != 0x17CEB4u) { ctx->pc = 0x17CEB4u; }
    }
    if (ctx->pc != 0x17CEB4u) { return; }
    ctx->pc = 0x17CEB4u;
label_17ceb4:
    // 0x17ceb4: 0x6ba20007
    ctx->pc = 0x17ceb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_17ceb8:
    // 0x17ceb8: 0x6fa20000
    ctx->pc = 0x17ceb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17cebc:
    // 0x17cebc: 0xb2020007
    ctx->pc = 0x17cebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17cec0:
    // 0x17cec0: 0xb6020000
    ctx->pc = 0x17cec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17cec4:
    // 0x17cec4: 0x6ba60017
    ctx->pc = 0x17cec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
label_17cec8:
    // 0x17cec8: 0x6fa60010
    ctx->pc = 0x17cec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17cecc:
    // 0x17cecc: 0xb226000f
    ctx->pc = 0x17ceccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17ced0:
    // 0x17ced0: 0xb6260008
    ctx->pc = 0x17ced0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17ced4:
    // 0x17ced4: 0x10000002
label_17ced8:
    if (ctx->pc == 0x17CED8u) {
        ctx->pc = 0x17CEDCu;
        goto label_17cedc;
    }
    ctx->pc = 0x17CED4u;
    {
        const bool branch_taken_0x17ced4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ced4) {
            ctx->pc = 0x17CEE0u;
            goto label_17cee0;
        }
    }
    ctx->pc = 0x17CEDCu;
label_17cedc:
    // 0x17cedc: 0xae000000
    ctx->pc = 0x17cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17cee0:
    // 0x17cee0: 0xc05efc2
label_17cee4:
    if (ctx->pc == 0x17CEE4u) {
        ctx->pc = 0x17CEE8u;
        goto label_17cee8;
    }
    ctx->pc = 0x17CEE0u;
    SET_GPR_U32(ctx, 31, 0x17CEE8u);
    ctx->pc = 0x17BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Unlock_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEE8u; }
        else if (ctx->pc != 0x17CEE8u) { ctx->pc = 0x17CEE8u; }
    }
    if (ctx->pc != 0x17CEE8u) { return; }
    ctx->pc = 0x17CEE8u;
label_17cee8:
    // 0x17cee8: 0xdfbf0060
    ctx->pc = 0x17cee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17ceec:
    // 0x17ceec: 0xdfb30050
    ctx->pc = 0x17ceecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17cef0:
    // 0x17cef0: 0xdfb20040
    ctx->pc = 0x17cef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17cef4:
    // 0x17cef4: 0xdfb10030
    ctx->pc = 0x17cef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17cef8:
    // 0x17cef8: 0xdfb00020
    ctx->pc = 0x17cef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17cefc:
    // 0x17cefc: 0x3e00008
label_17cf00:
    if (ctx->pc == 0x17CF00u) {
        ctx->pc = 0x17CF00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17CF04u;
        goto label_fallthrough_0x17cefc;
    }
    ctx->pc = 0x17CEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CDD8u: goto label_17cdd8;
            case 0x17CDDCu: goto label_17cddc;
            case 0x17CDE0u: goto label_17cde0;
            case 0x17CDE4u: goto label_17cde4;
            case 0x17CDE8u: goto label_17cde8;
            case 0x17CDECu: goto label_17cdec;
            case 0x17CDF0u: goto label_17cdf0;
            case 0x17CDF4u: goto label_17cdf4;
            case 0x17CDF8u: goto label_17cdf8;
            case 0x17CDFCu: goto label_17cdfc;
            case 0x17CE00u: goto label_17ce00;
            case 0x17CE04u: goto label_17ce04;
            case 0x17CE08u: goto label_17ce08;
            case 0x17CE0Cu: goto label_17ce0c;
            case 0x17CE10u: goto label_17ce10;
            case 0x17CE14u: goto label_17ce14;
            case 0x17CE18u: goto label_17ce18;
            case 0x17CE1Cu: goto label_17ce1c;
            case 0x17CE20u: goto label_17ce20;
            case 0x17CE24u: goto label_17ce24;
            case 0x17CE28u: goto label_17ce28;
            case 0x17CE2Cu: goto label_17ce2c;
            case 0x17CE30u: goto label_17ce30;
            case 0x17CE34u: goto label_17ce34;
            case 0x17CE38u: goto label_17ce38;
            case 0x17CE3Cu: goto label_17ce3c;
            case 0x17CE40u: goto label_17ce40;
            case 0x17CE44u: goto label_17ce44;
            case 0x17CE48u: goto label_17ce48;
            case 0x17CE4Cu: goto label_17ce4c;
            case 0x17CE50u: goto label_17ce50;
            case 0x17CE54u: goto label_17ce54;
            case 0x17CE58u: goto label_17ce58;
            case 0x17CE5Cu: goto label_17ce5c;
            case 0x17CE60u: goto label_17ce60;
            case 0x17CE64u: goto label_17ce64;
            case 0x17CE68u: goto label_17ce68;
            case 0x17CE6Cu: goto label_17ce6c;
            case 0x17CE70u: goto label_17ce70;
            case 0x17CE74u: goto label_17ce74;
            case 0x17CE78u: goto label_17ce78;
            case 0x17CE7Cu: goto label_17ce7c;
            case 0x17CE80u: goto label_17ce80;
            case 0x17CE84u: goto label_17ce84;
            case 0x17CE88u: goto label_17ce88;
            case 0x17CE8Cu: goto label_17ce8c;
            case 0x17CE90u: goto label_17ce90;
            case 0x17CE94u: goto label_17ce94;
            case 0x17CE98u: goto label_17ce98;
            case 0x17CE9Cu: goto label_17ce9c;
            case 0x17CEA0u: goto label_17cea0;
            case 0x17CEA4u: goto label_17cea4;
            case 0x17CEA8u: goto label_17cea8;
            case 0x17CEACu: goto label_17ceac;
            case 0x17CEB0u: goto label_17ceb0;
            case 0x17CEB4u: goto label_17ceb4;
            case 0x17CEB8u: goto label_17ceb8;
            case 0x17CEBCu: goto label_17cebc;
            case 0x17CEC0u: goto label_17cec0;
            case 0x17CEC4u: goto label_17cec4;
            case 0x17CEC8u: goto label_17cec8;
            case 0x17CECCu: goto label_17cecc;
            case 0x17CED0u: goto label_17ced0;
            case 0x17CED4u: goto label_17ced4;
            case 0x17CED8u: goto label_17ced8;
            case 0x17CEDCu: goto label_17cedc;
            case 0x17CEE0u: goto label_17cee0;
            case 0x17CEE4u: goto label_17cee4;
            case 0x17CEE8u: goto label_17cee8;
            case 0x17CEECu: goto label_17ceec;
            case 0x17CEF0u: goto label_17cef0;
            case 0x17CEF4u: goto label_17cef4;
            case 0x17CEF8u: goto label_17cef8;
            case 0x17CEFCu: goto label_17cefc;
            case 0x17CF00u: goto label_17cf00;
            default: break;
        }
        return;
    }
label_fallthrough_0x17cefc:
    ctx->pc = 0x17CF04u;
}
