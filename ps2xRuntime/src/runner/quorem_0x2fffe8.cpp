#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: quorem
// Address: 0x2fffe8 - 0x3001fc
void quorem_0x2fffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fffe8u;

    // 0x2fffe8: 0x27bdff80
    ctx->pc = 0x2fffe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fffec: 0xa0702d
    ctx->pc = 0x2fffecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffff0: 0xffb40040
    ctx->pc = 0x2ffff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ffff4: 0xffbf0070
    ctx->pc = 0x2ffff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ffff8: 0x80a02d
    ctx->pc = 0x2ffff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffffc: 0xffb60060
    ctx->pc = 0x2ffffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x300000: 0xffb50050
    ctx->pc = 0x300000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x300004: 0xffb30030
    ctx->pc = 0x300004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x300008: 0xffb20020
    ctx->pc = 0x300008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30000c: 0xffb10010
    ctx->pc = 0x30000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x300010: 0xffb00000
    ctx->pc = 0x300010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x300014: 0x8dd00010
    ctx->pc = 0x300014u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x300018: 0x8e820010
    ctx->pc = 0x300018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x30001c: 0x50102a
    ctx->pc = 0x30001cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x300020: 0x1440006c
    ctx->pc = 0x300020u;
    {
        const bool branch_taken_0x300020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x300024u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300020) {
            ctx->pc = 0x3001D4u;
            goto label_3001d4;
        }
    }
    ctx->pc = 0x300028u;
    // 0x300028: 0x2610ffff
    ctx->pc = 0x300028u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30002c: 0x25cb0014
    ctx->pc = 0x30002cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 14), 20));
    // 0x300030: 0x103880
    ctx->pc = 0x300030u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
    // 0x300034: 0x26910014
    ctx->pc = 0x300034u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 20));
    // 0x300038: 0x1679821
    ctx->pc = 0x300038u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x30003c: 0x2274021
    ctx->pc = 0x30003cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x300040: 0x8e620000
    ctx->pc = 0x300040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300044: 0x8d0d0000
    ctx->pc = 0x300044u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x300048: 0x220502d
    ctx->pc = 0x300048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30004c: 0x24420001
    ctx->pc = 0x30004cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x300050: 0x1a2001b
    ctx->pc = 0x300050u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 13) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,13); } }
    // 0x300054: 0x50400001
    ctx->pc = 0x300054u;
    {
        const bool branch_taken_0x300054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x300054) {
            ctx->pc = 0x300058u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x30005Cu;
            goto label_30005c;
        }
    }
    ctx->pc = 0x30005Cu;
label_30005c:
    // 0x30005c: 0xa812
    ctx->pc = 0x30005cu;
    SET_GPR_U32(ctx, 21, ctx->lo);
    // 0x300060: 0x2a0902d
    ctx->pc = 0x300060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300064: 0x1240002a
    ctx->pc = 0x300064u;
    {
        const bool branch_taken_0x300064 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x300068u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300064) {
            ctx->pc = 0x300110u;
            goto label_300110;
        }
    }
    ctx->pc = 0x30006Cu;
    // 0x30006c: 0x602d
    ctx->pc = 0x30006cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300070: 0x182d
    ctx->pc = 0x300070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300074: 0x0
    ctx->pc = 0x300074u;
    // NOP
