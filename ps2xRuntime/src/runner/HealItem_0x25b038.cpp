#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: HealItem
// Address: 0x25b038 - 0x25b4e0
void HealItem_0x25b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b038u;

    // 0x25b038: 0x27bdff70
    ctx->pc = 0x25b038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25b03c: 0xffbf0080
    ctx->pc = 0x25b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25b040: 0xffb60070
    ctx->pc = 0x25b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25b044: 0xffb50060
    ctx->pc = 0x25b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25b048: 0xffb40050
    ctx->pc = 0x25b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25b04c: 0xffb30040
    ctx->pc = 0x25b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25b050: 0xffb20030
    ctx->pc = 0x25b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25b054: 0xffb10020
    ctx->pc = 0x25b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25b058: 0xffb00010
    ctx->pc = 0x25b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25b05c: 0x80882d
    ctx->pc = 0x25b05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b060: 0xa0b02d
    ctx->pc = 0x25b060u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b064: 0x8e220000
    ctx->pc = 0x25b064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b068: 0x24550004
    ctx->pc = 0x25b068u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4));
    // 0x25b06c: 0x2414ffff
    ctx->pc = 0x25b06cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b070: 0x8ed02ac0
    ctx->pc = 0x25b070u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 22), 10944)));
    // 0x25b074: 0x8ec20008
    ctx->pc = 0x25b074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x25b078: 0x30520003
    ctx->pc = 0x25b078u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 3));
    // 0x25b07c: 0x2413ffff
    ctx->pc = 0x25b07cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b080: 0xc094e70
    ctx->pc = 0x25B080u;
    SET_GPR_U32(ctx, 31, 0x25B088u);
    ctx->pc = 0x25B084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B088u; }
    }
    if (ctx->pc != 0x25B088u) { return; }
    ctx->pc = 0x25B088u;
    // 0x25b088: 0xc7a00004
    ctx->pc = 0x25b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b08c: 0x3c014000
    ctx->pc = 0x25b08cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x25b090: 0x44810800
    ctx->pc = 0x25b090u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x25b094: 0x46010000
    ctx->pc = 0x25b094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25b098: 0xe7a00004
    ctx->pc = 0x25b098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25b09c: 0x8e220000
    ctx->pc = 0x25b09cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b0a0: 0x8c430000
    ctx->pc = 0x25b0a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b0a4: 0x24020002
    ctx->pc = 0x25b0a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b0a8: 0x10620048
    ctx->pc = 0x25B0A8u;
    {
        const bool branch_taken_0x25b0a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B0ACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x25b0a8) {
            ctx->pc = 0x25B1CCu;
            goto label_25b1cc;
        }
    }
    ctx->pc = 0x25B0B0u;
    // 0x25b0b0: 0x10400005
    ctx->pc = 0x25B0B0u;
    {
        const bool branch_taken_0x25b0b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B0B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25b0b0) {
            ctx->pc = 0x25B0C8u;
            goto label_25b0c8;
        }
    }
    ctx->pc = 0x25B0B8u;
    // 0x25b0b8: 0x5062000a
    ctx->pc = 0x25B0B8u;
    {
        const bool branch_taken_0x25b0b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25b0b8) {
            ctx->pc = 0x25B0BCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x25B0E4u;
            goto label_25b0e4;
        }
    }
    ctx->pc = 0x25B0C0u;
    // 0x25b0c0: 0x100000f4
    ctx->pc = 0x25B0C0u;
    {
        const bool branch_taken_0x25b0c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25b0c0) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B0C8u;
label_25b0c8:
    // 0x25b0c8: 0x24020008
    ctx->pc = 0x25b0c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x25b0cc: 0x106200c6
    ctx->pc = 0x25B0CCu;
    {
        const bool branch_taken_0x25b0cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B0D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x25b0cc) {
            ctx->pc = 0x25B3E8u;
            goto label_25b3e8;
        }
    }
    ctx->pc = 0x25B0D4u;
    // 0x25b0d4: 0x506200ab
    ctx->pc = 0x25B0D4u;
    {
        const bool branch_taken_0x25b0d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25b0d4) {
            ctx->pc = 0x25B0D8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x25B384u;
            goto label_25b384;
        }
    }
    ctx->pc = 0x25B0DCu;
    // 0x25b0dc: 0x100000ed
    ctx->pc = 0x25B0DCu;
    {
        const bool branch_taken_0x25b0dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25b0dc) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B0E4u;
