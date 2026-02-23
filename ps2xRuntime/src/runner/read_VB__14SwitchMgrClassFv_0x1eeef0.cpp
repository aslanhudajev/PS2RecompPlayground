#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: read_VB__14SwitchMgrClassFv
// Address: 0x1eeef0 - 0x1ef104
void read_VB__14SwitchMgrClassFv_0x1eeef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("read_VB__14SwitchMgrClassFv");


    ctx->pc = 0x1eeef0u;

    // 0x1eeef0: 0x27bdff80
    ctx->pc = 0x1eeef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1eeef4: 0x7fbf0070
    ctx->pc = 0x1eeef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1eeef8: 0x7fb60060
    ctx->pc = 0x1eeef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1eeefc: 0x7fb50050
    ctx->pc = 0x1eeefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1eef00: 0x7fb40040
    ctx->pc = 0x1eef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eef04: 0x7fb30030
    ctx->pc = 0x1eef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eef08: 0x7fb20020
    ctx->pc = 0x1eef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eef0c: 0x7fb10010
    ctx->pc = 0x1eef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eef10: 0x7fb00000
    ctx->pc = 0x1eef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eef14: 0x70808628
    ctx->pc = 0x1eef14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1eef18: 0x3c020050
    ctx->pc = 0x1eef18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eef1c: 0xc07bccc
    ctx->pc = 0x1EEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF24u);
    ctx->pc = 0x1EEF20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294958256));
    ctx->pc = 0x1EF330u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateOldVal__FP6SWDATA_0x1ef330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF24u; }
        else if (ctx->pc != 0x1EEF24u) { ctx->pc = 0x1EEF24u; }
    }
    if (ctx->pc != 0x1EEF24u) { return; }
    ctx->pc = 0x1EEF24u;
    // 0x1eef24: 0x8e020000
    ctx->pc = 0x1eef24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eef28: 0x10400069
    ctx->pc = 0x1EEF28u;
    {
        const bool branch_taken_0x1eef28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eef28) {
            ctx->pc = 0x1EF0D0u;
            goto label_1ef0d0;
        }
    }
    ctx->pc = 0x1EEF30u;
    // 0x1eef30: 0x3c020051
    ctx->pc = 0x1eef30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1eef34: 0x24554f40
    ctx->pc = 0x1eef34u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 20288));
    // 0x1eef38: 0x3c020050
    ctx->pc = 0x1eef38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eef3c: 0x70008628
    ctx->pc = 0x1eef3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eef40: 0x2456dcb0
    ctx->pc = 0x1eef40u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294958256));
label_1eef44:
    // 0x1eef44: 0x72002628
    ctx->pc = 0x1eef44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eef48: 0x70002e28
    ctx->pc = 0x1eef48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eef4c: 0xc05954a
    ctx->pc = 0x1EEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF54u);
    ctx->pc = 0x1EEF50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x165528u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x165528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF54u; }
        else if (ctx->pc != 0x1EEF54u) { ctx->pc = 0x1EEF54u; }
    }
    if (ctx->pc != 0x1EEF54u) { return; }
    ctx->pc = 0x1EEF54u;
    // 0x1eef54: 0x1040004a
    ctx->pc = 0x1EEF54u;
    {
        const bool branch_taken_0x1eef54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eef54) {
            ctx->pc = 0x1EF080u;
            goto label_1ef080;
        }
    }
    ctx->pc = 0x1EEF5Cu;
    // 0x1eef5c: 0x96a30000
    ctx->pc = 0x1eef5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1eef60: 0x24020006
    ctx->pc = 0x1eef60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eef64: 0x31b03
    ctx->pc = 0x1eef64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1eef68: 0x3063000f
    ctx->pc = 0x1eef68u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1eef6c: 0xa2c30000
    ctx->pc = 0x1eef6cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eef70: 0x92c30000
    ctx->pc = 0x1eef70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1eef74: 0x10620020
    ctx->pc = 0x1EEF74u;
    {
        const bool branch_taken_0x1eef74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1eef74) {
            ctx->pc = 0x1EEFF8u;
            goto label_1eeff8;
        }
    }
    ctx->pc = 0x1EEF7Cu;
    // 0x1eef7c: 0x24020004
    ctx->pc = 0x1eef7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eef80: 0x10620014
    ctx->pc = 0x1EEF80u;
    {
        const bool branch_taken_0x1eef80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1eef80) {
            ctx->pc = 0x1EEFD4u;
            goto label_1eefd4;
        }
    }
    ctx->pc = 0x1EEF88u;
    // 0x1eef88: 0x24020007
    ctx->pc = 0x1eef88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eef8c: 0x10620003
    ctx->pc = 0x1EEF8Cu;
    {
        const bool branch_taken_0x1eef8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1eef8c) {
            ctx->pc = 0x1EEF9Cu;
            goto label_1eef9c;
        }
    }
    ctx->pc = 0x1EEF94u;
    // 0x1eef94: 0x1000001d
    ctx->pc = 0x1EEF94u;
    {
        const bool branch_taken_0x1eef94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEF98u;
        WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1eef94) {
            ctx->pc = 0x1EF00Cu;
            goto label_1ef00c;
        }
    }
    ctx->pc = 0x1EEF9Cu;
