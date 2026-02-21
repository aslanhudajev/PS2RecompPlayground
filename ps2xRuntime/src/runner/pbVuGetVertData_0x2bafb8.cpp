#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuGetVertData
// Address: 0x2bafb8 - 0x2bba10
void pbVuGetVertData_0x2bafb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bafb8u;

    // 0x2bafb8: 0x27bdfd20
    ctx->pc = 0x2bafb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x2bafbc: 0xffbe02d0
    ctx->pc = 0x2bafbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
    // 0x2bafc0: 0xffb702c0
    ctx->pc = 0x2bafc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 23));
    // 0x2bafc4: 0xffb602b0
    ctx->pc = 0x2bafc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 22));
    // 0x2bafc8: 0xffb502a0
    ctx->pc = 0x2bafc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 21));
    // 0x2bafcc: 0xffb40290
    ctx->pc = 0x2bafccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 20));
    // 0x2bafd0: 0xffb30280
    ctx->pc = 0x2bafd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 19));
    // 0x2bafd4: 0xffb20270
    ctx->pc = 0x2bafd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
    // 0x2bafd8: 0xffb10260
    ctx->pc = 0x2bafd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 17));
    // 0x2bafdc: 0xffb00250
    ctx->pc = 0x2bafdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 16));
    // 0x2bafe0: 0x80502d
    ctx->pc = 0x2bafe0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafe4: 0xafa6021c
    ctx->pc = 0x2bafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 6));
    // 0x2bafe8: 0xafa70228
    ctx->pc = 0x2bafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 7));
    // 0x2bafec: 0xafa80230
    ctx->pc = 0x2bafecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 8));
    // 0x2baff0: 0x27a20200
    ctx->pc = 0x2baff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 512));
    // 0x2baff4: 0xafa20240
    ctx->pc = 0x2baff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x2baff8: 0x27a30204
    ctx->pc = 0x2baff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 516));
    // 0x2baffc: 0xafa30244
    ctx->pc = 0x2baffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x2bb000: 0x27b40208
    ctx->pc = 0x2bb000u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 520));
    // 0x2bb004: 0x27af020c
    ctx->pc = 0x2bb004u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 29), 524));
    // 0x2bb008: 0xc0102d
    ctx->pc = 0x2bb008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb00c: 0x4400007
    ctx->pc = 0x2BB00Cu;
    {
        const bool branch_taken_0x2bb00c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB010u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bb00c) {
            ctx->pc = 0x2BB02Cu;
            goto label_2bb02c;
        }
    }
    ctx->pc = 0x2BB014u;
    // 0x2bb014: 0x27a40210
    ctx->pc = 0x2bb014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 528));
    // 0x2bb018: 0xafa40244
    ctx->pc = 0x2bb018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 4));
    // 0x2bb01c: 0x27b40214
    ctx->pc = 0x2bb01cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 532));
    // 0x2bb020: 0x27af0218
    ctx->pc = 0x2bb020u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 29), 536));
    // 0x2bb024: 0x10000003
    ctx->pc = 0x2BB024u;
    {
        const bool branch_taken_0x2bb024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB028u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bb024) {
            ctx->pc = 0x2BB034u;
            goto label_2bb034;
        }
    }
    ctx->pc = 0x2BB02Cu;
label_2bb02c:
    // 0x2bb02c: 0x27b6021c
    ctx->pc = 0x2bb02cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 540));
    // 0x2bb030: 0xafb60240
    ctx->pc = 0x2bb030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 22));
label_2bb034:
    // 0x2bb034: 0x8fa20228
    ctx->pc = 0x2bb034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2bb038: 0x4400005
    ctx->pc = 0x2BB038u;
    {
        const bool branch_taken_0x2bb038 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB03Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 552));
        if (branch_taken_0x2bb038) {
            ctx->pc = 0x2BB050u;
            goto label_2bb050;
        }
    }
    ctx->pc = 0x2BB040u;
    // 0x2bb040: 0x27b40220
    ctx->pc = 0x2bb040u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 544));
    // 0x2bb044: 0x27af0224
    ctx->pc = 0x2bb044u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 29), 548));
    // 0x2bb048: 0x10000002
    ctx->pc = 0x2BB048u;
    {
        const bool branch_taken_0x2bb048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB04Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bb048) {
            ctx->pc = 0x2BB054u;
            goto label_2bb054;
        }
    }
    ctx->pc = 0x2BB050u;
label_2bb050:
    // 0x2bb050: 0xafb70244
    ctx->pc = 0x2bb050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 23));
label_2bb054:
    // 0x2bb054: 0x8fa20230
    ctx->pc = 0x2bb054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2bb058: 0x4420003
    ctx->pc = 0x2BB058u;
    {
        const bool branch_taken_0x2bb058 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2bb058) {
            ctx->pc = 0x2BB05Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 560));
            ctx->pc = 0x2BB068u;
            goto label_2bb068;
        }
    }
    ctx->pc = 0x2BB060u;
    // 0x2bb060: 0x27af022c
    ctx->pc = 0x2bb060u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 29), 556));
    // 0x2bb064: 0xa82d
    ctx->pc = 0x2bb064u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb068:
    // 0x2bb068: 0x5220002
    ctx->pc = 0x2BB068u;
    {
        const bool branch_taken_0x2bb068 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x2bb068) {
            ctx->pc = 0x2BB06Cu;
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2BB074u;
            goto label_2bb074;
        }
    }
    ctx->pc = 0x2BB070u;
    // 0x2bb070: 0xa82d
    ctx->pc = 0x2bb070u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb074:
    // 0x2bb074: 0x8ca20014
    ctx->pc = 0x2bb074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2bb078: 0x10400003
    ctx->pc = 0x2BB078u;
    {
        const bool branch_taken_0x2bb078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB07Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2bb078) {
            ctx->pc = 0x2BB088u;
            goto label_2bb088;
        }
    }
    ctx->pc = 0x2BB080u;
    // 0x2bb080: 0x10000257
    ctx->pc = 0x2BB080u;
    {
        const bool branch_taken_0x2bb080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB084u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb080) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB088u;
label_2bb088:
    // 0x2bb088: 0x8ca20000
    ctx->pc = 0x2bb088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb08c: 0x3c03ffff
    ctx->pc = 0x2bb08cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bb090: 0x3463c000
    ctx->pc = 0x2bb090u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49152));
    // 0x2bb094: 0x431024
    ctx->pc = 0x2bb094u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb098: 0x3c036000
    ctx->pc = 0x2bb098u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24576 << 16));
    // 0x2bb09c: 0x10430003
    ctx->pc = 0x2BB09Cu;
    {
        const bool branch_taken_0x2bb09c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BB0A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2bb09c) {
            ctx->pc = 0x2BB0ACu;
            goto label_2bb0ac;
        }
    }
    ctx->pc = 0x2BB0A4u;
    // 0x2bb0a4: 0x1000024e
    ctx->pc = 0x2BB0A4u;
    {
        const bool branch_taken_0x2bb0a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB0A8u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb0a4) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB0ACu;
label_2bb0ac:
    // 0x2bb0ac: 0x8ca20000
    ctx->pc = 0x2bb0acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb0b0: 0x30423fff
    ctx->pc = 0x2bb0b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16383));
    // 0x2bb0b4: 0x24030050
    ctx->pc = 0x2bb0b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2bb0b8: 0x432018
    ctx->pc = 0x2bb0b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2bb0bc: 0x857021
    ctx->pc = 0x2bb0bcu;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2bb0c0: 0x24a50028
    ctx->pc = 0x2bb0c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 40));
    // 0x2bb0c4: 0xafa00200
    ctx->pc = 0x2bb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
    // 0x2bb0c8: 0xafa00204
    ctx->pc = 0x2bb0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x2bb0cc: 0xafa00208
    ctx->pc = 0x2bb0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
    // 0x2bb0d0: 0xafa0020c
    ctx->pc = 0x2bb0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x2bb0d4: 0xafa0022c
    ctx->pc = 0x2bb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
    // 0x2bb0d8: 0x240bffff
    ctx->pc = 0x2bb0d8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bb0dc: 0x2412ffff
    ctx->pc = 0x2bb0dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bb0e0: 0x3c10ff00
    ctx->pc = 0x2bb0e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)65280 << 16));
    // 0x2bb0e4: 0x3610ffff
    ctx->pc = 0x2bb0e4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
    // 0x2bb0e8: 0x8ca30000
    ctx->pc = 0x2bb0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb0ec: 0x0
    ctx->pc = 0x2bb0ecu;
    // NOP