label_25b0e4:
    // 0x25b0e4: 0x10620020
    ctx->pc = 0x25B0E4u;
    {
        const bool branch_taken_0x25b0e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B0E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x25b0e4) {
            ctx->pc = 0x25B168u;
            goto label_25b168;
        }
    }
    ctx->pc = 0x25B0ECu;
    // 0x25b0ec: 0x146200e9
    ctx->pc = 0x25B0ECu;
    {
        const bool branch_taken_0x25b0ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25B0F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25b0ec) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B0F4u;
    // 0x25b0f4: 0x164200e7
    ctx->pc = 0x25B0F4u;
    {
        const bool branch_taken_0x25b0f4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x25b0f4) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B0FCu;
    // 0x25b0fc: 0x8e2200f4
    ctx->pc = 0x25b0fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x25b100: 0x2842ff9d
    ctx->pc = 0x25b100u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4294967197));
    // 0x25b104: 0x1040000b
    ctx->pc = 0x25B104u;
    {
        const bool branch_taken_0x25b104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B108u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 50));
        if (branch_taken_0x25b104) {
            ctx->pc = 0x25B134u;
            goto label_25b134;
        }
    }
    ctx->pc = 0x25B10Cu;
    // 0x25b10c: 0x144000e1
    ctx->pc = 0x25B10Cu;
    {
        const bool branch_taken_0x25b10c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B110u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b10c) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B114u;
    // 0x25b114: 0x220202d
    ctx->pc = 0x25b114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b118: 0x8c45cdac
    ctx->pc = 0x25b118u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x25b11c: 0x3c06003b
    ctx->pc = 0x25b11cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b120: 0xc096984
    ctx->pc = 0x25B120u;
    SET_GPR_U32(ctx, 31, 0x25B128u);
    ctx->pc = 0x25B124u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294937760));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B128u; }
    }
    if (ctx->pc != 0x25B128u) { return; }
    ctx->pc = 0x25B128u;
    // 0x25b128: 0x24020064
    ctx->pc = 0x25b128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x25b12c: 0x10000047
    ctx->pc = 0x25B12Cu;
    {
        const bool branch_taken_0x25b12c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B130u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x25b12c) {
            ctx->pc = 0x25B24Cu;
            goto label_25b24c;
        }
    }
    ctx->pc = 0x25B134u;
label_25b134:
    // 0x25b134: 0x8e2200f4
    ctx->pc = 0x25b134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x25b138: 0x44100d6
    ctx->pc = 0x25B138u;
    {
        const bool branch_taken_0x25b138 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25B13Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x25b138) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B140u;
    // 0x25b140: 0x144000d4
    ctx->pc = 0x25B140u;
    {
        const bool branch_taken_0x25b140 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B144u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b140) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B148u;
    // 0x25b148: 0x220202d
    ctx->pc = 0x25b148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b14c: 0x8c45cdac
    ctx->pc = 0x25b14cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x25b150: 0x3c06003b
    ctx->pc = 0x25b150u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b154: 0xc096984
    ctx->pc = 0x25B154u;
    SET_GPR_U32(ctx, 31, 0x25B15Cu);
    ctx->pc = 0x25B158u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294937784));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B15Cu; }
    }
    if (ctx->pc != 0x25B15Cu) { return; }
    ctx->pc = 0x25B15Cu;
    // 0x25b15c: 0x24020032
    ctx->pc = 0x25b15cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
    // 0x25b160: 0x10000047
    ctx->pc = 0x25B160u;
    {
        const bool branch_taken_0x25b160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B164u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x25b160) {
            ctx->pc = 0x25B280u;
            goto label_25b280;
        }
    }
    ctx->pc = 0x25B168u;