label_1eef9c:
    // 0x1eef9c: 0x86a20002
    ctx->pc = 0x1eef9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1eefa0: 0x401027
    ctx->pc = 0x1eefa0u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1eefa4: 0xa6c20002
    ctx->pc = 0x1eefa4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1eefa8: 0x92a20004
    ctx->pc = 0x1eefa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1eefac: 0xa2c2000a
    ctx->pc = 0x1eefacu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eefb0: 0x96a20004
    ctx->pc = 0x1eefb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1eefb4: 0x21203
    ctx->pc = 0x1eefb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eefb8: 0xa2c2000b
    ctx->pc = 0x1eefb8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eefbc: 0x92a20006
    ctx->pc = 0x1eefbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1eefc0: 0xa2c2000c
    ctx->pc = 0x1eefc0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eefc4: 0x96a20006
    ctx->pc = 0x1eefc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1eefc8: 0x21203
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eefcc: 0x10000014
    ctx->pc = 0x1EEFCCu;
    {
        const bool branch_taken_0x1eefcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEFD0u;
        WRITE8(ADD32(GPR_U32(ctx, 22), 13), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1eefcc) {
            ctx->pc = 0x1EF020u;
            goto label_1ef020;
        }
    }
    ctx->pc = 0x1EEFD4u;
label_1eefd4:
    // 0x1eefd4: 0x86a30002
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1eefd8: 0x24020080
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eefdc: 0x601827
    ctx->pc = 0x1eefdcu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1eefe0: 0xa6c30002
    ctx->pc = 0x1eefe0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eefe4: 0xa2c2000a
    ctx->pc = 0x1eefe4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eefe8: 0xa2c2000b
    ctx->pc = 0x1eefe8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eefec: 0xa2c2000c
    ctx->pc = 0x1eefecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eeff0: 0x1000000b
    ctx->pc = 0x1EEFF0u;
    {
        const bool branch_taken_0x1eeff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEFF4u;
        WRITE8(ADD32(GPR_U32(ctx, 22), 13), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1eeff0) {
            ctx->pc = 0x1EF020u;
            goto label_1ef020;
        }
    }
    ctx->pc = 0x1EEFF8u;
label_1eeff8:
    // 0x1eeff8: 0x86a20002
    ctx->pc = 0x1eeff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1eeffc: 0x401027
    ctx->pc = 0x1eeffcu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1ef000: 0x10000007
    ctx->pc = 0x1EF000u;
    {
        const bool branch_taken_0x1ef000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF004u;
        WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1ef000) {
            ctx->pc = 0x1EF020u;
            goto label_1ef020;
        }
    }
    ctx->pc = 0x1EF008u;
    // 0x1ef008: 0xa6c00002
    ctx->pc = 0x1ef008u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 0));
