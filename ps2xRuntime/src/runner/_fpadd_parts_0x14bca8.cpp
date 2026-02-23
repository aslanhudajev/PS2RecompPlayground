#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _fpadd_parts
// Address: 0x14bca8 - 0x14bedc
void _fpadd_parts_0x14bca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_fpadd_parts");


    ctx->pc = 0x14bca8u;

    // 0x14bca8: 0x80482d
    ctx->pc = 0x14bca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcac: 0x8d240000
    ctx->pc = 0x14bcacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14bcb0: 0x2c820002
    ctx->pc = 0x14bcb0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x14bcb4: 0x50400003
    ctx->pc = 0x14BCB4u;
    {
        const bool branch_taken_0x14bcb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14bcb4) {
            ctx->pc = 0x14BCB8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x14BCC4u;
            goto label_14bcc4;
        }
    }
    ctx->pc = 0x14BCBCu;
label_14bcbc:
    // 0x14bcbc: 0x3e00008
    ctx->pc = 0x14BCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BCC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BCBCu: goto label_14bcbc;
            case 0x14BCC4u: goto label_14bcc4;
            case 0x14BCD0u: goto label_14bcd0;
            case 0x14BCD8u: goto label_14bcd8;
            case 0x14BD00u: goto label_14bd00;
            case 0x14BD50u: goto label_14bd50;
            case 0x14BD90u: goto label_14bd90;
            case 0x14BDB4u: goto label_14bdb4;
            case 0x14BDBCu: goto label_14bdbc;
            case 0x14BDC8u: goto label_14bdc8;
            case 0x14BDECu: goto label_14bdec;
            case 0x14BE04u: goto label_14be04;
            case 0x14BE10u: goto label_14be10;
            case 0x14BE24u: goto label_14be24;
            case 0x14BE3Cu: goto label_14be3c;
            case 0x14BE4Cu: goto label_14be4c;
            case 0x14BE70u: goto label_14be70;
            case 0x14BE9Cu: goto label_14be9c;
            case 0x14BEACu: goto label_14beac;
            case 0x14BED4u: goto label_14bed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BCC4u;
label_14bcc4:
    // 0x14bcc4: 0x2c620002
    ctx->pc = 0x14bcc4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x14bcc8: 0x10400003
    ctx->pc = 0x14BCC8u;
    {
        const bool branch_taken_0x14bcc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BCCCu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x14bcc8) {
            ctx->pc = 0x14BCD8u;
            goto label_14bcd8;
        }
    }
    ctx->pc = 0x14BCD0u;
label_14bcd0:
    // 0x14bcd0: 0x3e00008
    ctx->pc = 0x14BCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BCD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BCBCu: goto label_14bcbc;
            case 0x14BCC4u: goto label_14bcc4;
            case 0x14BCD0u: goto label_14bcd0;
            case 0x14BCD8u: goto label_14bcd8;
            case 0x14BD00u: goto label_14bd00;
            case 0x14BD50u: goto label_14bd50;
            case 0x14BD90u: goto label_14bd90;
            case 0x14BDB4u: goto label_14bdb4;
            case 0x14BDBCu: goto label_14bdbc;
            case 0x14BDC8u: goto label_14bdc8;
            case 0x14BDECu: goto label_14bdec;
            case 0x14BE04u: goto label_14be04;
            case 0x14BE10u: goto label_14be10;
            case 0x14BE24u: goto label_14be24;
            case 0x14BE3Cu: goto label_14be3c;
            case 0x14BE4Cu: goto label_14be4c;
            case 0x14BE70u: goto label_14be70;
            case 0x14BE9Cu: goto label_14be9c;
            case 0x14BEACu: goto label_14beac;
            case 0x14BED4u: goto label_14bed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BCD8u;