label_25b168:
    // 0x25b168: 0x164000ca
    ctx->pc = 0x25B168u;
    {
        const bool branch_taken_0x25b168 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x25b168) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B170u;
    // 0x25b170: 0x8e2200f4
    ctx->pc = 0x25b170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x25b174: 0x2842000b
    ctx->pc = 0x25b174u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x25b178: 0x104000c6
    ctx->pc = 0x25B178u;
    {
        const bool branch_taken_0x25b178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B17Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 50));
        if (branch_taken_0x25b178) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B180u;
    // 0x25b180: 0x14400009
    ctx->pc = 0x25B180u;
    {
        const bool branch_taken_0x25b180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B184u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x25b180) {
            ctx->pc = 0x25B1A8u;
            goto label_25b1a8;
        }
    }
    ctx->pc = 0x25B188u;
    // 0x25b188: 0x3c020034
    ctx->pc = 0x25b188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25b18c: 0x220202d
    ctx->pc = 0x25b18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b190: 0x8c45cdac
    ctx->pc = 0x25b190u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x25b194: 0x3c06003b
    ctx->pc = 0x25b194u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b198: 0xc096984
    ctx->pc = 0x25B198u;
    SET_GPR_U32(ctx, 31, 0x25B1A0u);
    ctx->pc = 0x25B19Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938472));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1A0u; }
    }
    if (ctx->pc != 0x25B1A0u) { return; }
    ctx->pc = 0x25B1A0u;
    // 0x25b1a0: 0x10000058
    ctx->pc = 0x25B1A0u;
    {
        const bool branch_taken_0x25b1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B1A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
        if (branch_taken_0x25b1a0) {
            ctx->pc = 0x25B304u;
            goto label_25b304;
        }
    }
    ctx->pc = 0x25B1A8u;
label_25b1a8:
    // 0x25b1a8: 0x144000ba
    ctx->pc = 0x25B1A8u;
    {
        const bool branch_taken_0x25b1a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B1ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b1a8) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B1B0u;
    // 0x25b1b0: 0x220202d
    ctx->pc = 0x25b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1b4: 0x8c45cdac
    ctx->pc = 0x25b1b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x25b1b8: 0x3c06003b
    ctx->pc = 0x25b1b8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b1bc: 0xc096984
    ctx->pc = 0x25B1BCu;
    SET_GPR_U32(ctx, 31, 0x25B1C4u);
    ctx->pc = 0x25B1C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938488));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1C4u; }
    }
    if (ctx->pc != 0x25B1C4u) { return; }
    ctx->pc = 0x25B1C4u;
    // 0x25b1c4: 0x1000006b
    ctx->pc = 0x25B1C4u;
    {
        const bool branch_taken_0x25b1c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B1C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x25b1c4) {
            ctx->pc = 0x25B374u;
            goto label_25b374;
        }
    }
    ctx->pc = 0x25B1CCu;
label_25b1cc:
    // 0x25b1cc: 0x862400f0
    ctx->pc = 0x25b1ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x25b1d0: 0x48000b0
    ctx->pc = 0x25B1D0u;
    {
        const bool branch_taken_0x25b1d0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25B1D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x25b1d0) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B1D8u;
    // 0x25b1d8: 0x24020050
    ctx->pc = 0x25b1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x25b1dc: 0x821018
    ctx->pc = 0x25b1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25b1e0: 0x8c63fa60
    ctx->pc = 0x25b1e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
    // 0x25b1e4: 0x432821
    ctx->pc = 0x25b1e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b1e8: 0x8ca40000
    ctx->pc = 0x25b1e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25b1ec: 0x24020001
    ctx->pc = 0x25b1ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b1f0: 0x148200a8
    ctx->pc = 0x25B1F0u;
    {
        const bool branch_taken_0x25b1f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x25b1f0) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B1F8u;
    // 0x25b1f8: 0x8ca30004
    ctx->pc = 0x25b1f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25b1fc: 0x10640023
    ctx->pc = 0x25B1FCu;
    {
        const bool branch_taken_0x25b1fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x25B200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x25b1fc) {
            ctx->pc = 0x25B28Cu;
            goto label_25b28c;
        }
    }
    ctx->pc = 0x25B204u;
    // 0x25b204: 0x146200a3
    ctx->pc = 0x25B204u;
    {
        const bool branch_taken_0x25b204 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25b204) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B20Cu;
    // 0x25b20c: 0x822200dc
    ctx->pc = 0x25b20cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x25b210: 0x1c4000a0
    ctx->pc = 0x25B210u;
    {
        const bool branch_taken_0x25b210 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25B214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25b210) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B218u;
    // 0x25b218: 0x1642009e
    ctx->pc = 0x25B218u;
    {
        const bool branch_taken_0x25b218 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x25b218) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B220u;
    // 0x25b220: 0x84a20040
    ctx->pc = 0x25b220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25b224: 0x2842ff9d
    ctx->pc = 0x25b224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4294967197));
    // 0x25b228: 0x1040000b
    ctx->pc = 0x25B228u;
    {
        const bool branch_taken_0x25b228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B22Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 50));
        if (branch_taken_0x25b228) {
            ctx->pc = 0x25B258u;
            goto label_25b258;
        }
    }
    ctx->pc = 0x25B230u;
    // 0x25b230: 0x14400098
    ctx->pc = 0x25B230u;
    {
        const bool branch_taken_0x25b230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B234u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25b230) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B238u;
    // 0x25b238: 0x24050003
    ctx->pc = 0x25b238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b23c: 0x3c06003b
    ctx->pc = 0x25b23cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b240: 0xc094e02
    ctx->pc = 0x25B240u;
    SET_GPR_U32(ctx, 31, 0x25B248u);
    ctx->pc = 0x25B244u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294937760));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B248u; }
    }
    if (ctx->pc != 0x25B248u) { return; }
    ctx->pc = 0x25B248u;
    // 0x25b248: 0xa62200f0
    ctx->pc = 0x25b248u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_25b24c:
    // 0x25b24c: 0x2414002f
    ctx->pc = 0x25b24cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 47));
    // 0x25b250: 0x10000090
    ctx->pc = 0x25B250u;
    {
        const bool branch_taken_0x25b250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B254u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 144));
        if (branch_taken_0x25b250) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B258u;