label_2bb0f0:
    // 0x2bb0f0: 0x3c026c01
    ctx->pc = 0x2bb0f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27649 << 16));
    // 0x2bb0f4: 0x34428000
    ctx->pc = 0x2bb0f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2bb0f8: 0x1462021c
    ctx->pc = 0x2BB0F8u;
    {
        const bool branch_taken_0x2bb0f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB0FCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)26880 << 16));
        if (branch_taken_0x2bb0f8) {
            ctx->pc = 0x2BB96Cu;
            goto label_2bb96c;
        }
    }
    ctx->pc = 0x2BB100u;
    // 0x2bb100: 0x8ca20014
    ctx->pc = 0x2bb100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2bb104: 0xad420058
    ctx->pc = 0x2bb104u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 2));
    // 0x2bb108: 0xc4a00038
    ctx->pc = 0x2bb108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb10c: 0xe540005c
    ctx->pc = 0x2bb10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 92), bits); }
    // 0x2bb110: 0xc4a0004c
    ctx->pc = 0x2bb110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb114: 0xe5400060
    ctx->pc = 0x2bb114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 96), bits); }
    // 0x2bb118: 0xc4a00060
    ctx->pc = 0x2bb118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb11c: 0xe5400064
    ctx->pc = 0x2bb11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 100), bits); }
    // 0x2bb120: 0x8cac0014
    ctx->pc = 0x2bb120u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2bb124: 0xafa00210
    ctx->pc = 0x2bb124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x2bb128: 0xafa00214
    ctx->pc = 0x2bb128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x2bb12c: 0xafa00218
    ctx->pc = 0x2bb12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x2bb130: 0xafa00220
    ctx->pc = 0x2bb130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x2bb134: 0xafa00224
    ctx->pc = 0x2bb134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x2bb138: 0x24a50064
    ctx->pc = 0x2bb138u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 100));
    // 0x2bb13c: 0x8ca20000
    ctx->pc = 0x2bb13cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb140: 0x501024
    ctx->pc = 0x2bb140u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bb144: 0x34638001
    ctx->pc = 0x2bb144u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32769));
    // 0x2bb148: 0x1443020b
    ctx->pc = 0x2BB148u;
    {
        const bool branch_taken_0x2bb148 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2BB14Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bb148) {
            ctx->pc = 0x2BB978u;
            goto label_2bb978;
        }
    }
    ctx->pc = 0x2BB150u;
    // 0x2bb150: 0x90a40002
    ctx->pc = 0x2bb150u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2bb154: 0x108c0003
    ctx->pc = 0x2BB154u;
    {
        const bool branch_taken_0x2bb154 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 12));
        ctx->pc = 0x2BB158u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 1));
        if (branch_taken_0x2bb154) {
            ctx->pc = 0x2BB164u;
            goto label_2bb164;
        }
    }
    ctx->pc = 0x2BB15Cu;
    // 0x2bb15c: 0x14820208
    ctx->pc = 0x2BB15Cu;
    {
        const bool branch_taken_0x2bb15c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB160u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bb15c) {
            ctx->pc = 0x2BB980u;
            goto label_2bb980;
        }
    }
    ctx->pc = 0x2BB164u;
label_2bb164:
    // 0x2bb164: 0x24a50014
    ctx->pc = 0x2bb164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x2bb168: 0xafa5019c
    ctx->pc = 0x2bb168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
    // 0x2bb16c: 0x24020006
    ctx->pc = 0x2bb16cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bb170: 0x821818
    ctx->pc = 0x2bb170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2bb174: 0x652821
    ctx->pc = 0x2bb174u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bb178: 0x30a30003
    ctx->pc = 0x2bb178u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 3));
    // 0x2bb17c: 0x24a20002
    ctx->pc = 0x2bb17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2));
    // 0x2bb180: 0x43280b
    ctx->pc = 0x2bb180u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x2bb184: 0x8ca20000
    ctx->pc = 0x2bb184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb188: 0x501024
    ctx->pc = 0x2bb188u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bb18c: 0x3c036f00
    ctx->pc = 0x2bb18cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)28416 << 16));
    // 0x2bb190: 0x34638002
    ctx->pc = 0x2bb190u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32770));
    // 0x2bb194: 0x144301fc
    ctx->pc = 0x2BB194u;
    {
        const bool branch_taken_0x2bb194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2BB198u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bb194) {
            ctx->pc = 0x2BB988u;
            goto label_2bb988;
        }
    }
    ctx->pc = 0x2BB19Cu;
    // 0x2bb19c: 0x90a40002
    ctx->pc = 0x2bb19cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2bb1a0: 0x148c01fb
    ctx->pc = 0x2BB1A0u;
    {
        const bool branch_taken_0x2bb1a0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 12));
        ctx->pc = 0x2BB1A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
        if (branch_taken_0x2bb1a0) {
            ctx->pc = 0x2BB990u;
            goto label_2bb990;
        }
    }
    ctx->pc = 0x2BB1A8u;
    // 0x2bb1a8: 0xafa501b4
    ctx->pc = 0x2bb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 5));
    // 0x2bb1ac: 0x41040
    ctx->pc = 0x2bb1acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2bb1b0: 0xa22821
    ctx->pc = 0x2bb1b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bb1b4: 0x30a30003
    ctx->pc = 0x2bb1b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 3));
    // 0x2bb1b8: 0x24a20002
    ctx->pc = 0x2bb1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2));
    // 0x2bb1bc: 0x43280b
    ctx->pc = 0x2bb1bcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x2bb1c0: 0xafa001cc
    ctx->pc = 0x2bb1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x2bb1c4: 0xafa00248
    ctx->pc = 0x2bb1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
    // 0x2bb1c8: 0x8ca40000
    ctx->pc = 0x2bb1c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb1cc: 0x30833fff
    ctx->pc = 0x2bb1ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 16383));
    // 0x2bb1d0: 0x24020003
    ctx->pc = 0x2bb1d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bb1d4: 0x54620012
    ctx->pc = 0x2BB1D4u;
    {
        const bool branch_taken_0x2bb1d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bb1d4) {
            ctx->pc = 0x2BB1D8u;
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->pc = 0x2BB220u;
            goto label_2bb220;
        }
    }
    ctx->pc = 0x2BB1DCu;
    // 0x2bb1dc: 0x901824
    ctx->pc = 0x2bb1dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2bb1e0: 0x3c026f00
    ctx->pc = 0x2bb1e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28416 << 16));
    // 0x2bb1e4: 0x34428003
    ctx->pc = 0x2bb1e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32771));
    // 0x2bb1e8: 0x146201ec
    ctx->pc = 0x2BB1E8u;
    {
        const bool branch_taken_0x2bb1e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB1ECu;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bb1e8) {
            ctx->pc = 0x2BB99Cu;
            goto label_2bb99c;
        }
    }
    ctx->pc = 0x2BB1F0u;
    // 0x2bb1f0: 0x90a40002
    ctx->pc = 0x2bb1f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2bb1f4: 0x148c01eb
    ctx->pc = 0x2BB1F4u;
    {
        const bool branch_taken_0x2bb1f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 12));
        ctx->pc = 0x2BB1F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
        if (branch_taken_0x2bb1f4) {
            ctx->pc = 0x2BB9A4u;
            goto label_2bb9a4;
        }
    }
    ctx->pc = 0x2BB1FCu;
    // 0x2bb1fc: 0xafa501cc
    ctx->pc = 0x2bb1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 5));
    // 0x2bb200: 0x24160002
    ctx->pc = 0x2bb200u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb204: 0xafb60248
    ctx->pc = 0x2bb204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 22));
    // 0x2bb208: 0x41040
    ctx->pc = 0x2bb208u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2bb20c: 0xa22821
    ctx->pc = 0x2bb20cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bb210: 0x30a30003
    ctx->pc = 0x2bb210u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 3));
    // 0x2bb214: 0x24a20002
    ctx->pc = 0x2bb214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2));
    // 0x2bb218: 0x43280b
    ctx->pc = 0x2bb218u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x2bb21c: 0x90a40002
    ctx->pc = 0x2bb21cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_2bb220:
    // 0x2bb220: 0x148c01e3
    ctx->pc = 0x2BB220u;
    {
        const bool branch_taken_0x2bb220 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 12));
        ctx->pc = 0x2BB224u;
        SET_GPR_U32(ctx, 3, ((uint32_t)27904 << 16));
        if (branch_taken_0x2bb220) {
            ctx->pc = 0x2BB9B0u;
            goto label_2bb9b0;
        }
    }
    ctx->pc = 0x2BB228u;
    // 0x2bb228: 0x8ca20000
    ctx->pc = 0x2bb228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb22c: 0x501024
    ctx->pc = 0x2bb22cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bb230: 0x3463c004
    ctx->pc = 0x2bb230u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49156));
    // 0x2bb234: 0x54430013
    ctx->pc = 0x2BB234u;
    {
        const bool branch_taken_0x2bb234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2bb234) {
            ctx->pc = 0x2BB238u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x2BB284u;
            goto label_2bb284;
        }
    }
    ctx->pc = 0x2BB23Cu;
    // 0x2bb23c: 0x240d0001
    ctx->pc = 0x2bb23cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb240: 0x24a50014
    ctx->pc = 0x2bb240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x2bb244: 0xafa501e8
    ctx->pc = 0x2bb244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x2bb248: 0x41040
    ctx->pc = 0x2bb248u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2bb24c: 0xa22821
    ctx->pc = 0x2bb24cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bb250: 0x30a20003
    ctx->pc = 0x2bb250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 3));
    // 0x2bb254: 0x10400018
    ctx->pc = 0x2BB254u;
    {
        const bool branch_taken_0x2bb254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB258u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bb254) {
            ctx->pc = 0x2BB2B8u;
            goto label_2bb2b8;
        }
    }
    ctx->pc = 0x2BB25Cu;
    // 0x2bb25c: 0x0
    ctx->pc = 0x2bb25cu;
    // NOP