label_14bcd8:
    // 0x14bcd8: 0x14400009
    ctx->pc = 0x14BCD8u;
    {
        const bool branch_taken_0x14bcd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14BCDCu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x14bcd8) {
            ctx->pc = 0x14BD00u;
            goto label_14bd00;
        }
    }
    ctx->pc = 0x14BCE0u;
    // 0x14bce0: 0x1440fff6
    ctx->pc = 0x14BCE0u;
    {
        const bool branch_taken_0x14bce0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14bce0) {
            ctx->pc = 0x14BCBCu;
            goto label_14bcbc;
        }
    }
    ctx->pc = 0x14BCE8u;
    // 0x14bce8: 0x8ca30004
    ctx->pc = 0x14bce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14bcec: 0x8d220004
    ctx->pc = 0x14bcecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x14bcf0: 0x1043fff2
    ctx->pc = 0x14BCF0u;
    {
        const bool branch_taken_0x14bcf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x14BCF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
        if (branch_taken_0x14bcf0) {
            ctx->pc = 0x14BCBCu;
            goto label_14bcbc;
        }
    }
    ctx->pc = 0x14BCF8u;
    // 0x14bcf8: 0x3e00008
    ctx->pc = 0x14BCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BCFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26880));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BCBCu: goto label_14bcbc;
            case 0x14BCC4u: goto label_14bcc4;
            case 0x14BCD0u: goto label_14bcd0;
            case 0x14BCD8u: goto label_14bcd8;
            case 0x14BD00u: goto label_14bd00;
            case 0x14BD50u: goto label_14bd50;
            case 0x14BD90u: goto label_14bd90;
            case 0x14BDB4u: goto label_14bdb4;
            case 0x14BDBCu: goto label_14bdbc;
            case 0x14BDC8u: goto label_14bdc8;
            case 0x14BDECu: goto label_14bdec;
            case 0x14BE04u: goto label_14be04;
            case 0x14BE10u: goto label_14be10;
            case 0x14BE24u: goto label_14be24;
            case 0x14BE3Cu: goto label_14be3c;
            case 0x14BE4Cu: goto label_14be4c;
            case 0x14BE70u: goto label_14be70;
            case 0x14BE9Cu: goto label_14be9c;
            case 0x14BEACu: goto label_14beac;
            case 0x14BED4u: goto label_14bed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BD00u;
label_14bd00:
    // 0x14bd00: 0x1040fff3
    ctx->pc = 0x14BD00u;
    {
        const bool branch_taken_0x14bd00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BD04u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14bd00) {
            ctx->pc = 0x14BCD0u;
            goto label_14bcd0;
        }
    }
    ctx->pc = 0x14BD08u;
    // 0x14bd08: 0x14400011
    ctx->pc = 0x14BD08u;
    {
        const bool branch_taken_0x14bd08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14BD0Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x14bd08) {
            ctx->pc = 0x14BD50u;
            goto label_14bd50;
        }
    }
    ctx->pc = 0x14BD10u;
    // 0x14bd10: 0x1440ffea
    ctx->pc = 0x14BD10u;
    {
        const bool branch_taken_0x14bd10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14bd10) {
            ctx->pc = 0x14BCBCu;
            goto label_14bcbc;
        }
    }
    ctx->pc = 0x14BD18u;
    // 0x14bd18: 0x69220007
    ctx->pc = 0x14bd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14bd1c: 0x6d220000
    ctx->pc = 0x14bd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14bd20: 0x6923000f
    ctx->pc = 0x14bd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14bd24: 0x6d230008
    ctx->pc = 0x14bd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14bd28: 0xb0c20007
    ctx->pc = 0x14bd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bd2c: 0xb4c20000
    ctx->pc = 0x14bd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bd30: 0xb0c3000f
    ctx->pc = 0x14bd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bd34: 0xb4c30008
    ctx->pc = 0x14bd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bd38: 0x8d230004
    ctx->pc = 0x14bd38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x14bd3c: 0xc0102d
    ctx->pc = 0x14bd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd40: 0x8ca40004
    ctx->pc = 0x14bd40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14bd44: 0x641824
    ctx->pc = 0x14bd44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bd48: 0x3e00008
    ctx->pc = 0x14BD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BD4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BCBCu: goto label_14bcbc;
            case 0x14BCC4u: goto label_14bcc4;
            case 0x14BCD0u: goto label_14bcd0;
            case 0x14BCD8u: goto label_14bcd8;
            case 0x14BD00u: goto label_14bd00;
            case 0x14BD50u: goto label_14bd50;
            case 0x14BD90u: goto label_14bd90;
            case 0x14BDB4u: goto label_14bdb4;
            case 0x14BDBCu: goto label_14bdbc;
            case 0x14BDC8u: goto label_14bdc8;
            case 0x14BDECu: goto label_14bdec;
            case 0x14BE04u: goto label_14be04;
            case 0x14BE10u: goto label_14be10;
            case 0x14BE24u: goto label_14be24;
            case 0x14BE3Cu: goto label_14be3c;
            case 0x14BE4Cu: goto label_14be4c;
            case 0x14BE70u: goto label_14be70;
            case 0x14BE9Cu: goto label_14be9c;
            case 0x14BEACu: goto label_14beac;
            case 0x14BED4u: goto label_14bed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BD50u;