label_25b258:
    // 0x25b258: 0x84a20040
    ctx->pc = 0x25b258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25b25c: 0x441008d
    ctx->pc = 0x25B25Cu;
    {
        const bool branch_taken_0x25b25c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25B260u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x25b25c) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B264u;
    // 0x25b264: 0x1440008b
    ctx->pc = 0x25B264u;
    {
        const bool branch_taken_0x25b264 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B268u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25b264) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B26Cu;
    // 0x25b26c: 0x24050003
    ctx->pc = 0x25b26cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b270: 0x3c06003b
    ctx->pc = 0x25b270u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b274: 0xc094e02
    ctx->pc = 0x25B274u;
    SET_GPR_U32(ctx, 31, 0x25B27Cu);
    ctx->pc = 0x25B278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294937784));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B27Cu; }
    }
    if (ctx->pc != 0x25B27Cu) { return; }
    ctx->pc = 0x25B27Cu;
    // 0x25b27c: 0xa62200f0
    ctx->pc = 0x25b27cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_25b280:
    // 0x25b280: 0x2414002f
    ctx->pc = 0x25b280u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 47));
    // 0x25b284: 0x10000083
    ctx->pc = 0x25B284u;
    {
        const bool branch_taken_0x25b284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B288u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 143));
        if (branch_taken_0x25b284) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B28Cu;
label_25b28c:
    // 0x25b28c: 0x16400081
    ctx->pc = 0x25B28Cu;
    {
        const bool branch_taken_0x25b28c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x25b28c) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B294u;
    // 0x25b294: 0x84a20040
    ctx->pc = 0x25b294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25b298: 0x2842000b
    ctx->pc = 0x25b298u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x25b29c: 0x1040007d
    ctx->pc = 0x25B29Cu;
    {
        const bool branch_taken_0x25b29c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B2A0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 50));
        if (branch_taken_0x25b29c) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B2A4u;
    // 0x25b2a4: 0x1440001b
    ctx->pc = 0x25B2A4u;
    {
        const bool branch_taken_0x25b2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B2A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x25b2a4) {
            ctx->pc = 0x25B314u;
            goto label_25b314;
        }
    }
    ctx->pc = 0x25B2ACu;
    // 0x25b2ac: 0x8e220000
    ctx->pc = 0x25b2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b2b0: 0x8c430004
    ctx->pc = 0x25b2b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25b2b4: 0x2402002b
    ctx->pc = 0x25b2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x25b2b8: 0x10620006
    ctx->pc = 0x25B2B8u;
    {
        const bool branch_taken_0x25b2b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B2BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b2b8) {
            ctx->pc = 0x25B2D4u;
            goto label_25b2d4;
        }
    }
    ctx->pc = 0x25B2C0u;
    // 0x25b2c0: 0x220202d
    ctx->pc = 0x25b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2c4: 0x8c45cda0
    ctx->pc = 0x25b2c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x25b2c8: 0x3c06003b
    ctx->pc = 0x25b2c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b2cc: 0xc096984
    ctx->pc = 0x25B2CCu;
    SET_GPR_U32(ctx, 31, 0x25B2D4u);
    ctx->pc = 0x25B2D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938504));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B2D4u; }
    }
    if (ctx->pc != 0x25B2D4u) { return; }
    ctx->pc = 0x25B2D4u;
