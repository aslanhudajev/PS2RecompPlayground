#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewPoly
// Address: 0x2cf058 - 0x2cf288
void MBNewPoly_0x2cf058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf058u;

    // 0x2cf058: 0x27bdffd0
    ctx->pc = 0x2cf058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf05c: 0xffbf0020
    ctx->pc = 0x2cf05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf060: 0xffb10010
    ctx->pc = 0x2cf060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cf064: 0xffb00000
    ctx->pc = 0x2cf064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf068: 0xa0502d
    ctx->pc = 0x2cf068u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf06c: 0xc0882d
    ctx->pc = 0x2cf06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf070: 0x2542fffd
    ctx->pc = 0x2cf070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 4294967293));
    // 0x2cf074: 0x2c420002
    ctx->pc = 0x2cf074u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2cf078: 0x14400003
    ctx->pc = 0x2CF078u;
    {
        const bool branch_taken_0x2cf078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF07Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf078) {
            ctx->pc = 0x2CF088u;
            goto label_2cf088;
        }
    }
    ctx->pc = 0x2CF080u;
    // 0x2cf080: 0x1000007c
    ctx->pc = 0x2CF080u;
    {
        const bool branch_taken_0x2cf080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF084u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf080) {
            ctx->pc = 0x2CF274u;
            goto label_2cf274;
        }
    }
    ctx->pc = 0x2CF088u;
label_2cf088:
    // 0x2cf088: 0x54800004
    ctx->pc = 0x2CF088u;
    {
        const bool branch_taken_0x2cf088 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf088) {
            ctx->pc = 0x2CF08Cu;
            SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->pc = 0x2CF09Cu;
            goto label_2cf09c;
        }
    }
    ctx->pc = 0x2CF090u;
    // 0x2cf090: 0x3c02003a
    ctx->pc = 0x2cf090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf094: 0x8c44b8f0
    ctx->pc = 0x2cf094u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949104)));
    // 0x2cf098: 0x8c890070
    ctx->pc = 0x2cf098u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2cf09c:
    // 0x2cf09c: 0x3c02003a
    ctx->pc = 0x2cf09cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf0a0: 0x8c42b8f4
    ctx->pc = 0x2cf0a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949108)));
    // 0x2cf0a4: 0x18400011
    ctx->pc = 0x2CF0A4u;
    {
        const bool branch_taken_0x2cf0a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CF0A8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf0a4) {
            ctx->pc = 0x2CF0ECu;
            goto label_2cf0ec;
        }
    }
    ctx->pc = 0x2CF0ACu;
    // 0x2cf0ac: 0x3c02003a
    ctx->pc = 0x2cf0acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf0b0: 0x8442b8f8
    ctx->pc = 0x2cf0b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294949112)));
    // 0x2cf0b4: 0x1840000d
    ctx->pc = 0x2CF0B4u;
    {
        const bool branch_taken_0x2cf0b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CF0B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2cf0b4) {
            ctx->pc = 0x2CF0ECu;
            goto label_2cf0ec;
        }
    }
    ctx->pc = 0x2CF0BCu;
    // 0x2cf0bc: 0x8c43b8f4
    ctx->pc = 0x2cf0bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294949108)));
    // 0x2cf0c0: 0x3c02003a
    ctx->pc = 0x2cf0c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf0c4: 0x244bb8f8
    ctx->pc = 0x2cf0c4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294949112));
    // 0x2cf0c8: 0x24040024
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2cf0cc: 0x25080001
    ctx->pc = 0x2cf0ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_2cf0d0:
    // 0x2cf0d0: 0x103102a
    ctx->pc = 0x2cf0d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 3)));
    // 0x2cf0d4: 0x10400005
    ctx->pc = 0x2CF0D4u;
    {
        const bool branch_taken_0x2cf0d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF0D8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2cf0d4) {
            ctx->pc = 0x2CF0ECu;
            goto label_2cf0ec;
        }
    }
    ctx->pc = 0x2CF0DCu;
    // 0x2cf0dc: 0xab1021
    ctx->pc = 0x2cf0dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2cf0e0: 0x84420000
    ctx->pc = 0x2cf0e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf0e4: 0x5c40fffa
    ctx->pc = 0x2CF0E4u;
    {
        const bool branch_taken_0x2cf0e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2cf0e4) {
            ctx->pc = 0x2CF0E8u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
            ctx->pc = 0x2CF0D0u;
            goto label_2cf0d0;
        }
    }
    ctx->pc = 0x2CF0ECu;