label_2bb260:
    // 0x2bb260: 0x24a50001
    ctx->pc = 0x2bb260u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bb264: 0x30a20003
    ctx->pc = 0x2bb264u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 3));
    // 0x2bb268: 0x0
    ctx->pc = 0x2bb268u;
    // NOP
    // 0x2bb26c: 0x0
    ctx->pc = 0x2bb26cu;
    // NOP
    // 0x2bb270: 0x0
    ctx->pc = 0x2bb270u;
    // NOP
    // 0x2bb274: 0x1440fffa
    ctx->pc = 0x2BB274u;
    {
        const bool branch_taken_0x2bb274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bb274) {
            ctx->pc = 0x2BB260u;
            goto label_2bb260;
        }
    }
    ctx->pc = 0x2BB27Cu;
    // 0x2bb27c: 0x1000000f
    ctx->pc = 0x2BB27Cu;
    {
        const bool branch_taken_0x2bb27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB280u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2bb27c) {
            ctx->pc = 0x2BB2BCu;
            goto label_2bb2bc;
        }
    }
    ctx->pc = 0x2BB284u;
label_2bb284:
    // 0x2bb284: 0x501024
    ctx->pc = 0x2bb284u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bb288: 0x3c036600
    ctx->pc = 0x2bb288u;
    SET_GPR_U32(ctx, 3, ((uint32_t)26112 << 16));
    // 0x2bb28c: 0x3463c004
    ctx->pc = 0x2bb28cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49156));
    // 0x2bb290: 0x144301ca
    ctx->pc = 0x2BB290u;
    {
        const bool branch_taken_0x2bb290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2BB294u;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bb290) {
            ctx->pc = 0x2BB9BCu;
            goto label_2bb9bc;
        }
    }
    ctx->pc = 0x2BB298u;
    // 0x2bb298: 0x24130002
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb29c: 0x24a50014
    ctx->pc = 0x2bb29cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x2bb2a0: 0xafa501e0
    ctx->pc = 0x2bb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
    // 0x2bb2a4: 0x410c0
    ctx->pc = 0x2bb2a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x2bb2a8: 0xa22821
    ctx->pc = 0x2bb2a8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bb2ac: 0x30a30003
    ctx->pc = 0x2bb2acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 3));
    // 0x2bb2b0: 0x24a20002
    ctx->pc = 0x2bb2b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2));
    // 0x2bb2b4: 0x43280b
    ctx->pc = 0x2bb2b4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_2bb2b8:
    // 0x2bb2b8: 0x8ca30000
    ctx->pc = 0x2bb2b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2bb2bc:
    // 0x2bb2bc: 0x3c021400
    ctx->pc = 0x2bb2bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5120 << 16));
    // 0x2bb2c0: 0x10620004
    ctx->pc = 0x2BB2C0u;
    {
        const bool branch_taken_0x2bb2c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BB2C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)5888 << 16));
        if (branch_taken_0x2bb2c0) {
            ctx->pc = 0x2BB2D4u;
            goto label_2bb2d4;
        }
    }
    ctx->pc = 0x2BB2C8u;
    // 0x2bb2c8: 0x8ca30000
    ctx->pc = 0x2bb2c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb2cc: 0x146201be
    ctx->pc = 0x2BB2CCu;
    {
        const bool branch_taken_0x2bb2cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB2D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bb2cc) {
            ctx->pc = 0x2BB9C8u;
            goto label_2bb9c8;
        }
    }
    ctx->pc = 0x2BB2D4u;
label_2bb2d4:
    // 0x2bb2d4: 0x24a50014
    ctx->pc = 0x2bb2d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x2bb2d8: 0x8fa201b0
    ctx->pc = 0x2bb2d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bb2dc: 0x94420000
    ctx->pc = 0x2bb2dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb2e0: 0x213c2
    ctx->pc = 0x2bb2e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 15));
    // 0x2bb2e4: 0x38420001
    ctx->pc = 0x2bb2e4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2bb2e8: 0xafa201f0
    ctx->pc = 0x2bb2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x2bb2ec: 0x24180064
    ctx->pc = 0x2bb2ecu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 100));
    // 0x2bb2f0: 0x24110001
    ctx->pc = 0x2bb2f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb2f4: 0x3c013c00
    ctx->pc = 0x2bb2f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
    // 0x2bb2f8: 0x44811000
    ctx->pc = 0x2bb2f8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2bb2fc: 0x3c014170
    ctx->pc = 0x2bb2fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x2bb300: 0x44811800
    ctx->pc = 0x2bb300u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2bb304: 0x3c013d88
    ctx->pc = 0x2bb304u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15752 << 16));
    // 0x2bb308: 0x34218889
    ctx->pc = 0x2bb308u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2bb30c: 0x44812000
    ctx->pc = 0x2bb30cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x2bb310: 0x3c014100
    ctx->pc = 0x2bb310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x2bb314: 0x44812800
    ctx->pc = 0x2bb314u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x2bb318: 0x3c013800
    ctx->pc = 0x2bb318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
    // 0x2bb31c: 0x44813000
    ctx->pc = 0x2bb31cu;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 1);
    // 0x2bb320: 0x64040
    ctx->pc = 0x2bb320u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 1));
    // 0x2bb324: 0x1064021
    ctx->pc = 0x2bb324u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2bb328: 0x1b31021
    ctx->pc = 0x2bb328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x2bb32c: 0x21040
    ctx->pc = 0x2bb32cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bb330: 0xafa2024c
    ctx->pc = 0x2bb330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x2bb334: 0x0
    ctx->pc = 0x2bb334u;
    // NOP
label_2bb338:
    // 0x2bb338: 0x240382d
    ctx->pc = 0x2bb338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb33c:
    // 0x2bb33c: 0x160902d
    ctx->pc = 0x2bb33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb340: 0x25620001
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 1));
    // 0x2bb344: 0x304b0003
    ctx->pc = 0x2bb344u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 2), 3));
    // 0x2bb348: 0x1781018
    ctx->pc = 0x2bb348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2bb34c: 0x5d3021
    ctx->pc = 0x2bb34cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2bb350: 0xc0202d
    ctx->pc = 0x2bb350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb354: 0x30c20004
    ctx->pc = 0x2bb354u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 4));
    // 0x2bb358: 0x1040001a
    ctx->pc = 0x2BB358u;
    {
        const bool branch_taken_0x2bb358 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB35Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 400));
        if (branch_taken_0x2bb358) {
            ctx->pc = 0x2BB3C4u;
            goto label_2bb3c4;
        }
    }
    ctx->pc = 0x2BB360u;
    // 0x2bb360: 0x27a201f0
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 496));
label_2bb364:
    // 0x2bb364: 0x68760007
    ctx->pc = 0x2bb364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2bb368: 0x6c760000
    ctx->pc = 0x2bb368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2bb36c: 0x6877000f
    ctx->pc = 0x2bb36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2bb370: 0x6c770008
    ctx->pc = 0x2bb370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2bb374: 0x68790017
    ctx->pc = 0x2bb374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2bb378: 0x6c790010
    ctx->pc = 0x2bb378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2bb37c: 0x687e001f
    ctx->pc = 0x2bb37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2bb380: 0x6c7e0018
    ctx->pc = 0x2bb380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2bb384: 0xb0960007
    ctx->pc = 0x2bb384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 22) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb388: 0xb4960000
    ctx->pc = 0x2bb388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 22) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb38c: 0xb097000f
    ctx->pc = 0x2bb38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 23) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb390: 0xb4970008
    ctx->pc = 0x2bb390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 23) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb394: 0xb0990017
    ctx->pc = 0x2bb394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 25) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb398: 0xb4990010
    ctx->pc = 0x2bb398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 25) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb39c: 0xb09e001f
    ctx->pc = 0x2bb39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 30) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb3a0: 0xb49e0018
    ctx->pc = 0x2bb3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 30) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb3a4: 0x24630020
    ctx->pc = 0x2bb3a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bb3a8: 0x24840020
    ctx->pc = 0x2bb3a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bb3ac: 0x0
    ctx->pc = 0x2bb3acu;
    // NOP
    // 0x2bb3b0: 0x0
    ctx->pc = 0x2bb3b0u;
    // NOP
    // 0x2bb3b4: 0x1462ffeb
    ctx->pc = 0x2BB3B4u;
    {
        const bool branch_taken_0x2bb3b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bb3b4) {
            ctx->pc = 0x2BB364u;
            goto label_2bb364;
        }
    }
    ctx->pc = 0x2BB3BCu;
    // 0x2bb3bc: 0x10000010
    ctx->pc = 0x2BB3BCu;
    {
        const bool branch_taken_0x2bb3bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bb3bc) {
            ctx->pc = 0x2BB400u;
            goto label_2bb400;
        }
    }
    ctx->pc = 0x2BB3C4u;
label_2bb3c4:
    // 0x2bb3c4: 0x24620060
    ctx->pc = 0x2bb3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 96));