label_25b2d4:
    // 0x25b2d4: 0x240300c8
    ctx->pc = 0x25b2d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 200));
    // 0x25b2d8: 0xa6230100
    ctx->pc = 0x25b2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 3));
    // 0x25b2dc: 0x822200dc
    ctx->pc = 0x25b2dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x25b2e0: 0x14400008
    ctx->pc = 0x25B2E0u;
    {
        const bool branch_taken_0x25b2e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B2E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
        if (branch_taken_0x25b2e0) {
            ctx->pc = 0x25B304u;
            goto label_25b304;
        }
    }
    ctx->pc = 0x25B2E8u;
    // 0x25b2e8: 0x24040001
    ctx->pc = 0x25b2e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b2ec: 0x24050001
    ctx->pc = 0x25b2ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b2f0: 0x3c06003b
    ctx->pc = 0x25b2f0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b2f4: 0xc094e02
    ctx->pc = 0x25B2F4u;
    SET_GPR_U32(ctx, 31, 0x25B2FCu);
    ctx->pc = 0x25B2F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938472));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B2FCu; }
    }
    if (ctx->pc != 0x25B2FCu) { return; }
    ctx->pc = 0x25B2FCu;
    // 0x25b2fc: 0x10000002
    ctx->pc = 0x25B2FCu;
    {
        const bool branch_taken_0x25b2fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B300u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x25b2fc) {
            ctx->pc = 0x25B308u;
            goto label_25b308;
        }
    }
    ctx->pc = 0x25B304u;
label_25b304:
    // 0x25b304: 0xae2200f4
    ctx->pc = 0x25b304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_25b308:
    // 0x25b308: 0x24140030
    ctx->pc = 0x25b308u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
    // 0x25b30c: 0x10000061
    ctx->pc = 0x25B30Cu;
    {
        const bool branch_taken_0x25b30c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B310u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 140));
        if (branch_taken_0x25b30c) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B314u;
label_25b314:
    // 0x25b314: 0x1440005f
    ctx->pc = 0x25B314u;
    {
        const bool branch_taken_0x25b314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25b314) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B31Cu;
    // 0x25b31c: 0x8e220000
    ctx->pc = 0x25b31cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b320: 0x8c430004
    ctx->pc = 0x25b320u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25b324: 0x2402002b
    ctx->pc = 0x25b324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x25b328: 0x10620006
    ctx->pc = 0x25B328u;
    {
        const bool branch_taken_0x25b328 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B32Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b328) {
            ctx->pc = 0x25B344u;
            goto label_25b344;
        }
    }
    ctx->pc = 0x25B330u;
    // 0x25b330: 0x220202d
    ctx->pc = 0x25b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b334: 0x8c45cda0
    ctx->pc = 0x25b334u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x25b338: 0x3c06003b
    ctx->pc = 0x25b338u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b33c: 0xc096984
    ctx->pc = 0x25B33Cu;
    SET_GPR_U32(ctx, 31, 0x25B344u);
    ctx->pc = 0x25B340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938512));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B344u; }
    }
    if (ctx->pc != 0x25B344u) { return; }
    ctx->pc = 0x25B344u;