label_2cf0ec:
    // 0x2cf0ec: 0x29020080
    ctx->pc = 0x2cf0ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 128));
    // 0x2cf0f0: 0x14400004
    ctx->pc = 0x2CF0F0u;
    {
        const bool branch_taken_0x2cf0f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF0F4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2cf0f0) {
            ctx->pc = 0x2CF104u;
            goto label_2cf104;
        }
    }
    ctx->pc = 0x2CF0F8u;
    // 0x2cf0f8: 0x3c04003b
    ctx->pc = 0x2cf0f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2cf0fc: 0x1000001a
    ctx->pc = 0x2CF0FCu;
    {
        const bool branch_taken_0x2cf0fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF100u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30328));
        if (branch_taken_0x2cf0fc) {
            ctx->pc = 0x2CF168u;
            goto label_2cf168;
        }
    }
    ctx->pc = 0x2CF104u;
label_2cf104:
    // 0x2cf104: 0x8c62b8f4
    ctx->pc = 0x2cf104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294949108)));
    // 0x2cf108: 0x15020003
    ctx->pc = 0x2CF108u;
    {
        const bool branch_taken_0x2cf108 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x2CF10Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2cf108) {
            ctx->pc = 0x2CF118u;
            goto label_2cf118;
        }
    }
    ctx->pc = 0x2CF110u;
    // 0x2cf110: 0x25020001
    ctx->pc = 0x2cf110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cf114: 0xac62b8f4
    ctx->pc = 0x2cf114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949108), GPR_U32(ctx, 2));
label_2cf118:
    // 0x2cf118: 0x2484b8f8
    ctx->pc = 0x2cf118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949112));
    // 0x2cf11c: 0x3c02003a
    ctx->pc = 0x2cf11cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf120: 0x8c42b8f4
    ctx->pc = 0x2cf120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949108)));
    // 0x2cf124: 0x24050024
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2cf128: 0x451018
    ctx->pc = 0x2cf128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cf12c: 0x441021
    ctx->pc = 0x2cf12cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cf130: 0x2403ffff
    ctx->pc = 0x2cf130u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf134: 0xa4430000
    ctx->pc = 0x2cf134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cf138: 0x1051018
    ctx->pc = 0x2cf138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cf13c: 0x448021
    ctx->pc = 0x2cf13cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cf140: 0x8e020014
    ctx->pc = 0x2cf140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cf144: 0x5440000d
    ctx->pc = 0x2CF144u;
    {
        const bool branch_taken_0x2cf144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf144) {
            ctx->pc = 0x2CF148u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2CF17Cu;
            goto label_2cf17c;
        }
    }
    ctx->pc = 0x2CF14Cu;
    // 0x2cf14c: 0x8d23000c
    ctx->pc = 0x2cf14cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2cf150: 0x24630004
    ctx->pc = 0x2cf150u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cf154: 0x8d220008
    ctx->pc = 0x2cf154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2cf158: 0x43102a
    ctx->pc = 0x2cf158u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2cf15c: 0x10400006
    ctx->pc = 0x2CF15Cu;
    {
        const bool branch_taken_0x2cf15c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF160u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2cf15c) {
            ctx->pc = 0x2CF178u;
            goto label_2cf178;
        }
    }
    ctx->pc = 0x2CF164u;
    // 0x2cf164: 0x24847690
    ctx->pc = 0x2cf164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30352));