label_2bb3c8:
    // 0x2bb3c8: 0xdc760000
    ctx->pc = 0x2bb3c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb3cc: 0xdc770008
    ctx->pc = 0x2bb3ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bb3d0: 0xdc790010
    ctx->pc = 0x2bb3d0u;
    SET_GPR_U64(ctx, 25, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bb3d4: 0xdc7e0018
    ctx->pc = 0x2bb3d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bb3d8: 0xfc960000
    ctx->pc = 0x2bb3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 22));
    // 0x2bb3dc: 0xfc970008
    ctx->pc = 0x2bb3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 23));
    // 0x2bb3e0: 0xfc990010
    ctx->pc = 0x2bb3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 25));
    // 0x2bb3e4: 0xfc9e0018
    ctx->pc = 0x2bb3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 30));
    // 0x2bb3e8: 0x24630020
    ctx->pc = 0x2bb3e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bb3ec: 0x24840020
    ctx->pc = 0x2bb3ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bb3f0: 0x0
    ctx->pc = 0x2bb3f0u;
    // NOP
    // 0x2bb3f4: 0x0
    ctx->pc = 0x2bb3f4u;
    // NOP
    // 0x2bb3f8: 0x1462fff3
    ctx->pc = 0x2BB3F8u;
    {
        const bool branch_taken_0x2bb3f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bb3f8) {
            ctx->pc = 0x2BB3C8u;
            goto label_2bb3c8;
        }
    }
    ctx->pc = 0x2BB400u;
label_2bb400:
    // 0x2bb400: 0x8c620000
    ctx->pc = 0x2bb400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb404: 0x16a000f8
    ctx->pc = 0x2BB404u;
    {
        const bool branch_taken_0x2bb404 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BB408u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb404) {
            ctx->pc = 0x2BB7E8u;
            goto label_2bb7e8;
        }
    }
    ctx->pc = 0x2BB40Cu;
    // 0x2bb40c: 0x8fbe0240
    ctx->pc = 0x2bb40cu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2bb410: 0x8fc30000
    ctx->pc = 0x2bb410u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2bb414: 0x8fa2021c
    ctx->pc = 0x2bb414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x2bb418: 0x146200f4
    ctx->pc = 0x2BB418u;
    {
        const bool branch_taken_0x2bb418 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB41Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x2bb418) {
            ctx->pc = 0x2BB7ECu;
            goto label_2bb7ec;
        }
    }
    ctx->pc = 0x2BB420u;
    // 0x2bb420: 0x8fa20244
    ctx->pc = 0x2bb420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x2bb424: 0x8c430000
    ctx->pc = 0x2bb424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb428: 0x8fa20228
    ctx->pc = 0x2bb428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2bb42c: 0x146200ef
    ctx->pc = 0x2BB42Cu;
    {
        const bool branch_taken_0x2bb42c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB430u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x2bb42c) {
            ctx->pc = 0x2BB7ECu;
            goto label_2bb7ec;
        }
    }
    ctx->pc = 0x2BB434u;
    // 0x2bb434: 0x8e830000
    ctx->pc = 0x2bb434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bb438: 0x8fa20230
    ctx->pc = 0x2bb438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2bb43c: 0x146200eb
    ctx->pc = 0x2BB43Cu;
    {
        const bool branch_taken_0x2bb43c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB440u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x2bb43c) {
            ctx->pc = 0x2BB7ECu;
            goto label_2bb7ec;
        }
    }
    ctx->pc = 0x2BB444u;
    // 0x2bb444: 0x8de30000
    ctx->pc = 0x2bb444u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2bb448: 0x69102a
    ctx->pc = 0x2bb448u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
    // 0x2bb44c: 0x144000e7
    ctx->pc = 0x2BB44Cu;
    {
        const bool branch_taken_0x2bb44c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BB450u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x2bb44c) {
            ctx->pc = 0x2BB7ECu;
            goto label_2bb7ec;
        }
    }
    ctx->pc = 0x2BB454u;
    // 0x2bb454: 0x2462ffff
    ctx->pc = 0x2bb454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bb458: 0x15220003
    ctx->pc = 0x2BB458u;
    {
        const bool branch_taken_0x2bb458 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BB45Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967294));
        if (branch_taken_0x2bb458) {
            ctx->pc = 0x2BB468u;
            goto label_2bb468;
        }
    }
    ctx->pc = 0x2BB460u;
    // 0x2bb460: 0x10000007
    ctx->pc = 0x2BB460u;
    {
        const bool branch_taken_0x2bb460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB464u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bb460) {
            ctx->pc = 0x2BB480u;
            goto label_2bb480;
        }
    }
    ctx->pc = 0x2BB468u;
label_2bb468:
    // 0x2bb468: 0x51220005
    ctx->pc = 0x2BB468u;
    {
        const bool branch_taken_0x2bb468 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bb468) {
            ctx->pc = 0x2BB46Cu;
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2BB480u;
            goto label_2bb480;
        }
    }
    ctx->pc = 0x2BB470u;
    // 0x2bb470: 0x11230004
    ctx->pc = 0x2BB470u;
    {
        const bool branch_taken_0x2bb470 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BB474u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2bb470) {
            ctx->pc = 0x2BB484u;
            goto label_2bb484;
        }
    }
    ctx->pc = 0x2BB478u;
    // 0x2bb478: 0x10000159
    ctx->pc = 0x2BB478u;
    {
        const bool branch_taken_0x2bb478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB47Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 17));
        if (branch_taken_0x2bb478) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB480u;
label_2bb480:
    // 0x2bb480: 0x2402ffff
    ctx->pc = 0x2bb480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bb484:
    // 0x2bb484: 0x11620152
    ctx->pc = 0x2BB484u;
    {
        const bool branch_taken_0x2bb484 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BB488u;
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2bb484) {
            ctx->pc = 0x2BB9D0u;
            goto label_2bb9d0;
        }
    }
    ctx->pc = 0x2BB48Cu;
    // 0x2bb48c: 0x5d3021
    ctx->pc = 0x2bb48cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2bb490: 0x8cc2000c
    ctx->pc = 0x2bb490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2bb494: 0x84420000
    ctx->pc = 0x2bb494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb498: 0x44820000
    ctx->pc = 0x2bb498u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb49c: 0x46800020
    ctx->pc = 0x2bb49cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb4a0: 0x46020002
    ctx->pc = 0x2bb4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bb4a4: 0xe5400000
    ctx->pc = 0x2bb4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2bb4a8: 0x8cc2000c
    ctx->pc = 0x2bb4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2bb4ac: 0x84420002
    ctx->pc = 0x2bb4acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2bb4b0: 0x44820000
    ctx->pc = 0x2bb4b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb4b4: 0x46800020
    ctx->pc = 0x2bb4b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb4b8: 0x46020002
    ctx->pc = 0x2bb4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bb4bc: 0xe5400004
    ctx->pc = 0x2bb4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2bb4c0: 0x8cc2000c
    ctx->pc = 0x2bb4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2bb4c4: 0x84420004
    ctx->pc = 0x2bb4c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bb4c8: 0x44820000
    ctx->pc = 0x2bb4c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb4cc: 0x46800020
    ctx->pc = 0x2bb4ccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb4d0: 0x46020002
    ctx->pc = 0x2bb4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bb4d4: 0xe5400008
    ctx->pc = 0x2bb4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2bb4d8: 0x8cc20020
    ctx->pc = 0x2bb4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2bb4dc: 0x94440000
    ctx->pc = 0x2bb4dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb4e0: 0x3082001f
    ctx->pc = 0x2bb4e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 31));
    // 0x2bb4e4: 0x4400005
    ctx->pc = 0x2BB4E4u;
    {
        const bool branch_taken_0x2bb4e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB4E8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2bb4e4) {
            ctx->pc = 0x2BB4FCu;
            goto label_2bb4fc;
        }
    }
    ctx->pc = 0x2BB4ECu;
    // 0x2bb4ec: 0x44820000
    ctx->pc = 0x2bb4ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb4f0: 0x46800020
    ctx->pc = 0x2bb4f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb4f4: 0x10000007
    ctx->pc = 0x2BB4F4u;
    {
        const bool branch_taken_0x2bb4f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB4F8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        if (branch_taken_0x2bb4f4) {
            ctx->pc = 0x2BB514u;
            goto label_2bb514;
        }
    }
    ctx->pc = 0x2BB4FCu;
label_2bb4fc:
    // 0x2bb4fc: 0x21042
    ctx->pc = 0x2bb4fcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2bb500: 0x621825
    ctx->pc = 0x2bb500u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb504: 0x44830000
    ctx->pc = 0x2bb504u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb508: 0x46800020
    ctx->pc = 0x2bb508u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb50c: 0x46000000
    ctx->pc = 0x2bb50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb510: 0x46030001
    ctx->pc = 0x2bb510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2bb514:
    // 0x2bb514: 0x41142
    ctx->pc = 0x2bb514u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 5));
    // 0x2bb518: 0x3042001f
    ctx->pc = 0x2bb518u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x2bb51c: 0x4400005
    ctx->pc = 0x2BB51Cu;
    {
        const bool branch_taken_0x2bb51c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB520u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
        if (branch_taken_0x2bb51c) {
            ctx->pc = 0x2BB534u;
            goto label_2bb534;
        }
    }
    ctx->pc = 0x2BB524u;
    // 0x2bb524: 0x44820000
    ctx->pc = 0x2bb524u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb528: 0x46800020
    ctx->pc = 0x2bb528u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb52c: 0x10000008
    ctx->pc = 0x2BB52Cu;
    {
        const bool branch_taken_0x2bb52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB530u;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        if (branch_taken_0x2bb52c) {
            ctx->pc = 0x2BB550u;
            goto label_2bb550;
        }
    }
    ctx->pc = 0x2BB534u;