label_25b344:
    // 0x25b344: 0x822200dc
    ctx->pc = 0x25b344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x25b348: 0x1440000a
    ctx->pc = 0x25B348u;
    {
        const bool branch_taken_0x25b348 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B34Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x25b348) {
            ctx->pc = 0x25B374u;
            goto label_25b374;
        }
    }
    ctx->pc = 0x25B350u;
    // 0x25b350: 0x24020064
    ctx->pc = 0x25b350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x25b354: 0xa6220100
    ctx->pc = 0x25b354u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b358: 0x24040001
    ctx->pc = 0x25b358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b35c: 0x24050001
    ctx->pc = 0x25b35cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b360: 0x3c06003b
    ctx->pc = 0x25b360u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x25b364: 0xc094e02
    ctx->pc = 0x25B364u;
    SET_GPR_U32(ctx, 31, 0x25B36Cu);
    ctx->pc = 0x25B368u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938488));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B36Cu; }
    }
    if (ctx->pc != 0x25B36Cu) { return; }
    ctx->pc = 0x25B36Cu;
    // 0x25b36c: 0x10000002
    ctx->pc = 0x25B36Cu;
    {
        const bool branch_taken_0x25b36c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B370u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x25b36c) {
            ctx->pc = 0x25B378u;
            goto label_25b378;
        }
    }
    ctx->pc = 0x25B374u;
label_25b374:
    // 0x25b374: 0xae2200f4
    ctx->pc = 0x25b374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_25b378:
    // 0x25b378: 0x24140030
    ctx->pc = 0x25b378u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
    // 0x25b37c: 0x10000045
    ctx->pc = 0x25B37Cu;
    {
        const bool branch_taken_0x25b37c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B380u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 139));
        if (branch_taken_0x25b37c) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B384u;
label_25b384:
    // 0x25b384: 0x2402002a
    ctx->pc = 0x25b384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
    // 0x25b388: 0x10620006
    ctx->pc = 0x25B388u;
    {
        const bool branch_taken_0x25b388 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B38Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 43));
        if (branch_taken_0x25b388) {
            ctx->pc = 0x25B3A4u;
            goto label_25b3a4;
        }
    }
    ctx->pc = 0x25B390u;
    // 0x25b390: 0x14400002
    ctx->pc = 0x25B390u;
    {
        const bool branch_taken_0x25b390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B394u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
        if (branch_taken_0x25b390) {
            ctx->pc = 0x25B39Cu;
            goto label_25b39c;
        }
    }
    ctx->pc = 0x25B398u;
    // 0x25b398: 0x2402002b
    ctx->pc = 0x25b398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_25b39c:
    // 0x25b39c: 0x1062003d
    ctx->pc = 0x25B39Cu;
    {
        const bool branch_taken_0x25b39c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25b39c) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B3A4u;
label_25b3a4:
    // 0x25b3a4: 0x24020003
    ctx->pc = 0x25b3a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b3a8: 0x1642003a
    ctx->pc = 0x25B3A8u;
    {
        const bool branch_taken_0x25b3a8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x25B3ACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 50));
        if (branch_taken_0x25b3a8) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B3B0u;
    // 0x25b3b0: 0x1440000a
    ctx->pc = 0x25B3B0u;
    {
        const bool branch_taken_0x25b3b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B3B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x25b3b0) {
            ctx->pc = 0x25B3DCu;
            goto label_25b3dc;
        }
    }
    ctx->pc = 0x25B3B8u;
    // 0x25b3b8: 0x220202d
    ctx->pc = 0x25b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3bc: 0x3c01461c
    ctx->pc = 0x25b3bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x25b3c0: 0x34213c00
    ctx->pc = 0x25b3c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15360));
    // 0x25b3c4: 0x44816000
    ctx->pc = 0x25b3c4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25b3c8: 0x282d
    ctx->pc = 0x25b3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3cc: 0xc096992
    ctx->pc = 0x25B3CCu;
    SET_GPR_U32(ctx, 31, 0x25B3D4u);
    ctx->pc = 0x25B3D0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->pc = 0x25A648u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageItem_0x25a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B3D4u; }
    }
    if (ctx->pc != 0x25B3D4u) { return; }
    ctx->pc = 0x25B3D4u;
    // 0x25b3d4: 0x1000002f
    ctx->pc = 0x25B3D4u;
    {
        const bool branch_taken_0x25b3d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B3D8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 146));
        if (branch_taken_0x25b3d4) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B3DCu;
label_25b3dc:
    // 0x25b3dc: 0xa62200f4
    ctx->pc = 0x25b3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b3e0: 0x1000002c
    ctx->pc = 0x25B3E0u;
    {
        const bool branch_taken_0x25b3e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B3E4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 145));
        if (branch_taken_0x25b3e0) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B3E8u;
