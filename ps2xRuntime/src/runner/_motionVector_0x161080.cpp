#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _motionVector
// Address: 0x161080 - 0x1611bc
void _motionVector_0x161080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_motionVector");


    ctx->pc = 0x161080u;

    // 0x161080: 0x27bdff70
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x161084: 0xffb20020
    ctx->pc = 0x161084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161088: 0xffb70070
    ctx->pc = 0x161088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x16108c: 0x80902d
    ctx->pc = 0x16108cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161090: 0xffb60060
    ctx->pc = 0x161090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x161094: 0xa0b82d
    ctx->pc = 0x161094u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161098: 0xffb50050
    ctx->pc = 0x161098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16109c: 0x100b02d
    ctx->pc = 0x16109cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610a0: 0xffb40040
    ctx->pc = 0x1610a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1610a4: 0x120a82d
    ctx->pc = 0x1610a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610a8: 0xffb30030
    ctx->pc = 0x1610a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1610ac: 0x140a02d
    ctx->pc = 0x1610acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610b0: 0xffb00000
    ctx->pc = 0x1610b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1610b4: 0xe0982d
    ctx->pc = 0x1610b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610b8: 0xffb10010
    ctx->pc = 0x1610b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1610bc: 0xc0802d
    ctx->pc = 0x1610bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610c0: 0xffbf0080
    ctx->pc = 0x1610c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1610c4: 0xc0584d2
    ctx->pc = 0x1610C4u;
    SET_GPR_U32(ctx, 31, 0x1610CCu);
    ctx->pc = 0x1610C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x161348u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x161348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1610CCu; }
        else if (ctx->pc != 0x1610CCu) { ctx->pc = 0x1610CCu; }
    }
    if (ctx->pc != 0x1610CCu) { return; }
    ctx->pc = 0x1610CCu;
    // 0x1610cc: 0x12000007
    ctx->pc = 0x1610CCu;
    {
        const bool branch_taken_0x1610cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1610D0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1610cc) {
            ctx->pc = 0x1610ECu;
            goto label_1610ec;
        }
    }
    ctx->pc = 0x1610D4u;
    // 0x1610d4: 0x12200006
    ctx->pc = 0x1610D4u;
    {
        const bool branch_taken_0x1610d4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1610D8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1610d4) {
            ctx->pc = 0x1610F0u;
            goto label_1610f0;
        }
    }
    ctx->pc = 0x1610DCu;
    // 0x1610dc: 0xc0585d4
    ctx->pc = 0x1610DCu;
    SET_GPR_U32(ctx, 31, 0x1610E4u);
    ctx->pc = 0x1610E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1610E4u; }
        else if (ctx->pc != 0x1610E4u) { ctx->pc = 0x1610E4u; }
    }
    if (ctx->pc != 0x1610E4u) { return; }
    ctx->pc = 0x1610E4u;
    // 0x1610e4: 0x10000002
    ctx->pc = 0x1610E4u;
    {
        const bool branch_taken_0x1610e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1610E8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1610e4) {
            ctx->pc = 0x1610F0u;
            goto label_1610f0;
        }
    }
    ctx->pc = 0x1610ECu;
label_1610ec:
    // 0x1610ec: 0x382d
    ctx->pc = 0x1610ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1610f0:
    // 0x1610f0: 0x200282d
    ctx->pc = 0x1610f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610f4: 0x220302d
    ctx->pc = 0x1610f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610f8: 0x240202d
    ctx->pc = 0x1610f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610fc: 0xc05839e
    ctx->pc = 0x1610FCu;
    SET_GPR_U32(ctx, 31, 0x161104u);
    ctx->pc = 0x161100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x160e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161104u; }
        else if (ctx->pc != 0x161104u) { ctx->pc = 0x161104u; }
    }
    if (ctx->pc != 0x161104u) { return; }
    ctx->pc = 0x161104u;
    // 0x161104: 0x12c00004
    ctx->pc = 0x161104u;
    {
        const bool branch_taken_0x161104 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x161104) {
            ctx->pc = 0x161118u;
            goto label_161118;
        }
    }
    ctx->pc = 0x16110Cu;
    // 0x16110c: 0xc05805e
    ctx->pc = 0x16110Cu;
    SET_GPR_U32(ctx, 31, 0x161114u);
    ctx->pc = 0x160178u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x160178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161114u; }
        else if (ctx->pc != 0x161114u) { ctx->pc = 0x161114u; }
    }
    if (ctx->pc != 0x161114u) { return; }
    ctx->pc = 0x161114u;
    // 0x161114: 0xaee20000
    ctx->pc = 0x161114u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_161118:
    // 0x161118: 0xc0584d2
    ctx->pc = 0x161118u;
    SET_GPR_U32(ctx, 31, 0x161120u);
    ctx->pc = 0x16111Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x161348u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x161348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161120u; }
        else if (ctx->pc != 0x161120u) { ctx->pc = 0x161120u; }
    }
    if (ctx->pc != 0x161120u) { return; }
    ctx->pc = 0x161120u;
    // 0x161120: 0x12600007
    ctx->pc = 0x161120u;
    {
        const bool branch_taken_0x161120 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x161124u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161120) {
            ctx->pc = 0x161140u;
            goto label_161140;
        }
    }
    ctx->pc = 0x161128u;
    // 0x161128: 0x12200006
    ctx->pc = 0x161128u;
    {
        const bool branch_taken_0x161128 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x16112Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161128) {
            ctx->pc = 0x161144u;
            goto label_161144;
        }
    }
    ctx->pc = 0x161130u;
    // 0x161130: 0xc0585d4
    ctx->pc = 0x161130u;
    SET_GPR_U32(ctx, 31, 0x161138u);
    ctx->pc = 0x161134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161138u; }
        else if (ctx->pc != 0x161138u) { ctx->pc = 0x161138u; }
    }
    if (ctx->pc != 0x161138u) { return; }
    ctx->pc = 0x161138u;
    // 0x161138: 0x10000002
    ctx->pc = 0x161138u;
    {
        const bool branch_taken_0x161138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16113Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161138) {
            ctx->pc = 0x161144u;
            goto label_161144;
        }
    }
    ctx->pc = 0x161140u;
