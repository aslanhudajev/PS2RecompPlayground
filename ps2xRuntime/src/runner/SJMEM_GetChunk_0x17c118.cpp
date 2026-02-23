#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_GetChunk
// Address: 0x17c118 - 0x17c1d0
void SJMEM_GetChunk_0x17c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_GetChunk");


    ctx->pc = 0x17c118u;

label_17c118:
    // 0x17c118: 0x27bdffb0
    ctx->pc = 0x17c118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_17c11c:
    // 0x17c11c: 0xffb30030
    ctx->pc = 0x17c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17c120:
    // 0x17c120: 0xffb20020
    ctx->pc = 0x17c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17c124:
    // 0x17c124: 0xc0982d
    ctx->pc = 0x17c124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c128:
    // 0x17c128: 0xffb10010
    ctx->pc = 0x17c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17c12c:
    // 0x17c12c: 0xa0902d
    ctx->pc = 0x17c12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c130:
    // 0x17c130: 0xffb00000
    ctx->pc = 0x17c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c134:
    // 0x17c134: 0x80882d
    ctx->pc = 0x17c134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c138:
    // 0x17c138: 0xffbf0040
    ctx->pc = 0x17c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17c13c:
    // 0x17c13c: 0xc05efbc
label_17c140:
    if (ctx->pc == 0x17C140u) {
        ctx->pc = 0x17C140u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C144u;
        goto label_17c144;
    }
    ctx->pc = 0x17C13Cu;
    SET_GPR_U32(ctx, 31, 0x17C144u);
    ctx->pc = 0x17C140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C144u; }
        else if (ctx->pc != 0x17C144u) { ctx->pc = 0x17C144u; }
    }
    if (ctx->pc != 0x17C144u) { return; }
    ctx->pc = 0x17C144u;
label_17c144:
    // 0x17c144: 0x16400004
label_17c148:
    if (ctx->pc == 0x17C148u) {
        ctx->pc = 0x17C148u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17C14Cu;
        goto label_17c14c;
    }
    ctx->pc = 0x17C144u;
    {
        const bool branch_taken_0x17c144 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C148u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17c144) {
            ctx->pc = 0x17C158u;
            goto label_17c158;
        }
    }
    ctx->pc = 0x17C14Cu;
label_17c14c:
    // 0x17c14c: 0xae000000
    ctx->pc = 0x17c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17c150:
    // 0x17c150: 0x10000018
label_17c154:
    if (ctx->pc == 0x17C154u) {
        ctx->pc = 0x17C154u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17C158u;
        goto label_17c158;
    }
    ctx->pc = 0x17C150u;
    {
        const bool branch_taken_0x17c150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C154u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17c150) {
            ctx->pc = 0x17C1B4u;
            goto label_17c1b4;
        }
    }
    ctx->pc = 0x17C158u;
label_17c158:
    // 0x17c158: 0x56420010
label_17c15c:
    if (ctx->pc == 0x17C15Cu) {
        ctx->pc = 0x17C15Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x17C160u;
        goto label_17c160;
    }
    ctx->pc = 0x17C158u;
    {
        const bool branch_taken_0x17c158 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x17c158) {
            ctx->pc = 0x17C15Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x17C19Cu;
            goto label_17c19c;
        }
    }
    ctx->pc = 0x17C160u;
label_17c160:
    // 0x17c160: 0x8e22000c
    ctx->pc = 0x17c160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17c164:
    // 0x17c164: 0x8e250014
    ctx->pc = 0x17c164u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_17c168:
    // 0x17c168: 0x53182a
    ctx->pc = 0x17c168u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_17c16c:
    // 0x17c16c: 0x263100a
    ctx->pc = 0x17c16cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
label_17c170:
    // 0x17c170: 0xae020004
    ctx->pc = 0x17c170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17c174:
    // 0x17c174: 0x8e240010
    ctx->pc = 0x17c174u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_17c178:
    // 0x17c178: 0x8e23000c
    ctx->pc = 0x17c178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17c17c:
    // 0x17c17c: 0x821021
    ctx->pc = 0x17c17cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17c180:
    // 0x17c180: 0xa42821
    ctx->pc = 0x17c180u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_17c184:
    // 0x17c184: 0xae220010
    ctx->pc = 0x17c184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_17c188:
    // 0x17c188: 0xae050000
    ctx->pc = 0x17c188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_17c18c:
    // 0x17c18c: 0x8e020004
    ctx->pc = 0x17c18cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c190:
    // 0x17c190: 0x621823
    ctx->pc = 0x17c190u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17c194:
    // 0x17c194: 0x10000007