label_14bd50:
    // 0x14bd50: 0x1040ffdf
    ctx->pc = 0x14BD50u;
    {
        const bool branch_taken_0x14bd50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BD54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x14bd50) {
            ctx->pc = 0x14BCD0u;
            goto label_14bcd0;
        }
    }
    ctx->pc = 0x14BD58u;
    // 0x14bd58: 0x8d270008
    ctx->pc = 0x14bd58u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x14bd5c: 0x8ca80008
    ctx->pc = 0x14bd5cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14bd60: 0x8d2b000c
    ctx->pc = 0x14bd60u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x14bd64: 0xe81823
    ctx->pc = 0x14bd64u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14bd68: 0x43102a
    ctx->pc = 0x14bd68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x14bd6c: 0x32023
    ctx->pc = 0x14bd6cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x14bd70: 0x82180a
    ctx->pc = 0x14bd70u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x14bd74: 0x28630020
    ctx->pc = 0x14bd74u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 32));
    // 0x14bd78: 0x1060001c
    ctx->pc = 0x14BD78u;
    {
        const bool branch_taken_0x14bd78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BD7Cu;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 12)));
        if (branch_taken_0x14bd78) {
            ctx->pc = 0x14BDECu;
            goto label_14bdec;
        }
    }
    ctx->pc = 0x14BD80u;
    // 0x14bd80: 0x107102a
    ctx->pc = 0x14bd80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x14bd84: 0x1040000b
    ctx->pc = 0x14BD84u;
    {
        const bool branch_taken_0x14bd84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BD88u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4)));
        if (branch_taken_0x14bd84) {
            ctx->pc = 0x14BDB4u;
            goto label_14bdb4;
        }
    }
    ctx->pc = 0x14BD8Cu;
    // 0x14bd8c: 0x8ca50004
    ctx->pc = 0x14bd8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14bd90:
    // 0x14bd90: 0xa1042
    ctx->pc = 0x14bd90u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 10), 1));
    // 0x14bd94: 0x25080001
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x14bd98: 0x31430001
    ctx->pc = 0x14bd98u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), 1));
    // 0x14bd9c: 0x107202a
    ctx->pc = 0x14bd9cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x14bda0: 0x625025
    ctx->pc = 0x14bda0u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bda4: 0x1480fffa
    ctx->pc = 0x14BDA4u;
    {
        const bool branch_taken_0x14bda4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x14bda4) {
            ctx->pc = 0x14BD90u;
            goto label_14bd90;
        }
    }
    ctx->pc = 0x14BDACu;
    // 0x14bdac: 0x10000003
    ctx->pc = 0x14BDACu;
    {
        const bool branch_taken_0x14bdac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BDB0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
        if (branch_taken_0x14bdac) {
            ctx->pc = 0x14BDBCu;
            goto label_14bdbc;
        }
    }
    ctx->pc = 0x14BDB4u;