label_2bb534:
    // 0x2bb534: 0x30430001
    ctx->pc = 0x2bb534u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bb538: 0x21042
    ctx->pc = 0x2bb538u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2bb53c: 0x621825
    ctx->pc = 0x2bb53cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb540: 0x44830000
    ctx->pc = 0x2bb540u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb544: 0x46800020
    ctx->pc = 0x2bb544u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb548: 0x46000000
    ctx->pc = 0x2bb548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb54c: 0x46030001
    ctx->pc = 0x2bb54cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2bb550:
    // 0x2bb550: 0x41282
    ctx->pc = 0x2bb550u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 10));
    // 0x2bb554: 0x3042001f
    ctx->pc = 0x2bb554u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x2bb558: 0x4400005
    ctx->pc = 0x2BB558u;
    {
        const bool branch_taken_0x2bb558 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB55Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
        if (branch_taken_0x2bb558) {
            ctx->pc = 0x2BB570u;
            goto label_2bb570;
        }
    }
    ctx->pc = 0x2BB560u;
    // 0x2bb560: 0x44820800
    ctx->pc = 0x2bb560u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2bb564: 0x46800860
    ctx->pc = 0x2bb564u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2bb568: 0x10000008
    ctx->pc = 0x2BB568u;
    {
        const bool branch_taken_0x2bb568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB56Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        if (branch_taken_0x2bb568) {
            ctx->pc = 0x2BB58Cu;
            goto label_2bb58c;
        }
    }
    ctx->pc = 0x2BB570u;
label_2bb570:
    // 0x2bb570: 0x30430001
    ctx->pc = 0x2bb570u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bb574: 0x21042
    ctx->pc = 0x2bb574u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2bb578: 0x621825
    ctx->pc = 0x2bb578u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb57c: 0x44830800
    ctx->pc = 0x2bb57cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2bb580: 0x46800860
    ctx->pc = 0x2bb580u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2bb584: 0x46010840
    ctx->pc = 0x2bb584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2bb588: 0x46030841
    ctx->pc = 0x2bb588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2bb58c:
    // 0x2bb58c: 0xc5400010
    ctx->pc = 0x2bb58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb590: 0x46040002
    ctx->pc = 0x2bb590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bb594: 0xe5400010
    ctx->pc = 0x2bb594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x2bb598: 0xc5400014
    ctx->pc = 0x2bb598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb59c: 0x46040002
    ctx->pc = 0x2bb59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bb5a0: 0xe5400014
    ctx->pc = 0x2bb5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x2bb5a4: 0x46040842
    ctx->pc = 0x2bb5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2bb5a8: 0xe5410018
    ctx->pc = 0x2bb5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x2bb5ac: 0x8cc20038
    ctx->pc = 0x2bb5acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2bb5b0: 0x94440000
    ctx->pc = 0x2bb5b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb5b4: 0x3082001f
    ctx->pc = 0x2bb5b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 31));
    // 0x2bb5b8: 0x4400005
    ctx->pc = 0x2BB5B8u;
    {
        const bool branch_taken_0x2bb5b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB5BCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2bb5b8) {
            ctx->pc = 0x2BB5D0u;
            goto label_2bb5d0;
        }
    }
    ctx->pc = 0x2BB5C0u;
    // 0x2bb5c0: 0x44820000
    ctx->pc = 0x2bb5c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb5c4: 0x46800020
    ctx->pc = 0x2bb5c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb5c8: 0x10000007
    ctx->pc = 0x2BB5C8u;
    {
        const bool branch_taken_0x2bb5c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB5CCu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        if (branch_taken_0x2bb5c8) {
            ctx->pc = 0x2BB5E8u;
            goto label_2bb5e8;
        }
    }
    ctx->pc = 0x2BB5D0u;
label_2bb5d0:
    // 0x2bb5d0: 0x21042
    ctx->pc = 0x2bb5d0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2bb5d4: 0x621825
    ctx->pc = 0x2bb5d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb5d8: 0x44830000
    ctx->pc = 0x2bb5d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb5dc: 0x46800020
    ctx->pc = 0x2bb5dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb5e0: 0x46000000
    ctx->pc = 0x2bb5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb5e4: 0x46050002
    ctx->pc = 0x2bb5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2bb5e8:
    // 0x2bb5e8: 0x41142
    ctx->pc = 0x2bb5e8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 5));
    // 0x2bb5ec: 0x3042001f
    ctx->pc = 0x2bb5ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x2bb5f0: 0x4400005
    ctx->pc = 0x2BB5F0u;
    {
        const bool branch_taken_0x2bb5f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB5F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
        if (branch_taken_0x2bb5f0) {
            ctx->pc = 0x2BB608u;
            goto label_2bb608;
        }
    }
    ctx->pc = 0x2BB5F8u;
    // 0x2bb5f8: 0x44820000
    ctx->pc = 0x2bb5f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb5fc: 0x46800020
    ctx->pc = 0x2bb5fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb600: 0x10000008
    ctx->pc = 0x2BB600u;
    {
        const bool branch_taken_0x2bb600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB604u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        if (branch_taken_0x2bb600) {
            ctx->pc = 0x2BB624u;
            goto label_2bb624;
        }
    }
    ctx->pc = 0x2BB608u;
label_2bb608:
    // 0x2bb608: 0x30430001
    ctx->pc = 0x2bb608u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bb60c: 0x21042
    ctx->pc = 0x2bb60cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2bb610: 0x621825
    ctx->pc = 0x2bb610u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb614: 0x44830000
    ctx->pc = 0x2bb614u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb618: 0x46800020
    ctx->pc = 0x2bb618u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb61c: 0x46000000
    ctx->pc = 0x2bb61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb620: 0x46050002
    ctx->pc = 0x2bb620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2bb624:
    // 0x2bb624: 0x41282
    ctx->pc = 0x2bb624u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 10));
    // 0x2bb628: 0x3042001f
    ctx->pc = 0x2bb628u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x2bb62c: 0x4400005
    ctx->pc = 0x2BB62Cu;
    {
        const bool branch_taken_0x2bb62c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BB630u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
        if (branch_taken_0x2bb62c) {
            ctx->pc = 0x2BB644u;
            goto label_2bb644;
        }
    }
    ctx->pc = 0x2BB634u;
    // 0x2bb634: 0x44820000
    ctx->pc = 0x2bb634u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bb638: 0x46800020
    ctx->pc = 0x2bb638u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb63c: 0x10000008
    ctx->pc = 0x2BB63Cu;
    {
        const bool branch_taken_0x2bb63c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB640u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        if (branch_taken_0x2bb63c) {
            ctx->pc = 0x2BB660u;
            goto label_2bb660;
        }
    }
    ctx->pc = 0x2BB644u;
label_2bb644:
    // 0x2bb644: 0x30430001
    ctx->pc = 0x2bb644u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bb648: 0x21042
    ctx->pc = 0x2bb648u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2bb64c: 0x621825
    ctx->pc = 0x2bb64cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb650: 0x44830000
    ctx->pc = 0x2bb650u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb654: 0x46800020
    ctx->pc = 0x2bb654u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb658: 0x46000000
    ctx->pc = 0x2bb658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb65c: 0x46050002
    ctx->pc = 0x2bb65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2bb660:
    // 0x2bb660: 0x15b10005
    ctx->pc = 0x2BB660u;
    {
        const bool branch_taken_0x2bb660 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 17));
        ctx->pc = 0x2BB664u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
        if (branch_taken_0x2bb660) {
            ctx->pc = 0x2BB678u;
            goto label_2bb678;
        }
    }
    ctx->pc = 0x2BB668u;
    // 0x2bb668: 0x8cc20058
    ctx->pc = 0x2bb668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2bb66c: 0x90440000
    ctx->pc = 0x2bb66cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb670: 0x10000007
    ctx->pc = 0x2BB670u;
    {
        const bool branch_taken_0x2bb670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB674u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        if (branch_taken_0x2bb670) {
            ctx->pc = 0x2BB690u;
            goto label_2bb690;
        }
    }
    ctx->pc = 0x2BB678u;