label_25b3e8:
    // 0x25b3e8: 0x24020001
    ctx->pc = 0x25b3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b3ec: 0x16420029
    ctx->pc = 0x25B3ECu;
    {
        const bool branch_taken_0x25b3ec = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x25B3F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 50));
        if (branch_taken_0x25b3ec) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B3F4u;
    // 0x25b3f4: 0x5440001a
    ctx->pc = 0x25B3F4u;
    {
        const bool branch_taken_0x25b3f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25b3f4) {
            ctx->pc = 0x25B3F8u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 218)));
            ctx->pc = 0x25B460u;
            goto label_25b460;
        }
    }
    ctx->pc = 0x25B3FCu;
    // 0x25b3fc: 0x862200d8
    ctx->pc = 0x25b3fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x25b400: 0x10400024
    ctx->pc = 0x25B400u;
    {
        const bool branch_taken_0x25b400 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B404u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x25b400) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B408u;
    // 0x25b408: 0x8e260000
    ctx->pc = 0x25b408u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b40c: 0x26042ab0
    ctx->pc = 0x25b40cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10928));
    // 0x25b410: 0x3c05003b
    ctx->pc = 0x25b410u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25b414: 0x24a58f98
    ctx->pc = 0x25b414u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938520));
    // 0x25b418: 0xc0b6252
    ctx->pc = 0x25B418u;
    SET_GPR_U32(ctx, 31, 0x25B420u);
    ctx->pc = 0x25B41Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 40));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B420u; }
    }
    if (ctx->pc != 0x25B420u) { return; }
    ctx->pc = 0x25B420u;
    // 0x25b420: 0x26042ab0
    ctx->pc = 0x25b420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10928));
    // 0x25b424: 0xc093eaa
    ctx->pc = 0x25B424u;
    SET_GPR_U32(ctx, 31, 0x25B42Cu);
    ctx->pc = 0x25B428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatchAnyHeader_0x24faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B42Cu; }
    }
    if (ctx->pc != 0x25B42Cu) { return; }
    ctx->pc = 0x25B42Cu;
    // 0x25b42c: 0x10400007
    ctx->pc = 0x25B42Cu;
    {
        const bool branch_taken_0x25b42c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B430u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b42c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B434u;
    // 0x25b434: 0xc09696c
    ctx->pc = 0x25B434u;
    SET_GPR_U32(ctx, 31, 0x25B43Cu);
    ctx->pc = 0x25B438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25A5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtreeHeader_0x25a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B43Cu; }
    }
    if (ctx->pc != 0x25B43Cu) { return; }
    ctx->pc = 0x25B43Cu;
    // 0x25b43c: 0xa22000dc
    ctx->pc = 0x25b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 220), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b440: 0xa22000de
    ctx->pc = 0x25b440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 222), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b444: 0x10000003
    ctx->pc = 0x25B444u;
    {
        const bool branch_taken_0x25b444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B448u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x25b444) {
            ctx->pc = 0x25B454u;
            goto label_25b454;
        }
    }
    ctx->pc = 0x25B44Cu;
label_25b44c:
    // 0x25b44c: 0xc094dcc
    ctx->pc = 0x25B44Cu;
    SET_GPR_U32(ctx, 31, 0x25B454u);
    ctx->pc = 0x25B450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B454u; }
    }
    if (ctx->pc != 0x25B454u) { return; }
    ctx->pc = 0x25B454u;
label_25b454:
    // 0x25b454: 0x2413008e
    ctx->pc = 0x25b454u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 142));
    // 0x25b458: 0x1000000e
    ctx->pc = 0x25B458u;
    {
        const bool branch_taken_0x25b458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B45Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x25b458) {
            ctx->pc = 0x25B494u;
            goto label_25b494;
        }
    }
    ctx->pc = 0x25B460u;
