#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInsertTarget
// Address: 0x29ae98 - 0x29afcc
void CritterInsertTarget_0x29ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ae98u;

    // 0x29ae98: 0x80482d
    ctx->pc = 0x29ae98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae9c: 0xc4a1000c
    ctx->pc = 0x29ae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aea0: 0x95220136
    ctx->pc = 0x29aea0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
    // 0x29aea4: 0x40182d
    ctx->pc = 0x29aea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aea8: 0x21400
    ctx->pc = 0x29aea8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x29aeac: 0x1840002e
    ctx->pc = 0x29AEACu;
    {
        const bool branch_taken_0x29aeac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29AEB0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29aeac) {
            ctx->pc = 0x29AF68u;
            goto label_29af68;
        }
    }
    ctx->pc = 0x29AEB4u;
    // 0x29aeb4: 0x24040030
    ctx->pc = 0x29aeb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    // 0x29aeb8: 0xe43018
    ctx->pc = 0x29aeb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29aebc: 0x0
    ctx->pc = 0x29aebcu;
    // NOP
label_29aec0:
    // 0x29aec0: 0xc91021
    ctx->pc = 0x29aec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x29aec4: 0xc440014c
    ctx->pc = 0x29aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aec8: 0x46000834
    ctx->pc = 0x29aec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aecc: 0x0
    ctx->pc = 0x29aeccu;
    // NOP
    // 0x29aed0: 0x4500001f
    ctx->pc = 0x29AED0u;
    {
        const bool branch_taken_0x29aed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AED4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x29aed0) {
            ctx->pc = 0x29AF50u;
            goto label_29af50;
        }
    }
    ctx->pc = 0x29AED8u;
    // 0x29aed8: 0x23403
    ctx->pc = 0x29aed8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x29aedc: 0xe6102a
    ctx->pc = 0x29aedcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x29aee0: 0x10400021
    ctx->pc = 0x29AEE0u;
    {
        const bool branch_taken_0x29aee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AEE4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x29aee0) {
            ctx->pc = 0x29AF68u;
            goto label_29af68;
        }
    }
    ctx->pc = 0x29AEE8u;
    // 0x29aee8: 0x28c20004
    ctx->pc = 0x29aee8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x29aeec: 0x0
    ctx->pc = 0x29aeecu;
    // NOP
label_29aef0:
    // 0x29aef0: 0x10400011
    ctx->pc = 0x29AEF0u;
    {
        const bool branch_taken_0x29aef0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AEF4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29aef0) {
            ctx->pc = 0x29AF38u;
            goto label_29af38;
        }
    }
    ctx->pc = 0x29AEF8u;
    // 0x29aef8: 0x492021
    ctx->pc = 0x29aef8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29aefc: 0x24c3ffff
    ctx->pc = 0x29aefcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29af00: 0x681018
    ctx->pc = 0x29af00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29af04: 0x491821
    ctx->pc = 0x29af04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29af08: 0xdc620140
    ctx->pc = 0x29af08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x29af0c: 0xfc820140
    ctx->pc = 0x29af0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 320), GPR_U64(ctx, 2));
    // 0x29af10: 0xdc620148
    ctx->pc = 0x29af10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x29af14: 0xfc820148
    ctx->pc = 0x29af14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 328), GPR_U64(ctx, 2));
    // 0x29af18: 0xdc620150
    ctx->pc = 0x29af18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x29af1c: 0xfc820150
    ctx->pc = 0x29af1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 2));
    // 0x29af20: 0xdc620158
    ctx->pc = 0x29af20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x29af24: 0xfc820158
    ctx->pc = 0x29af24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 344), GPR_U64(ctx, 2));
    // 0x29af28: 0xdc620160
    ctx->pc = 0x29af28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x29af2c: 0xfc820160
    ctx->pc = 0x29af2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 352), GPR_U64(ctx, 2));
    // 0x29af30: 0xdc620168
    ctx->pc = 0x29af30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x29af34: 0xfc820168
    ctx->pc = 0x29af34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 360), GPR_U64(ctx, 2));