label_300078:
    // 0x300078: 0x8d640000
    ctx->pc = 0x300078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x30007c: 0x8d460000
    ctx->pc = 0x30007cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x300080: 0x256b0004
    ctx->pc = 0x300080u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x300084: 0x3082ffff
    ctx->pc = 0x300084u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x300088: 0x26b382b
    ctx->pc = 0x300088u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x30008c: 0x522818
    ctx->pc = 0x30008cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x300090: 0x42402
    ctx->pc = 0x300090u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x300094: 0x922018
    ctx->pc = 0x300094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x300098: 0xa31021
    ctx->pc = 0x300098u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30009c: 0x3045ffff
    ctx->pc = 0x30009cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    // 0x3000a0: 0x30c3ffff
    ctx->pc = 0x3000a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 65535));
    // 0x3000a4: 0x21402
    ctx->pc = 0x3000a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x3000a8: 0x651823
    ctx->pc = 0x3000a8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3000ac: 0x824821
    ctx->pc = 0x3000acu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3000b0: 0x6c1821
    ctx->pc = 0x3000b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3000b4: 0x63402
    ctx->pc = 0x3000b4u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 16));
    // 0x3000b8: 0x3122ffff
    ctx->pc = 0x3000b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x3000bc: 0x36403
    ctx->pc = 0x3000bcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3000c0: 0xc23023
    ctx->pc = 0x3000c0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3000c4: 0xcc2821
    ctx->pc = 0x3000c4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x3000c8: 0xa5430000
    ctx->pc = 0x3000c8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3000cc: 0xa5450002
    ctx->pc = 0x3000ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3000d0: 0x91c02
    ctx->pc = 0x3000d0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 16));
    // 0x3000d4: 0x56403
    ctx->pc = 0x3000d4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3000d8: 0x10e0ffe7
    ctx->pc = 0x3000D8u;
    {
        const bool branch_taken_0x3000d8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x3000DCu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x3000d8) {
            ctx->pc = 0x300078u;
            goto label_300078;
        }
    }
    ctx->pc = 0x3000E0u;
    // 0x3000e0: 0x15a0000c
    ctx->pc = 0x3000E0u;
    {
        const bool branch_taken_0x3000e0 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        ctx->pc = 0x3000E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3000e0) {
            ctx->pc = 0x300114u;
            goto label_300114;
        }
    }
    ctx->pc = 0x3000E8u;
    // 0x3000e8: 0x10000002
    ctx->pc = 0x3000E8u;
    {
        const bool branch_taken_0x3000e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3000ECu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x3000e8) {
            ctx->pc = 0x3000F4u;
            goto label_3000f4;
        }
    }
    ctx->pc = 0x3000F0u;
label_3000f0:
    // 0x3000f0: 0x2610ffff
    ctx->pc = 0x3000f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_3000f4:
    // 0x3000f4: 0x228102b
    ctx->pc = 0x3000f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x3000f8: 0x50400005
    ctx->pc = 0x3000F8u;
    {
        const bool branch_taken_0x3000f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3000f8) {
            ctx->pc = 0x3000FCu;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x300110u;
            goto label_300110;
        }
    }
    ctx->pc = 0x300100u;
    // 0x300100: 0x8d020000
    ctx->pc = 0x300100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x300104: 0x1040fffa
    ctx->pc = 0x300104u;
    {
        const bool branch_taken_0x300104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300108u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x300104) {
            ctx->pc = 0x3000F0u;
            goto label_3000f0;
        }
    }
    ctx->pc = 0x30010Cu;
    // 0x30010c: 0xae900010
    ctx->pc = 0x30010cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_300110:
    // 0x300110: 0x1c0282d
    ctx->pc = 0x300110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_300114:
    // 0x300114: 0xc0c0a60
    ctx->pc = 0x300114u;
    SET_GPR_U32(ctx, 31, 0x30011Cu);
    ctx->pc = 0x300118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302980u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x302980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30011Cu; }
    }
    if (ctx->pc != 0x30011Cu) { return; }
    ctx->pc = 0x30011Cu;
    // 0x30011c: 0x440002c
    ctx->pc = 0x30011Cu;
    {
        const bool branch_taken_0x30011c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x300120u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30011c) {
            ctx->pc = 0x3001D0u;
            goto label_3001d0;
        }
    }
    ctx->pc = 0x300124u;
    // 0x300124: 0x26b20001
    ctx->pc = 0x300124u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 1));
    // 0x300128: 0x602d
    ctx->pc = 0x300128u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30012c: 0x182d
    ctx->pc = 0x30012cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300130: 0x220502d
    ctx->pc = 0x300130u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300134: 0x103880
    ctx->pc = 0x300134u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