label_25b460:
    // 0x25b460: 0x24040031
    ctx->pc = 0x25b460u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 49));
    // 0x25b464: 0x2402021b
    ctx->pc = 0x25b464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 539));
    // 0x25b468: 0x43102a
    ctx->pc = 0x25b468u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x25b46c: 0x82a00a
    ctx->pc = 0x25b46cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 4));
    // 0x25b470: 0xa22000dc
    ctx->pc = 0x25b470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 220), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b474: 0xa22000de
    ctx->pc = 0x25b474u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 222), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b478: 0x24020258
    ctx->pc = 0x25b478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 600));
    // 0x25b47c: 0xa62200da
    ctx->pc = 0x25b47cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b480: 0x26240080
    ctx->pc = 0x25b480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    // 0x25b484: 0x282d
    ctx->pc = 0x25b484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b488: 0xc084a96
    ctx->pc = 0x25B488u;
    SET_GPR_U32(ctx, 31, 0x25B490u);
    ctx->pc = 0x25B48Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B490u; }
    }
    if (ctx->pc != 0x25B490u) { return; }
    ctx->pc = 0x25B490u;
    // 0x25b490: 0x2413008d
    ctx->pc = 0x25b490u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 141));
label_25b494:
    // 0x25b494: 0x6800003
    ctx->pc = 0x25B494u;
    {
        const bool branch_taken_0x25b494 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x25B498u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x25b494) {
            ctx->pc = 0x25B4A4u;
            goto label_25b4a4;
        }
    }
    ctx->pc = 0x25B49Cu;
    // 0x25b49c: 0xc09fdac
    ctx->pc = 0x25B49Cu;
    SET_GPR_U32(ctx, 31, 0x25B4A4u);
    ctx->pc = 0x25B4A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartHealFx_0x27f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B4A4u; }
    }
    if (ctx->pc != 0x25B4A4u) { return; }
    ctx->pc = 0x25B4A4u;
label_25b4a4:
    // 0x25b4a4: 0x6600004
    ctx->pc = 0x25B4A4u;
    {
        const bool branch_taken_0x25b4a4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x25B4A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b4a4) {
            ctx->pc = 0x25B4B8u;
            goto label_25b4b8;
        }
    }
    ctx->pc = 0x25B4ACu;
    // 0x25b4ac: 0x8ec50000
    ctx->pc = 0x25b4acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x25b4b0: 0xc0a3a1c
    ctx->pc = 0x25B4B0u;
    SET_GPR_U32(ctx, 31, 0x25B4B8u);
    ctx->pc = 0x25B4B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B4B8u; }
    }
    if (ctx->pc != 0x25B4B8u) { return; }
    ctx->pc = 0x25B4B8u;
label_25b4b8:
    // 0x25b4b8: 0xdfbf0080
    ctx->pc = 0x25b4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25b4bc: 0xdfb60070
    ctx->pc = 0x25b4bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25b4c0: 0xdfb50060
    ctx->pc = 0x25b4c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25b4c4: 0xdfb40050
    ctx->pc = 0x25b4c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b4c8: 0xdfb30040
    ctx->pc = 0x25b4c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b4cc: 0xdfb20030
    ctx->pc = 0x25b4ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b4d0: 0xdfb10020
    ctx->pc = 0x25b4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b4d4: 0xdfb00010
    ctx->pc = 0x25b4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b4d8: 0x3e00008
    ctx->pc = 0x25B4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B4DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B0C8u: goto label_25b0c8;
            case 0x25B0E4u: goto label_25b0e4;
            case 0x25B134u: goto label_25b134;
            case 0x25B168u: goto label_25b168;
            case 0x25B1A8u: goto label_25b1a8;
            case 0x25B1CCu: goto label_25b1cc;
            case 0x25B24Cu: goto label_25b24c;
            case 0x25B258u: goto label_25b258;
            case 0x25B280u: goto label_25b280;
            case 0x25B28Cu: goto label_25b28c;
            case 0x25B2D4u: goto label_25b2d4;
            case 0x25B304u: goto label_25b304;
            case 0x25B308u: goto label_25b308;
            case 0x25B314u: goto label_25b314;
            case 0x25B344u: goto label_25b344;
            case 0x25B374u: goto label_25b374;
            case 0x25B378u: goto label_25b378;
            case 0x25B384u: goto label_25b384;
            case 0x25B39Cu: goto label_25b39c;
            case 0x25B3A4u: goto label_25b3a4;
            case 0x25B3DCu: goto label_25b3dc;
            case 0x25B3E8u: goto label_25b3e8;
            case 0x25B44Cu: goto label_25b44c;
            case 0x25B454u: goto label_25b454;
            case 0x25B460u: goto label_25b460;
            case 0x25B494u: goto label_25b494;
            case 0x25B4A4u: goto label_25b4a4;
            case 0x25B4B8u: goto label_25b4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B4E0u;
}