label_29af38:
    // 0x29af38: 0x24c6ffff
    ctx->pc = 0x29af38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29af3c: 0xe6102a
    ctx->pc = 0x29af3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x29af40: 0x1440ffeb
    ctx->pc = 0x29AF40u;
    {
        const bool branch_taken_0x29af40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29AF44u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
        if (branch_taken_0x29af40) {
            ctx->pc = 0x29AEF0u;
            goto label_29aef0;
        }
    }
    ctx->pc = 0x29AF48u;
    // 0x29af48: 0x10000008
    ctx->pc = 0x29AF48u;
    {
        const bool branch_taken_0x29af48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AF4Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
        if (branch_taken_0x29af48) {
            ctx->pc = 0x29AF6Cu;
            goto label_29af6c;
        }
    }
    ctx->pc = 0x29AF50u;
label_29af50:
    // 0x29af50: 0x24e70001
    ctx->pc = 0x29af50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x29af54: 0x85220136
    ctx->pc = 0x29af54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
    // 0x29af58: 0x40182d
    ctx->pc = 0x29af58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af5c: 0xe2102a
    ctx->pc = 0x29af5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x29af60: 0x1440ffd7
    ctx->pc = 0x29AF60u;
    {
        const bool branch_taken_0x29af60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29AF64u;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29af60) {
            ctx->pc = 0x29AEC0u;
            goto label_29aec0;
        }
    }
    ctx->pc = 0x29AF68u;
label_29af68:
    // 0x29af68: 0x95230136
    ctx->pc = 0x29af68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
label_29af6c:
    // 0x29af6c: 0x85220136
    ctx->pc = 0x29af6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
    // 0x29af70: 0x28420004
    ctx->pc = 0x29af70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x29af74: 0x10400002
    ctx->pc = 0x29AF74u;
    {
        const bool branch_taken_0x29af74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AF78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x29af74) {
            ctx->pc = 0x29AF80u;
            goto label_29af80;
        }
    }
    ctx->pc = 0x29AF7Cu;
    // 0x29af7c: 0xa5220136
    ctx->pc = 0x29af7cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 310), (uint16_t)GPR_U32(ctx, 2));
label_29af80:
    // 0x29af80: 0x28e20004
    ctx->pc = 0x29af80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 4));
    // 0x29af84: 0x1040000f
    ctx->pc = 0x29AF84u;
    {
        const bool branch_taken_0x29af84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AF88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x29af84) {
            ctx->pc = 0x29AFC4u;
            goto label_29afc4;
        }
    }
    ctx->pc = 0x29AF8Cu;
    // 0x29af8c: 0xe21818
    ctx->pc = 0x29af8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29af90: 0x691021
    ctx->pc = 0x29af90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29af94: 0xdca30000
    ctx->pc = 0x29af94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29af98: 0xfc430140
    ctx->pc = 0x29af98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 320), GPR_U64(ctx, 3));
    // 0x29af9c: 0xdca30008
    ctx->pc = 0x29af9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29afa0: 0xfc430148
    ctx->pc = 0x29afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 328), GPR_U64(ctx, 3));
    // 0x29afa4: 0xdca30010
    ctx->pc = 0x29afa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x29afa8: 0xfc430150
    ctx->pc = 0x29afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 336), GPR_U64(ctx, 3));
    // 0x29afac: 0xdca30018
    ctx->pc = 0x29afacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x29afb0: 0xfc430158
    ctx->pc = 0x29afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 344), GPR_U64(ctx, 3));
    // 0x29afb4: 0xdca30020
    ctx->pc = 0x29afb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x29afb8: 0xfc430160
    ctx->pc = 0x29afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 352), GPR_U64(ctx, 3));
    // 0x29afbc: 0xdca30028
    ctx->pc = 0x29afbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x29afc0: 0xfc430168
    ctx->pc = 0x29afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 360), GPR_U64(ctx, 3));
label_29afc4:
    // 0x29afc4: 0x3e00008
    ctx->pc = 0x29AFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AEC0u: goto label_29aec0;
            case 0x29AEF0u: goto label_29aef0;
            case 0x29AF38u: goto label_29af38;
            case 0x29AF50u: goto label_29af50;
            case 0x29AF68u: goto label_29af68;
            case 0x29AF6Cu: goto label_29af6c;
            case 0x29AF80u: goto label_29af80;
            case 0x29AFC4u: goto label_29afc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AFCCu;
}