label_2bb678:
    // 0x2bb678: 0x24020002
    ctx->pc = 0x2bb678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb67c: 0x55a200d8
    ctx->pc = 0x2BB67Cu;
    {
        const bool branch_taken_0x2bb67c = (GPR_U32(ctx, 13) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bb67c) {
            ctx->pc = 0x2BB680u;
            WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB684u;
    // 0x2bb684: 0x8cc20050
    ctx->pc = 0x2bb684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2bb688: 0x94440000
    ctx->pc = 0x2bb688u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb68c: 0x94450002
    ctx->pc = 0x2bb68cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2bb690:
    // 0x2bb690: 0x4800005
    ctx->pc = 0x2BB690u;
    {
        const bool branch_taken_0x2bb690 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2BB694u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2bb690) {
            ctx->pc = 0x2BB6A8u;
            goto label_2bb6a8;
        }
    }
    ctx->pc = 0x2BB698u;
    // 0x2bb698: 0x44840000
    ctx->pc = 0x2bb698u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x2bb69c: 0x46800020
    ctx->pc = 0x2bb69cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb6a0: 0x10000007
    ctx->pc = 0x2BB6A0u;
    {
        const bool branch_taken_0x2bb6a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB6A4u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        if (branch_taken_0x2bb6a0) {
            ctx->pc = 0x2BB6C0u;
            goto label_2bb6c0;
        }
    }
    ctx->pc = 0x2BB6A8u;
label_2bb6a8:
    // 0x2bb6a8: 0x41042
    ctx->pc = 0x2bb6a8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 1));
    // 0x2bb6ac: 0x621825
    ctx->pc = 0x2bb6acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb6b0: 0x44830000
    ctx->pc = 0x2bb6b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb6b4: 0x46800020
    ctx->pc = 0x2bb6b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb6b8: 0x46000000
    ctx->pc = 0x2bb6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb6bc: 0x46020002
    ctx->pc = 0x2bb6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2bb6c0:
    // 0x2bb6c0: 0x4a00005
    ctx->pc = 0x2BB6C0u;
    {
        const bool branch_taken_0x2bb6c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2BB6C4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 48), bits); }
        if (branch_taken_0x2bb6c0) {
            ctx->pc = 0x2BB6D8u;
            goto label_2bb6d8;
        }
    }
    ctx->pc = 0x2BB6C8u;
    // 0x2bb6c8: 0x44850000
    ctx->pc = 0x2bb6c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2bb6cc: 0x46800020
    ctx->pc = 0x2bb6ccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb6d0: 0x10000008
    ctx->pc = 0x2BB6D0u;
    {
        const bool branch_taken_0x2bb6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB6D4u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        if (branch_taken_0x2bb6d0) {
            ctx->pc = 0x2BB6F4u;
            goto label_2bb6f4;
        }
    }
    ctx->pc = 0x2BB6D8u;
label_2bb6d8:
    // 0x2bb6d8: 0x30a30001
    ctx->pc = 0x2bb6d8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x2bb6dc: 0x51042
    ctx->pc = 0x2bb6dcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2bb6e0: 0x621825
    ctx->pc = 0x2bb6e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb6e4: 0x44830000
    ctx->pc = 0x2bb6e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb6e8: 0x46800020
    ctx->pc = 0x2bb6e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb6ec: 0x46000000
    ctx->pc = 0x2bb6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb6f0: 0x46020002
    ctx->pc = 0x2bb6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2bb6f4:
    // 0x2bb6f4: 0x16600004
    ctx->pc = 0x2BB6F4u;
    {
        const bool branch_taken_0x2bb6f4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BB6F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 52), bits); }
        if (branch_taken_0x2bb6f4) {
            ctx->pc = 0x2BB708u;
            goto label_2bb708;
        }
    }
    ctx->pc = 0x2BB6FCu;
    // 0x2bb6fc: 0x202d
    ctx->pc = 0x2bb6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb700: 0x10000007
    ctx->pc = 0x2BB700u;
    {
        const bool branch_taken_0x2bb700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB704u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bb700) {
            ctx->pc = 0x2BB720u;
            goto label_2bb720;
        }
    }
    ctx->pc = 0x2BB708u;
label_2bb708:
    // 0x2bb708: 0x24020002
    ctx->pc = 0x2bb708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb70c: 0x55a200b4
    ctx->pc = 0x2BB70Cu;
    {
        const bool branch_taken_0x2bb70c = (GPR_U32(ctx, 13) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bb70c) {
            ctx->pc = 0x2BB710u;
            WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB714u;
    // 0x2bb714: 0x8cc20050
    ctx->pc = 0x2bb714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2bb718: 0x94440004
    ctx->pc = 0x2bb718u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bb71c: 0x94450006
    ctx->pc = 0x2bb71cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_2bb720:
    // 0x2bb720: 0x4800005
    ctx->pc = 0x2BB720u;
    {
        const bool branch_taken_0x2bb720 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2BB724u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2bb720) {
            ctx->pc = 0x2BB738u;
            goto label_2bb738;
        }
    }
    ctx->pc = 0x2BB728u;
    // 0x2bb728: 0x44840000
    ctx->pc = 0x2bb728u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x2bb72c: 0x46800020
    ctx->pc = 0x2bb72cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb730: 0x10000007
    ctx->pc = 0x2BB730u;
    {
        const bool branch_taken_0x2bb730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB734u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        if (branch_taken_0x2bb730) {
            ctx->pc = 0x2BB750u;
            goto label_2bb750;
        }
    }
    ctx->pc = 0x2BB738u;
label_2bb738:
    // 0x2bb738: 0x41042
    ctx->pc = 0x2bb738u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 1));
    // 0x2bb73c: 0x621825
    ctx->pc = 0x2bb73cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb740: 0x44830000
    ctx->pc = 0x2bb740u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb744: 0x46800020
    ctx->pc = 0x2bb744u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb748: 0x46000000
    ctx->pc = 0x2bb748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb74c: 0x46060002
    ctx->pc = 0x2bb74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2bb750:
    // 0x2bb750: 0x4a00005
    ctx->pc = 0x2BB750u;
    {
        const bool branch_taken_0x2bb750 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2BB754u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 64), bits); }
        if (branch_taken_0x2bb750) {
            ctx->pc = 0x2BB768u;
            goto label_2bb768;
        }
    }
    ctx->pc = 0x2BB758u;
    // 0x2bb758: 0x44850000
    ctx->pc = 0x2bb758u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2bb75c: 0x46800020
    ctx->pc = 0x2bb75cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb760: 0x10000008
    ctx->pc = 0x2BB760u;
    {
        const bool branch_taken_0x2bb760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB764u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        if (branch_taken_0x2bb760) {
            ctx->pc = 0x2BB784u;
            goto label_2bb784;
        }
    }
    ctx->pc = 0x2BB768u;
label_2bb768:
    // 0x2bb768: 0x30a30001
    ctx->pc = 0x2bb768u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x2bb76c: 0x51042
    ctx->pc = 0x2bb76cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2bb770: 0x621825
    ctx->pc = 0x2bb770u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb774: 0x44830000
    ctx->pc = 0x2bb774u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bb778: 0x46800020
    ctx->pc = 0x2bb778u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bb77c: 0x46000000
    ctx->pc = 0x2bb77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bb780: 0x46060002
    ctx->pc = 0x2bb780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2bb784:
    // 0x2bb784: 0xe5400044
    ctx->pc = 0x2bb784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 68), bits); }
    // 0x2bb788: 0x8cc20060
    ctx->pc = 0x2bb788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2bb78c: 0xad420050
    ctx->pc = 0x2bb78cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 2));
    // 0x2bb790: 0x8fa20200
    ctx->pc = 0x2bb790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2bb794: 0xad420068
    ctx->pc = 0x2bb794u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 104), GPR_U32(ctx, 2));
    // 0x2bb798: 0x8fa20204
    ctx->pc = 0x2bb798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2bb79c: 0xad42006c
    ctx->pc = 0x2bb79cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 2));
    // 0x2bb7a0: 0x8fa20208
    ctx->pc = 0x2bb7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2bb7a4: 0xad420070
    ctx->pc = 0x2bb7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 112), GPR_U32(ctx, 2));
    // 0x2bb7a8: 0x8fa2020c
    ctx->pc = 0x2bb7a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2bb7ac: 0xad420074
    ctx->pc = 0x2bb7acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 116), GPR_U32(ctx, 2));
    // 0x2bb7b0: 0x8fa20210
    ctx->pc = 0x2bb7b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2bb7b4: 0xad420078
    ctx->pc = 0x2bb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 120), GPR_U32(ctx, 2));
    // 0x2bb7b8: 0x8fa20214
    ctx->pc = 0x2bb7b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2bb7bc: 0xad42007c
    ctx->pc = 0x2bb7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 2));
    // 0x2bb7c0: 0x8fa20218
    ctx->pc = 0x2bb7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2bb7c4: 0xad420080
    ctx->pc = 0x2bb7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 128), GPR_U32(ctx, 2));
    // 0x2bb7c8: 0x8fa20220
    ctx->pc = 0x2bb7c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2bb7cc: 0xad420084
    ctx->pc = 0x2bb7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 132), GPR_U32(ctx, 2));
    // 0x2bb7d0: 0x8fa20224
    ctx->pc = 0x2bb7d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x2bb7d4: 0xad420088
    ctx->pc = 0x2bb7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 2));
    // 0x2bb7d8: 0x8fa2022c
    ctx->pc = 0x2bb7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2bb7dc: 0xad42008c
    ctx->pc = 0x2bb7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 140), GPR_U32(ctx, 2));
    // 0x2bb7e0: 0x1000005f
    ctx->pc = 0x2BB7E0u;
    {
        const bool branch_taken_0x2bb7e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB7E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2bb7e0) {
            ctx->pc = 0x2BB960u;
            goto label_2bb960;
        }
    }
    ctx->pc = 0x2BB7E8u;