label_2cf168:
    // 0x2cf168: 0xc0b492e
    ctx->pc = 0x2CF168u;
    SET_GPR_U32(ctx, 31, 0x2CF170u);
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF170u; }
    }
    if (ctx->pc != 0x2CF170u) { return; }
    ctx->pc = 0x2CF170u;
    // 0x2cf170: 0x10000040
    ctx->pc = 0x2CF170u;
    {
        const bool branch_taken_0x2cf170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF174u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf170) {
            ctx->pc = 0x2CF274u;
            goto label_2cf274;
        }
    }
    ctx->pc = 0x2CF178u;
label_2cf178:
    // 0x2cf178: 0xa6000002
    ctx->pc = 0x2cf178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_2cf17c:
    // 0x2cf17c: 0x2402ffff
    ctx->pc = 0x2cf17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf180: 0xae020004
    ctx->pc = 0x2cf180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2cf184: 0x3c0280ff
    ctx->pc = 0x2cf184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33023 << 16));
    // 0x2cf188: 0x3442ffff
    ctx->pc = 0x2cf188u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2cf18c: 0xae020008
    ctx->pc = 0x2cf18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2cf190: 0xa600000c
    ctx->pc = 0x2cf190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cf194: 0xa600000e
    ctx->pc = 0x2cf194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cf198: 0x8e020014
    ctx->pc = 0x2cf198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cf19c: 0x1440000b
    ctx->pc = 0x2CF19Cu;
    {
        const bool branch_taken_0x2cf19c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF1A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf19c) {
            ctx->pc = 0x2CF1CCu;
            goto label_2cf1cc;
        }
    }
    ctx->pc = 0x2CF1A4u;
    // 0x2cf1a4: 0x8d22000c
    ctx->pc = 0x2cf1a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2cf1a8: 0xae020010
    ctx->pc = 0x2cf1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2cf1ac: 0x21140
    ctx->pc = 0x2cf1acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x2cf1b0: 0x8d230004
    ctx->pc = 0x2cf1b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2cf1b4: 0x431021
    ctx->pc = 0x2cf1b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf1b8: 0xae020014
    ctx->pc = 0x2cf1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2cf1bc: 0x8d22000c
    ctx->pc = 0x2cf1bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2cf1c0: 0x24420004
    ctx->pc = 0x2cf1c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cf1c4: 0xad22000c
    ctx->pc = 0x2cf1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
label_2cf1c8:
    // 0x2cf1c8: 0x8e020014
    ctx->pc = 0x2cf1c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2cf1cc:
    // 0x2cf1cc: 0x41940
    ctx->pc = 0x2cf1ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x2cf1d0: 0x621021
    ctx->pc = 0x2cf1d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf1d4: 0xac400000
    ctx->pc = 0x2cf1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cf1d8: 0x8e020014
    ctx->pc = 0x2cf1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cf1dc: 0x621021
    ctx->pc = 0x2cf1dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf1e0: 0xac400004
    ctx->pc = 0x2cf1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cf1e4: 0x8e020014
    ctx->pc = 0x2cf1e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cf1e8: 0x621021
    ctx->pc = 0x2cf1e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf1ec: 0xac400008
    ctx->pc = 0x2cf1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2cf1f0: 0x8e020014
    ctx->pc = 0x2cf1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cf1f4: 0x621821
    ctx->pc = 0x2cf1f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf1f8: 0x24840001
    ctx->pc = 0x2cf1f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cf1fc: 0x28820004
    ctx->pc = 0x2cf1fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2cf200: 0x1440fff1
    ctx->pc = 0x2CF200u;
    {
        const bool branch_taken_0x2cf200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF204u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2cf200) {
            ctx->pc = 0x2CF1C8u;
            goto label_2cf1c8;
        }
    }
    ctx->pc = 0x2CF208u;
    // 0x2cf208: 0x8d220000
    ctx->pc = 0x2cf208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2cf20c: 0x1040000e
    ctx->pc = 0x2CF20Cu;
    {
        const bool branch_taken_0x2cf20c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF210u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf20c) {
            ctx->pc = 0x2CF248u;
            goto label_2cf248;
        }
    }
    ctx->pc = 0x2CF214u;
    // 0x2cf214: 0x8c62001c
    ctx->pc = 0x2cf214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cf218: 0x50400009
    ctx->pc = 0x2CF218u;
    {
        const bool branch_taken_0x2cf218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf218) {
            ctx->pc = 0x2CF21Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
            ctx->pc = 0x2CF240u;
            goto label_2cf240;
        }
    }
    ctx->pc = 0x2CF220u;