label_1ef00c:
    // 0x1ef00c: 0x24020080
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ef010: 0xa2c2000a
    ctx->pc = 0x1ef010u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef014: 0xa2c2000b
    ctx->pc = 0x1ef014u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef018: 0xa2c2000c
    ctx->pc = 0x1ef018u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef01c: 0xa2c2000d
    ctx->pc = 0x1ef01cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 13), (uint8_t)GPR_U32(ctx, 2));
label_1ef020:
    // 0x1ef020: 0x92c30000
    ctx->pc = 0x1ef020u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ef024: 0x24020006
    ctx->pc = 0x1ef024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef028: 0x10620013
    ctx->pc = 0x1EF028u;
    {
        const bool branch_taken_0x1ef028 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EF02Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef028) {
            ctx->pc = 0x1EF078u;
            goto label_1ef078;
        }
    }
    ctx->pc = 0x1EF030u;
    // 0x1ef030: 0x24020004
    ctx->pc = 0x1ef030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef034: 0x10620003
    ctx->pc = 0x1EF034u;
    {
        const bool branch_taken_0x1ef034 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EF038u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef034) {
            ctx->pc = 0x1EF044u;
            goto label_1ef044;
        }
    }
    ctx->pc = 0x1EF03Cu;
    // 0x1ef03c: 0x24020007
    ctx->pc = 0x1ef03cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef040: 0x70009628
    ctx->pc = 0x1ef040u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ef044:
    // 0x1ef044: 0x72c09e28
    ctx->pc = 0x1ef044u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1ef048: 0x7000a628
    ctx->pc = 0x1ef048u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef04c: 0x0
    ctx->pc = 0x1ef04cu;
    // NOP
label_1ef050:
    // 0x1ef050: 0x9264000a
    ctx->pc = 0x1ef050u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ef054: 0xc07bd10
    ctx->pc = 0x1EF054u;
    SET_GPR_U32(ctx, 31, 0x1EF05Cu);
    ctx->pc = 0x1EF058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF440u;
    {
        const uint32_t __entryPc = ctx->pc;
        VolumeAD__Fsi_0x1ef440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF05Cu; }
        else if (ctx->pc != 0x1EF05Cu) { ctx->pc = 0x1EF05Cu; }
    }
    if (ctx->pc != 0x1EF05Cu) { return; }
    ctx->pc = 0x1EF05Cu;
    // 0x1ef05c: 0x2821004
    ctx->pc = 0x1ef05cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1ef060: 0x2228825
    ctx->pc = 0x1ef060u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ef064: 0x26520001
    ctx->pc = 0x1ef064u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ef068: 0x2a420004
    ctx->pc = 0x1ef068u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x1ef06c: 0x26730001
    ctx->pc = 0x1ef06cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ef070: 0x1440fff7
    ctx->pc = 0x1EF070u;
    {
        const bool branch_taken_0x1ef070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF074u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x1ef070) {
            ctx->pc = 0x1EF050u;
            goto label_1ef050;
        }
    }
    ctx->pc = 0x1EF078u;
label_1ef078:
    // 0x1ef078: 0x10000009
    ctx->pc = 0x1EF078u;
    {
        const bool branch_taken_0x1ef078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF07Cu;
        WRITE16(ADD32(GPR_U32(ctx, 22), 14), (uint16_t)GPR_U32(ctx, 17));
        if (branch_taken_0x1ef078) {
            ctx->pc = 0x1EF0A0u;
            goto label_1ef0a0;
        }
    }
    ctx->pc = 0x1EF080u;
label_1ef080:
    // 0x1ef080: 0xa2c00000
    ctx->pc = 0x1ef080u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef084: 0xa6c00002
    ctx->pc = 0x1ef084u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ef088: 0x24020080
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ef08c: 0xa2c2000a
    ctx->pc = 0x1ef08cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef090: 0xa2c2000b
    ctx->pc = 0x1ef090u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef094: 0xa2c2000c
    ctx->pc = 0x1ef094u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef098: 0xa2c2000d
    ctx->pc = 0x1ef098u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef09c: 0xa6c0000e
    ctx->pc = 0x1ef09cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 14), (uint16_t)GPR_U32(ctx, 0));