label_2bb7e8:
    // 0x2bb7e8: 0x8fa2020c
    ctx->pc = 0x2bb7e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_2bb7ec:
    // 0x2bb7ec: 0x24420001
    ctx->pc = 0x2bb7ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb7f0: 0xafa2020c
    ctx->pc = 0x2bb7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x2bb7f4: 0x8fa20218
    ctx->pc = 0x2bb7f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2bb7f8: 0x24420001
    ctx->pc = 0x2bb7f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb7fc: 0xafa20218
    ctx->pc = 0x2bb7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x2bb800: 0x8fa20224
    ctx->pc = 0x2bb800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x2bb804: 0x24420001
    ctx->pc = 0x2bb804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb808: 0xafa20224
    ctx->pc = 0x2bb808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x2bb80c: 0x8fa20218
    ctx->pc = 0x2bb80cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2bb810: 0x4c102a
    ctx->pc = 0x2bb810u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 12)));
    // 0x2bb814: 0x10400038
    ctx->pc = 0x2BB814u;
    {
        const bool branch_taken_0x2bb814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB818u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 416)));
        if (branch_taken_0x2bb814) {
            ctx->pc = 0x2BB8F8u;
            goto label_2bb8f8;
        }
    }
    ctx->pc = 0x2BB81Cu;
    // 0x2bb81c: 0x1021021
    ctx->pc = 0x2bb81cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2bb820: 0xafa201a0
    ctx->pc = 0x2bb820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2bb824: 0x24030002
    ctx->pc = 0x2bb824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb828: 0x32040
    ctx->pc = 0x2bb828u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bb82c: 0x8fa201b0
    ctx->pc = 0x2bb82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bb830: 0x822021
    ctx->pc = 0x2bb830u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bb834: 0xafa401b0
    ctx->pc = 0x2bb834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x2bb838: 0x8fb60248
    ctx->pc = 0x2bb838u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2bb83c: 0x161040
    ctx->pc = 0x2bb83cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x2bb840: 0x8fa301c8
    ctx->pc = 0x2bb840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2bb844: 0x431021
    ctx->pc = 0x2bb844u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb848: 0xafa201c8
    ctx->pc = 0x2bb848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
    // 0x2bb84c: 0x8fa201e8
    ctx->pc = 0x2bb84cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2bb850: 0x8fb7024c
    ctx->pc = 0x2bb850u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2bb854: 0x2e21021
    ctx->pc = 0x2bb854u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2bb858: 0xafa201e8
    ctx->pc = 0x2bb858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x2bb85c: 0x94820000
    ctx->pc = 0x2bb85cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb860: 0x213c2
    ctx->pc = 0x2bb860u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 15));
    // 0x2bb864: 0x38420001
    ctx->pc = 0x2bb864u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2bb868: 0x10400014
    ctx->pc = 0x2BB868u;
    {
        const bool branch_taken_0x2bb868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB86Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb868) {
            ctx->pc = 0x2BB8BCu;
            goto label_2bb8bc;
        }
    }
    ctx->pc = 0x2BB870u;
    // 0x2bb870: 0x8fa2022c
    ctx->pc = 0x2bb870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2bb874: 0x28420002
    ctx->pc = 0x2bb874u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2bb878: 0x1440000d
    ctx->pc = 0x2BB878u;
    {
        const bool branch_taken_0x2bb878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BB87Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 556)));
        if (branch_taken_0x2bb878) {
            ctx->pc = 0x2BB8B0u;
            goto label_2bb8b0;
        }
    }
    ctx->pc = 0x2BB880u;
    // 0x2bb880: 0x24020002
    ctx->pc = 0x2bb880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb884: 0xafa2022c
    ctx->pc = 0x2bb884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x2bb888: 0x8fa20208
    ctx->pc = 0x2bb888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2bb88c: 0x24420001
    ctx->pc = 0x2bb88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb890: 0xafa20208
    ctx->pc = 0x2bb890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x2bb894: 0x8fa20214
    ctx->pc = 0x2bb894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2bb898: 0x24420001
    ctx->pc = 0x2bb898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb89c: 0xafa20214
    ctx->pc = 0x2bb89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x2bb8a0: 0x8fa20220
    ctx->pc = 0x2bb8a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2bb8a4: 0x24420001
    ctx->pc = 0x2bb8a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb8a8: 0x1000fea3
    ctx->pc = 0x2BB8A8u;
    {
        const bool branch_taken_0x2bb8a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB8ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb8a8) {
            ctx->pc = 0x2BB338u;
            goto label_2bb338;
        }
    }
    ctx->pc = 0x2BB8B0u;
label_2bb8b0:
    // 0x2bb8b0: 0x24420001
    ctx->pc = 0x2bb8b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb8b4: 0x1000fea0
    ctx->pc = 0x2BB8B4u;
    {
        const bool branch_taken_0x2bb8b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB8B8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb8b4) {
            ctx->pc = 0x2BB338u;
            goto label_2bb338;
        }
    }
    ctx->pc = 0x2BB8BCu;
label_2bb8bc:
    // 0x2bb8bc: 0x8fa2022c
    ctx->pc = 0x2bb8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2bb8c0: 0x24420001
    ctx->pc = 0x2bb8c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb8c4: 0xafa2022c
    ctx->pc = 0x2bb8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x2bb8c8: 0x8cc20060
    ctx->pc = 0x2bb8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2bb8cc: 0x1440fe9b
    ctx->pc = 0x2BB8CCu;
    {
        const bool branch_taken_0x2bb8cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BB8D0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bb8cc) {
            ctx->pc = 0x2BB33Cu;
            goto label_2bb33c;
        }
    }
    ctx->pc = 0x2BB8D4u;
    // 0x2bb8d4: 0x8fa20204
    ctx->pc = 0x2bb8d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2bb8d8: 0x24420001
    ctx->pc = 0x2bb8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb8dc: 0xafa20204
    ctx->pc = 0x2bb8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x2bb8e0: 0x8fa20210
    ctx->pc = 0x2bb8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2bb8e4: 0x24420001
    ctx->pc = 0x2bb8e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb8e8: 0xafa20210
    ctx->pc = 0x2bb8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x2bb8ec: 0xafa00220
    ctx->pc = 0x2bb8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x2bb8f0: 0x1000fe92
    ctx->pc = 0x2BB8F0u;
    {
        const bool branch_taken_0x2bb8f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB8F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
        if (branch_taken_0x2bb8f0) {
            ctx->pc = 0x2BB33Cu;
            goto label_2bb33c;
        }
    }
    ctx->pc = 0x2BB8F8u;
label_2bb8f8:
    // 0x2bb8f8: 0x8fa20200
    ctx->pc = 0x2bb8f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2bb8fc: 0x24420001
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb900: 0xafa20200
    ctx->pc = 0x2bb900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x2bb904: 0x0
    ctx->pc = 0x2bb904u;
    // NOP
label_2bb908:
    // 0x2bb908: 0xae102b
    ctx->pc = 0x2bb908u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x2bb90c: 0x10400004
    ctx->pc = 0x2BB90Cu;
    {
        const bool branch_taken_0x2bb90c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bb90c) {
            ctx->pc = 0x2BB920u;
            goto label_2bb920;
        }
    }
    ctx->pc = 0x2BB914u;
    // 0x2bb914: 0x8ca20000
    ctx->pc = 0x2bb914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb918: 0x5040fffb
    ctx->pc = 0x2BB918u;
    {
        const bool branch_taken_0x2bb918 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bb918) {
            ctx->pc = 0x2BB91Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
            ctx->pc = 0x2BB908u;
            goto label_2bb908;
        }
    }
    ctx->pc = 0x2BB920u;
label_2bb920:
    // 0x2bb920: 0x10ae0005
    ctx->pc = 0x2BB920u;
    {
        const bool branch_taken_0x2bb920 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 14));
        ctx->pc = 0x2BB924u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
        if (branch_taken_0x2bb920) {
            ctx->pc = 0x2BB938u;
            goto label_2bb938;
        }
    }
    ctx->pc = 0x2BB928u;
    // 0x2bb928: 0x5040fdf1
    ctx->pc = 0x2BB928u;
    {
        const bool branch_taken_0x2bb928 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bb928) {
            ctx->pc = 0x2BB92Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x2BB0F0u;
            goto label_2bb0f0;
        }
    }
    ctx->pc = 0x2BB930u;
    // 0x2bb930: 0x1000002c
    ctx->pc = 0x2BB930u;
    {
        const bool branch_taken_0x2bb930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bb930) {
            ctx->pc = 0x2BB9E4u;
            goto label_2bb9e4;
        }
    }
    ctx->pc = 0x2BB938u;