label_2cf220:
    // 0x2cf220: 0x8c63001c
    ctx->pc = 0x2cf220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cf224: 0x8c62001c
    ctx->pc = 0x2cf224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cf228: 0x0
    ctx->pc = 0x2cf228u;
    // NOP
    // 0x2cf22c: 0x0
    ctx->pc = 0x2cf22cu;
    // NOP
    // 0x2cf230: 0x0
    ctx->pc = 0x2cf230u;
    // NOP
    // 0x2cf234: 0x1440fffa
    ctx->pc = 0x2CF234u;
    {
        const bool branch_taken_0x2cf234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf234) {
            ctx->pc = 0x2CF220u;
            goto label_2cf220;
        }
    }
    ctx->pc = 0x2CF23Cu;
    // 0x2cf23c: 0xac70001c
    ctx->pc = 0x2cf23cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
label_2cf240:
    // 0x2cf240: 0x10000003
    ctx->pc = 0x2CF240u;
    {
        const bool branch_taken_0x2cf240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF244u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        if (branch_taken_0x2cf240) {
            ctx->pc = 0x2CF250u;
            goto label_2cf250;
        }
    }
    ctx->pc = 0x2CF248u;
label_2cf248:
    // 0x2cf248: 0xad300000
    ctx->pc = 0x2cf248u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 16));
    // 0x2cf24c: 0xae000018
    ctx->pc = 0x2cf24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2cf250:
    // 0x2cf250: 0xae00001c
    ctx->pc = 0x2cf250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2cf254: 0xae090020
    ctx->pc = 0x2cf254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x2cf258: 0x200202d
    ctx->pc = 0x2cf258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf25c: 0xc0b3bd8
    ctx->pc = 0x2CF25Cu;
    SET_GPR_U32(ctx, 31, 0x2CF264u);
    ctx->pc = 0x2CF260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CEF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPolyInstUpdateVerts_0x2cef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF264u; }
    }
    if (ctx->pc != 0x2CF264u) { return; }
    ctx->pc = 0x2CF264u;
    // 0x2cf264: 0x200202d
    ctx->pc = 0x2cf264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf268: 0xc0b3b8e
    ctx->pc = 0x2CF268u;
    SET_GPR_U32(ctx, 31, 0x2CF270u);
    ctx->pc = 0x2CF26Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CEE38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPolyInstUpdateTex_0x2cee38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF270u; }
    }
    if (ctx->pc != 0x2CF270u) { return; }
    ctx->pc = 0x2CF270u;
    // 0x2cf270: 0x200102d
    ctx->pc = 0x2cf270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf274:
    // 0x2cf274: 0xdfbf0020
    ctx->pc = 0x2cf274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf278: 0xdfb10010
    ctx->pc = 0x2cf278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf27c: 0xdfb00000
    ctx->pc = 0x2cf27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf280: 0x3e00008
    ctx->pc = 0x2CF280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF284u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF088u: goto label_2cf088;
            case 0x2CF09Cu: goto label_2cf09c;
            case 0x2CF0D0u: goto label_2cf0d0;
            case 0x2CF0ECu: goto label_2cf0ec;
            case 0x2CF104u: goto label_2cf104;
            case 0x2CF118u: goto label_2cf118;
            case 0x2CF168u: goto label_2cf168;
            case 0x2CF178u: goto label_2cf178;
            case 0x2CF17Cu: goto label_2cf17c;
            case 0x2CF1C8u: goto label_2cf1c8;
            case 0x2CF1CCu: goto label_2cf1cc;
            case 0x2CF220u: goto label_2cf220;
            case 0x2CF240u: goto label_2cf240;
            case 0x2CF248u: goto label_2cf248;
            case 0x2CF250u: goto label_2cf250;
            case 0x2CF274u: goto label_2cf274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF288u;
}