label_14bdb4:
    // 0x14bdb4: 0x8ca50004
    ctx->pc = 0x14bdb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14bdb8: 0xe8102a
    ctx->pc = 0x14bdb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_14bdbc:
    // 0x14bdbc: 0x10400014
    ctx->pc = 0x14BDBCu;
    {
        const bool branch_taken_0x14bdbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14bdbc) {
            ctx->pc = 0x14BE10u;
            goto label_14be10;
        }
    }
    ctx->pc = 0x14BDC4u;
    // 0x14bdc4: 0x1073823
    ctx->pc = 0x14bdc4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_14bdc8:
    // 0x14bdc8: 0xb1842
    ctx->pc = 0x14bdc8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 11), 1));
    // 0x14bdcc: 0x31620001
    ctx->pc = 0x14bdccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 1));
    // 0x14bdd0: 0x435825
    ctx->pc = 0x14bdd0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bdd4: 0x24e7ffff
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x14bdd8: 0x0
    ctx->pc = 0x14bdd8u;
    // NOP
    // 0x14bddc: 0x14e0fffa
    ctx->pc = 0x14BDDCu;
    {
        const bool branch_taken_0x14bddc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x14bddc) {
            ctx->pc = 0x14BDC8u;
            goto label_14bdc8;
        }
    }
    ctx->pc = 0x14BDE4u;
    // 0x14bde4: 0x1000000a
    ctx->pc = 0x14BDE4u;
    {
        const bool branch_taken_0x14bde4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BDE8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14bde4) {
            ctx->pc = 0x14BE10u;
            goto label_14be10;
        }
    }
    ctx->pc = 0x14BDECu;
label_14bdec:
    // 0x14bdec: 0x107102a
    ctx->pc = 0x14bdecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x14bdf0: 0x10400004
    ctx->pc = 0x14BDF0u;
    {
        const bool branch_taken_0x14bdf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BDF4u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4)));
        if (branch_taken_0x14bdf0) {
            ctx->pc = 0x14BE04u;
            goto label_14be04;
        }
    }
    ctx->pc = 0x14BDF8u;
    // 0x14bdf8: 0x502d
    ctx->pc = 0x14bdf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdfc: 0x10000004
    ctx->pc = 0x14BDFCu;
    {
        const bool branch_taken_0x14bdfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BE00u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x14bdfc) {
            ctx->pc = 0x14BE10u;
            goto label_14be10;
        }
    }
    ctx->pc = 0x14BE04u;
label_14be04:
    // 0x14be04: 0x100382d
    ctx->pc = 0x14be04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be08: 0x8ca50004
    ctx->pc = 0x14be08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14be0c: 0x582d
    ctx->pc = 0x14be0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14be10:
    // 0x14be10: 0x11250022
    ctx->pc = 0x14BE10u;
    {
        const bool branch_taken_0x14be10 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        ctx->pc = 0x14BE14u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        if (branch_taken_0x14be10) {
            ctx->pc = 0x14BE9Cu;
            goto label_14be9c;
        }
    }
    ctx->pc = 0x14BE18u;
    // 0x14be18: 0x15200002
    ctx->pc = 0x14BE18u;
    {
        const bool branch_taken_0x14be18 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x14BE1Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        if (branch_taken_0x14be18) {
            ctx->pc = 0x14BE24u;
            goto label_14be24;
        }
    }
    ctx->pc = 0x14BE20u;
    // 0x14be20: 0x16a1023
    ctx->pc = 0x14be20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_14be24:
    // 0x14be24: 0x4400005
    ctx->pc = 0x14BE24u;
    {
        const bool branch_taken_0x14be24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14BE28u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x14be24) {
            ctx->pc = 0x14BE3Cu;
            goto label_14be3c;
        }
    }
    ctx->pc = 0x14BE2Cu;
    // 0x14be2c: 0xacc70008
    ctx->pc = 0x14be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x14be30: 0xacc2000c
    ctx->pc = 0x14be30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x14be34: 0x10000005
    ctx->pc = 0x14BE34u;
    {
        const bool branch_taken_0x14be34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BE38u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x14be34) {
            ctx->pc = 0x14BE4Cu;
            goto label_14be4c;
        }
    }
    ctx->pc = 0x14BE3Cu;