label_17c198:
    if (ctx->pc == 0x17C198u) {
        ctx->pc = 0x17C198u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x17C19Cu;
        goto label_17c19c;
    }
    ctx->pc = 0x17C194u;
    {
        const bool branch_taken_0x17c194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C198u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x17c194) {
            ctx->pc = 0x17C1B4u;
            goto label_17c1b4;
        }
    }
    ctx->pc = 0x17C19Cu;
label_17c19c:
    // 0x17c19c: 0xae000000
    ctx->pc = 0x17c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17c1a0:
    // 0x17c1a0: 0x10400004
label_17c1a4:
    if (ctx->pc == 0x17C1A4u) {
        ctx->pc = 0x17C1A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17C1A8u;
        goto label_17c1a8;
    }
    ctx->pc = 0x17C1A0u;
    {
        const bool branch_taken_0x17c1a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C1A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17c1a0) {
            ctx->pc = 0x17C1B4u;
            goto label_17c1b4;
        }
    }
    ctx->pc = 0x17C1A8u;
label_17c1a8:
    // 0x17c1a8: 0x8e240020
    ctx->pc = 0x17c1a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_17c1ac:
    // 0x17c1ac: 0x40f809
label_17c1b0:
    if (ctx->pc == 0x17C1B0u) {
        ctx->pc = 0x17C1B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C1B4u;
        goto label_17c1b4;
    }
    ctx->pc = 0x17C1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C1B4u);
        ctx->pc = 0x17C1B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C118u: goto label_17c118;
            case 0x17C11Cu: goto label_17c11c;
            case 0x17C120u: goto label_17c120;
            case 0x17C124u: goto label_17c124;
            case 0x17C128u: goto label_17c128;
            case 0x17C12Cu: goto label_17c12c;
            case 0x17C130u: goto label_17c130;
            case 0x17C134u: goto label_17c134;
            case 0x17C138u: goto label_17c138;
            case 0x17C13Cu: goto label_17c13c;
            case 0x17C140u: goto label_17c140;
            case 0x17C144u: goto label_17c144;
            case 0x17C148u: goto label_17c148;
            case 0x17C14Cu: goto label_17c14c;
            case 0x17C150u: goto label_17c150;
            case 0x17C154u: goto label_17c154;
            case 0x17C158u: goto label_17c158;
            case 0x17C15Cu: goto label_17c15c;
            case 0x17C160u: goto label_17c160;
            case 0x17C164u: goto label_17c164;
            case 0x17C168u: goto label_17c168;
            case 0x17C16Cu: goto label_17c16c;
            case 0x17C170u: goto label_17c170;
            case 0x17C174u: goto label_17c174;
            case 0x17C178u: goto label_17c178;
            case 0x17C17Cu: goto label_17c17c;
            case 0x17C180u: goto label_17c180;
            case 0x17C184u: goto label_17c184;
            case 0x17C188u: goto label_17c188;
            case 0x17C18Cu: goto label_17c18c;
            case 0x17C190u: goto label_17c190;
            case 0x17C194u: goto label_17c194;
            case 0x17C198u: goto label_17c198;
            case 0x17C19Cu: goto label_17c19c;
            case 0x17C1A0u: goto label_17c1a0;
            case 0x17C1A4u: goto label_17c1a4;
            case 0x17C1A8u: goto label_17c1a8;
            case 0x17C1ACu: goto label_17c1ac;
            case 0x17C1B0u: goto label_17c1b0;
            case 0x17C1B4u: goto label_17c1b4;
            case 0x17C1B8u: goto label_17c1b8;
            case 0x17C1BCu: goto label_17c1bc;
            case 0x17C1C0u: goto label_17c1c0;
            case 0x17C1C4u: goto label_17c1c4;
            case 0x17C1C8u: goto label_17c1c8;
            case 0x17C1CCu: goto label_17c1cc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C1B4u; }
            if (ctx->pc != 0x17C1B4u) { return; }
        }
    }
    ctx->pc = 0x17C1B4u;
label_17c1b4:
    // 0x17c1b4: 0xdfbf0040
    ctx->pc = 0x17c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c1b8:
    // 0x17c1b8: 0xdfb30030
    ctx->pc = 0x17c1b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c1bc:
    // 0x17c1bc: 0xdfb20020
    ctx->pc = 0x17c1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c1c0:
    // 0x17c1c0: 0xdfb10010
    ctx->pc = 0x17c1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c1c4:
    // 0x17c1c4: 0xdfb00000
    ctx->pc = 0x17c1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c1c8:
    // 0x17c1c8: 0x805efc2
label_17c1cc:
    if (ctx->pc == 0x17C1CCu) {
        ctx->pc = 0x17C1CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x17C1D0u;
        goto label_fallthrough_0x17c1c8;
    }
    ctx->pc = 0x17C1C8u;
    ctx->pc = 0x17C1CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
label_fallthrough_0x17c1c8:
    ctx->pc = 0x17C1D0u;
}