label_300138:
    // 0x300138: 0x8d640000
    ctx->pc = 0x300138u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x30013c: 0x8d450000
    ctx->pc = 0x30013cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x300140: 0x256b0004
    ctx->pc = 0x300140u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x300144: 0x3082ffff
    ctx->pc = 0x300144u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x300148: 0x43402
    ctx->pc = 0x300148u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 4), 16));
    // 0x30014c: 0x431021
    ctx->pc = 0x30014cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x300150: 0x3044ffff
    ctx->pc = 0x300150u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    // 0x300154: 0x30a3ffff
    ctx->pc = 0x300154u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x300158: 0x21402
    ctx->pc = 0x300158u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x30015c: 0x641823
    ctx->pc = 0x30015cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300160: 0xc24821
    ctx->pc = 0x300160u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x300164: 0x6c1821
    ctx->pc = 0x300164u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x300168: 0x3122ffff
    ctx->pc = 0x300168u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x30016c: 0x52c02
    ctx->pc = 0x30016cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
    // 0x300170: 0x36403
    ctx->pc = 0x300170u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x300174: 0xa22823
    ctx->pc = 0x300174u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x300178: 0xac2821
    ctx->pc = 0x300178u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x30017c: 0xa5430000
    ctx->pc = 0x30017cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x300180: 0xa5450002
    ctx->pc = 0x300180u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x300184: 0x91c02
    ctx->pc = 0x300184u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 16));
    // 0x300188: 0x56403
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x30018c: 0x26b102b
    ctx->pc = 0x30018cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x300190: 0x1040ffe9
    ctx->pc = 0x300190u;
    {
        const bool branch_taken_0x300190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300194u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x300190) {
            ctx->pc = 0x300138u;
            goto label_300138;
        }
    }
    ctx->pc = 0x300198u;
    // 0x300198: 0x2274021
    ctx->pc = 0x300198u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x30019c: 0x8d020000
    ctx->pc = 0x30019cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3001a0: 0x1440000c
    ctx->pc = 0x3001A0u;
    {
        const bool branch_taken_0x3001a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3001A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3001a0) {
            ctx->pc = 0x3001D4u;
            goto label_3001d4;
        }
    }
    ctx->pc = 0x3001A8u;
    // 0x3001a8: 0x10000002
    ctx->pc = 0x3001A8u;
    {
        const bool branch_taken_0x3001a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3001ACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x3001a8) {
            ctx->pc = 0x3001B4u;
            goto label_3001b4;
        }
    }
    ctx->pc = 0x3001B0u;
label_3001b0:
    // 0x3001b0: 0x2610ffff
    ctx->pc = 0x3001b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_3001b4:
    // 0x3001b4: 0x228102b
    ctx->pc = 0x3001b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x3001b8: 0x50400005
    ctx->pc = 0x3001B8u;
    {
        const bool branch_taken_0x3001b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3001b8) {
            ctx->pc = 0x3001BCu;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x3001D0u;
            goto label_3001d0;
        }
    }
    ctx->pc = 0x3001C0u;
    // 0x3001c0: 0x8d020000
    ctx->pc = 0x3001c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3001c4: 0x5040fffa
    ctx->pc = 0x3001C4u;
    {
        const bool branch_taken_0x3001c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3001c4) {
            ctx->pc = 0x3001C8u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->pc = 0x3001B0u;
            goto label_3001b0;
        }
    }
    ctx->pc = 0x3001CCu;
    // 0x3001cc: 0xae900010
    ctx->pc = 0x3001ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_3001d0:
    // 0x3001d0: 0x240102d
    ctx->pc = 0x3001d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3001d4:
    // 0x3001d4: 0xdfbf0070
    ctx->pc = 0x3001d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3001d8: 0xdfb60060
    ctx->pc = 0x3001d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3001dc: 0xdfb50050
    ctx->pc = 0x3001dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3001e0: 0xdfb40040
    ctx->pc = 0x3001e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3001e4: 0xdfb30030
    ctx->pc = 0x3001e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3001e8: 0xdfb20020
    ctx->pc = 0x3001e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3001ec: 0xdfb10010
    ctx->pc = 0x3001ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3001f0: 0xdfb00000
    ctx->pc = 0x3001f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3001f4: 0x3e00008
    ctx->pc = 0x3001F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3001F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30005Cu: goto label_30005c;
            case 0x300078u: goto label_300078;
            case 0x3000F0u: goto label_3000f0;
            case 0x3000F4u: goto label_3000f4;
            case 0x300110u: goto label_300110;
            case 0x300114u: goto label_300114;
            case 0x300138u: goto label_300138;
            case 0x3001B0u: goto label_3001b0;
            case 0x3001B4u: goto label_3001b4;
            case 0x3001D0u: goto label_3001d0;
            case 0x3001D4u: goto label_3001d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3001FCu;
}