label_161140:
    // 0x161140: 0x382d
    ctx->pc = 0x161140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161144:
    // 0x161144: 0x12a00004
    ctx->pc = 0x161144u;
    {
        const bool branch_taken_0x161144 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x161148u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161144) {
            ctx->pc = 0x161158u;
            goto label_161158;
        }
    }
    ctx->pc = 0x16114Cu;
    // 0x16114c: 0x8e420004
    ctx->pc = 0x16114cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x161150: 0x21043
    ctx->pc = 0x161150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x161154: 0xae420004
    ctx->pc = 0x161154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_161158:
    // 0x161158: 0x220302d
    ctx->pc = 0x161158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16115c: 0x280402d
    ctx->pc = 0x16115cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161160: 0xc05839e
    ctx->pc = 0x161160u;
    SET_GPR_U32(ctx, 31, 0x161168u);
    ctx->pc = 0x161164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x160E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x160e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161168u; }
        else if (ctx->pc != 0x161168u) { ctx->pc = 0x161168u; }
    }
    if (ctx->pc != 0x161168u) { return; }
    ctx->pc = 0x161168u;
    // 0x161168: 0x12a00004
    ctx->pc = 0x161168u;
    {
        const bool branch_taken_0x161168 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x161168) {
            ctx->pc = 0x16117Cu;
            goto label_16117c;
        }
    }
    ctx->pc = 0x161170u;
    // 0x161170: 0x8e420004
    ctx->pc = 0x161170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x161174: 0x21040
    ctx->pc = 0x161174u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x161178: 0xae420004
    ctx->pc = 0x161178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_16117c:
    // 0x16117c: 0x12c00005
    ctx->pc = 0x16117Cu;
    {
        const bool branch_taken_0x16117c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x161180u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x16117c) {
            ctx->pc = 0x161194u;
            goto label_161194;
        }
    }
    ctx->pc = 0x161184u;
    // 0x161184: 0xc05805e
    ctx->pc = 0x161184u;
    SET_GPR_U32(ctx, 31, 0x16118Cu);
    ctx->pc = 0x160178u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x160178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16118Cu; }
        else if (ctx->pc != 0x16118Cu) { ctx->pc = 0x16118Cu; }
    }
    if (ctx->pc != 0x16118Cu) { return; }
    ctx->pc = 0x16118Cu;
    // 0x16118c: 0xaee20004
    ctx->pc = 0x16118cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x161190: 0xdfbf0080
    ctx->pc = 0x161190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_161194:
    // 0x161194: 0xdfb70070
    ctx->pc = 0x161194u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161198: 0xdfb60060
    ctx->pc = 0x161198u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16119c: 0xdfb50050
    ctx->pc = 0x16119cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1611a0: 0xdfb40040
    ctx->pc = 0x1611a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1611a4: 0xdfb30030
    ctx->pc = 0x1611a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1611a8: 0xdfb20020
    ctx->pc = 0x1611a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1611ac: 0xdfb10010
    ctx->pc = 0x1611acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1611b0: 0xdfb00000
    ctx->pc = 0x1611b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1611b4: 0x3e00008
    ctx->pc = 0x1611B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1611B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1610ECu: goto label_1610ec;
            case 0x1610F0u: goto label_1610f0;
            case 0x161118u: goto label_161118;
            case 0x161140u: goto label_161140;
            case 0x161144u: goto label_161144;
            case 0x161158u: goto label_161158;
            case 0x16117Cu: goto label_16117c;
            case 0x161194u: goto label_161194;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1611BCu;
}