label_2bb938:
    // 0x2bb938: 0x12a00028
    ctx->pc = 0x2BB938u;
    {
        const bool branch_taken_0x2bb938 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB93Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 512)));
        if (branch_taken_0x2bb938) {
            ctx->pc = 0x2BB9DCu;
            goto label_2bb9dc;
        }
    }
    ctx->pc = 0x2BB940u;
    // 0x2bb940: 0xad420068
    ctx->pc = 0x2bb940u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 104), GPR_U32(ctx, 2));
    // 0x2bb944: 0x8fa20204
    ctx->pc = 0x2bb944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2bb948: 0xad42006c
    ctx->pc = 0x2bb948u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 2));
    // 0x2bb94c: 0x8fa20208
    ctx->pc = 0x2bb94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2bb950: 0xad420070
    ctx->pc = 0x2bb950u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 112), GPR_U32(ctx, 2));
    // 0x2bb954: 0x8fa2020c
    ctx->pc = 0x2bb954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2bb958: 0xad420074
    ctx->pc = 0x2bb958u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 116), GPR_U32(ctx, 2));
    // 0x2bb95c: 0x24020006
    ctx->pc = 0x2bb95cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2bb960:
    // 0x2bb960: 0xad420054
    ctx->pc = 0x2bb960u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
    // 0x2bb964: 0x1000001f
    ctx->pc = 0x2BB964u;
    {
        const bool branch_taken_0x2bb964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB968u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bb964) {
            ctx->pc = 0x2BB9E4u;
            goto label_2bb9e4;
        }
    }
    ctx->pc = 0x2BB96Cu;
label_2bb96c:
    // 0x2bb96c: 0x24020003
    ctx->pc = 0x2bb96cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bb970: 0x1000001b
    ctx->pc = 0x2BB970u;
    {
        const bool branch_taken_0x2bb970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB974u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb970) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB978u;
label_2bb978:
    // 0x2bb978: 0x10000019
    ctx->pc = 0x2BB978u;
    {
        const bool branch_taken_0x2bb978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB97Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb978) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB980u;
label_2bb980:
    // 0x2bb980: 0x10000017
    ctx->pc = 0x2BB980u;
    {
        const bool branch_taken_0x2bb980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB984u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb980) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB988u;
label_2bb988:
    // 0x2bb988: 0x10000015
    ctx->pc = 0x2BB988u;
    {
        const bool branch_taken_0x2bb988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB98Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 6));
        if (branch_taken_0x2bb988) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB990u;
label_2bb990:
    // 0x2bb990: 0x24020002
    ctx->pc = 0x2bb990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb994: 0x10000012
    ctx->pc = 0x2BB994u;
    {
        const bool branch_taken_0x2bb994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB998u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb994) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB99Cu;
label_2bb99c:
    // 0x2bb99c: 0x10000010
    ctx->pc = 0x2BB99Cu;
    {
        const bool branch_taken_0x2bb99c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9A0u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 25));
        if (branch_taken_0x2bb99c) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB9A4u;
label_2bb9a4:
    // 0x2bb9a4: 0x24020002
    ctx->pc = 0x2bb9a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb9a8: 0x1000000d
    ctx->pc = 0x2BB9A8u;
    {
        const bool branch_taken_0x2bb9a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9ACu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb9a8) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB9B0u;
label_2bb9b0:
    // 0x2bb9b0: 0x24020002
    ctx->pc = 0x2bb9b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb9b4: 0x1000000a
    ctx->pc = 0x2BB9B4u;
    {
        const bool branch_taken_0x2bb9b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9B8u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb9b4) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB9BCu;
label_2bb9bc:
    // 0x2bb9bc: 0x24020002
    ctx->pc = 0x2bb9bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb9c0: 0x10000007
    ctx->pc = 0x2BB9C0u;
    {
        const bool branch_taken_0x2bb9c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9C4u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb9c0) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB9C8u;
label_2bb9c8:
    // 0x2bb9c8: 0x10000005
    ctx->pc = 0x2BB9C8u;
    {
        const bool branch_taken_0x2bb9c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9CCu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb9c8) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB9D0u;
label_2bb9d0:
    // 0x2bb9d0: 0x24020001
    ctx->pc = 0x2bb9d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb9d4: 0x10000003
    ctx->pc = 0x2BB9D4u;
    {
        const bool branch_taken_0x2bb9d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9D8u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bb9d4) {
            ctx->pc = 0x2BB9E4u;
            goto label_2bb9e4;
        }
    }
    ctx->pc = 0x2BB9DCu;
label_2bb9dc:
    // 0x2bb9dc: 0xad400054
    ctx->pc = 0x2bb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 0));
label_2bb9e0:
    // 0x2bb9e0: 0x24020001
    ctx->pc = 0x2bb9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2bb9e4:
    // 0x2bb9e4: 0xdfbe02d0
    ctx->pc = 0x2bb9e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2bb9e8: 0xdfb702c0
    ctx->pc = 0x2bb9e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2bb9ec: 0xdfb602b0
    ctx->pc = 0x2bb9ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2bb9f0: 0xdfb502a0
    ctx->pc = 0x2bb9f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2bb9f4: 0xdfb40290
    ctx->pc = 0x2bb9f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2bb9f8: 0xdfb30280
    ctx->pc = 0x2bb9f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2bb9fc: 0xdfb20270
    ctx->pc = 0x2bb9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2bba00: 0xdfb10260
    ctx->pc = 0x2bba00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2bba04: 0xdfb00250
    ctx->pc = 0x2bba04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2bba08: 0x3e00008
    ctx->pc = 0x2BBA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BB02Cu: goto label_2bb02c;
            case 0x2BB034u: goto label_2bb034;
            case 0x2BB050u: goto label_2bb050;
            case 0x2BB054u: goto label_2bb054;
            case 0x2BB068u: goto label_2bb068;
            case 0x2BB074u: goto label_2bb074;
            case 0x2BB088u: goto label_2bb088;
            case 0x2BB0ACu: goto label_2bb0ac;
            case 0x2BB0F0u: goto label_2bb0f0;
            case 0x2BB164u: goto label_2bb164;
            case 0x2BB220u: goto label_2bb220;
            case 0x2BB260u: goto label_2bb260;
            case 0x2BB284u: goto label_2bb284;
            case 0x2BB2B8u: goto label_2bb2b8;
            case 0x2BB2BCu: goto label_2bb2bc;
            case 0x2BB2D4u: goto label_2bb2d4;
            case 0x2BB338u: goto label_2bb338;
            case 0x2BB33Cu: goto label_2bb33c;
            case 0x2BB364u: goto label_2bb364;
            case 0x2BB3C4u: goto label_2bb3c4;
            case 0x2BB3C8u: goto label_2bb3c8;
            case 0x2BB400u: goto label_2bb400;
            case 0x2BB468u: goto label_2bb468;
            case 0x2BB480u: goto label_2bb480;
            case 0x2BB484u: goto label_2bb484;
            case 0x2BB4FCu: goto label_2bb4fc;
            case 0x2BB514u: goto label_2bb514;
            case 0x2BB534u: goto label_2bb534;
            case 0x2BB550u: goto label_2bb550;
            case 0x2BB570u: goto label_2bb570;
            case 0x2BB58Cu: goto label_2bb58c;
            case 0x2BB5D0u: goto label_2bb5d0;
            case 0x2BB5E8u: goto label_2bb5e8;
            case 0x2BB608u: goto label_2bb608;
            case 0x2BB624u: goto label_2bb624;
            case 0x2BB644u: goto label_2bb644;
            case 0x2BB660u: goto label_2bb660;
            case 0x2BB678u: goto label_2bb678;
            case 0x2BB690u: goto label_2bb690;
            case 0x2BB6A8u: goto label_2bb6a8;
            case 0x2BB6C0u: goto label_2bb6c0;
            case 0x2BB6D8u: goto label_2bb6d8;
            case 0x2BB6F4u: goto label_2bb6f4;
            case 0x2BB708u: goto label_2bb708;
            case 0x2BB720u: goto label_2bb720;
            case 0x2BB738u: goto label_2bb738;
            case 0x2BB750u: goto label_2bb750;
            case 0x2BB768u: goto label_2bb768;
            case 0x2BB784u: goto label_2bb784;
            case 0x2BB7E8u: goto label_2bb7e8;
            case 0x2BB7ECu: goto label_2bb7ec;
            case 0x2BB8B0u: goto label_2bb8b0;
            case 0x2BB8BCu: goto label_2bb8bc;
            case 0x2BB8F8u: goto label_2bb8f8;
            case 0x2BB908u: goto label_2bb908;
            case 0x2BB920u: goto label_2bb920;
            case 0x2BB938u: goto label_2bb938;
            case 0x2BB960u: goto label_2bb960;
            case 0x2BB96Cu: goto label_2bb96c;
            case 0x2BB978u: goto label_2bb978;
            case 0x2BB980u: goto label_2bb980;
            case 0x2BB988u: goto label_2bb988;
            case 0x2BB990u: goto label_2bb990;
            case 0x2BB99Cu: goto label_2bb99c;
            case 0x2BB9A4u: goto label_2bb9a4;
            case 0x2BB9B0u: goto label_2bb9b0;
            case 0x2BB9BCu: goto label_2bb9bc;
            case 0x2BB9C8u: goto label_2bb9c8;
            case 0x2BB9D0u: goto label_2bb9d0;
            case 0x2BB9DCu: goto label_2bb9dc;
            case 0x2BB9E0u: goto label_2bb9e0;
            case 0x2BB9E4u: goto label_2bb9e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BBA10u;
}