label_1ef0a0:
    // 0x1ef0a0: 0x3c010050
    ctx->pc = 0x1ef0a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ef0a4: 0xa420dd18
    ctx->pc = 0x1ef0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958360), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ef0a8: 0x96c20018
    ctx->pc = 0x1ef0a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1ef0ac: 0x72002628
    ctx->pc = 0x1ef0acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ef0b0: 0xc07bf78
    ctx->pc = 0x1EF0B0u;
    SET_GPR_U32(ctx, 31, 0x1EF0B8u);
    ctx->pc = 0x1EF0B4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1EFDE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice0__Fi_0x1efde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0B8u; }
        else if (ctx->pc != 0x1EF0B8u) { ctx->pc = 0x1EF0B8u; }
    }
    if (ctx->pc != 0x1EF0B8u) { return; }
    ctx->pc = 0x1EF0B8u;
    // 0x1ef0b8: 0xa6c20018
    ctx->pc = 0x1ef0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ef0bc: 0x26100001
    ctx->pc = 0x1ef0bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ef0c0: 0x2a020002
    ctx->pc = 0x1ef0c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1ef0c4: 0x26b50020
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 32));
    // 0x1ef0c8: 0x1440ff9e
    ctx->pc = 0x1EF0C8u;
    {
        const bool branch_taken_0x1ef0c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF0CCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 26));
        if (branch_taken_0x1ef0c8) {
            ctx->pc = 0x1EEF44u;
            goto label_1eef44;
        }
    }
    ctx->pc = 0x1EF0D0u;
label_1ef0d0:
    // 0x1ef0d0: 0x3c020050
    ctx->pc = 0x1ef0d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ef0d4: 0xc07bce0
    ctx->pc = 0x1EF0D4u;
    SET_GPR_U32(ctx, 31, 0x1EF0DCu);
    ctx->pc = 0x1EF0D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294958256));
    ctx->pc = 0x1EF380u;
    {
        const uint32_t __entryPc = ctx->pc;
        GenOnOff__FP6SWDATA_0x1ef380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0DCu; }
        else if (ctx->pc != 0x1EF0DCu) { ctx->pc = 0x1EF0DCu; }
    }
    if (ctx->pc != 0x1EF0DCu) { return; }
    ctx->pc = 0x1EF0DCu;
    // 0x1ef0dc: 0x7bbf0070
    ctx->pc = 0x1ef0dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef0e0: 0x7bb60060
    ctx->pc = 0x1ef0e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef0e4: 0x7bb50050
    ctx->pc = 0x1ef0e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef0e8: 0x7bb40040
    ctx->pc = 0x1ef0e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef0ec: 0x7bb30030
    ctx->pc = 0x1ef0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef0f0: 0x7bb20020
    ctx->pc = 0x1ef0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef0f4: 0x7bb10010
    ctx->pc = 0x1ef0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef0f8: 0x7bb00000
    ctx->pc = 0x1ef0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef0fc: 0x3e00008
    ctx->pc = 0x1EF0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF100u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EEF44u: goto label_1eef44;
            case 0x1EEF9Cu: goto label_1eef9c;
            case 0x1EEFD4u: goto label_1eefd4;
            case 0x1EEFF8u: goto label_1eeff8;
            case 0x1EF00Cu: goto label_1ef00c;
            case 0x1EF020u: goto label_1ef020;
            case 0x1EF044u: goto label_1ef044;
            case 0x1EF050u: goto label_1ef050;
            case 0x1EF078u: goto label_1ef078;
            case 0x1EF080u: goto label_1ef080;
            case 0x1EF0A0u: goto label_1ef0a0;
            case 0x1EF0D0u: goto label_1ef0d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF104u;
}