label_14be3c:
    // 0x14be3c: 0xacc70008
    ctx->pc = 0x14be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x14be40: 0x24020001
    ctx->pc = 0x14be40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14be44: 0xacc3000c
    ctx->pc = 0x14be44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x14be48: 0xacc20004
    ctx->pc = 0x14be48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_14be4c:
    // 0x14be4c: 0x8cc5000c
    ctx->pc = 0x14be4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14be50: 0x3c023fff
    ctx->pc = 0x14be50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x14be54: 0x3442fffe
    ctx->pc = 0x14be54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x14be58: 0x24a3ffff
    ctx->pc = 0x14be58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14be5c: 0x43102b
    ctx->pc = 0x14be5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14be60: 0x14400012
    ctx->pc = 0x14BE60u;
    {
        const bool branch_taken_0x14be60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14BE64u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14be60) {
            ctx->pc = 0x14BEACu;
            goto label_14beac;
        }
    }
    ctx->pc = 0x14BE68u;
    // 0x14be68: 0x3c053fff
    ctx->pc = 0x14be68u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16383 << 16));
    // 0x14be6c: 0x34a5fffe
    ctx->pc = 0x14be6cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65534));
label_14be70:
    // 0x14be70: 0x8cc20008
    ctx->pc = 0x14be70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x14be74: 0x72040
    ctx->pc = 0x14be74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 1));
    // 0x14be78: 0x2483ffff
    ctx->pc = 0x14be78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14be7c: 0xacc4000c
    ctx->pc = 0x14be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x14be80: 0x2442ffff
    ctx->pc = 0x14be80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14be84: 0xa3182b
    ctx->pc = 0x14be84u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14be88: 0xacc20008
    ctx->pc = 0x14be88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x14be8c: 0x1060fff8
    ctx->pc = 0x14BE8Cu;
    {
        const bool branch_taken_0x14be8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BE90u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14be8c) {
            ctx->pc = 0x14BE70u;
            goto label_14be70;
        }
    }
    ctx->pc = 0x14BE94u;
    // 0x14be94: 0x10000005
    ctx->pc = 0x14BE94u;
    {
        const bool branch_taken_0x14be94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BE98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14be94) {
            ctx->pc = 0x14BEACu;
            goto label_14beac;
        }
    }
    ctx->pc = 0x14BE9Cu;
label_14be9c:
    // 0x14be9c: 0xacc90004
    ctx->pc = 0x14be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x14bea0: 0xacc70008
    ctx->pc = 0x14bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x14bea4: 0x40282d
    ctx->pc = 0x14bea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bea8: 0xacc2000c
    ctx->pc = 0x14bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_14beac:
    // 0x14beac: 0x24020003
    ctx->pc = 0x14beacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14beb0: 0x4a10008
    ctx->pc = 0x14BEB0u;
    {
        const bool branch_taken_0x14beb0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x14BEB4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14beb0) {
            ctx->pc = 0x14BED4u;
            goto label_14bed4;
        }
    }
    ctx->pc = 0x14BEB8u;
    // 0x14beb8: 0x8cc20008
    ctx->pc = 0x14beb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x14bebc: 0x52042
    ctx->pc = 0x14bebcu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 1));
    // 0x14bec0: 0x30a30001
    ctx->pc = 0x14bec0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x14bec4: 0x641825
    ctx->pc = 0x14bec4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bec8: 0x24420001
    ctx->pc = 0x14bec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x14becc: 0xacc3000c
    ctx->pc = 0x14beccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x14bed0: 0xacc20008
    ctx->pc = 0x14bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_14bed4:
    // 0x14bed4: 0x3e00008
    ctx->pc = 0x14BED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BED8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BCBCu: goto label_14bcbc;
            case 0x14BCC4u: goto label_14bcc4;
            case 0x14BCD0u: goto label_14bcd0;
            case 0x14BCD8u: goto label_14bcd8;
            case 0x14BD00u: goto label_14bd00;
            case 0x14BD50u: goto label_14bd50;
            case 0x14BD90u: goto label_14bd90;
            case 0x14BDB4u: goto label_14bdb4;
            case 0x14BDBCu: goto label_14bdbc;
            case 0x14BDC8u: goto label_14bdc8;
            case 0x14BDECu: goto label_14bdec;
            case 0x14BE04u: goto label_14be04;
            case 0x14BE10u: goto label_14be10;
            case 0x14BE24u: goto label_14be24;
            case 0x14BE3Cu: goto label_14be3c;
            case 0x14BE4Cu: goto label_14be4c;
            case 0x14BE70u: goto label_14be70;
            case 0x14BE9Cu: goto label_14be9c;
            case 0x14BEACu: goto label_14beac;
            case 0x14BED4u: goto label_14bed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BEDCu;
}
